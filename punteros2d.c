# include <stdio.h>
# include <stdlib.h>
int main()
{
int fil;
int col;
int i;
int *mat;
int j;
int suma=0;
printf("Dame el número de filas\n");
scanf("%d",&fil);
printf("Dame el número de columnas\n");
scanf("%d",&col);
mat=(int *) malloc (fil*col*sizeof(int));
for(i=0;i<fil;i++)
 { 
  for(j=0;j<col;j++)
   {
   printf("Dame los elementos de la matriz\n");
   scanf("%d",&*(mat+fil*i+j));
   }
 }

for(i=0;i<fil;i++)
 { 
  for(j=0;j<col;j++)
   {
   printf("%4d",*(mat+fil*i+j));
   }
printf ("\n");
 }

for(i=0;i<fil;i++)
 { 
  for(j=0;j<col;j++)
   {
    suma=suma+*(mat+fil*i+j);
   }

 }
printf ("%d\n",suma);
free(mat);
}
