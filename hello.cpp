#include<iostream>
using namespace std;

void readString(char *str, char delimiter = ' ')
{
    char ch;
    int i = 0;
    while (true)
    {
        ch = cin.get();
        if (ch == delimiter)
        {
            break;
        }
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
}
int main()
{

    char str[100];
    readString(str, '#');

    cout << str;
    return 0;
}