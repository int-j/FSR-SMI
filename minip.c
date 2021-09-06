#include<stdio.h> 
 main () 
{ 
int n ,i; 
int som , c;

for(n=2 ; n<=255 ; n++)
{
som = 0 ;
 for(i=1 ; i<=125 ; i++)
 {
   c = n%i ; 

if (c == 0 )
 som =som+i ;
}
if(n=som){
printf(" les nbre premiers sont %d\n",n); }
}
system("pause");
}
