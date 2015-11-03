#include <stdio.h>   // for printf function
#include <limits.h>  // for INT_MIN, INT_MAX
#include <stdbool.h> // for bool data type



void changeValue( *pn)
{
    *pn=10;
}








int main(void)
{
    int y=20;
    changeValue(&y);
    printf("%d",y);
    return 0;
}
