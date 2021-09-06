#include<stdio.h>
#include<stdlib.h>
main()

{int i,n, D,Av , Nv ;
printf("entrez n>0\n") ;
scanf("%d",&n) ;
if (n==1 || n==2 ) Nv=1 ;
else {Av=D=1 ;
for(i=3;i<=n;i++)

{Nv=Av+D ;
Av=D ;
D=Nv ;
}
     } 
     printf("u(%d)=%d\n",n, Nv ); 
     system("pause");
}
