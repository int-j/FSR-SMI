#include<stdio.h>
main()
{int N,i ;
for(N=2 ; N<=255 ; N++)
{ i=2 ;
while (N%i!=0 && i<N )
i++ ;
} 
printf("les entiers naturels premier N entre 1 et 255 sont %d\n",N); 
system("pause") ; 
}
