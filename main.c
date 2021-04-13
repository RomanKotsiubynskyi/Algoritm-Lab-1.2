#include <stdio.h>
#include <math.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
//dynamic malloc
/*
int main(void) {
 char *str; 
if ((str = malloc(20))==NULL)
{
  printf("Not enough memory\n");
  exit(1);
}
strcpy (str, "HwefxjksrtjdrhsjdkjxhzgfzxjytrtyuyterrtyuiW");

printf("%s\n", str);
free(str);
return 0;
}
*/
 int main2(void);
 int main3(void);
//dynamic malloc 2
int main(void) {
char ch = 'C';
float f = 212323554767.087;

char *chMemory = (char*)malloc(sizeof(char));
float *fMemory = (float*)malloc(sizeof(float));
*chMemory = 'S';
*fMemory = 30;

printf("ch =%d<-> %c f =%4.2f   \n\n\n", ch, ch, f);
printf("chMemory =%d<-> %c fMemory =%4.2f\n\n\n", *chMemory, *chMemory, *fMemory);

free (chMemory);
free (fMemory);
 
  main2();
 
  main3();
}

int main2(void)
{
  char s[]="3scc";
  

 char *description = malloc(10*sizeof(char));
 description = calloc(20,sizeof(char));
 description = realloc(description, 5*sizeof(char));
 
 //char *scopy[]=  &s[];
  int i,n;

  n=0;
while(s[n] != 0) n++;

  for (i = 0; i<n; i++ )
  printf("Char[%d] '%c' \n",i, s[i]);
printf( "\n");
 
 for (i = 0; i<n; i++ )
  printf("Char2[%d] '%c' \n",i, s[i*2]);
printf( "\n\nmain3:\n");
 printf ("sizeof s = %lu,sizeof (int) = %lu\n", sizeof s, sizeof (int));
  free (description);
return 0;
}


void array2(int arr[], int size2)
{
    int q;
    for (q=0; q < size2; q++)
    printf("%d\n ", arr[q]);
    printf("\n");
}

int main3(void)
{
  int array1[]={1,3,4,5,0,4,4};
   int size2 = sizeof(array1)/sizeof(array1[0]);

    printf("Opening Numbers array: \n");
    array2(array1, size2);

 //int  *description = malloc(10*sizeof(int )); //An equivalent syntax
  int  *description = malloc(10*sizeof*description);
 //The size of the block allocated is equal to the number of bytes for a single object of type int multiplied by 10, providing space for ten integers.
 description = calloc(20,sizeof(int ));
 description = realloc(description, 50*sizeof(int ));
 
 //array1 length in bytes
 printf ("sizeof array1 = %lu,sizeof (int) = %lu\n", sizeof array1, sizeof (int));
 //char *scopy[]=  &s[];
  int i,n;

 
 
 for (i = 0; i<sizeof(array1); i++ )
  printf("Array[%d] '%c' \n",i, array1[i+2]);


  free (description);
return 0;
}
//dynamic malloc 3
