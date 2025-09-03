#include<stdio.h>
void main(){
int n,year;
    printf("enter the year");
     scanf("%d",&year);
 if ((year%400 ==0)||(year%4==0&&year%100!=0))
 {
    printf("THIS IS A LEAPYEAR%d",year);
 }
 else
 {
     printf("THIS IS not A LEAPYEAR%d",year);
 }
 }
