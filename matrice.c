#include <stdio.h>
main()
{
 /* Déclarations */
 int A[50][50]; /* matrice donnée   */
 int B[50][50]; /* matrice donnée   */
 int C[50][50]; /* matrice résultat */
 int N, M, P;   /* dimensions des matrices */
 int I, J, K;   /* indices courants */

 /* Saisie des données */
 printf("*** Matrice A ***\n");
 printf("Nombre de lignes de   A (max.50) : ");
 scanf("%d", &N );
 printf("Nombre de colonnes de A (max.50) : ");
 scanf("%d", &M );
 for (I=0; I<N; I++)
    for (J=0; J<M; J++)
        {
         printf("Elément[%d][%d] : ",I,J);
         scanf("%d", &A[I][J]);
        }
 printf("*** Matrice B ***\n");
 printf("Nombre de lignes de   B : %d\n", M);
 printf("Nombre de colonnes de B (max.50) : ");
 scanf("%d", &P );
 for (I=0; I<M; I++)
    for (J=0; J<P; J++)
        {
         printf("Elément[%d][%d] : ",I,J);
         scanf("%d", &B[I][J]);
        }
 /* Affichage des matrices */
 printf("Matrice donnée A :\n");
 for (I=0; I<N; I++)
    {
     for (J=0; J<M; J++)
          printf("%7d", A[I][J]);
     printf("\n");
    }
 printf("Matrice donnée B :\n");
 for (I=0; I<M; I++)
    {
     for (J=0; J<P; J++)
          printf("%7d", B[I][J]);
     printf("\n");
    }
 /* Affectation du résultat de la multiplication à C */
 for (I=0; I<N; I++)
     for (J=0; J<P; J++)
         {
          C[I][J]=0;
          for (K=0; K<M; K++)
               C[I][J] += A[I][K]*B[K][J];
         }
  /* Edition du résultat */
 printf("Matrice résultat C :\n");
 for (I=0; I<N; I++)
    {
     for (J=0; J<P; J++)
          printf("%7d\n", C[I][J]);
     ;
    }
    system("pause");
}

