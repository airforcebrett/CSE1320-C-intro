//
//  HW2_task_2.c
//  Guessing Game
//
//  Created by Brett Bishop

// ID 1000425627
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    char ch;
    int b=0;
    printf("Welcome to the game of Guess It!\nI will choose a number between 1 and 100.\nYou will try to guess that number.\nIf you guess the number wrong, I will tell you if you guessed too high or too low.\nYou have 6 tries to get the number.");



    while (ch!='n')
    {
        srand(time(NULL));
        int r = rand()% 100+1;
        int num,b;
        if (b==1)
            scanf("");
        
        else

            printf("OK, I am thinking of a number. Try to guess it.");

            int i;
            i=0;

            while (num!=r)
            {
                while (i<6)
                {
                    printf("\nYour Guess");
                    scanf("%d",&num);
                    if (num>100)
                        printf("Illegal Guess. Your guess must be within 1-100");
                    else if (num<1)
                        printf("Illegal Guess. Your guess must be within 1-100");
                    else
                    {

                        if (num>r)
                            printf("Too High!");
                        else if (num==r)
                            break;


                        else if (num<r)

                            printf("Too Low!");

                }
                i++;
            }
            if (i==6)
                break;
        }
        if (num==r)
            printf("****Correct****");
            printf("Do you want to play again?");
            scanf("%s",&ch);
            if (ch=='n')
                break;
            else
                continue;


    }
        
   
        printf("Goodbye, it was fun. Play again soon.");
        return 0;

}











