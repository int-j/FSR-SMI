#include<stdio.h>
#include<stdlib.h>
main()
{int A[50][50],T[50],k,min,i,j,n,trouve;
//dimension
do{printf("Entrez n : \n");
   scanf("%d",&n);
}while(n<=0 || n>=50);
//saisie de A
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		printf("Entrez A[%d][%d] :\n",i,j);
		scanf("%d",&A[i][j]);
	}
}
//SUP or not
trouve=0;
for(i=1;i<n;i++){
	for(j=0;j<i;j++){
		if(A[i][j]=0){
			trouve=1;
			printf("la matrice est superieur\n");
			}
	       }
break;
}


if(trouve==0) {
      printf("la matrice est SUP\n");
     
      k=0;
      for(j=0;j<n;j++){
	            min=A[0][j];
	            for(i=1;i<n;i++){
		                if(A[i][j]<min && A[i][j]!=0)
		                        min=A[i][j];
	            }
                T[k]=min;
                k++;
        }
    //affichage du T
        printf("\nle tableau de minimum de chaque colonne est : \n");
        printf("\n\tT=(\t");
        for(i=0;i<k;i++)
            printf("%d\t",T[i]); 
        printf(")\n");
}

printf("\n");
system("pause");
} 
