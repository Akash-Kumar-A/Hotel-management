
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<time.h>
#include<dos.h>




int main()   //main program
{
    system("color 0F8"); //screen color
	int a=0,i=0, sollunga;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="akash"; //user name
    char pass[10]="akash";  //password
    char ccontinue;
    do
    {
        system("cls");

        printf("\n\t\t\t\t      ************************** ||  LOGIN FORM || **************************  ");
        printf(" \n\n\n\n\n\t\t\t\t\t\t\tUSERNAME : ");
        scanf("%s", &uname);
        printf(" \n\n\t\t\t\t\t\t\tPASSWORD : ");

	while(i<10)
	{
	    pword[i] = getch();
	    c = pword[i];

	    if(c==13)
        break;

	    else
	    printf("*");

	    i++;
	}

	pword[i]='\0';
	i=0;

	system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Verifying ");
	sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" .");
	sleep(1);

	system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Verifying ");
	sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);

	if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
        system("cls");
        printf("\n\n\n\n");
        printf("\n\t\t\t\t\t    *********************** ||  Login Successful || ***********************  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                            Welcome User !                           *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    **************************  ||  Enjoy !  ||  **************************  ");

        sleep(2);
        l2 : system("cls");
        system("color 006");
        printf("\n\n");

        printf("\n\t\t\t\t\t    *********************** ||   Welcome user !  || ***********************  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                         1. Hotel                                    *  ");
        printf("\n\t\t\t\t\t    *                         2. Restaurant                               *  ");
        printf("\n\t\t\t\t\t    *                         3. About us                                 *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t\t    **************************  ||  Enjoy !  ||  **************************  ");


        printf("\n\n\n\t\t\t\t\tEnter your choice: ");
        scanf("%d", &sollunga);

        system("cls");

        if (sollunga == 1)
        mainh();

        else if (sollunga == 2)
        mainr();    //RESTAURANT

        else if (sollunga == 3)
        {
            aboutus();
            printf("\n\n\nDo you want to continue ? ");
            printf("y / n :  ");
            ccontinue = getch();

            if(ccontinue == 'y')
            goto l2;

            else if (ccontinue == 'n')
            {

                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Exiting ");
                sleep(1);
                printf(" ."); sleep(1);
                printf(" ."); sleep(1);
                printf(" ."); sleep(1);
                printf(" ."); sleep(2);
                exit_page();

            }
        }

        break;
    }

	else
	{
		printf("\n\n\n\n\t\t\t\t\t        SORRY ! \n\t\t\t\t\t\tLOGIN IS UNSUCESSFUL");
		sleep(2);
		a++;
		getch();

	}



}
	while(a <= 2);
	if (a > 2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		getch();
		exit(0);
	}

        system("cls");

}

void mainh()
{
    system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Opening ");
	sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" .");
	sleep(2);

    char ans;
    int ch;
    system("cls");
    intro(); //hotel

    system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Loading ");
	sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(2);

	system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Loading ");
	sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);

    do
    {

        system("color 0f1");
        system("cls");
        screenheader();
        printf("\n\n\n\n");
        printf("\n\t\t\t\t    ************************** ||  VOID Hotel || **************************  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                     1. Book a room                                  *  ");
        printf("\n\t\t\t\t    *                     2. Checkout                                     *  ");
        printf("\n\t\t\t\t    *                     3. View Features of Rooms                       *  ");
        printf("\n\t\t\t\t    *                     4. View Booked Rooms                            *  ");
        printf("\n\t\t\t\t    *                     5. View Customer details                        *  ");
        printf("\n\t\t\t\t    *                     6. Suggestion or Complaints                     *  ");
        printf("\n\t\t\t\t    *                     7. Payment                                      *  ");
        printf("\n\t\t\t\t    *                     8. Exit                                         *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *                                                                     *  ");
        printf("\n\t\t\t\t    *************  ||  Come in as guests. Leave as family.  ||  ***********  ");

        printf("\n\n\t\t\t\t    Enter your Choice : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                booking();
                break;

            case 2:
                deallocate();
                break;

            case 3:
                features();
                break;

            case 4:
                getavail();
                putavail();
                break;

            case 5:
                customer();
                break;

            case 6:
                complaints();
                break;

            case 7:
                Bill_Payment();
                break;

            case 8:

                label:system("cls");

                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Exiting ");
                sleep(1);
                printf(" ."); sleep(1);
                printf(" ."); sleep(1);
                printf(" ."); sleep(1);
                printf(" ."); sleep(2);
                exit_page();
                break;

            default:
                printf("\n\n\n\tWrong choice!!!!\n\tPlease choose 1-8");
                getch();
 }

    printf("\n\nDo you want to continue ( y/n ) : ");
    fflush(stdin);
    ans = getche();

    if (ans == 'n' || ans == 'N')
    goto label;

    }while(ans=='y'||ans=='Y');
 }

 int mainr()
 {

    system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Opening ");
	sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" .");
	sleep(2);

    char ans;
    int ch;

    system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Loading ");
	sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(2);

	system("cls");

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Loading ");
	sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
	printf(" ."); sleep(1);
    int k,j,n,d, a;
    k = main_page();

    if(k==1)
    {
       a = menu_order();

        if(a==1)
        {
           breakfast();
        }
        else if(a==2)
        {
           brunch();
        }
        else if(a==3)
        {
           lunch();
        }
        else if(a==4)
        {
           dinner();
        }
        else if(a==5)
        {
           ic_m();
        }

    }

    else if(k==2)
    {
        r_Bill_Payment();
    }

    else
    exitr();

    return 0;

 }

 void aboutus()
 {
     char z, ccontinue;

     FILE *v;
     v = fopen("About_Us.txt","r");

     if (v == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    z = fgetc(v);
    while (z != EOF)
    {
        printf ("%c", z);
        z = fgetc(v);
    }

    fclose(v);

    sleep(2);

 }




