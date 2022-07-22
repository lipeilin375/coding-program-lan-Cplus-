#include <iostream>
using namespace std;

int main()
{
    int *p1, *p2;
    int *p;
    int a, b;
    cout << "Please enter the first number: ";
    cin >> a;
    cout << endl
         << "please enter the second number: ";
    cin >> b;
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    cout << "a= " << a;
    cout << endl;
    cout << "b= " << b;
    cout << endl
         << endl;
    cout << "The bigger one: " << *p1 << endl
         << "The smaller one: " << *p2 << endl;
    return 0;
}