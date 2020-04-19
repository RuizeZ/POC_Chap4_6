/*
RuizeZ
4/18/2020
"Pointer on C" Chapter 4 exercises 6
Write a function that extracts a substring from a string. The function should have
the following prototype:
int substr( char dst[], char src[], int start,
int len )
It should copy the string that begins start characters past the beginning of the
string in src into the array dst. At most len nonȬNUL characters should be copied
from src. After copying, dst must be NULȬterminated. The function should return
the length of the string stored in dst.
If start specifies a position beyond the end of the string in src, or either start
or len are negative, then dsc should be given the empty string.
*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int substr(char dst[], char sre[], int start, int len);
int main(void){
    char sre[MAX_LEN], dst[MAX_LEN];
    int strlength, start;
    printf("Enter the String: ");
    fgets(sre,MAX_LEN,stdin);
    printf("How many charactors do you want to pass: ");
    scanf("%d",&start);
    strlength = substr(dst, sre, start, (strlen(sre)-1));
    printf("length of the new string: %d\n",strlength);
}

int substr(char dst[], char sre[], int start, int len){
    if (start>=len || start<0 || len<0){
        dst = "";
        return strlen(dst);
    }
    else{
        dst = &sre[start];
        return strlen(dst);;
    }
}