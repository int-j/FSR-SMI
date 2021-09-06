#include<stdio.h> 
 main () 
{ 
int nbr ,i,p; 
 
printf("Veuillez entrer un nombre entier:"); 
scanf("%d",&nbr); 
 
p=2;
for(i=1 ; i<=nbr/2 ; i++)
{ 
if(nbr%i==0)
p++ ;
 
}
printf("Les nombres premiers sont:%d\t",p);
system("pause") ;
} 
