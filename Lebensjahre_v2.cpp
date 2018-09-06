#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>
#include <sys/time.h>
#include ".\\date-master\\include\\date\\date.h"
#include <thread>

using namespace std;

int main()
{

    int tDay;
    int tMonth;
    int tYear; //date today
    int bDay;
    int bMonth;
    int bYear; // birthdate
    int resultDay;
    int resultMonth;
    int resultYear; //result of your age

    time_t result;
    result = time(NULL);
    struct tm *tp = localtime(&result);

    tDay = tp->tm_mday;
    tMonth = tp->tm_mon + 1;
    tYear = tp->tm_year + 1900;

    cout << "Today's Date is " << tDay << "-" << tMonth << "-" << tYear << endl
         << endl;

    cout << "Type the Day of your birth" << endl
         << endl;
    cin >> bDay;
    if (bDay > 31 || bDay < 1)
    {
        while (true)
        {
            cout << " ERROR ERROR ERROR ERROR  ERROR ERROR ERROR ERROR  ERROR ERROR ERROR ERROR ";
        }
    }

    cout << "Type the Month of your birth" << endl
         << endl;
    cin >> bMonth;

    if (bMonth > 12 || bMonth < 1)
    {
        while (true)
        {
            cout << " ERROR ERROR ERROR ERROR  ERROR ERROR ERROR ERROR  ERROR ERROR ERROR ERROR ";
        }
    }

    cout << "Type the Year of your birth" << endl
         << endl;
    cin >> bYear;

    if (bYear > 2018 || bYear < 1900)
    {
        while (true)
        {
            cout << " ERROR ERROR ERROR ERROR  ERROR ERROR ERROR ERROR  ERROR ERROR ERROR ERROR ";
        }
    }

    cout << "You were born in " << bDay << "-" << bMonth << "-" << bYear << endl
         << endl;

    // Tage wären
    // 18 Jahre, 6 Monate, 5 Tage (der aktuelle Tag)

    resultDay = tDay;
    resultMonth = tMonth - bMonth;
    if (bMonth == 1)
    {
        // TODO: Zu klären
        resultMonth++;
    }

    resultYear = tYear - bYear;

    if (resultMonth < 1)
    {
        resultYear--;
        resultMonth = 12 + resultMonth;
    }

    /*
Ich teste mit

01.01.2000
29.02.2000
28.02.2001
31.12.2018
01.10.2018
01.01.2017
*/

    cout << "Which means you have lived about "
         << endl
         << resultDay << " Day(s) "
         << endl
         << resultMonth << " Month(s)"
         << endl
         << resultYear << " Year(s)" << endl
         << endl;

    int remaining_years, remaining_months, remaining_days;
    remaining_years = 80 - resultYear;
    remaining_months = 12 - resultMonth;
    remaining_days = bDay - tDay;

    //remaining_months = min(max(tMonth,1),12);
    //remaining_days = min(max(tDay,1),31);

    if (bMonth == 1)
    {
        // TODO: Zu klären
        //   remaining_months++;
    }

    if (bMonth == 1)
    {
        // TODO: Zu klären
        remaining_days = remaining_days + 31;
    }

    if (resultDay < tDay)
    {

        remaining_days = remaining_days + 31;
    }

    if (remaining_days < 1)
    {
        remaining_days = remaining_days + 31;
        remaining_months = remaining_months - 1;
    }
    if (remaining_months < 1)
    {
        remaining_years = remaining_years - 1;
    }

    cout << "So the years you have left to live are about "
         << endl
         << remaining_years << " Year(s) and " << remaining_months << " Month(s) "
         << endl
         << remaining_days << endl;

    if (remaining_days < 1 && remaining_months < 1 && remaining_years < 1)
    {
        cout << "unsterblich";
    }

    system("pause");
    return 0;
}