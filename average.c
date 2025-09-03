#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, sum ,average;
    printf("Enter three Numbers\n");
    scanf("%f %f %f",&a, &b, &c);

    sum =a + b + c ;
    average = (sum/3.0);
    printf("the average of three number is %f\n",average);

    return 0;
}