/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "string.h"
typedef struct stu1{
 char name1[6];
 char name2[6];
 double marks;
}STU1;
void main(){
STU1 s1={"rohit","kumar",87.43},*p1;
char *p;
p1=&s1;
p=memchr(p1,'u',sizeof(STU1));
printf("%s",p);
}
