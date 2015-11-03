#include <stdio.h>

int factorial(int nNum)
{
	if (nNum == 0)
		return 1;
	else
		return nNum * factorial(nNum-1);
}

double power(int nNum, float x)
{
	int i;
	double nRet = 1;
	for (i = 1; i <=nNum; i++)
		nRet= nRet*x;
    return nRet;
}


int main(void)
{
    // Example 2
    int n;
    float x;
    printf("enter n");
    scanf("%d", &n);

    scanf("%f", &x);
    printf("10! = %d, %f\n", factorial(10), power(n, x));


    return 0;
}
