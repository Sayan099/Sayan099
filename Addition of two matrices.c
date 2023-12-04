/* addition of two matrices using structure */
#include<stdio.h>
struct mat
{
int arr[10][10];
 int r,c;
};
typedef struct mat Matrix;
void add_matrix(Matrix a ,Matrix b)
 {
 Matrix n ; 
 int i,j;
printf("Input dimension of the first matrix");
scanf("%d%d",&a.r,&a.c);


 printf("Input dimension of the second  matrix");
 scanf("%d%d",&b.r,&b.c);
  if (a.r==b.r && a.c==b.c) 
  {printf("Input elements of the first matrix");
 for(i=0;i<a.r;i++)
 for(j=0;j<a.c;j++)
 scanf("%d",&a.arr[i][j]);
 printf("Input elements of the second matrix\n");
 for(i=0;i<b.r;i++)
 for(j=0;j<b.c;j++)
 scanf("%d",&b.arr[i][j]);
 for(i=0;i<a.r;i++)
 for(j=0;j<a.c;j++)
 n.arr[i][j]=a.arr[i]+b.arr[i][j];
 printf ("\nThe sum the two input matrices is : \n");
 for(i=0;i<a.r;i++)
 {for(j=0;j<a.c;j++)
  printf("%d",n.arr[i][j]);
  printf ("\n");
 }

  

  }
  else printf ("%d\n",n.arr[i][j]) ;
  i =0 ;
  j=0;
 }
int main ()
{ 
Matrix p,q;
add_matrix(p,q);
return 0;
}
