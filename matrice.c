#include <stdio.h>
main()
{
 /* D�clarations */
 int A[50][50]; /* matrice donn�e   */
 int B[50][50]; /* matrice donn�e   */
 int C[50][50]; /* matrice r�sultat */
 int N, M, P;   /* dimensions des matrices */
 int I, J, K;   /* indices courants */

 /* Saisie des donn�es */
 printf("*** Matrice A ***\n");
 printf("Nombre de lignes de   A (max.50) : ");
 scanf("%d", &N );
 printf("Nombre de colonnes de A (max.50) : ");
 scanf("%d", &M );
 for (I=0; I<N; I++)
    for (J=0; J<M; J++)
        {
         printf("El�ment[%d][%d] : ",I,J);
         scanf("%d", &A[I][J]);
        }
 printf("*** Matrice B ***\n");
 printf("Nombre de lignes de   B : %d\n", M);
 printf("Nombre de colonnes de B (max.50) : ");
 scanf("%d", &P );
 for (I=0; I<M; I++)
    for (J=0; J<P; J++)
        {
         printf("El�ment[%d][%d] : ",I,J);
         scanf("%d", &B[I][J]);
        }
 /* Affichage des matrices */
 printf("Matrice donn�e A :\n");
 for (I=0; I<N; I++)
    {
     for (J=0; J<M; J++)
          printf("%7d", A[I][J]);
     printf("\n");
    }
 printf("Matrice donn�e B :\n");
 for (I=0; I<M; I++)
    {
     for (J=0; J<P; J++)
          printf("%7d", B[I][J]);
     printf("\n");
    }
 /* Affectation du r�sultat de la multiplication � C */
 for (I=0; I<N; I++)
     for (J=0; J<P; J++)
         {
          C[I][J]=0;
          for (K=0; K<M; K++)
               C[I][J] += A[I][K]*B[K][J];
         }
  /* Edition du r�sultat */
 printf("Matrice r�sultat C :\n");
 for (I=0; I<N; I++)
    {
     for (J=0; J<P; J++)
          printf("%7d\n", C[I][J]);
     ;
    }
    system("pause");
}

