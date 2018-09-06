#include <iostream>
using namespace std;

int main()
{
     int y;
     int x;
     int z;

    z = x + y;




    cout << "Bitte x eingeben:";
    cin >> y;

    cout << "bitte y eingeben:";
    cin >> x;

    cout << x << "+" << y << " = ";
    cin >> z;

    cout << "\n";

    if ( x + y == z  )
        cout << z << " is right.";
    else
        cout << z << " is wrong.";

    cout << "\n";

    system("pause");
    return 0;
}