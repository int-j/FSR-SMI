//BY: SMIA STUDIES --->FB: www.facebook.com/SMIA.STUDIES

#include <math.h>
#include <stdio.h>
main()
{float A,U,D,eps;
printf("entrez une valeur pour A\n");
scanf("%f",&A);
printf("entrez une valeur pour eps\n");
scanf("%f",&eps);
printf("u(0)=%f\n",A);
	U=A;
do{    D=U; 
	   U=(D+(A/D))/2; 
	   printf("U=%f\n",U);                      
      }while(fabs((U-D)/D)>eps);
}
