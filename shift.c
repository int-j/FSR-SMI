#include <stdio.h>
#include <stdlib.h>
main()
{
int A[20][30]; 
int i,j,m,n,temp;
do {printf("entrez n\n");
     scanf("%d",&n);}while(n<=0 || n>20);
do {printf("entrez m\n");
     scanf("%d",&m);}while(m<=0 || m>30);
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{printf("entrez A[%d][%d]\n",i,j);
     scanf("%d",&A[i][j]);
     }  

for(i=0;i<(n/2);i++)
for(j=0;j<m;j++)
 {temp=A[i][j];
  A[i][j]=A[n-i-1][j];
  A[n-i-1][j]=temp;}
 
for(i=0;i<n;i++)
 {for(j=0;j<m;j++)
 printf ("%d\t",A[i][j]);
 printf("\n");}
 
 system("pause");
}
