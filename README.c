# dd
#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
 clrscr();
 printf("enter the number:");
 scanf("%d",&num);
 if(num>0)
  {
    printf("positive number");
     if(num==0)
       printf("number is zero");
       
  }
  else 
  printf("negative number");
  getch();
 return 0;
}
