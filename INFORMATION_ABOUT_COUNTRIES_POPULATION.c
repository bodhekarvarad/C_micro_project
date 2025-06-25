#include<stdio.h>   // Standard input-output header file for printf, scanf
#include<conio.h>   // Console input-output for clrscr() and getch()

void main()
{
    int country;   // Variable to store the user input for country rank
    //clrscr();      // Clears the output screen (used in Turbo C/C++)

    // Displaying the menu to the user
    printf("Enter any Country rank\n ");
    printf("***************************************");
    printf("\n\t************************\t");
    printf("\n \t 1.Chain");
    printf("\n \t 2.India");
    printf("\n \t 3.Untied States");
    printf("\n \t 4.Indonesia");
    printf("\n \t 5.Pakistan");
    printf("\n \t 6.Brazil");
    printf("\n \t 7.Nigera");
    printf("\n \t 8.Bangladesh");
    printf("\n \t 9.Russia");
    printf("\n \t 10.Mexico");
    printf("\n \t 11.Japan");
    printf("\n \t 12.Ethiopia");
    printf("\n \t 13.Egypt");
    printf("\n \t 14.Vietnam");
    printf("\n \t 15.Philippiness");
    printf("\n \t 16.DR Congo");
    printf("\n \t 17.Turkey");
    printf("\n \t 18.Iran");
    printf("\n \t 19.Germany");
    printf("\n \t 20.Thailand\n");
    printf("\n****************************************\n");

    scanf("%d", &country);   // Reading user input for country rank

    // Switch-case to print population info based on selected country
    switch (country)
    {
        case 1:
            printf("\t Chain\n \tPopulation=1,439,323,776\n\tYearly Change=0.39%\n\tNet Change=5,540,090");
            break;
        case 2:
            printf("\t India\n \tPopulation=1,380,004,385\n\tYearly Change=0.99%\n\tNet Change=13,586,631");
            break;
        case 3:
            printf("\t Untied States\n \tPopulation=331,002,651\n\tYearly Change=0.59\n\tNet Change=9,147,420");
            break;
        case 4:
            printf("\t Indonesia\n\tPopulation=273,523,615\n\tYearly Change=1.03%\t\nNet Change=2,898,047");
            break;
        case 5:
            printf("\t Pakistan\n\tPopulation=220,892,340\t\nYearly Change=2.o\t\nNet Change=4,327,022");
            break;
        case 6:
            printf("\t Barzil\n\tPopulation=212,559,417\ntYearly Change=0.72%\t\nNet Change=1,509,890");
            break;
        case 7:
            printf("\tNigera\n\tPopulation=206,139,589\n\tYearly Change=2.58\n\tNet Change=5,175,990");
            break;
        case 8:
            printf("\tBangladesh\n\tPopulation=164,689,383\n\tYearly Change=1.01%\n\tNet Change=1,643,222");
            break;
        case 9:
            printf("\tRussia\n\tPopulartion=145,934,462\n\tYearly Change=0.02\n\tNet Change=62,000");
            break;
        case 10:
            printf("\tMexio\n\tPopulartion=128,932,753\n\tYearly Change=1.06\n\tNet Change=1,357,224");
            break;
        case 11:
            printf("\tJapan\n\tPopulartion=126,476,461\n\tYearly Change=-0.30%\n\tNet Change=383,840");
            break;
        case 12:
            printf("\tEthiopia\n\tPopulartion=114,963,588\n\tYearly Change=2.57\n\tNet Change=2,884,858");
            break;
        case 13:
            printf("\tEgypt\n\tPopulartion=102,334,404\n\tYearly Change=1.94%\n\tNet Change=1,946,331");
            break;
        case 14:
            printf("\tVietnam\n\tPopulartion=97,338,579\n\tYearly Change=0.91%\n\tNet Change=876,473");
            break;
        case 15:
            printf("\tPhilippiness\n\tPopulartion=87,333,579\n\tYearly Change=0.99%\n\tNet Change=989,567");
            break;
        case 16:
            printf("\tDR Congo\n\tPopulartion=89,561,403\n\tYearly Change=3.91% \n\tNet Change=2,770,836");
            break;
        case 17:
            printf("\tTurkey\n\tPopulartion=84,339,067\n\tYearly Change=1.09%\n\tNet Change=909,452");
            break;
        case 18:
            printf("\tIran\n\tPopulartion=83,992,949\n\tYearly Change=1.30%\n\tNet Change=1,079,043");
            break;
        case 19:
            printf("\tGermany\n\tPopulartion=83,783,942\n\tYearly Change=0.32 %\n\tNet Change=266,897");
            break;
        case 20:
            printf("\tThailand\n\tPopulartion=69,799,978\n\tYearly Change=0.25 %\n\tNet Change=174,396");
            break;
        default:
            printf("Invalid country");  // Handles incorrect input
    }

    getch();  // Waits for a key press before closing the program
}
