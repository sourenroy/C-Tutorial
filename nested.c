#include<stdio.h>
void main(){
int a,b,c;
    printf("ENTER 3 NUMBERS");
    scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c){
    printf("greatest num is %d",a);
}
else{
    printf("greatest num is %d",c);
}
}
else
{
if(b>c){
    printf("greates num is %d",b);
}
else
{
    printf("greatest num is %d",c);
}
}
}
