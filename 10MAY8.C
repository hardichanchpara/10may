#include<stdio.h>
#include<conio.h>

void main()
{
   int a=1,n,sum=0;
   clrscr();
   printf("enter number:");
   scanf("%d",&n);
   while(a<=n)
   {
   sum=sum*a;
    if(a*n==0)
    {
     printf("%d",a);
    }
    a++;
   }
   printf("sum=%d",sum);
   getch();
}

