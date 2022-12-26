// Write a program to find greatest of three numbers using conditional operator. Write algorithm & Draw
// flowchart for the same.
#include <iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cout<< "enter the first number:";
    cin>> a;
    cout<< "enter the second number:";
    cin>> b;
    cout<< "enter the third number:";
    cin>> c;


    int greatest = a>b ? (a>c ? a:c) : (b>c ? b : c) ; 
    cout<< "the greatest number is: " << greatest;
    return 0;
}