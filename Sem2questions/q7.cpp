// Write a program to read a number, reverse the number and display the sum of digits of number.
#include<iostream>
using namespace std;

int main(){
    int num,d,sum = 0,rev = 0;
    cout <<"enter the number:";
    cin>> num;
    while (num){
        d = num%10;
        num = num/10;
        sum = sum + d;
        rev = rev*10 + d;
    }

    cout<< "the reverse of the number is: "<< rev<<"\n"; 
    cout<< "the sum of digits of the number is: "<< sum<<"\n"; 
    return 0;
}