#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int power(long lnum, int npow)
{
    if (npow==1)
        return 0;
    else
        npow--;
        return lnum*lnum+power(lnum, npow);



}


int main(void)
{
    int lnum=4,npow=3;
    printf("%d",power(lnum,npow));
    return 0;

}










