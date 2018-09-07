#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{

    float x;
    float y;
    float z;

    char op;

rechner:

    cout << "Operator" << endl
         << endl;
    cin >> op;

    cout << "Geben sie eine Zahl ein" << endl;
    cin >> x;

    cout << "Geben sie eine zweite Zahl ein" << endl;
    cin >> y;

    if (0 == y && op == '/')
    {
        cout << endl
             << "Error! Du kannst Zahlen nicht durch 0 teilen!" << endl
             << endl;
             goto rechner;
        system("cls");
        return 0;
    }

    cout << endl;
    cout << endl
         << x << " " << op << " " << y << " = ";
    switch (op)
    {
    case '+':
        cout << x + y;
        break;

    case '-':
        cout << x - y;
        break;

    case '*':
        cout << x * y;
        break;

    case '/':
        cout << x / y;
        break;

    default:
        cout << "Error!";
        break;
    }

    cout << endl
         << endl; 

         goto rechner;

    system("pause");
    return 0;
}
