//
//  HW2_task_3.c
//  Rock Paper Scissors
//
//  Created by Brett 
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    char ch,player;
    int b=0;
    printf("Welcome to the game of Rock-Paper-Scissors.");
    printf("\nYou can press a 'r' button for Rock, 'p' for Paper, and 's' for Scissors.");
    printf("\nPress any key when ready or press 'q' to quit.  ");
    scanf("%s",&ch);
    



    while (ch!='q')
    {
        
        printf("Rock!Paper!Scissors!");
        scanf("%s",&player);
        srand(time(NULL));
        int r = rand()% 3+1;
        
        /Users/AirforceBrett/Downloads/HW2_Selection 2/1/HW2_task_3.c
        if (player=='r')
        {
            if (r==1)
            {
                printf("Rock (You) vs Rock (Computer): DRAW!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else if (r==2)
            {
                printf("Rock (You) vs Paper (Computer): You Lose!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else if (r==3)
            {
                printf("Rock (You) vs Scissors (Computer): You Win!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else
            {
                printf("Invalid choice");
                continue;
            }
        }
        else if (player=='p')
        {
            if (r==1)
            {
                printf("Paper (You) vs Rock (Computer): You Win!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else if (r==2)
            {
                printf("Paper (You) vs Paper (Computer): DRAW!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else if (r==3)
            {
                printf("Paper (You) vs Scissors (Computer): You Lose!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else
            {
                printf("Invalid choice");
                continue;
            }
        }
        else if (player=='s')
        {
            if (r==1)
            {
                printf("Scissors (You) vs Rock (Computer): You Lose!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else if (r==2)
            {
                printf("Scissors (You) vs Paper (Computer): You Win!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else if (r==3)
            {
                printf("Scissors (You) vs Scissors (Computer): DRAW!!\nPress any key when ready or press 'q' to quit.");
                scanf(" %s",&ch);
                continue;
            }
            else
            {
                printf("Invalid choice");
                continue;
            }
        }
        int num,b;
        break;
    }
        return 0;

}











