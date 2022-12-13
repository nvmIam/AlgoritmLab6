#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <stdio.h>

int main()
{
setlocale(LC_ALL,"rus");
srand(time(NULL));
int **matrixONE;
int **matrixTWO;
int n,i,j;
printf("Введите количество  элементов в квадратичной матрице:");
scanf_s("%d",&n);
matrixONE=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
	{
	matrixONE[i]=(int*)malloc(n*sizeof(int));
	}
	matrixTWO=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
	{
	matrixTWO[i]=(int*)malloc(n*sizeof(int));
	}
for(int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
   matrixONE[i][j] = rand()%2;
   matrixTWO[i][j] = rand()%2;
}
}

for(int i = 1; i < n; i++) {
 for (int j = 1; j < n; j++) {
  if(i == j){
   matrixONE[i][j] = 0;
   matrixTWO[i][j] = 0;
}
 if(matrixONE[i][j] = matrixONE[j][i]){
  matrixONE[i][j] = matrixONE[j][i];
}
 if(matrixTWO[i][j] = matrixTWO[j][i]){
  matrixTWO[i][j] = matrixTWO[j][i];
}
 printf(" %d ", matrixONE[i][j]);
}
	printf("\n");
}
 printf("\n");
  for(int i = 1; i < n; i++) {
   for (int j = 1; j < n; j++) {
    printf(" %d ", matrixTWO[i][j]);
}
 printf("\n");
 }

 printf("\n Связность вершин:\n");
 for(int i = 1; i < n; i++) {
  printf("%d: ",i);
   for (int j = 1; j < n; j++) {
    if (matrixONE[i][j] !=0)
     printf(" %d ",j);
}
 printf("\n");
}

 printf("\n");
 for(int i = 1; i < n; i++) {
  printf("%d: ",i);
   for (int j = 1; j < n; j++) {
    if (matrixTWO[i][j] !=0)
     printf(" %d ",j);
}
 printf("\n");
}
system("Pause");
return 0;
}
