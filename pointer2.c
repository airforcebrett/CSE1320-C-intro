#include <stdio.h>

void strCopy(char **pszA, char **pszB)

{
    pszA=pszB;

}

int main(void)
{

    char *pszA[2]={"CSE1320", "CSE1311"};
    printf("%s \n",pszA[0]);
    strCopy(&pszA[0],&pszA[1]);
    printf("%s\n",pszA[0]);
    return 0;


}
