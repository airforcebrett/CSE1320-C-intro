#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char no_repetitions(char cInput[], int size)
{
    int i,j,k;
    printf("New string without repetition is: ");
    for (i = 0; i < size; i++)
    {
      for (j = i + 1; j < size;)
      {
         if (cInput[j] == cInput[i])
         {
            for (k = j; k < size; k++)
             {
               cInput[k] = cInput[k + 1];
            }
            size--;
         } else
            j++;
      }
   }

   for (i = 0; i < size; i++)
   {
      printf("%c", cInput[i]);

   }

    return 0;
}








int main()
{
   char cInput[100];
   int size;

   printf("\nEnter a String : ");
   scanf("%[^\t\n]s", &cInput);

   size=strlen(cInput);
   no_repetitions(cInput,size);
   printf("\n");

   return (0);
}

