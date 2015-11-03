// Brett Bishop
//id 1000425627
//hw6 task 2 to use pointers to get data returned


#include <stdio.h>



int main(void)
{

    int i;
    char *psMenu[] =
    {
                   "Please add a record.",
                   "Please change a record",
                   "Please delete a record",
                   "Bye Bye!",
    };
    do
    {
        printf("1 - Add a record\n2 - Change a record\n3 - Delete a record\n4 - Quit\n");
        printf("Enter a selection: ");
        scanf("%d", &i);
        printf("\n%s\n\n",psMenu[i-1]);


    }
    while (i!=4);


    printf("\n%s",psMenu[i]);
    return 0;
}
