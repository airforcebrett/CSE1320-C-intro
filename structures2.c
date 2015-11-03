//
//  switch.c
//
//
//  Created by Airforce Brett on 2/12/15.
//
//

#include <stdio.h>
#define MAX_STR_LEN     100

struct student
{
    int nID;
    char szName[100];
    int nBirthYear;
    int nGrade;
};

struct student ReturnStruct(struct student student1)
{
    student1.nBirthYear = 1988;
    student1.nID=1000425627;
    return student1;
}


int main()
{
    int a,b,c;
    char d[MAX_STR_LEN];
    struct student student1;
    printf("Enter your student ID please: ");
    scanf("%d",&student1.nID);
    printf("Enter your name please: ");
    fgets(student1.szName, MAX_STR_LEN, stdin);
    strcpy(student1.szName, d);
    printf("Enter your birth year please: ");
    scanf("%d",&student1.nBirthYear);
    printf("Enter your grade please: ");
    scanf("%d",&student1.nGrade);

    printf("Before: \nID: %d\nName:%s\nYear:%d\nGrade:%d\n", student1.nID,
           student1.szName, student1.nBirthYear, student1.nGrade);
    student1 = ReturnStruct(student1);
    printf("\nAfter: \nID: %d\nName:%s\nYear:%d\nGrade:%d\n", student1.nID,
           student1.szName, student1.nBirthYear, student1.nGrade);

    return 0;
}
