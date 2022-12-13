#include <stdio.h>
#include <stdlib.h>
#include <Time.h>
#include <locale.h>

int x;
int y;
int main()
{
setlocale(LC_ALL, "rus");
srand(time(NULL));
int z[7];
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
for(int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
   matrixONE[i][j] = rand()%2;

}
}

for(int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
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
printf("Добавьте 2 вершины: ");

scanf("%d",&x);
scanf("%d",&y);

for(int i = 0; i < n; i++) {
	if (i!=x){
 for (int j = 0; j < n; j++) {
   if (j!=y){
	 matrixTWO[i][j]=matrixONE[i][j];
      }
    }
  }
}
for (int j = 0; j < n-1; j++){
	   
		if((matrixTWO[j][x]!=1)&&(matrixTWO[y][j]!=1))
	    z[j]=0;
   else
	    z[j]=1;
		
}
for(int i = 0; i < n; i++) {
	if((x!=i)&&(y!=i)){
 for (int j = 0; j < n; j++) {
	 if((x!=j)&&(y!=j))
   printf(" %d ", matrixTWO[i][j]);

}
 printf("\n");
}
}
for(int i = 0; i < n-1; i++) {
	if (i==3)
    z[i]=0;
	printf(" %d ", z[i]);
}
printf("\n\n");
for(int j = 0; j < n-1; j++) {
	if (j==3)
    z[j]=0;
	printf(" %d \n", z[j]);
}
system("Pause");
return 0;
}
