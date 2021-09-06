#include<stdio.h>
#include<stdlib.h>

main()

{int n,i ,s;
 s=1;
for(n=3,n<=1000;n++); 
  {i=2 ;
while (n%i!=0 && i<n)
i++ ;   
s=s+1 ;
} 

printf("le nombre des nombres premier entre 1 et 1000 est: %d\n",s) ;
system("pause");
}
