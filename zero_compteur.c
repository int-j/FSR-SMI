#include<stdio.h>
#include<stdlib.h>
int main()
{int n,A[50],*pt1,*pt2 ;
 do{ printf("entrez n\n");
scanf("%d",&n);
}while (n<0 || n>50);

for(pt1=A;pt1<A+n;pt1++)
{printf("element %d : ", pt1-A);
scanf("%d",pt1);
}

for(pt1=pt2=A; pt1<A+n;pt1++)
{*pt2 = *pt1;
pt1=0;
if (*pt2 == 0)
{for(pt2=pt1;pt2<A+n-1;pt2++)
{
*pt2 = *(pt2+1);
}
n--;
}
else 
pt1++;
}
for(pt1=A;pt1<A+n;pt1++)
printf("A[%d]=%d\n",pt1-A,*pt1);

system("pause");
}



