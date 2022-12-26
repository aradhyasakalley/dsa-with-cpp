#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<< "enter the number: ";
    cin>> x;
    if (x < 10){
        cout<< "less than 10";
    }
    else if (x == 10){
        cout<< "equal to 10";
    }
    else {
        cout << "greater than 10";
    }
    return 0;
}