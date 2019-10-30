
#include<stdio.h>
#include<conio.h>                 //to provide console input output
#include<ctype.h>                 //to provide testing and mapping character
#include<stdlib.h>                //provide memory allocation,process control and conversation
#include<string.h>                  //provide strings

int countr,r,r1,r2,r3,r4,r5,count,i,n;
char choice;
char playername[20];           //for we can take 20 character in the memory as a string

void mainhome()
{

    system("cls");                   //

    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");

    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice=toupper(getch());                     //toupper made the small case letter to upper case
    if (choice=='V')
    {
        mainhome();
    }
    else if (choice=='H')
    {

        getch();                   //getch take console input and output from the user and its character type
        mainhome();
    }
    else if (choice=='R')
    {
        getch();
        mainhome();
    }
    else if (choice=='Q')
        exit(1);               //for break out from a program
    else if(choice=='S')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch())=='Y')          //that makes a small letter into the capital letter
        {
            home();
        }
        else
        {
            mainhome();
            system("cls");
        }
    }
}

void home()
{
    system("cls");
    count=0;
    for(i=1; i<=3; i++)
    {
        system("cls");
        r1=i;


        switch(r1)
        {
        case 1:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.23232");
                getch();
                break;
            }

        case 2:
            printf("\n\n\nThe country with the highest environmental performance index is...");
            printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Switzerland");
                getch();
                break;
            }

        case 3:
            printf("\n\n\nWhich animal laughs like human being?");
            printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Hyena");
                getch();
                break;
            }




        }
    }

    if(count>=2)
    {
        test();
    }
    else
    {
        system("cls");
        printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
        getch();
        mainhome();
    }
}

void test()
{
    system("cls");
    printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
    printf("\n\n\n\n\t!Press  T to Start the Game!");
    if(toupper(getch())=='T')
    {
        game();
    }
    else
    {

        mainhome();
    }

}

void game()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t Press O  choice the option\n");
    if(toupper(getch())=='O')
    {
        start();
    }
    else
    {

        mainhome();
    }
}


void start()
{
    system("cls");
    printf("\n\n\n\n\t\t\t > Press C to start c programming ");
    printf("\n\n\n\n\t\t\t > Press P  to start physics ");
    printf("\n\n\n\n\t\t\t > Press K to start chemistry ");
    //printf("\n\n\n\n\t\t\t > press D to discrete");
    printf("\n\n\n\n\t\t\t > press G to start general knowledge ");

    choice=toupper(getch());                     //toupper made the small case letter to upper case
    if (choice=='C')
    {

        home2();
    }
    else if(choice=='P')
    {

        home3();
    }
    else if(choice=='K')
    {

        home4();
    }
    else if(choice=='G')
    {

        home5();
    }
    else
    {

        mainhome();
    }

}

void home2()
{

    system("cls");
    count=0;
    for(i=1; i<=3; i++)
    {
        system("cls");
        r2=i;

        switch(r2)
        {
        case 1:
            printf("\n\nWhich of the following is not a Data type?");
            printf("\n\nA.char\t\tB.int\n\nC.float\t\tD.switch");
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.switch");
                getch();
                break;
            }

        case 2:
            printf("\n\n\nHow many keywords are in C language");
            printf("\n\nA.22\t\tB.32\n\nC.42\t\tD.52");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.32");
                getch();
                break;
            }

        case 3:
            printf("\n\n\nwhich in the following is the library function?");
            printf("\n\nA.printf\t\tB.include\n\nC.stdio.h\t\tD.return");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.printf");
                getch();
                break;
            }
            break;
        }
    }
}

void home3()
{
    system("cls");
    count=0;
    for(i=1; i<=3; i++)
    {
        system("cls");
        r3=i;

        switch(r3)
        {
        case 1:
            printf("\n\nForce is denoted by?");
            printf("\n\nA.F\t\tB.M\n\nC.V\t\tD.L");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.F");
                getch();
                break;
            }
        case 2:
            printf("\n\nVelocity is denoted by?");
            printf("\n\nA.F\t\tB.M\n\nC.V\t\tD.L");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.V");
                getch();
                break;
            }
        case 3:
            printf("\n\nMass is denoted by?");
            printf("\n\nA.F\t\tB.M\n\nC.V\t\tD.L");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.M");
                getch();
                break;
            }

        }

    }

}

void home4()
{

    system("cls");
    count=0;
    for(i=1; i<=3; i++)
    {
        system("cls");
        r4=i;

        switch(r4)
        {
        case 1:
            printf("\n\nCarbon is denoted by?");
            printf("\n\nA.C\t\tB.M\n\nC.V\t\tD.L");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.C");
                getch();
                break;
            }
        case 2:
            printf("\n\nGrafyte is denoted by?");
            printf("\n\nA.F\t\tB.M\n\nC.C\t\tD.L");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.C");
                getch();
                break;
            }
        case 3:
            printf("\n\nSodium is denoted by?");
            printf("\n\nA.F\t\tB.Na\n\nC.V\t\tD.L");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Na");
                getch();
                break;
            }

        }

    }
}

void home5()
{
    system("cls");
    count=0;
    for(i=1; i<=3; i++)
    {
        system("cls");
        r5=i;

        switch(r5)
        {
        case 1:
            printf("\n\nNational bird of bangladesh is?");
            printf("\n\nA.Magpie\t\tB.Parrote\n\nC.Dove\t\tD.Hamming bird");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Magpie");
                getch();
                break;
            }
        case 2:
            printf("\n\nNational fruit of bangladesh is?");
            printf("\n\nA.Banana\t\tB.Jackfruit\n\nC.Mango\t\tD.Apple");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Jackfruit");
                getch();
                break;
            }
        case 3:
            printf("\n\nNational animale of bangladesh is?");
            printf("\n\nA.Tiger\t\tB.Cow\n\nC.Dove\t\tD.Elephant");
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");
                count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Tiger");
                getch();
                break;
            }

        }

    }

}

void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

    printf("\n\n\t*********************BEST OF LUCK*********************************");
    printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");
}

int main()
{
    mainhome();

    return 0;
}
