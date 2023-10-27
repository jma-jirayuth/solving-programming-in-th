#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    switch (sum)
    {
    case 80 ... 100:
        cout << "A";
        break;
    case 75 ... 79:
        cout << "B+";
        break;
    case 70 ... 74:
        cout << "B";
        break;
    case 65 ... 69:
        cout << "C+";
        break;
    case 60 ... 64:
        cout << "C";
        break;
    case 55 ... 59:
        cout << "D+";
        break;
    case 50 ... 54:
        cout << "D";
        break;
    case 0 ... 49:
        cout << "F";
        break;
    default:
        break;
    }
}