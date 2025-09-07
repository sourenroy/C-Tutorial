#include<stdio.h>

void main(){
    int a,b,c;
  
      printf("enter 3 number");
      scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
      {
      printf("THE GREATER NUM IS%d",a);
      }
    else if(b>c&&b>a)
      {
      printf("THE GREATER NUM IS%d",b);
      }
    else
      {
      printf("THE GREATER NUM IS%d",c);
      }
}
