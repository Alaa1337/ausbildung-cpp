#include <iostream>
#include <unistd.h>
#include <tgmath.h>
using namespace std;

int main()
{

    int years_to_live;
    int your_age;
    int remaining_years;
    float remaining_years_in_percent;

    years_to_live = 80;

    cout << "enter your age\n";
    cin >> your_age;

    if (remaining_years)
    {
        remaining_years = years_to_live - your_age;
        remaining_years_in_percent = ((float)your_age / (float)years_to_live) * 100;
        remaining_years_in_percent = round(remaining_years_in_percent);

        cout << remaining_years
             << "\n"
             << remaining_years_in_percent
             << "\n";
    }

    system("pause");
    return 0;
}
