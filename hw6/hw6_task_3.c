
//hw6 task 3 to use pointers to get data returned from menu advanced


#include <stdio.h>
#include<stdlib.h>

void printRec(int records[],r_count)
{
    int j;
    printf("\nRecords on file: \n");
    for(j=0;j<r_count;j++)
    {
        printf("%d.\t%d\n",j+1, records[j]);
    }

    printf("\n");
}

int main(void)
{
    #define hLine "*************************************************************"
    int a,i,j, len,chRec, records[5],r_count=0;

    char *psMenu[] =
    {
                   "Please add a record: ",
                   "Please chose a record to change: ",
                   "Please chose a record to delete:",
                   "Bye Bye!",
    };
    do
    {   printf("\n");
        printf(hLine);
        printf("\nWelcome to the University of Texas at Arlington Grade Book\n");
        printf(hLine);
        printf("\n1 - Add a record\n2 - Change a record\n3 - Delete a record\n4 - Quit\n");
        printf("\nEnter a selection: ");
        scanf("%d", &i);
        len=sizeof(records);

        printf("\n");
        switch(i)
        {
            case 1:
                if (r_count<6)
                {
                    printf("\n%s",psMenu[i-1]);
                    scanf("%d", &a);

                    records[r_count]=a;
                    r_count++;
                    printRec(records,r_count);
                    break;

                }
                else
                {
                    printf("\nRecords are full please change or delete a record!\n");
                    break;
                }


            case 2:
                if (r_count>0)
                {
                    printRec(records,r_count);
                    printf("\n%s",psMenu[i-1]);
                    scanf("%d", &a);
                    chRec=(a-1);
                    printf("Changing record %d, please enter the new value: ",chRec+1);
                    scanf("%d", &a);
                    records[chRec]=a;

                    printf("\n");
                    printRec(records,r_count);
                    break;

                }
                else
                {
                    printf("\nRecords are empty please add a record!\n");
                    break;
                }
            case 3:
                if (r_count>0)
                {
                    printRec(records,r_count);
                    printf("\n%s",psMenu[i-1]);
                    scanf("%d", &a);
                    for(j=a-1;j<r_count;j++)
                    {
                        if (j=r_count-1)
                        {
                            records[j]=' ';
                        }
                        else
                        {
                            records[j]=records[j+1];
                        }
                    }

                    r_count--;
                    printf("\n");
                    printRec(records,r_count);
                    break;
                }
                else
                {
                    printf("\nRecords are empty please add a record!\n");
                    break;
                }
            case 4:

                printf("\n%s\n",psMenu[i-1]);
                break;
            default:
                printf("\nError please enter a valid selection 1-4: \n");
        }

    }
    while (i!=4);

    return 0;
}
