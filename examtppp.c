#include<stdio.h>
main ()
{ int x=1 ; 
switch (x*=2) 
{case 1 : printf("1;"); break ; 
case 2  : printf("2;"); 
case 3  : printf("3;"); 
default  : printf("9;"); }
system("pause");
} 
