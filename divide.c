#include<stdio.h>

void main()
{
  int n;
          printf("enter number");
          scanf("%d",&n);
  if(n%5==0 && n%11==0)
    {
          printf("number is divisable by both 5 and 11%d",n);
    }
  else if (n%5==0){
          printf("number is divisable by 5 %d",n);
    }
  else if(n%11==0)
    {
          printf("number is divisable by 11 %d",n);
    }
  else{
          printf("nuber is not divisable by 5 and 11");
    }
}
