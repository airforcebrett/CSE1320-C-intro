//
//  study.c
//  
//
//  Created by Airforce Brett on 3/3/15.
//
//

#include <stdio.h>



int main(void)
{
    int i,j;
    int rgnX[3][4]={{3,4,5,6},{1,0,2,4},{9,3,6,12}};
    
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
                printf("%-3d",rgnX[i][j]);
        }
    }
    return 0;
}