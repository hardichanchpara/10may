#include<stdio.h>
#include<conio.h>

void main()
{
   int i=1,n,mul;
   clrscr();
   printf("enter number:");
   scanf("%d",&n);
   while(i<=n,i<=10)
   {
    mul=n*i;
    printf("%d*%d=%d\n",n,i,n*i);
    i++;
   }
   getch();
}

