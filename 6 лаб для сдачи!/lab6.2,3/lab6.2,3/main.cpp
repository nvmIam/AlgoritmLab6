#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


int x;
int y;
int main()
{
setlocale(LC_ALL,"rus");
srand(time(NULL));
int z[100];
int n,i,j;
int **matrixONE;
int **matrixTWO;
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
for(int i = 1; i < n; i++) {
 for (int j = 1; j < n; j++) {
   matrixONE[i][j] = rand()%2;

}
}

for(int i = 1; i < n; i++) {
 for (int j = 1; j < n; j++) {
  if(i == j){
   matrixONE[i][j] = 0;

}
 if(matrixONE[i][j] = matrixONE[j][i]){
  matrixONE[i][j] = matrixONE[j][i];
}
 printf(" %d ", matrixONE[i][j]);
}
	printf("\n");
}
printf("Добавьте 1 вершину: ");

scanf("%d",&x);

for(int i = 1; i < n; i++) {
	if(x==i){
 for (int j = 1; j < n+1; j++) {
	 if(j==6){
		 matrixONE[x][j]=0;
	 }
	printf("%d ", matrixONE[x][j]);

}
}
}
printf("\n\n");
for(int i = 1; i < n; i++) {
	if(x==i){
 for (int j = 1; j < n+1; j++) {
	 if(j==6){
		 matrixONE[x][j]=0;
	 }
	printf(" %d \n", matrixONE[x][j]);

}
}
}
system("Pause");
return 0;
}

