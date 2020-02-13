#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
    int fd = 0;
    if(argc == 2) {     //checks for arguments for whatif
        fd = open(argv[1],O_RDONLY);    //use test.txt as test
        }

    int chld = 0, prnt = 0;
    int n;

    chld= open("child.txt", O_CREATE|O_WRONLY);     //create and write
    prnt = open("parent.txt", O_CREATE|O_WRONLY);
    while(1) {
        char buf[512];
        n = read(fd, buf, sizeof buf);
        if(n==0) 
            break;    //handles ctl+d i guess
        if(fork() == 0) {
            write(chld, buf, strlen(buf));      //writes to child.txt
        }
        else {
          write(prnt, buf, strlen(buf));    //writes to parent.txt
          wait();                           //waits for child process to finish before going to next line
        }

    }
    exit();
}
