//
//  hw3_task_2.c
//  c program pattern
//
//  Brett Bishop
// ID 1000425627
//
//

#include <stdio.h>

int main(void)
{
    int i=1,j,k=0,p;
    
    do
    {
        
        
        j=7-i;
        p=i;
        i=0;
        
        do
        {
            printf("%d",i+=1);
        }
        while (i<p);
        i=p+1;
        if (j==0)
        {
            j=-1;
        }
        else
        {
            
    
        do
        {
            printf("*");
            j=j-1;
            
        }
        while (j>0);
        }
        
        printf("\n");
        
        k+=1;
        
        
    }
    while (k<7);
    
    return 0;
}

