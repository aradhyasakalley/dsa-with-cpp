// Write a menu driven program to perform add / subtract / multiply / divide based on the users choice. The
// user will indicate the operation to be performed using the signs i.e. + for addition, - for subtraction and so
// on. Write algorithm & Draw flowchart for the same. 

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char choice;
    cout<<"enter the first number:";
    cin>> a;
    cout<<"enter the second number:";
    cin>> b;
    cout<<"enter the choice:";
    cin>> choice;

    switch (choice)
    {
    case '+':
        cout<<"the sum is: "<< a+b;
        break;
    case '-':
        cout<<"the differnce is: "<< a-b;
        break;
    case '*':
        cout<<"the product is: "<< a*b;
        break;
    case '/':
        cout<<"the divison is: "<< a/b;
        break;
    case '%':
        cout<<"the modulus is: "<< a%b;
        break;
   
    default:
        cout<<"invalid choice !!";
        break;
    }
    return 0;

}