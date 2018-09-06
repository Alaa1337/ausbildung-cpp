#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>
#include <sys/time.h>
using namespace std;

int main()
{

int tDay; int tMonth; int tYear;                    //date today
int bDay; int bMonth; int bYear;                    // birthdate
int resultDay; int resultMonth; int resultYear;    //result of your age    

time_t result;
result = time(NULL);
struct tm *tp = localtime(&result);


tDay = tp->tm_mday ;
tMonth = tp->tm_mon + 1;
tYear = tp->tm_year + 1900;



cout << "Today's Date is "<< tDay <<"-" << tMonth <<"-"<< tYear <<endl<< endl;

cout << "Type the Day of your birth"<<endl<< endl;
cin >> bDay ;

cout << "Type the Month of your birth"<<endl<< endl;
cin >> bMonth ;

cout << "Type the Year of your birth"<<endl<< endl;
cin >> bYear ;

cout << "You were born in "<< bDay <<"-" << bMonth <<"-"<< bYear <<endl<< endl;

// Tage wären
// 18 Jahre, 6 Monate, 5 Tage (der aktuelle Tag)




resultDay = tDay ;
resultMonth = tMonth - bMonth;
if (bMonth == 1) {
    // TODO: Zu klären
    resultMonth++;
}

resultYear = tYear - bYear;

if (resultMonth < 1) {
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


cout << "Which means you have lived "
<< endl << resultDay <<" Days " 
<< endl << resultMonth <<" Months"
<< endl << resultYear <<" Years"<<endl<< endl;


int remaining_years, remaining_months, remaining_days; 
remaining_years = 80 - resultYear;
remaining_months = 12 - resultMonth;
remaining_days =  tDay - +bDay;

/*
remaining_months = min(max(tMonth,1),12);
remaining_days = min(max(tDay,1),31);
*/

if (remaining_days<1 && remaining_months<1 && remaining_years<1) { cout << "unsterblich"; }

if (remaining_days<1) {
    remaining_months = remaining_months - 1;
}
if (remaining_months<1) {
    remaining_years = remaining_years - 1;
}

cout << "So the years you have left to live are"
<< endl << remaining_years<<" Years and " << remaining_months <<" Months "
<< endl << remaining_days <<endl;



system("pause");
    return 0;


}