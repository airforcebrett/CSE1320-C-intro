// Brett Bishop
//id 1000425627
//hw6 task 3 to use pointers to get data returned from menu advanced


#include <stdio.h>
#include <stdlib.h>
#define MAX_STR_LEN 100
#define hLine "*************************************************************"



struct date
{
    int nYear;
    int nMonth;
    int nDay;
};

typedef struct
{
    int nISBN;
    char *szTitle[MAX_STR_LEN];
    char *szType[MAX_STR_LEN];
    char *szPub[MAX_STR_LEN];
    int nPage;
    float nPrice;
    int nPubyear;
    int nStatus;
    char *szName[MAX_STR_LEN];
    struct date due;



}book;
void printcheckedout(int records[],int r_count, book lib[])
{

    int j;
    printf("\nBooks in the UTA Library on file: \n");
    printf("\n   \tISBN \t Book Title\n");
    printf(hLine);
    printf("\n");

    for(j=0;j<r_count;j++)
    {
        if (lib[j].nStatus==1)
            printf("%d.\t%d \t%s \n",j+1, records[j],lib[j].szTitle);

        else
            continue;
    }

    printf("\n");
}
void printcheckedin(int records[],int r_count, book lib[])
{

    int j;
    printf("\nBooks in the UTA Library on file: \n");
    printf("\n   \tISBN \t Book Title\n");
    printf(hLine);
    printf("\n");
    for(j=0;j<r_count;j++)
    {
        if (lib[j].nStatus==0)
            printf("%d.\t%d \t%s \n",j+1, records[j],lib[j].szTitle);

        else
            continue;
    }

    printf("\n");
}

void printRec(int records[],int r_count, book lib[])
{

    int j;
    printf("\nBooks in the UTA Library on file: \n");
    printf("\n   \tISBN \t Book Title\n");
    printf(hLine);
    printf("\n");
    for(j=0;j<r_count;j++)
    {
        printf("%d.\t%d \t%s \n",j+1, records[j],lib[j].szTitle);
    }

    printf("\n");
}


void print_book(int r_count, book lib[])
{


    printf("\nBook ISBN: %d", lib[r_count].nISBN);
    printf("\nBook title: %s",lib[r_count].szTitle);
    printf("\nBook type: %s",lib[r_count].szType);
    printf("\nBook publisher: %s",lib[r_count].szPub);
    printf("\nNumber of pages: %d", lib[r_count].nPage);
    printf("\nBook price: $%.2f", lib[r_count].nPrice);
    printf("\nYear published: %d", lib[r_count].nPubyear);
    if (lib[r_count].nStatus==1)
    {
        printf("\nBook Status: Checked out to %s", lib[r_count].szName);
        printf("\nDue date: %d / %d / %d\n\n",lib[r_count].due.nMonth,lib[r_count].due.nDay, lib[r_count].due.nYear);
    }
    else
    {
        printf("\nBook Status: Available for check out\n\n");
    }

}
void addbooktofile(int r_count, book lib[],int s)
{
    FILE *fp;
    fp = fopen("File_Description.txt" , "r+");/* opening file for reading and writing */
    if (fp==NULL)
    {
        printf("The File Could Not Be Opened.\n");
        exit(0);
    }
    else
    {
        printf("File Successfully Opened\n\n");
        //fprintf(fp,"TEST");
        //fprintf(fp,"%d %s %s %s %d %d %d %d %s %d %d %d\n",lib[r_count].nISBN,lib[r_count].szTitle, lib[r_count].szType, lib[r_count].szPub, lib[r_count].nPage,lib[r_count].nPrice,lib[r_count].nPubyear,lib[r_count].nStatus,lib[r_count].szName, lib[r_count].due.nMonth, lib[r_count].due.nDay, lib[r_count].due.nYear);
        fwrite(&lib, sizeof(book),1,fp);
        fseek(fp,0,SEEK_SET);
        fread(&lib, sizeof(book),1,fp);
        fclose(fp);
    }
}




