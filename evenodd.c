//find the Even / Odd num
    //even --> 1 //odd -->0


#include<stdio.h>
#include<math.h>

int main(){

    int x;
      printf("Enter the Num : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0 );

    return 0;
}