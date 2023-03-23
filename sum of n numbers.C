#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i,sum=0;
 printf("Enter a positive numbers:");
 scanf("%d",&num);
 for(i=0;i<=num;i++)
 {
  sum=sum+1;
  }
  printf("\n sum of the first %d number is:%d",num,sum);
  getch();
 }