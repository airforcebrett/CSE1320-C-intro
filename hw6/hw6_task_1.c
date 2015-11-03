
// Brett Bishop
//id 1000425627
//hw6 task 1 to make an array and swap values

#include<stdio.h>
void swap(int *pnArray, int nIndex1, int nIndex2)
{
    int i, idx1, idx2 , pnArray2[10];
    for(i=0;i<10;i++)
    {
        pnArray2[i]=pnArray[i];
        if (pnArray[i]==nIndex1)
        {
            idx1=i;
        }
        else if (pnArray[i]==nIndex2)
        {
            idx2=i;
        }
    }
    pnArray2[idx1]=pnArray[idx2];
    pnArray2[idx2]=pnArray[idx1];
    for(i=0;i<10;i++)
    {
        pnArray[i]=pnArray2[i];
    }


}



int main(void)
{

    int i,x, nIndex1, nIndex2, pnArray[10];
    printf("Enter 10 integer values: ");
    for(i=0;i<10;i++)
    {
        scanf("%d", &x);
        pnArray[i]=x;
    }
    printf("\n");
    printf("Enter an integer number to swap: ");
    scanf("%d", &nIndex1);
    printf("Enter an integer number to swap with: ");
    scanf("%d", &nIndex2);
    printf("Integers %d  and %d will be swapped.",nIndex1, nIndex2);

    printf("\nThe entered array: ");
    for(i=0;i<10;i++)
    {
        printf("%d, ",pnArray[i]);
    }


    swap(pnArray,nIndex1, nIndex2);
    printf("\nThe swapped array: ");
    for(i=0;i<10;i++)
    {
        printf("%d, ",pnArray[i]);
    }
    printf("\n");
    return 0;











}


