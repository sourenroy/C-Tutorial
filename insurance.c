#include<stdio.h>

void main(){
int age;
char g,ms,f,m,u;
     printf("\nenter the age");
     scanf("%d",&age);
     printf("\nenter the gender");
     scanf("%c",&g);
     printf("\nenter maritial status");
     scanf("%c",&ms);
if (ms=='m')
     {
     printf("eligble for insurance");
     }
else if (ms=='u'&& g=='f' && age>30)
     {
     printf("eligble for insurance");
     }
else if (ms=='u' && g=='f'&&age>25)
     {
     printf("eligble for insurance");
     }
else
     {
     printf("NOT eligble for insurance");
     }
}
