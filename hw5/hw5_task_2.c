#include<stdio.h>
#include<string.h>
#include<stdlib.h>



char pig_latin(char cInput[], int size)
{
    int i,j,k,c,l,count, cSpace[100];
    char vowel[]="aeiouAEIOU", cInput2[100], cWay[]="way";
    printf("\nNew string in Pig Latin is: ");


    for(j=0;vowel[j]!=NULL;j++)
    {
        if (cInput[0]==vowel[j])
        {

            count=1;
            for(i=0;cInput[i]!=NULL;i++)
            {
                cInput2[i]=cInput[i];
            }
            for(k=0;cWay[k]!=NULL;k++)
            {
                cInput2[i]=cWay[k];
                i++;
            }
            cInput[i]=NULL;
            break;
        }

    }
    if (count==1)
    {
        i=0;
    }
    else
    {
        char vowel[]="aeiouyAEIOUY";
        for(i=1;cInput[i]!=NULL;i++)
        {
            for(j=0;vowel[j]!=NULL;j++)
            {
                if (cInput[i]==vowel[j])
                {
                    c=i;
                    i=0;
                    for(k=c;cInput[k]!=NULL;k++)
                    {
                        cInput2[i]=cInput[k];
                        i++;
                    }
                    for(k=0;k<c;k++)
                    {
                        cInput2[i]=cInput[k];
                        i++;
                    }
                    for(k=1;cWay[k]!=NULL;k++)
                    {
                        cInput2[i]=cWay[k];
                        i++;
                    }
                    cInput2[i]=NULL;
                    break;
                }


            }
        }



    }











    printf("%s",cInput2);



    return 0;
}





int main()
{

    char cInput[100]; //initialize an array
    int size; //for length of string array

    printf("\nEnter a word : ");
    scanf("%[^\t\n]s", &cInput);       //capture string with spaces

    size=strlen(cInput);      //string length
    pig_latin(cInput, size); // function to process no repeat characters
    printf("\n");

   return 0;







}
