#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
 
 int main2(void);
 int arrayNum(void);
 int arrayAfterMod(void);
//dynamic malloc 2
int main(void) {
 
  main2();
  arrayNum();
arrayAfterMod();
}
//////////////////////////////////////////////////////////////////////////
int main2(void)
{
  char s[]="3scc";
  
 char *description = malloc(10*sizeof(char));
 description = calloc(20,sizeof(char));
 description = realloc(description, 5*sizeof(char));
 
  int i,n;
  n=0;
while(s[n] != 0) n++;

  for (i = 0; i<n; i++ )
  printf("Char[%d] '%c' \n",i, s[i]);
   printf ("\nsizeof char s[] = %lu sizeof (char) = %lu\n\n\n", sizeof s, sizeof (char));
printf( "\n");
 
  free (description);
return 0;
}

///////////////////////////////////////////////////////////////////////////////
void array2(int arr[], int size2)
{
    int q;
    for (q=0; q < size2; q++)
    printf("Array2[%d] '%d' \n",q, arr[q]);
    printf("\n");
}

int arrayNum(void)
{
  int array1[]={1,2,3,4,5,6,7};
  /*вычисление количества элементов массива*/
   int size2 = sizeof(array1)/sizeof(array1[0]);

    printf("Opening Numbers array: \n");
    array2(array1, size2);

 //int  *description = malloc(10*sizeof(int )); //An equivalent syntax
  int  *description = malloc(10*sizeof*description);
 //The size of the block allocated is equal to the number of bytes for a single object of type int multiplied by 10, providing space for ten integers.
 
 //array1 length in bytes
 printf ("sizeof array1 = %lu sizeof (int) = %lu\n", sizeof array1, sizeof (int));
 //char *scopy[]=  &s[];


  free (description);
 
return 0;
 
}
////////////////////////////////////////
int arrayAfterMod(void)
{
  int array3[112];
  int j,N,i;
for(j = 0; j < N; j++)
      {
      AdditionalDiagonalcharray[i][j] = Initialcharray[N - 1 - j][N - 1 - i];
      printf("AdditionalDiagonalcharray [%i][%i] = %c\n", i, j, AdditionalDiagonalcharray[i][j]);
      }

return 0;
    
}
