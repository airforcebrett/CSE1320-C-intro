//
//  HW2_task_1.c
//  Print 1st 128 ASCII code
//
//  Created by Brett Bishop

// ID 1000425627
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int dec_oct(int x);

int main()
{
    long int hex;
    int i,oct,x,h;
    char ch;
    #define hor_line "-------------------------"
    printf("\n%s\n",hor_line);
    printf("DEC   OCT   HEX   SYMBOL");
    printf("\n%s\n",hor_line);
    i=0;
    do
    {
        x=i;
        hex=i;
        ch=i;
        
        printf("%-3d   %03d   %3lx   %4c\n",i++,dec_oct(x),hex,ch);
        printf("\n%s\n",hor_line);
    }
    while (i<128);
    
    return 0;
}

int dec_oct(int x)
{
    int rem, i=1, oct=0;
    while (x!=0)
    {
        rem=x%8;
        x/=8;
        oct+=rem*i;
        i*=10;
    }
    return oct;
    
}


