// Write a program to initialize an automatic and static variable and increment it in the function. Call this
// function thrice and print the value of the variable every time after incrementing.
#include<iostream>
using namespace std;
void increment(){
    static int count = 0;
    
    cout<< count << "\n";

    count ++;
}
int main(){
    increment();
    increment();
    increment();
    return 0;
}
