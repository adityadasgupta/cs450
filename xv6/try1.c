// test case part 1 for alsonice
// LONG RUNNING PROC which uses alsonice to extend time slice
#include "types.h"
#include "user.h"
#include "fcntl.h"


int main(int argc, char *argv[]) {
    //long long fact = 1;
    alsonice(500);
    int flag = 1;
    int start = uptime();
    int end;
    while(flag) {
        end = uptime();
        if((end-start) == 300) {
            
            flag = 0;
        }
    }
    printf(1,"Breaking try1\n");
    exit();
}
