

#include <stdio.h>
#include <windows.h>
#include<time.h>

int token = 0, tokens[100], payment_counter=0;

void exitr();

void exitr()
{
        system("cls");
        printf("\n\n\n\n\n\t\t       @@_@_\n\t\t         `'*'`  VOID Cafe\n\t\t\t\t\t`'*'`-@@_@\n\n");
        printf("\n\n\n\t\t\tThis session order recieved : %d\n\n",token);
        printf("\t\t\tThis session bill paid      : %d\n\n",payment_counter);
        if(payment_counter<token)
        {printf("\t\t\t\tYet to pay          : %d\n\n\n\n\n\n",token-payment_counter);}
        else
        {
            printf("\n\n\n\n\n\n");
        }
}

int main_page()
{
    int i;
    system("color 0B");

    system("cls");
    printf("\n\n\n\n\t\t\t************ ''  Welcome to VOID Cafe  '' ************\n");
    printf("\n\n\n\n\t\t\t              Quality food. Serves good. \n\n ");
    printf("\t\t\t\t ");
    for (i=0;i<35;i++)
     {
        printf("~");
     }
    printf("\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    Select any of them -         $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    1. New Order.                $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    2. Bill Payment.             $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    3. Exit.                     $");
    printf("\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $                                 $\n");

    printf("\t\t\t\t ");
    for (i=0;i<36;i++)
     {
        printf("~");
     }
    printf("\n\n\n\n                         Enter Your Choice: ");
    int n;
    scanf("%d",&n);
    return n;
}

int menu_order()
{
    int i;
    system("cls");

    printf("\n\n\t\t\t\t ");
    for (i=0;i<36;i++)
     {
        printf("~");
     }
    printf("\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    Select any of them -         $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    1. Breakfast                 $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    2. Brunch                    $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    3. Lunch                     $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    4. Dinner                    $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $    5. Ice cream and Milkshakes  $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t                 $                                 $\n");
    printf("\t\t\t\t ");
    for (i=0;i<36;i++)
     {
        printf("~");
     }
    printf("\n\n\n\n                         Enter Your Choice: ");
    int x;
    scanf("%d",&x);
    return x;
}




int breakfast()
{

    int ID[20], decision, qty[10], Bill[10], counter=0;
    work:
    system("cls");
    printf("\n");
    printf("\n\t\t\t\t\xB3 FOOD MENU \xB3\n\t\t\t\t  ---------\n\n");
    printf("\t\t 1.  Dosa ........................ 15/=\n");
    printf("\t\t 2.  Rava Dosa ................... 40/=\n");
    printf("\t\t 3.  Onion Roast ................. 35/=\n");
    printf("\t\t 4.  Ghee Roast .................. 30/=\n");
    printf("\t\t 5.  Panner Roast ................ 45/=\n");
    printf("\t\t 6.  Idli ........................ 10/=\n");
    printf("\t\t 7.  Podi idli ................... 35/=\n");
    printf("\t\t 8.  Sambar Idli ................. 20/=\n");
    printf("\t\t 9.  Uthappam .................... 25/=\n");
    printf("\t\t 10. Onion Uthappam   ............ 35/=\n");
    printf("\t\t 11. Poori   ..................... 25/=\n");
    printf("\t\t 12. Pongal   .................... 25/=\n");
    printf("\t\t 13. Vadai   ..................... 10/=\n");
    printf("\t\t 14. Sambar Vadai   .............. 25/=\n");
    printf("\t\t 15. Coffee / Tea   .............. 15/=\n");

    printf("\n\n\tOrder your dish: (Enter 0 to finish order)\n");
    for(;;)
    {
        counter++;
        printf("\t Enter Food ID: ");
        scanf("%d",&ID[counter-1]);
        if(ID[counter-1]==0)
        {
            break;
        }
        printf("\t Enter Quantity: ");
        scanf("%d",&qty[counter-1]);

    }
    system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\t\tThanks for your order. We are getting ready the dishes.\n\t\tUntil then, Enjoy !\n\n\n\n\n\t\t\t  <Enter 1 to check your bill>\n\t\t\tEnter your choice: ");

    scanf("%d",&decision);
    printf("\n\n\n\n\n\n\n\n");

    counter--;

    if(decision==1)
    {
        the_Bill(ID,qty,counter);
    }

    else if(decision==2)
    {
       goto work;
    }

    else if(decision==3)
    {
        main();
    }

}


