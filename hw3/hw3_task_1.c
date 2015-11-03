//
//  hw3_task_1.c multiplication table
//  
//
//  Brett Bishop
// id#1000425627
//

#include <stdio.h>

int main(void)
{
    int i=0,j=1;
    
    printf("x\t");
    do
    {
        printf("%d\t", i += 1);
    }
    while(i < 12);
    i=1;
    
    do
    {
        printf("\n%d\t",j);
        do
        {
            printf("%d\t",j * i);
            i+=1;

        }
        while (i<13);
        i=1;
        j+=1;
        
    }
    while (j<13);
    
    
    
    
    return 0;
    
}
