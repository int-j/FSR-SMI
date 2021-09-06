#include <stdio.h>
#include <stdlib.h>
int main()
{
int A[50][50], B[51][51];
int i,j,m,n,s;
printf("entrez m\n");
scanf("%d",&m);
printf("entrez n\n");
scanf("%d",&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{printf("entrez A[%d][%d]\n",i,j);
     scanf("%d",&A[i][j]);
     }  
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{printf("%d\t",A[i][j]);
printf("\n");}


for(i=0;i<=m;i++)
for(j=0;j<=n;j++)
B[i][j]=A[i][j];
for (i=0;i<m;i++)
{s=0;
for(j=0;j<n;j++)
s+=B[i][j];
if(s%2==0) B[i][n]=0;
else B[i][n]=1;
}
for (j=0;j<=n;j++)
{s=0;
for(i=0;i<m;i++)
s+=B[i][j];
if (s%2==0) B[m][j]=0;
else B[m][j]=1;
}
for(i=0;i<=m;i++)
for(j=0;j<=n;j++)
printf("%d\t",B[i][j]);
 printf("\n");
system("pause");
}