int brunch()
{

    int ID[20], decision, qty[10], Bill[10], counter=0;
    work:
    system("cls");
    printf("\n");
    printf("\n\t\t\t\t\xB3 FOOD MENU \xB3\n\t\t\t\t  ---------\n\n");
    printf("\t\t 16. Dosa .................................. 15/=\n");
    printf("\t\t 17. Onion Roast ........................... 35/=\n");
    printf("\t\t 18. Ghee Roast ............................ 30/=\n");
    printf("\t\t 19. Panner Roast .......................... 45/=\n");
    printf("\t\t 20. Idli .................................. 10/=\n");
    printf("\t\t 21. Uthappam .............................. 25/=\n");
    printf("\t\t 22. Onion Uthappam  ....................... 35/=\n");
    printf("\t\t 23. Poori   ............................... 25/=\n");
    printf("\t\t 24. Pongal   .............................. 25/=\n");
    printf("\t\t 25. Vadai   ............................... 10/=\n");
    printf("\t\t 26. Sambar Vadai   ........................ 25/=\n");
    printf("\t\t 27. Coffee / Tea   ........................ 15/=\n");
    printf("\t\t 28. Apple / Orange / Mosambi Juice......... 20/=\n");
    printf("\t\t 29. Muskmelon / Mango / Sugarcane Juice.... 30/=\n");
    printf("\t\t 30. Biscuit   ............................. 5/=\n");

    printf("\n\n\tOrder your dish: (Enter 0 to finish order)\n");
    for(;;)
    {
        counter++;
        printf("\t Enter Food ID: ");
        scanf("%d",&ID[counter-1]);
        if(ID[counter-1]==0)
        {
            break;
        }
        printf("\t Enter Quantity: ");
        scanf("%d",&qty[counter-1]);

    }
    system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\t\tThanks for your order. We are getting ready the dishes.\n\t\tUntil then, Enjoy !\n\n\n\n\n\t\t\t  <Enter 1 to check your bill>\n\t\t\tEnter your choice: ");

    scanf("%d",&decision);
    printf("\n\n\n\n\n\n\n\n");

    counter--;

    if(decision==1)
    {
        the_Bill(ID,qty,counter);
    }

    else if(decision==2)
    {
       goto work;
    }

    else if(decision==3)
    {
        main();
    }

}

int lunch()
{

    int ID[20], decision, qty[10], Bill[10], counter=0;
    work:
    system("cls");
    printf("\n");
    printf("\n\t\t\t\t\xB3 FOOD MENU \xB3\n\t\t\t\t  ---------\n\n");
    printf("\t\t 31. Full meals ..................... 120/=\n");
    printf("\t\t 32. Mini meals ..................... 50/=\n");
    printf("\t\t 33. Sambar rice .................... 35/=\n");
    printf("\t\t 34. Tomato rice .................... 35/=\n");
    printf("\t\t 35. Curd rice ...................... 35/=\n");
    printf("\t\t 36. Chicken biriyani ............... 65/=\n");
    printf("\t\t 37. Mutton biriyani ................ 70/=\n");
    printf("\t\t 38. Veg biriyani ................... 50/=\n");
    printf("\t\t 39. Chilly chicken ................. 55/=\n");
    printf("\t\t 40. Chicken 65   ................... 60/=\n");
    printf("\t\t 41. Parotta   ...................... 15/=\n");
    printf("\t\t 42. Kothu Parotta   ................ 40/=\n");
    printf("\t\t 43. Panner Parotta   ............... 50/=\n");
    printf("\t\t 44. Sambar Vadai   ................. 25/=\n");
    printf("\t\t 45. Curd Vadai  .................... 25/=\n");
    printf("\n\n\tOrder your dish: (Enter 0 to finish order)\n");
    for(;;)
    {
        counter++;
        printf("\t Enter Food ID: ");
        scanf("%d",&ID[counter-1]);
        if(ID[counter-1]==0)
        {
            break;
        }
        printf("\t Enter Quantity: ");
        scanf("%d",&qty[counter-1]);

    }
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\tThanks for your order. We are getting the dishes ready.\n\t\tUntil then, Enjoy !\n\n\n\n\n\t\t\t  <Enter 1 to check your bill>\n\t\t\tEnter your choice: ");

    scanf("%d",&decision);
    printf("\n\n\n\n\n\n\n\n");

    counter--;

    if(decision==1)
    {
        the_Bill(ID,qty,counter);
    }

    else if(decision==2)
    {
       goto work;
    }

    else if(decision==3)
    {
        main();
    }

}



