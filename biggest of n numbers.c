/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
int maximum(int a[],int n);
int max,i,n;
int a[50];
printf("Enter n number:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=maximum(a,n);
printf("The largest number is %d",max);
}
int maximum(int a[],int n)
{
int i,m=0;
for(i=0;i<n;i++)
{
if(a[i]>m)
m=a[i];
}
return m;
}
