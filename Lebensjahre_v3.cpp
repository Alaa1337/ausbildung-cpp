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
    


cout << "Geben sie eine Zahl ein"<<endl;
cin >> x;


cout << "Geben sie eine zweite Zahl ein"<<endl;
cin >> y;


cout << "Operator"<<endl<<endl;
cin >> op;
cout << endl;
cout <<endl << x << " " << op << " " << y <<" = " ;
switch ( op ){

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

if (x / 0){
    system ("cls");

}

cout <<endl <<endl;
system("pause");
return 0;
}