int dinner()
{

    int ID[10], decision, qty[10], Bill[10], counter=0;
    work:
    system("cls");
    printf("\n");
    printf("\n\t\t\t\t\xB3 FOOD MENU \xB3\n\t\t\t\t  ---------\n\n");
    printf("\t\t 46. Parotta ....................... 15/=\t  \n");
    printf("\t\t 47. Chappati ...................... 10/=\n");
    printf("\t\t 48. Romali Roti ................... 35/=\t \n");
    printf("\t\t 49. Butter Naan ................... 35/=\t \n");
    printf("\t\t 50. Dosa .......................... 15/=\n");
    printf("\t\t 51. Ghee Roast .................... 35/=\n");
    printf("\t\t 52. Onion Roast ................... 30/=\t  \n");
    printf("\t\t 53. Panner Roast .................. 45/=\t \n");
    printf("\t\t 54. Poori ......................... 25/=\n");
    printf("\t\t 55. Chicken Chettinad Gravy ........110/=\n");
    printf("\t\t 56. Butter Chicken    ............. 110/=\n");
    printf("\t\t 57. Panner Butter Masala  ......... 100/=\n");
    printf("\t\t 58. Kadai Panner  ................. 125/=\n");
    printf("\t\t 59. Gobi Manchurian ............... 95/=\n");
    printf("\t\t 60. Chicken Mugalai ............... 125/=\n");
    printf("\n\n\tOrder your dish: (Enter 0 to finish order)\n");
    for(;;)
    {
        counter++;
        printf("\t Enter Food ID: ");
        scanf("%d",&ID[counter-1]);
        if(ID[counter-1]==0)
        {
            break;
        }
        printf("\t Enter Quantity: ");
        scanf("%d",&qty[counter-1]);

    }
    system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\t\tThanks for your order. We are getting the dishes ready.\n\t\tUntil then, Enjoy !\n\n\n\n\n\t\t\t  <Enter 1 to check your bill>\n\t\t\tEnter your choice: ");

    scanf("%d",&decision);
    printf("\n\n\n\n\n\n\n\n");

    counter--;

    if(decision==1)
    {
        the_Bill(ID,qty,counter);
    }

    else if(decision==2)
    {
       goto work;
    }

    else if(decision==3)
    {
        main();
    }

}

int ic_m()
{

    int ID[20], decision, qty[10], Bill[10], counter=0;
    work:
    system("cls");
    printf("\n");
    printf("\n\t\t\t\t\xB3 FOOD MENU \xB3\n\t\t\t\t  ---------\n\n");
    printf("\t\t 61. Vanilla....................... 30/=\n");
    printf("\t\t 62. Chocolate .................... 30/=\n");
    printf("\t\t 63. Butterscotch ................. 35/=\n");
    printf("\t\t 64. Strawberry ................... 90/=\n");
    printf("\t\t 65. Pista ........................ 90/=\n");
    printf("\t\t 66. Vanilla Milkshake ............ 65/=\n");
    printf("\t\t 67. Chocolate Milkshake .......... 65/=\n");
    printf("\t\t 68. Oreo Milkshake ............... 100/=\n");
    printf("\t\t 69. Kitkat Milkshake ............. 100/=\n");
    printf("\t\t 70. Rose milk   .................. 45/=\n");
    printf("\t\t 71. Strawberry Milkshake  ........ 25/=\n");
    printf("\t\t 72. Cassata   .................... 50/=\n");
    printf("\t\t 73. Kulfi   ...................... 25/=\n");
    printf("\t\t 74. Jigarthanda   ................ 50/=\n");
    printf("\t\t 75. Sundae  ...................... 100/=\n");
    printf("\n\n\tOrder your dish: (Enter 0 to finish order)\n");
    for(;;)
    {
        counter++;
        printf("\t Enter Food ID: ");
        scanf("%d",&ID[counter-1]);
        if(ID[counter-1]==0)
        {
            break;
        }
        printf("\t Enter Quantity: ");
        scanf("%d",&qty[counter-1]);

    }
    system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\t\tThanks for your order. We are getting the dishes ready.\n\t\tUntil then, Enjoy !\n\n\n\n\n\t\t\t  <Enter 1 to check your bill>\n\t\t\tEnter your choice: ");

    scanf("%d",&decision);
    printf("\n\n\n\n\n\n\n\n");

    counter--;

    if(decision==1)
    {
        the_Bill(ID,qty,counter);
    }

    else if(decision==2)
    {
       goto work;
    }

    else if(decision==3)
    {
        main();
    }

}



