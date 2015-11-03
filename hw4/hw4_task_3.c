
//Brett Bishop
//id 1000425627
//cse1320
//hw4 task 3 program to return bold underlined numbers and if they are a duplicate re-enter a number as well as print the max/min

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int random_num()
{
    int r=rand()%(500+1);
    return (r);

}





int main()
{

    int rgn_num[10][10], i,j,r,check;
    r=random_num();
    rgn_num[0][0]=r;
    for(j=0;j<10;j++)
    {
        for(i=0;i<10;i++)
        {
            check=random_num();
            while (check==r)
            {
                check=random_num();
            }

            rgn_num[j][i]=check;
            r=check;

        }

    }
    printf("\n");
    for(j=0;j<10;j++)
    {
        for(i=0;i<10;i++)
        {
            printf("\t%d,", rgn_num[j][i]);
        }
        printf("\n");
    }
    printf("\n");




    return 0;

}

