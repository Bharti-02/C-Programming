#include<stdio.h>
#include<string.h>

int main(){
    char s1[100];

    char s2[100]="ram";
    strcpy(s1,s2);
    printf("string s1 is %s",s1);
    return 0;
}