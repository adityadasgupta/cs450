#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argv, char *argc[]) {
    int str1 = 1;
    int *str2 = malloc(sizeof(int));
    *str2 = str1;
    printf("%d",str1);
    free(str2);
}
