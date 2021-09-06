#include<stdio.h>
#include<stdlib.h>
main()
{float x,u,sin;
int n,k ;
printf("entrez x et n \n");
scanf("%f%d",&x,&n ) ;
sin=u=x ;
for(k=1 ; k<=n ; k++ )
{u*=-(x*x)/((2*k)*(2*k+1)) ;
sin+=u ;
}
printf("sin(%f)=%f\n", x,sin ) ;
system("pause");
}
