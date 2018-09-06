#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{

    int x;
    int y;
    int z;

    char op;

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
        system("pause");
        return 0;
    }

    cout << endl;
    cout << endl  << x << " " << op << " " << y << " = ";
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
    system("pause");
    return 0;
}
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{

    int x;
    int y;
    int z;

    char op;

    cout << "Geben sie eine Zahl ein" << endl;
    cin >> x;

    cout << "Geben sie eine zweite Zahl ein" << endl;
    cin >> y;

    cout << "Operator" << endl
         << endl;
    cin >> op;
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

    if (x / 0)
    {
        system("cls");
    }

    cout << endl
         << endl;
    system("pause");
    