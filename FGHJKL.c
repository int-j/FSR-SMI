#include<stdio.h> 
 main () 
{ 
int nbr ,i; 
int m ; 
printf("Veuillez entrer un nombre entier:"); 
scanf("%d",&nbr); 
printf("Les nombres premiers sont:\t"); 
while(nbr>=2){
for(i=1 ; i<=nbr ; i++)
{ 
if(nbr%i==0)
 m++;
} 
if(m==2)
{ 
printf("%d\n",nbr,"Ce nombre est premier."); 
}
m=0; 
nbr--; 
}
system("pause") ;
} 
