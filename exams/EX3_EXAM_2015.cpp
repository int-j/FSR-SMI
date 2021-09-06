//BY: SMIA STUDIES --->FB: www.facebook.com/SMIA.STUDIES

#include <stdio.h>


main()
{
	/*Declaration et saisie de la matrice A (total=2 points)*/
int n , i , j , x,max,T[30] ,A[30][30];

do{
printf("Entrer le nombre de lignes et colonnes  n : ");
scanf("%d",&n);
} while ( n < 1 || n > 30 );

for( i = 0 ; i < n ; i++ ){
  for( j = 0 ; j < n ; j++ ){   
     printf("Entrer la valeur de A[%d][%d] : ", i , j);
     scanf("%d",&A[i][j]);
    
  }   
} 

/*Affichage de la matrice A (1.5 pt)*/
printf("\n La matrice A : \n");
for( i = 0 ; i < n ; i++ ){
  for( j = 0 ; j < n ; j++ ){   
     printf(" %d \t",A[i][j]);
  }   
   printf("\n"); 
}

/*La recherche du max de la ligne (2pts)*/

for (i=0;i<n;i++) { 
// chercher le max de la ligne i 
   max=A[i][0]; 
   for (j=0;j<n;j++){
         if(A[i][j]>max){ 
                     max=A[i][j];
					 }
			}
    T[i]=max;
}


//Affichage du tableau T (1 pts)
    for (i=0;i<n;i++)
       printf("T[%d]=%d\n",i,T[i]); 
       
       

/*Le tri de la diagonale par ordre croissant (2.5 points) 1.5 pour le tri et 1 pour l'affichage*/
 for(i=1;i<n;i++){
    for (j=i;j>0;j--)
        if(A[j][j]<A[j-1][j-1]){
		            x=A[j][j];
		            A[j][j]=A[j-1][j-1];
		            A[j-1][j-1]=x;
		           }
        else break;
       }
/*affichage du matrice triee*/
printf("\n La matrice A : \n");
for( i = 0 ; i < n ; i++ ){
  for( j = 0 ; j < n ; j++ ){   
     printf(" %d \t",A[i][j]);
  }   
   printf("\n"); 
}
}