void the_Bill(int ID[],int qty[],int counter)
{

    int n;
    system("cls");
    system("color B0");

    int i,sum=0;
    int costs[80]={15, 40, 35, 30, 45, 10, 35, 20, 25, 35, 25, 25, 10, 25, 15, 15, 35, 30, 45, 10, 25, 35, 25, 25, 10, 25, 15, 20, 30, 5, 120, 50, 35, 35, 35, 65, 70, 50, 55, 60, 15, 40, 50, 25, 25, 15, 10, 35, 35, 15, 35, 30, 45, 25, 110, 110, 100, 125, 95, 125, 30, 30, 35, 90, 90, 65, 65, 100, 100, 45, 25, 50, 25, 50, 100};
    char items[80][28]={"Dosa","Rava Dosa","Onion Roast","Ghee Roast","Panner Roast","Idli","Podi Idli","Sambar Idli","Uthapam","Onion Uthappam","Poori","Pongal","Vadai","Sambar Vadai","Coffee / Tea","Dosa","Onion Roast","Ghee Roast","Panner Roast","Idli","Uthapam","Onion Uthappam","Poori","Pongal","Vadai","Sambar Vadai","Coffee / Tea","Juice 1","Juice 2","Biscuit","Full meals","Mini meals","Sambar rice","Tomato rice","Curd rice","Chicken Biriyani","Mutton Biriyani","Veg Biriyani","Chilly Chicken","Chicken 65","Parotta","Kothu Parotta","Panner Parotta","Sambar Vadai","Curd Vadai","Parotta","Chappati","Romali Roti","Butter Naan","Dosa","Ghee Roast","Onion Roast","Panner Roast","Poori","Chicken Chettinad Gravy","Butter Chicken","Panner Butter Masala","Kadai Panner","Gobi Manchurian","Chicken Mugalai","Vanilla","Chocolate","Butterscotch","Strawberry","Pista","Vanilla Milkshake","Chocolate Milkshake","Oreo Milkshake","Kitkat Milkshake","Rose milk","Strawberry Milkshake","Cassata","Kulfi","Jigarthanda","Sundae"};
    printf("\n\nYour Bill:\n\n\n\t\tItem(s)\t\t     Quantity\t\t    Cost\n\n\n\n");

    for(i=0;i<counter;i++)
    {
        printf("\t%2d. %-16s ________\t%-5d piece(s) ____ %7d\n",i+1,items[ID[i]-1],qty[i],qty[i]*costs[ID[i]-1]);
        sum=sum+(costs[ID[i]-1]*qty[i]);
    }

    printf("\n\n\n\n\t\t\t\t\t\t\t  Total = %d\n\n\n\n",sum);
    token ++;
    tokens[token]=sum;
    printf("\tYour token number is %d. Use this token while paying the bill.\n\n\n\n\n\t\t\t<enter (1) to give another order>\n\n\t\t\t<enter (2) to pay the bill>\n\n\t\n\t\t\tEnter your choice: ",token);
    scanf("%d",&n);
    printf("\n\n\n");
    if(n==1)
    {
        mainr();
    }
    else if (n==2)
    {
        r_Bill_Payment();
    }

}




void r_Bill_Payment()
{

    int k,i,cash,changer,n;
    redo:
    payment_counter++;
    system("cls");
    system("color 3F");
    printf("\n\n\n\t\t\tEnter your token number: ");
    scanf("%d",&k);
    printf("\t\t\tYour Total Bill is = %d",tokens[k]);
    work:
            printf("\n\t\t\tPay your bill: ");
            scanf("%d",&cash);
    changer = cash-tokens[k];
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
        printf("\n\n\n\t\tHere is your change : (%d - %d) = %d Rs.\n\t\t  ",cash,tokens[k],changer);

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
    printf("\n\n\t\t\t<Enter (1) to pay another bill.>\n\t\t\t<Enter (2) to go back main menu>\n\n\n\t\t\tEnter your choice: \t");
        scanf("%d",&n);
        if(n==2)
        {
            mainr();
        }
        else if(n==1)
        {
           goto redo;
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


