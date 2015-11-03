//
//  hw3_task_3.c
//  
// Rock Paper Scissors Game with functions
//  Brett Bishop
// ID 1000425627
//
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>



char Display_Results(int nRand) // Function to get results of game
{
    char cResult,cPlayer,cGame;
    
    
    do
    {
    scanf("   %c",&cPlayer); // Players input
    switch (cPlayer)   // Player scenarios if R/P/S
    {
        case 'r' :
            printf("\nRock (You) vs");
            break;
        case 'p' :
            printf("\nPaper (You) vs");
            break;
        case 's' :
            printf("\nScissors (You) vs");
            break;
        case 'q':
            cGame='q' ;
            return cGame;;
        default :
            printf("\nInvalid character. Please Retry! ");
            continue;
    }
    
    switch(nRand) // Computer scenarios is r/p/s
    {
        case 0 :
            printf(" Rock (Computer): ");
            cResult = 'r';
            break;
        case 1 :
            printf(" Paper (Computer): ");
            cResult = 'p';
            break;
        case 2 :
            printf(" Scissors (Computer): ");
            cResult= 's';
    }
    if (cPlayer==cResult)
        printf(" Draw!!!\n\n\n");
    else if ((cPlayer=='r' && cResult=='s') || (cPlayer=='s'&& cResult=='p') || (cPlayer=='p' && cResult=='r'))
        printf("You Win!!!\n\n\n");
    else
        printf("You Lose!!!\n\n\n");
    
    break;
    
    }
    while (1);
    
    return 1;
    
    
}
void Header() // Function Header to Game
{
    
    printf("\n\n\n\n********************************************\n");
    printf("Welcome to the Game of Rock-Paper-Scissors!\n");
    printf("********************************************\n");
    printf("You can press a 'r' for Rock, 'p' for Paper, and 's' for Scissors.\n Press any key when ready or press 'q' to quit. \n\n");
    
}


void RPS_delay() // Function to Rock Paper Scissors Time Delay
{
    
    srand((unsigned) time(NULL));
    printf("Rock! ");
    fflush(stdout);
    sleep();
    printf("Paper! ");
    fflush(stdout);
    sleep();
    printf("Scissors!");
    
}
int Get_Number() // Function to get a random #
{
    
    int nrand= rand()%3;
    return nrand;
    
}

int main(void) // Main Function that calls the other functions

{
    
    int nRand;
    char cGame=' ',cPlayer=' ',cComputer=' ';
    Header();// Calling Function Header
    scanf("   %s" , &cGame);
    do
    {
        
        nRand=Get_Number(); // Calling function to Get random # for Computer to input as r/p/s
           // Calling Function Rock Paper Scissors Time Delay
        
        
        // Decides if user wants to play or quit
        
        if (cGame== 'q')
            break;
        else
            RPS_delay();
            //Display_Results(nRand); // Calling Function to Gets results of the Game
            cComputer=Display_Results(nRand);
            cGame=cComputer;
        
        
               
               
        
    }
    while (1);
    
    printf("/n/n/n******************************\n");
    printf("Goodbye It was Fun Playing!!!! \n");
    printf("******************************\n");
    
    return 0;
}


