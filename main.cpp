#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int i=7;
    cout << "____Bilangan Kelipatan 7 yang Habis Dibagi 2 ( 1 s/d 50)_____ \n \n";
    while (i<50)
    {
        if (i%2==0 & i%7==0)
        {
            cout << i <<" ";
        }
        i++;
    }
    getch();

}
