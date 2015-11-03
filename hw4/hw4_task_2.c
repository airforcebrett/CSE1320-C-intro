
//Brett

//hw4 task 2 program to return bold underlined numbers and if they are a duplicate re-enter a number as well as print the max/min

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define UNDERLINED_BEGIN  "\033[4m"
#define UNDERLINED_END "\033[0m"
#define BOLD_BEGIN  "\033[1m"
#define BOLD_END "\033[0m"

int max_arr(int size, int b[])
{
    int i,j,max;
    max=b[0];
    for(i=0;i<size;i++)
    {
        if (max<b[i])
        {
            max=b[i];
        }
        else
        {
            continue;
        }
    }
    printf("The Maximum number is %d ",max);
    return max;



}
int min_arr(int size, int b[])
{
    int i,j,min;
    min=b[0];
    for(i=0;i<size;i++)
    {
        if (min>b[i])
        {
            min=b[i];
        }
        else
        {
            continue;
        }
    }
    printf("and the Minimum number is %d. \n",min);
    return min;



}

int main()
{
   int c[100];
   int size=5, i=0,j,b[100];

   printf("\nPlease input " UNDERLINED_BEGIN "distinct" UNDERLINED_END " positive integers: \n");
   printf(BOLD_BEGIN UNDERLINED_BEGIN);
   scanf("%d",&c[0]);
   b[0]=c[0];
   for(i=1;i<size;i++)
   {
      scanf("%d",&c[i]);
      for(j=0;j<size;)
      {
        if(c[i]==b[j])
        {
            printf(BOLD_END UNDERLINED_END"You already entered this value. Please enter a new value\n"BOLD_BEGIN UNDERLINED_BEGIN);
            i--;
            break;
        }
        else
        {
            j++;
        }
      }
      b[i]=c[i];

   }

    printf(BOLD_END UNDERLINED_END);
    max_arr(size,b);
    min_arr(size,b);

   return (0);
}
