/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
float avg(float,float,float);
void main()
{
float p=1,q=2,r=-2,a;
a=avg(p,(q=4,r=-12,q),r);
printf("%f",a);
}
float avg(float x,float y,float z)
{
return (x+y+z)/3;
}