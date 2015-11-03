
//Brett Bishop
//id 1000425627
//cse1320
//HW4 Task 1
//Program to return a string without duplicate characters


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
   char cInput[100]; //initialize an array
   int size; //for length of string array

   printf("\nEnter a String : ");
   scanf("%[^\t\n]s", &cInput);       //capture string with spaces

   size=strlen(cInput);      //string length
   no_repetitions(cInput,size);// function to process no repeat characters
   printf("\n");

   return (0);
}
