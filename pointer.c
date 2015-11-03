#include <stdio.h>

void strCopy(char *pszA)

{
    int i;
    char szB[]="CSE1311";
    for(i=0;szB[i] !=NULL;i++)
    {
        pszA[i]=szB[i];
    }
    pszA[i]=NULL;



}

int main(void)
{

    char szA[100]="CSE1320";
    printf("%s\n",szA);
    strCopy(szA);
    printf("%s\n",szA);
    return 0;


}
