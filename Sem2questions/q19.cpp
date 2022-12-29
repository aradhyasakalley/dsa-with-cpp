// Write a program to swap two numbers using a function. Pass the values to be swapped to this function
// using call-by-value method and call-by-reference method.

#include <iostream>
using namespace std;
 
void swapByReference(int &m, int &n){
    int temp= m;
    m=n;
    n=temp;
}
 
int main()
{
    int a,b;
    
    cout << "Enter two numbers A & B"<< endl;
    cin >> a;
    cin >> b;
    
    cout << "Value of A before swapping: " << a <<endl;
    cout << "Value of B before swapping: " << b <<endl;
    
    swapByReference(a,b);
    
    cout << "Value of A after swapping: " << a <<endl;
    cout << "Value of B after swapping: " << b <<endl;
}
