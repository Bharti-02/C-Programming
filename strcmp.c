#include<stdio.h>
#include<string.h>


int main(){
    char a[100],b[100];
    printf("Enter first string ");
    gets(a);
    printf("Enter second  string ");
    gets(b);
    strcmp(a,b);
    if(strcmp(a,b)==0)
        printf("\n equal string");

    else if(strcmp(a,b)>0)
        printf("First string is greatest");
        else
        ("unequal ");

        

       


    
    return 0;
}