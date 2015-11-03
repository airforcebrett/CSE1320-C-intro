//
//  switch.c
//
//
//  Created by Airforce Brett on 2/12/15.
//
//

#include <stdio.h>

int main(void)
{
    // example 1
    char nInput,player;
    int i;
    printf("Input a number: ");
    scanf("%s", &nInput);

    switch (nInput)
    {
        case 'r':

            printf("Rock");
            int i = 47;
            break;
        case 'p':
           // player="Paper";
            break;
        case 2:
            printf("Two");
            break;
        default:
            printf("Others");
    }
    printf("%d",i);

    return 0;

}

