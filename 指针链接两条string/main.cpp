#include <iostream>
using namespace std;

int main()
{
    char *contence1, *contence2;
    char str1[50], str2[30];
    contence1 = str1;
    contence2 = str2;
    cout << "Please input the first contence: ";
    gets(str1);
    cout << endl
         << "Please input the second contence: ";
    gets(str2);

    // First way to connect
    while (*contence1 != '/0')
    {
        contence1++;
    }
    while (*contence2 != '/0')
    {
        *contence1++ = *contence2++;
    }
    *contence1 = '/0';
    cout << "The new contence is: ";
    puts(str1);

    // Second way to connect
    // strcat(str1,str2);
    // cout<<"The new contece is: ";
    // puts(str1);
}