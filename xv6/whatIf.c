//#include<stdio.h>
//#include<unistd.h>
//#include<stdlib.h>

#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
     //see if this
    char *str;      //the string that takes in input from user or a file
    if (argc == 1) {        //no arguments
    scanf("%s",str);    //read in user input from STDIN
        if(fork() == 0) {
        //this is child
        chld = fopen("child.txt","w");
        
        }
        else {
        //this is parent
        prnt = fopen("parent.txt","w");
        }
    else if(argc == 2) {
        if(fork() == 0) {
        //this is child
        }
        else {
        //this is parent
        }
        
    }
}
