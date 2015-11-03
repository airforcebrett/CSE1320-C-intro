

//HW5 Task 1
//Program to return a taylor series estimation


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int factorial(int nNum)
{
	int i, nRet = 1;
	for (i = nNum; i > 0; i--)
		nRet *= i;
    return nRet;
}

double power(float x, int nNum)
{
	int i;
	double nRet = 1;
	for (i = 1; i <=nNum; i++)
		nRet=nRet*x;
    return nRet;
}



double taylor(int nNum, float xNum)
{

    int i;
    float nTay=1;
    for (i=nNum; i>0;i--)
    {

        //printf("factorial %d  power %f \n", factorial(i),power(xNum,i) ); debug printf
        nTay=nTay+(power(xNum, i))/(factorial(i));
    }
    return nTay;

}
int main(void)
{
    int i,n;
    float x;
    printf("Estimation by Taylor Series \n Please enter x:  ");
    scanf("%f", &x);
    printf("Estimation exp(%.2f) by Taylor Series\n",x);
    printf("exp(%.2f)= %f\n",x,taylor(10, x));

    for(i=1;i<10;i++)
    {
        printf("When n==%d, TaylorSeries(%.2f,%d)= %.6f\n",i,x,i, taylor(i,x));
    }



    return (0);










}
