#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<time.h>
#include<dos.h>



//Global variables

int  r_no[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int price[30] = {1000,1000,1000,1000,1000,4500,4500,4500,4500,4500,2500,2500,2500,2500,2500,5000,5000,5000,5000,5000,7500,7500,7500,7500,7500,750,750,750,750,750};
int room, r_charge[30];
char r_type[30][11];
char r_cust[30][30]={"N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A","N.A"};
char c_city[5][20], name[30];
int  c_mem[5];
char c_nat[5][20], r_avail[30];
int  r_per[30], no[5], year[5], month[5], day[5], i;

//Function prototype

void getavail();
void putavail();
void features();
void allocate();
void customer();
void restaurant();
void deallocate();
void intro();
void screenheader();
void complaints();
void Bill_Payment();

//Function definitions……….

void screenheader()  //decoration function
{
    printf("\n\t\t\t\t\t\t' ~~@ -> || Hello and Welcome || <- @~~ '\n");

}

void exit_page()
{
        system("color 0F4");
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t          @@_@_\n\t\t\t\t\t\t\t`'*'`  VOID Hotels\n\t\t\t\t\t\t\t\t\t\t`'*'`-@@_@\n\n");
        printf("\n\n\t\t\t Thank you for visiting ! Have a nice day ! Do visit us again ! ;) \n\n\n");
        exit(0);
}

void complaints()
{
    FILE *fptr1;
    fptr1 = fopen("COMPLAINT.txt","a");
    char complaint[1000];

    fflush(stdin);
    system("cls");
    screenheader();
    printf("\n\n\nEnter your complaints / Suggestions: \n\n  ");
    gets(complaint);

    fprintf(fptr1," %s \n\n________________________________________\n\n", complaint);
    fclose(fptr1);
}

void intro()
{
   system("color 0f1");
   printf("\n\n\n\n\n\t\t\n\n\t\t\t\t\t\t      @@_@_ \t\t\n\n\t\t\t\t\t\t          `'*'`  Welcome to VOID Hotels\n\n\t\t\t\t\t\t\t\t\t\t\t`'*'`\n\t\t\t\t\t\t\t  \t\t\t\t\t-@@_@\n\n");
   printf("\n\n\n\n\n\tPress any character to continue . . .");
   getch();
}

void getavail()
{
   for(i=0;i<30;i++)
   {
        if(r_no[i]==1 || r_no[i]==2 || r_no[i]==3 || r_no[i]==4 || r_no[i]==5)
        {
            strcpy(r_type[i],"General");
            r_charge[i]=1000;

            if(strcmp(r_cust[i],"N.A")==0)
            {
                r_avail[i]='Y';
                r_per[i]=0;
            }
        }

        else if(r_no[i]==6 || r_no[i]==7 || r_no[i]==8 || r_no[i]==9 || r_no[i]==10)
        {
            strcpy(r_type[i],"Couple");
            r_charge[i]=4500;

            if(strcmp(r_cust[i],"N.A")==0)
            {
                r_avail[i]='Y';
                r_per[i]=0;
            }
        }

        else if(r_no[i]==11 || r_no[i]==12 || r_no[i]==13 || r_no[i]==14 || r_no[i]==15)
        {
            strcpy(r_type[i],"Deluxe");
            r_charge[i]=2500;

            if(strcmp(r_cust[i],"N.A")==0)
            {
                r_avail[i]='Y';
                r_per[i]=0;
            }
        }

        else if(r_no[i]==16 || r_no[i]==17|| r_no[i]==18 || r_no[i]==19 || r_no[i]==20)
        {
            strcpy(r_type[i],"Spl Deluxe");
            r_charge[i]=5000;

            if(strcmp(r_cust[i],"N.A")==0)
            {
                r_avail[i]='Y';
                r_per[i]=0;
            }
        }

        else if(r_no[i]==21 || r_no[i]==22 || r_no[i]==23 || r_no[i]==24 || r_no[i]==25)
        {
            strcpy(r_type[i],"Suite");
            r_charge[i]=7500;

            if(strcmp(r_cust[i],"N.A")==0)
            {
                r_avail[i]='Y';
                r_per[i]=0;
            }
        }

        else if(r_no[i]==26 || r_no[i]==27 || r_no[i]==28 || r_no[i]==29 || r_no[i]==30)
        {
            strcpy(r_type[i],"Dormitory");
            r_charge[i]=750;

            if(strcmp(r_cust[i],"N.A")==0)
            {
                r_avail[i]='Y';
                r_per[i]=0;
            }
        }
     }
 }

void putavail()
{
    system("cls");
    screenheader();
    printf("\n                          ROOM AVAILABILITY");
    printf("\n\n");
    printf("\nThese are the booked rooms :\n\n");

    FILE *bokd;
    bokd = fopen("Booked.txt","r");

    int e[30], y = 0;
    while (!feof(bokd))
    {
        fscanf(bokd,"%d ",&e[y]);
        printf ("\t%d", e[y]);
        y++;
    }

    fclose(bokd);


 }

void features()
{
   int typ;
   system("cls");

    screenheader();
    printf("\n\n\n\n");
    printf("\n\t\t\t\t    ************************** ||  VOID Hotel || **************************  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                     Choose room type :                              *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                    (1 - 5)   ->  General                            *  ");
    printf("\n\t\t\t\t    *                    (6 - 10)  ->  Couple                             *  ");
    printf("\n\t\t\t\t    *                    (11 - 15) ->  Deluxe                             *  ");
    printf("\n\t\t\t\t    *                    (16 - 20) ->  Spl_Deluxe                         *  ");
    printf("\n\t\t\t\t    *                    (21 - 25) ->  Suite                              *  ");
    printf("\n\t\t\t\t    *                    (26 - 30) ->  Dormitory                           *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *************  ||  Come in as guests. Leave as family.  ||  ***********  ");

   printf("\n\nEnter you choice : ");
   scanf("%d",&typ);

   if(typ>30)
   {
       printf("\nWrong choice!! Choose a number between 1-30:");
       features();
   }

   switch(typ)
   {

     case 1:
     case 2:
     case 3:
     case 4:
     case 5:

     system("cls");
     screenheader();
     printf("\n Room Type no   ------------>  1\n");
     printf("\n                      FEATURES OF THIS ROOM                       ");
     printf("\n ___________________________________________________________________");

     printf("\n\n Room Type            ---->  General");
     printf("\n\n Room charges         ---->  Rs.1000 per day");
     printf("\n\n 1. Bed               ---->  2 (Normal)");
     printf("\n\n 2.Capacity           ---->  3");
     printf("\n\n 3.Balcony            ---->  No");

     printf("\n_________________________________________________");
     printf("\n\n            ADDITIONAL FEATURES                  ");
     printf("\n_________________________________________________");
     printf("\n\n 1.A/C                ---->  No ");
     printf("\n\n 2.Geyser             ---->  Yes ");
     printf("\n\n 3.TV                 ---->  Yes ");
     printf("\n\n 4.Free Breakfast     ---->  No ");
     printf("\n_________________________________________________");
     printf("\n\n ****** NOTE :- Extra bed will cost Rs.50 per bed ****** ");
     break;

     case 6:
     case 7:
     case 8:
     case 9:
     case 10:

     system("cls");
     screenheader();
     printf("\n Room Type no  ------------>  2\n");
     printf("\n                      FEATURES OF THIS ROOM                       ");
     printf("\n ___________________________________________________________________");

     printf("\n\n Room Type            ---->  Couple");
     printf("\n\n Room charges         ---->  Rs.4500 per day");
     printf("\n\n 1. Bed               ---->  1 ( King size )");
     printf("\n\n 2.Capacity           ---->  5");
     printf("\n\n 3.Balcony            ---->  Yes");

     printf("\n_________________________________________________");
     printf("\n\n            ADDITIONAL FEATURES                  ");
     printf("\n_________________________________________________");
     printf("\n\n 1.A/C                ---->  Yes ");
     printf("\n\n 2.Geyser             ---->  Yes ");
     printf("\n\n 3.TV                 ---->  Yes ");
     printf("\n\n 4.Free Breakfast     ---->  Yes ");
     printf("\n_________________________________________________");
     printf("\n\n ****** NOTE :- Extra bed will cost Rs.750 per bed ****** ");
    break;

    case 11:
    case 12:
    case 13:
    case 14:
    case 15:

    system("cls");
    screenheader();
    printf("\n Room Type no   ------------>  3\n");
    printf("\n                      FEATURES OF THIS ROOM                       ");
    printf("\n ___________________________________________________________________");

    printf("\n\n Room Type            ---->  Deluxe");
    printf("\n\n Room charges         ---->  Rs.2500 per day");
    printf("\n\n 1. Bed               ---->  3 (Queen Size)");
    printf("\n\n 2.Capacity           ---->  6");
    printf("\n\n 3.Balcony            ---->  Yes");
    printf("\n_________________________________________________");
    printf("\n\n            ADDITIONAL FEATURES                  ");
    printf("\n_________________________________________________");
    printf("\n\n 1.A/C                ---->  Yes ");
    printf("\n\n 2.Geyser             ---->  Yes ");
    printf("\n\n 3.TV                 ---->  Yes ");
    printf("\n\n 4.Free Breakfast     ---->  Yes ");
    printf("\n_________________________________________________");
    printf("\n\n ****** NOTE :- Extra bed will cost Rs.150 per bed ****** ");
    break;

    case 16:
    case 17:
    case 18:
    case 19:
    case 20:

    system("cls");
    screenheader();
    printf("\n Room Type no.   ------------>  4\n");
    printf("\n                      FEATURES OF THIS ROOM                       ");
    printf("\n ___________________________________________________________________");
    printf("\n\n Room Type            ---->  Spl Deluxe");
    printf("\n\n Room charges         ---->  Rs.5000 per day");
    printf("\n\n 1. Bed               ---->  2 (King, Queen sizes)");
    printf("\n\n 2.Capacity           ---->  5");
    printf("\n\n 3.Balcony            ---->  Yes");

    printf("\n_________________________________________________");
    printf("\n\n            ADDITIONAL FEATURES                  ");
    printf("\n_________________________________________________");
    printf("\n\n 1.A/C                ---->  Yes ");
    printf("\n\n 2.Geyser             ---->  Yes ");
    printf("\n\n 3.TV                 ---->  Yes ");
    printf("\n\n 4.Free Breakfast     ---->  Yes ");
    printf("\n_________________________________________________");
    printf("\n\n ****** NOTE :- Extra bed will cost Rs.250 per bed ****** ");
    break;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:

    system("cls");
    screenheader();
    printf("\n Room Type no  ------------>  5\n");
    printf("\n                      FEATURES OF THIS ROOM                       ");
    printf("\n ___________________________________________________________________");
    printf("\n\n Room Type            ---->  Suite");
    printf("\n\n Room charges         ---->  Rs.7500 per day");
    printf("\n\n 1. Bed               ---->  3 (King Size)");
    printf("\n\n 2.Capacity           ---->  10");
    printf("\n\n 3.Balcony            ---->  Yes");
    printf("\n\n 4.Free Breakfast     ---->  Yes ");
    printf("\n_________________________________________________");
    printf("\n\n            ADDITIONAL FEATURES                  ");
    printf("\n_________________________________________________");
    printf("\n\n 1.A/C                ---->  Yes ");
    printf("\n\n 2.Geyser             ---->  Yes ");
    printf("\n\n 3.TV                 ---->  Yes ");
    printf("\n_________________________________________________");
    printf("\n\n ****** NOTE :- Extra bed will cost Rs.500 per bed ****** ");
    break;

    case 26:
    case 27:
    case 28:
    case 29:
    case 30:

    system("cls");
    screenheader();
    printf("\n Room Type no   ------------>  6\n");
    printf("\n                      FEATURES OF THIS ROOM                       ");
    printf("\n ___________________________________________________________________");
    printf("\n\n Room Type            ---->  Dormitory");
    printf("\n\n Room charges         ---->  Rs.750 per day");
    printf("\n\n 1. Bed               ---->  40");
    printf("\n\n 2.Capacity           ---->  40");
    printf("\n\n 3.Balcony            ---->  No");

    printf("\n_________________________________________________");
    printf("\n\n            ADDITIONAL FEATURES                  ");
    printf("\n_________________________________________________");
    printf("\n\n 1.A/C                ---->  No ");
    printf("\n\n 2.Geyser             ---->  Yes ");
    printf("\n\n 3.TV                 ---->  Yes ");
    printf("\n\n 4.Free Breakfast     ---->  No ");
    printf("\n_________________________________________________");
    printf("\n\n ****** NOTE :- Extra bed will cost Rs.50 per bed ****** ");
    break;

     }
}

void booking()
{

    int checkr, num = 0, ch, room_blah;
    FILE *cust, *bokd, *booked, *namef;
    cust   = fopen("Customer.txt","ab");
    bokd   = fopen("Booked.txt","r");
    namef   = fopen("Name_list.txt","ab");

    if ( cust == NULL )
    {
        puts ( "Cannot open file" ) ;
    }

    system("cls");
    screenheader();
    printf("\n\n\n\n");
    printf("\n\t\t\t\t    ************************** ||  VOID Hotel || **************************  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                             Room types                              *  ");
    printf("\n\t\t\t\t    *                            ____________                             *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                      (1 - 5)   ->  General                          *  ");
    printf("\n\t\t\t\t    *                      (6 - 10)  ->  Couple                           *  ");
    printf("\n\t\t\t\t    *                      (11 - 15) ->  Deluxe                           *  ");
    printf("\n\t\t\t\t    *                      (16 - 20) ->  Spl_Deluxe                       *  ");
    printf("\n\t\t\t\t    *                      (21 - 25) ->  Suite                            *  ");
    printf("\n\t\t\t\t    *                      (26 - 30) ->  Dormitory                        *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *                                                                     *  ");
    printf("\n\t\t\t\t    *************  ||  Come in as guests. Leave as family.  ||  ***********  ");
    //sleep(3);

    again : system("cls");
    screenheader();
    getavail();

    printf("\n\n\n Enter the room number in which you want to stay : ");
    scanf("%d",&room);

    ch = room + 48;

    num = 0;

    while ((checkr=getc(bokd))!=EOF)
    {
        if(checkr == ch)
        {   num++;  }
    }

        if(num >= 1)
        {
            printf("\n ERROR : Room cannot be allocated …");
            printf("\n Room is not available…");
            getch();
            fclose(bokd);

        }

        else if(num == 0)
        {


            time_t timea;
            time(&timea);

            fflush(stdin);
            printf("\n Enter Name of Customer :");
            gets(r_cust[room-1]);

            printf("\n Enter city name :");
            gets(c_city[room-1]);

            printf("\n Enter nationality :");
            gets(c_nat[room-1]);

            printf("\n For how many days the customer wants the room :");
            scanf("%d",&r_per[room-1]);

            printf("\n Enter no. of members in your group :");
            scanf("%d",&c_mem[room-1]);

            if(room==1 || room==2 || room==3 || room==4 || room==5 || room==6 || room==7 || room==8 || room==9 || room==10 || room==15 || room==16 || room==17 || room==18 || room==19 || room==20 )

            if((c_mem[room-1]<1)||(c_mem[room-1]>5))
            {
                printf("\n %d members cannot be bookingd this room. Allowed members are between 1-5.",c_mem[room-1]);
                getch();
                goto again;
            }

            else if(room==11 || room==12 || room==13 || room==14 || room==15)

            if((c_mem[room-1]<1)||(c_mem[room-1]>6))
            {
                printf("\n %d members cannot be bookingd this room. Allowed members are between 1-2.",c_mem[room-1]);
                getch();
                goto again;
            }

            else if(room==21 || room==22 || room==23 || room==24 || room==25)

            if((c_mem[room-1]<1)||(c_mem[room-1]>10))
            {
                printf("\n %d members cannot be bookingd this room. Allowed members are between 1-2.",c_mem[room-1]);
                getch();
                goto again;
            }

            else if(room==25 || room==26 || room==27 || room==28 || room==29 || room==30)

            if((c_mem[room-1]<1)||(c_mem[room-1]>40))
            {
                printf("\n %d members cannot be bookingd this room. Allowed members are between 1-2.",c_mem[room-1]);
                getch();
                goto again;
            }

            printf("\n  Room is allocated to ");
            puts(r_cust[room-1]);
            printf("\b for %d day(s).",r_per[room-1]);
            r_avail[room-1]='N';

            bokd   = fopen("Booked.txt","a+");


            fprintf(cust,"%s    %d    %s    %s    %d    %d    %s\n", r_cust[room-1],room, c_city[room-1], c_nat[room-1], r_per[room-1], c_mem[room-1], ctime(&timea));

            fprintf(bokd,"%d\n", room);

            fprintf(namef,"%s\n", r_cust[room-1]);

            fclose(cust);
            fclose(bokd);
            fclose(namef);

            getch();
        }

}

void deallocate()
{
    system("cls");
    screenheader();

    int checkc, numc = 0, chc, room, i = 0, numnum, chnb, checkn;
    char  checkout_name[50], chn[50], chnblah[50];

    char nameblah[20],cityblah[15], nationality[15], blll[40];
    int roomblah, perblah, membersblah;


    FILE *cust, *tmp, *bokd, *namef, *tmp2, *tmp3;
    cust  = fopen("Customer.txt","r");
    bokd  = fopen("Booked.txt","r");
    namef = fopen("Name_list.txt","r");
    tmp   = fopen("tmp.txt","w");
    tmp2  = fopen("tmp2.txt","w");
    tmp3  = fopen("tmp3.txt","w");

    printf("\n\n\nEnter the room number : ");
    scanf("%d",&room);

    while (!feof(bokd))
    {
        fscanf(bokd,"%d ", &checkc);
        if(checkc == room)
        {   numc++;  }
    }

    if(numc == 0)
    {
        printf("\nThe room is empty……..");
        printf("\n or Invalid Room number……..");
        getch();
        deallocate();
    }

    else if (numc >= 1)
    {
        printf("\nThe name of the person staying in the room (Pease dont leave any space in between you name) :");
        fflush(stdin);
        gets(checkout_name);

        printf("\nRoom number %d is deallocated...",room);
        sleep(1);
        strcpy(r_cust[room-1],"N.A");

        fclose(cust);

        cust = fopen("Customer.txt","a");

        time_t timec;
        time(&timec);

        char dayc[50], timech[50], monthc[50], bell[50];
        int datec, yearc;
        fclose(cust);

        cust = fopen("Customer.txt","r");

        int x = 0;

        while(!feof(namef))
    {
        fscanf(namef,"%s ", chn);

        fscanf(cust,"%s    %d    %s    %s    %d    %d    %s    %s    %d    %s    %d\n", nameblah,&roomblah, &cityblah, &nationality, &perblah, &membersblah, dayc, monthc, &datec, &timech, &yearc );

        if(strcmp(checkout_name,nameblah) != 0)
        {
            fprintf(tmp,"%s    %d    %s    %s    %d    %d    %s   %s  %d   %s  %d\n\n", nameblah, roomblah, cityblah, nationality, perblah, membersblah, dayc, monthc, datec, timech, yearc);
        }

        if(strcmp(checkout_name, chn) != 0)
        {
            fprintf(tmp2,"%s\n", chn);
        }




    }

        chnb = room;
        rewind(bokd);

        while (!feof(bokd))
        {
            fscanf(bokd,"%d ", &checkn);

            if(checkn != chnb)
            fprintf(tmp3,"%d\n", checkn);

        }

        printf("Room checked out!");
        sleep(2);

        fclose(bokd);
        fclose(cust);
        fclose(namef);
        fclose(tmp);
        fclose(tmp2);
        fclose(tmp3);

        remove("Booked.txt");
        remove("Customer.txt");
        remove("Name_list.txt");
        rename("tmp.txt","Customer.txt");
        rename("tmp2.txt","Name_list.txt");
        rename("tmp3.txt","Booked.txt");

        system("cls");

        printf("\n\n\n\n\n\t\t\tThank you for staying in this hotel");
        sleep(2);

        printf("\n\n\n\n\n\t\t\tPress any character to proceed to payment . . . ");
        getch();
        Bill_Payment();

    }

 }


void customer()
{
    int j, checkdc, chndc, roomac, checkacdc;
    system("cls");
    screenheader();

        printf("\n\n\nEnter the room number :");
        scanf("%d",&roomac);
        j=strcmp(r_cust[room-1],"N.A");

        FILE *cust, *bokd;
        cust  = fopen("Customer.txt","r");
        bokd  = fopen("Booked.txt","r");

        if (cust == NULL)
        {
            printf("Cannot open file \n");
            exit(1);
        }

        char nameblahc[20],cityblahc[15], nationalityc[15], blll[40];
        int roomblahc, perblahc, membersblahc;

        char daycc[50], timechc[50], monthcc[50];
        int datecc, yearcc, count1 = 0;

        while (!feof(bokd))
        {
            fscanf(bokd,"%d ", &checkdc);


            if(roomac == checkdc)
            {
                count1++;
                checkacdc = checkdc;
            }
        }

        rewind(cust);

       if(count1 == 1)
            {
                 while(!feof(cust))
        {



                fscanf(cust,"%s    %d    %s    %s    %d    %d    %s    %s    %d    %s    %d\n", nameblahc,&roomblahc, &cityblahc, &nationalityc, &perblahc, &membersblahc, daycc, monthcc, &datecc, &timechc, &yearcc );

                if(checkacdc == roomblahc)
                {
                    printf("\n\nName :        %s\nRoom :        %d\nCity :        %s\nNationality : %s\nCheck in :    %s    %s    %d    %s    %d\n", nameblahc,roomblahc, cityblahc, nationalityc, daycc, monthcc, datecc, timechc, yearcc );
                    break;
                }

            }

            }

            else if(count1 == 0)
            printf("\n\nInvalid Room Number ! This room is not occupied.");

            else
            printf("\n\nSorry we are facing some issue on our side. Sorry for the inconvenience");




        fclose(cust);
        fclose(bokd);

    return 0;
}

void Bill_Payment()
{
    int k,i,cash,changer,noofdays, total;

    redo:

    system("cls");
    system("color 3F");
    printf("\n\n\n\t\t\tEnter your room number : ");
    scanf("%d",&k);
    printf("\n\n\n\t\t\tEnter the no. of days you have stayed : ");
    scanf("%d",&noofdays);

    total = price[k-1] * noofdays;

    printf("\t\t\tYour Total Bill is = %d", total);
    work:
            printf("\n\t\t\tPay your bill: ");
            scanf("%d",&cash);
    changer = cash-total;
    if(changer == 0)
    {
        printf("\n\t\tThanks for your payment. Have a great day!\n");
    }
    else if (changer<0)
    {
        system("cls");
        printf("\n\t\t\tAmount is not sufficient. :(\n\t\tPlease pay the fair price of your bill\n");
        goto work;
    }
    else
    {
        printf("\n\n\n\t\tHere is your change : (%d - %d) = %d Rs.\n\t\t  ",cash,total,changer);

            for(i=0;i<19;i++)
            {
                printf("_");
            }
            if(changer>=1000 )
                {printf("\n\t\t1000 Rs. note(s) = %d\n",changer/1000);
                changer=changer%1000;}
            if(changer>=500 && changer<1000)
            {printf("\n\t\t 500 Rs. note(s) = %d\n",changer/500);
            changer=changer%500;}
            if(changer>=100 && changer<500)
            {printf("\n\t\t 100 Rs. note(s) = %d\n",changer/100);
            changer= changer%100;}
            if(changer>=50 && changer<100)
            {printf("\n\t\t  50 Rs. note(s) = %d\n",changer/50);
            changer=changer%50;}
             if(changer>=10 && changer<50)
            {printf("\n\t\t  10 Rs. note(s) = %d\n",changer/10);
            changer=changer%10;}
            if(changer>=5 && changer<10)
            {printf("\n\t\t   5 Rs. note(s) = %d\n",changer/5);
            changer=changer%5;}
            if(changer>=2 && changer<5)
            {printf("\n\t\t   2 Rs. note(s) = %d\n",changer/2);
            changer=changer%2;}
            if(changer>=1 && changer<2)
            {printf("\n\t\t   1 Rs. note(s) = %d\n",changer/1);
            changer=changer%1;}

            printf("\t\t  ");
            for(i=0;i<19;i++)
            {
                printf("_");
            }

        printf("\n\n\n\n\n\t\t\tThanks for your payment.\n\t\t\t    Have a great day!\n",changer);



    }

}





 // REFERENCES :

 // Book    - Let us C
 // Book    - Programming in ANSI
 // Book    - C How to Program
 // Website - GeekforGeeks
 // Website - TutorialsPoint
 // Website - CodeforWin
 // MAM     - Slides
 // MAM     - Class Notes



