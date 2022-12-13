#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "time.h"
#include <locale.h>
#pragma comment(linker, "/STACK:1468006400")
int main()
{
setlocale(LC_ALL,"");
int size=0;
printf("¬ведите кол-во вершин:");
scanf("%d", &size);
srand(time(NULL));
int **adj_matrixONE;
int **adj_matrixTWO;
    adj_matrixONE=(int**)malloc(size*sizeof(int*));
	for(int i=0;i<size;i++)
	{
	adj_matrixONE[i]=(int*)malloc(size*sizeof(int));
	}
	adj_matrixTWO=(int**)malloc(size*sizeof(int*));
	for(int i=0;i<size;i++)
	{
	adj_matrixTWO[i]=(int*)malloc(size*sizeof(int));
	}
int adj_matrixRES[100][100];
int sizeMatrixOne = size;
for(int i = 0; i < size; i++) {
 for (int j = 0; j < size; j++) {
   adj_matrixONE[i][j] = rand()%2;
   adj_matrixTWO[i][j] = rand()%2;
}
}

for(int i = 0; i < size; i++) {
 for (int j = 0; j < size; j++) {
  if(i == j){
   adj_matrixONE[i][j] = 0;
   adj_matrixTWO[i][j] = 0;
}
 if(adj_matrixONE[i][j] = adj_matrixONE[j][i]){
  adj_matrixONE[i][j] = adj_matrixONE[j][i];
}
 if(adj_matrixTWO[i][j] = adj_matrixTWO[j][i]){
  adj_matrixTWO[i][j] = adj_matrixTWO[j][i];
}
 printf(" %d ", adj_matrixONE[i][j]);
}
	printf("\n");
}
 printf("\n");
  for(int i = 0; i < size; i++) {
   for (int j = 0; j < size; j++) {
    printf(" %d ", adj_matrixTWO[i][j]);
}
 printf("\n");
 }
 printf("\n");
	for(int i = 0; i < size*size; i++) {
 for (int j = 0; j < size*size; j++) {
	 if((i/sizeMatrixOne==j/sizeMatrixOne)){
		 adj_matrixRES[i][j]=adj_matrixONE[i%sizeMatrixOne][j%sizeMatrixOne]; 
	 }
	 else{
		 if(adj_matrixTWO[i/sizeMatrixOne][j/sizeMatrixOne]==1){
           if((i%sizeMatrixOne)==(j%sizeMatrixOne)){
              adj_matrixRES[i][j]=1;
		   }
		   else
			   adj_matrixRES[i][j]=0;
		 }
		 else
			 adj_matrixRES[i][j]=0;
}
}
}
  for(int i = 0; i < size*size; i++) {
   for (int j = 0; j < size*size; j++) {
   printf(" %d ", adj_matrixRES[i][j]);
}
   printf("\n");
}
    system("Pause");
	return 0;
}

