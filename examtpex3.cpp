#include<stdio.h>
main()
{ int A[10][10], T[10] ;
int i , j , n ; 
do { printf("entrez n\n");
     scanf("%d",&n);
     } while(n<=0 || n>10 )
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{ printf("enrez A[%d][%d]\n",i,j);
 scanf("%d",&A[i][j]);
}

for(i=0;i<n;i++)
T[0]=A[i][0] ;

for(j=1;j<n;j++)
{ if(A[i][j]%3=0)
   T[i]=1 ;
   else T[i]=0 ;
}
printf("%d", T[i]) ;
system("pause") ;
}
