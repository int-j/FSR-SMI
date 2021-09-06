#include<stdio.h>
#include<stdlib.h>
main()
{int i,j,n,ne,temp,T[50] ;
do { printf("entrez n\n");
scanf("%d",&n);
}while (n<0 || n>50);
for(i=0;i<n;i++)
{
printf("entrez T[%d]\n",i);
scanf("%d",&T[i]);
}
for(i=0;i<n;i++)
printf("%d\t",&T[i]);
ne=n;
i=0;
while(i<ne)
{if (T[i]==0)
{
    for(j=i;j<ne-1;j++)
    T[j]=T[j+1];
     ne--;
}
else i++;
}
for(i=0;i<ne;i++)
printf("%d\t",T[i]);

system("pause");
}
