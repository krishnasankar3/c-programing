#include<stdio.h>
#include<conio.h>
int main()
{
 int a[1000],i,n,c=0;
 printf("Enter size of the array:");
 scanf("%d",&n);
 printf("Enter elements in array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   if(a[i]<0)
   c++;
   }
   printf("Count of negative numbers:%d",c);
   return 0;
 }