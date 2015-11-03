
#include <stdio.h>

int main(void)
{
    // Example 3
    char szInput[100];
    printf("Type any strings: ");
    scanf("%s", szInput);       // type "test"
    printf("szInput is %s\n", szInput);
    printf("Type any strings: ");
    scanf("%s", szInput);       // type "Test Test"
    printf("szInput is %s\n", szInput);


    return 0;
}
