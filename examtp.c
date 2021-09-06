#include<stdio.h>
main()
{int s , n ;
printf("entrez n\n");
scanf("%d", &n); 

s=0 ; 
while(n!=0) 
{ s+=n%10 ;
printf("%d\t",n%10);  
  n=n/10 ; 
 }  
 
system("pause"); 
} 

