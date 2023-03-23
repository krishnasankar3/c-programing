/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
main()
{
int c[]={2,8,3,4,4,6.7,5};
int j,*p=c,*q=c;
for(j=0;j<5;j++)
{
printf("%d",*c);
++q;
}
for(j=0;j<5;j++)
{
printf("%d",*p);
++p;
}
}