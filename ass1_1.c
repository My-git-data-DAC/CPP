#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate()
{
    int day = 27;
    int month = 3;
    int year = 2023;
    printf("Date is %d-%d-%d \n", day, month, year);
};
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter the day= ");
    scanf("%d", &ptrDate->day);
    printf("Enter the month = ");
    scanf("%d", &ptrDate->month);
    printf("Enter the year = ");
    scanf("%d", &ptrDate->year);
};
void printDateOnConsole(struct Date ptrDate)
{
    printf("Date is %d-%d-%d \n", ptrDate.day, ptrDate.month, ptrDate.year);
};

int main()
{
    struct Date D1;
    initDate();
    acceptDateFromConsole(&D1);
    printDateOnConsole(D1);
    int choice;
    printf("enter the choice 1.Display the saved date 2. Accept the data 3.To print data");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1 : initDate(D1);
             break;
    case 2 : acceptDateFromConsole(&D1);
              break;
    case 3:  printDateOnConsole(D1);
              break;
    case 4 : default:
           printf("Data Not Found");
    }

    return 0;
}

