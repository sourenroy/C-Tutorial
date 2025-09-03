#include<stdio.h>
void main(){
    int n;
        printf("enter the year");
        scanf("%d",&n);
    if (n%400 ==0)
    {
        printf("THIS IS A LEAPYEAR%d",n);
    }
    else if(n%100==0)
    {
        printf("THIS IS A NOT LEAPYEAR%d",n);
    }
    else if(n%4==0)
    {
        printf("THIS IS A LEAPYEAR%d",n);
    }
    else 
    {
        printf("THIS IS not A LEAPYEAR%d",n);
    }
 }