int main(void)
{

    int a,i,details,s=0,j,c=0, len,chRec, records[100],r_count=0,copy;
    book lib[100];
    char str[MAX_STR_LEN],ch,nullstr[20]={"\0"};;
    struct date due[MAX_STR_LEN];


    char *psMenu[] =
    {
                   "Please enter the ISBN of the book you want to add: ",
                   "Please enter the book you want to remove: ",
                   "Please enter the book you want to check out: ",
                   "Please enter the book you want to check in: ",
                   "Please enter the book you want details for: ",
                   "All available books: ",
                   "All checked out books: ",
                   "GoodBye! Thank you for choosing the UTA Library."
    };
    do
    {   printf("\n");
        printf(hLine);
        printf("\nWelcome to the University of Texas at Arlington Library\n");
        printf(hLine);
        printf("\n1 - Add a new book\n2 - Remove a record\n3 - Check out a book\n4 - Check in a book\n");
        printf("5 - Display all book details\n6 - Display all available books\n7 - Display all checked out books\n8 - Exit Program\n");
        printf("\nEnter a selection: ");
        scanf("%d", &i);
        len=sizeof(records);
        copy=0;
        printf("\n");
        switch(i)
        {
            case 1:
                if (r_count<10)
                {
                    printf("\n%s",psMenu[i-1]);
                    scanf("%d", &a);
                    for(i=0;i<r_count;i++)
                    {
                        if (records[i]==a)
                        {
                            printf("\n\nERROR:// This book is already in the library database!//\n\n");
                            copy=1;
                            break;
                        }

                    }
                    if (copy==1)
                    {
                        break;
                    }
                    else


                        records[r_count]=a;
                        lib[r_count].nISBN=a;
                        printf("\nPlease enter the book title: ");

                        scanf(" %[^\n]s ",&lib[r_count].szTitle);
                        printf("\nPlease enter the type of book: ");
                        scanf(" %[^\n]s",&lib[r_count].szType);
                        printf("\nPlease enter the book publisher: ");
                        scanf(" %[^\n]s",&lib[r_count].szPub);
                        printf("\nPlease enter the number of pages in the book: ");
                        scanf("%d",&lib[r_count].nPage);
                        printf("\nPlease enter the book price: $");
                        scanf("%f",&lib[r_count].nPrice);
                        printf("\nPlease enter the year the book was published: ");
                        scanf("%d",&lib[r_count].nPubyear);
                        printf("\nPlease enter 1 if checked out or 0 if available: ");
                        scanf("%d",&lib[r_count].nStatus);
                        if (lib[r_count].nStatus==1)
                        {
                            s=1;
                            printf("\nPlease enter the name of the person who checked this book out: ");
                            scanf(" %[^\n]s",&lib[r_count].szName);
                            printf("\nPlease enter the due date month: ");
                            scanf("%d", &lib[r_count].due.nMonth);
                            printf("\nPlease enter the due date day: ");
                            scanf("%d", &lib[r_count].due.nDay);
                            printf("\nPlease enter the due date year: ");
                            scanf("%d", &lib[r_count].due.nYear);
                            print_book(r_count, lib);
                            printf("\nISBN %d < %s > was successfully added: \n",lib[r_count].nISBN, lib[r_count].szTitle);
                            addbooktofile(r_count, lib, s);
                            r_count++;
                            break;
                        }
                        else
                        {

                            print_book(r_count, lib);
                            printf("\nISBN %d < %s > was successfully added: \n",lib[r_count].nISBN, lib[r_count].szTitle);
                            addbooktofile(r_count, lib, s);
                            //printf("%d",r_count); debugging
                            //printRec(records,r_count,lib);

                            r_count++;
                            break;
                        }



                }
                else
                {
                    printf("\nLibrary book shelf is full please check out or remove a book!\n");
                    break;
                }


            case 2:
                if (r_count>0)
                {
                    printRec(records,r_count,lib);
                    printf("\n%s",psMenu[i-1]);
                    scanf("%d", &a);
                    chRec=(a-1);
                    printf("\n%s has been removed from the UTA Library Database\n\n ",lib[chRec].szTitle);

                    for(j=a-1;j<r_count;j++)
                    {
                        if (j=r_count-1)
                        {
                            records[j]=' ';
                            lib[j].nISBN=nullstr;
                            strcpy(lib[j].szTitle,nullstr);
                            strcpy(lib[j].szType,nullstr);
                            strcpy(lib[j].szPub,nullstr);
                            lib[j].nPage=nullstr;
                            lib[j].nPrice=0;
                            lib[j].nPubyear=nullstr;

                            if (lib[j].nStatus==1)
                            {
                                lib[j].nStatus=nullstr;
                                strcpy(lib[j].szName,nullstr);
                                lib[j].due.nMonth=nullstr;
                                lib[j].due.nDay=nullstr;
                                lib[j].due.nYear=nullstr;

                            }
                            else
                            {
                                lib[j].nStatus=nullstr;

                            }
                        }
                        else
                        {
                            records[j]=records[j+1];
                            strcpy(lib[j].nISBN,lib[j+1].nISBN);
                            strcpy(lib[j].szTitle,lib[j+1].szTitle);
                            strcpy(lib[j].szType,lib[j+1].szType);
                            strcpy(lib[j].szPub,lib[j+1].szPub);
                            lib[j].nPage=lib[j+1].nPage;
                            lib[j].nPrice=lib[j+1].nPrice;
                            lib[j].nPubyear=lib[j+1].nPubyear;

                            if (lib[j].nStatus==1)
                            {


                                lib[j].nStatus=lib[j+1].nStatus;
                                strcpy(lib[j].szName,lib[j+1].szName);
                                lib[j].due.nMonth=lib[j+1].due.nMonth;
                                lib[j].due.nDay=lib[j+1].due.nDay;
                                lib[j].due.nYear=lib[j+1].due.nYear;

                            }
                            else
                            {
                                lib[j].nStatus=lib[j+1].nStatus;

                            }
                        }
                    }
                    r_count--;
                    printf("\n");
                    printf("TESTER % d", j);
                    break;



                }

                else
                {
                    printf("\nRecords are empty please add a record!\n");
                    break;
                }
            case 3:
                if (r_count>0)
                {
                    printRec(records,r_count,lib);
                    printf("\n%s",psMenu[i-1]);
                    scanf("%d", &a);
                    printf("Please enter your name: ");
                    scanf(" %s",&lib[a-1].szName);
                    lib[a-1].nStatus=1;
                    printf("\nPlease enter todays date: ");
                    printf("Month: ");
                    scanf("%d",&lib[a-1].due.nMonth);
                    printf("Day: ");
                    scanf("%d",&lib[a-1].due.nDay);
                    printf("Year: ");
                    scanf("%d",&lib[a-1].due.nYear);
                    /*if (lib[a-1].due.nDay>19)
                        lib[a-1].due.nDay=01;
                        lib[a-1].due.nMonth=lib[a-1].due.nMonth+1;

                    else
                        lib[a-1].due.nDay+=10;*/


                    printf("\n");
                    printf("\nYour due date for %s is : %d/%d/%d\n\n", lib[a-1].szTitle, lib[a-1].due.nMonth, lib[a-1].due.nDay, lib[a-1].due.nYear);
                    printRec(records,r_count,lib);
                    break;
                }
                else
                {
                    printf("\nRecords are empty please add a record!\n");
                    break;
                }
            case 4:
                if (r_count>0)
                {
                    printcheckedout(records,r_count,lib);
                    printf("\n%s",psMenu[i-1]);
                    scanf("%d", &a);
                    printf("Please enter your name: ");
                    strcpy(lib[a-1].szName,nullstr);
                    lib[a-1].nStatus=0;
                    lib[a-1].due.nMonth=nullstr;
                    lib[a-1].due.nDay=nullstr;
                    lib[a-1].due.nYear=nullstr;
                    printf("\nYour book %s has been checked in successfully.\n\n", lib[a-1].szTitle);
                    printcheckedin(records,r_count,lib);
                    break;
                }
                else
                {
                    printf("\nRecords are empty please add a record!\n");
                    break;
                }
            case 5:
                printRec(records,r_count,lib);
                printf("\n%s",psMenu[i-1]);
                scanf("%d",&details);
                printf("\n\n");
                print_book(details-1, lib);
                break;

            case 6:
                printf("\n%s\n\n",psMenu[i-1]);
                printcheckedin(records,r_count,lib);
                break;
            case 7:
                printf("\n%s\n\n",psMenu[i-1]);
                printcheckedout(records,r_count,lib);
                break;

            case 8:

                printf("\n%s\n\n",psMenu[i-1]);
                break;
            default:
                printf("\n\nError:// Please enter a valid selection 1-8: //\n\n");
        }

    }
    while (i!=8);

    return 0;
}
