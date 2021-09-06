#include <stdio.h>
main()
{
 /* Déclarations */
 int A[50][50];  /* matrice donnée */
 int MAX[50][50];/* matrice indiquant les maxima des lignes   */
 int MIN[50][50];/* matrice indiquant les minima des colonnes */
 int N, M;    /* dimensions des matrices */
 int I, J;    /* indices courants */
 int AIDE;    /* pour la détection des extréma */
 int C;       /* compteur des points-cols */

 /* Saisie des données */
 printf("Nombre de lignes   (max.50) : ");
 scanf("%d", &N );
 printf("Nombre de colonnes (max.50) : ");
 scanf("%d", &M );
 for (I=0; I<N; I++)
    for (J=0; J<M; J++)
        {
         printf("Elément[%d][%d] : ",I,J);
         scanf("%d", &A[I][J]);
        }
 /* Affichage de la matrice */
 printf("Matrice donnée :\n");
 for (I=0; I<N; I++)
    {
     for (J=0; J<M; J++)
          printf("%7d", A[I][J]);
     printf("\n");
    }

 /* Construction de la matrice d'aide MAX */
 /* qui indique les positions de tous les */
 /* maxima sur une ligne. */
 for (I=0; I<N; I++)
     {
      /* Recherche du maximum sur la ligne I */
      AIDE=A[I][0];
      for (J=1; J<M; J++)
           if (A[I][J]>AIDE) AIDE=A[I][J];
      /* Marquage de tous les maxima sur la ligne */
      for (J=0; J<M; J++)
           if (A[I][J]==AIDE)  /* ou bien :                   */
                MAX[I][J]=1;   /* MAX[I][J] = (A[I][J]==AIDE) */
           else
                MAX[I][J]=0;
     }
 /* Construction de la matrice d'aide MIN */
 /* qui indique les positions de tous les */
 /* minima sur une colonne. */
 for (J=0; J<M; J++)
     {
      /* Recherche du minimum sur la colonne J */
      AIDE=A[0][J];
      for (I=1; I<N; I++)
           if (A[I][J]<AIDE) AIDE=A[I][J];
      /* Marquage de tous les minima sur la colonne J */
      for (I=0; I<N; I++)
           if (A[I][J]==AIDE)  /* ou bien :                   */
                MIN[I][J]=1;   /* MIN[I][J] = (A[I][J]==AIDE) */
           else
                MIN[I][J]=0;
     }

 /* Edition du résultat */
 /* Les composantes qui sont marquées comme extréma */
 /* dans MAX et dans MIN sont des points-cols. */
 printf("%d",MAX[I][J]);
 printf("%d",MIN[I][J]);
 printf("Points - cols :\n");
 for (C=0, I=0; I<N; I++)
      for (J=0; J<M; J++)
           if (MAX[I][J]&&MIN[I][J])
              {
               C++;
               printf("L'élément %d\t est un maximum "
                      "sur la ligne %d\n"
                      "L'élément %d\t et un minimum "
                      "sur la colonne %d\n", A[I][J], I, J);
              }
 if (C==0)
     printf("Le tableau ne contient pas de points-cols.\n");
 return 0;
}
