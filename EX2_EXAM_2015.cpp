//BY: SMIA STUDIES --->FB: www.facebook.com/SMIA.STUDIES

#include <stdio.h>
#include <stdlib.h>
main()
{
 //1-D�claration et allocation dynamique de la m�moire 1 point
 int N, *T, *P1,i,j,c=0,t=0;

 printf(" Entrez N \n ");
 scanf("%d", &N );

 T=(int*)malloc(N*sizeof(int)); 
//Saisie et affichage 1point

 for(P1=T;P1<T+N;P1++) 
     {
      printf("Entrez A[%d] : ",P1-T);
      scanf("%d",P1);
     }

for (P1=T;P1<T+N;P1++)
     printf("%d \t", *P1);
  printf("\n");
  
//2-D�terminer si la coupe est �quilibr�e 2.5 points
// 0.25 point pour la saisie des i et j
printf("Entrez la valeur de i");
scanf("%d",&i);
printf("Entrez la valeur de j");
scanf("%d",&j);
// et 1.75 points pour la boucle, le test et l'affichage 
for(int *P=T+i; P<=T+j; P++){
       if(*P==0) c++;
       if(*P==1) t++;
}
if(c==t) printf("la partie est equilibree");

else printf("la partie n'est pas equilibree");
// 3-chercher dans le tableau le nombre de plus petites coupes �quilibr�es 2.5 points (c a d une fois je trouve que nbre de 1 = nbre de 0 j'incr�mente le compteur de coupes 
//et je r�initialise les compteurs de 0 et de 1 � O )
int z=0;
c=0,t=0; 
int *P;
for(P=T;P<=T+N-1;P++){
     if(*P==0) c++;
     if(*P==1) t++;
     if(c==t){z++;
	          c=0;
			  t=0;}
}
printf("le nombre de parties �quilibr�es trouv�es %d",z);
printf("\n");
system("pause");
}	
