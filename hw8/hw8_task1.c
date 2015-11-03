/*   Brett Bishop Homework 8 task 1 Bubble Sort*/

#include <stdio.h>
#include <stdlib.h>




int bubblesort(int a[])
{
    int j,k,swap;




    for(j=0;j<99;j++)
        for(k=0;k<99;k++)
            if (a[k]>a[k+1])
            {
                swap = a[k];
                a[k]=a[k+1];
                a[k+1]=swap;
            }





}

int random_num()
{
    int r=rand()%(500+1);
    return (r);

}

int main(void)
{
    int nRand, count=0, a[100],i;
    for(i=0;i<100;i++)
    {
        nRand=random_num();
        a[i]=nRand;
        //count=prtfc(count,a,i);
        if (count%10==0)
        {
            printf("\n");
            printf("%5d, ",a[i]);
            count++;
        }
        else
        {
            printf("%5d, ",a[i]);
            count++;

        }
    }

    printf("\n\n");
    bubblesort(a);
    printf("Bubble sorted A= \n\n");
    for(i=0;i<100;i++)
    {
        if (count%10==0)
        {
            printf("\n");
            printf("%5d, ",a[i]);
            count++;
        }
        else
        {
            printf("%5d, ",a[i]);
            count++;

        }
    }





    printf("\n\n");
    return 0;
}
