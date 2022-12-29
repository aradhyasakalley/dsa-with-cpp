// . Write a program to accept a set of 10 numbers and print the number using pointer
#include<iostream>
using namespace std;

int main() {
    int data[10];

    cout<<"enter the elements"<<endl;
    for (int i = 0; i < 10; ++i){
        cin>> *(data+i);
    }

    cout<<"elements entered were: "<<endl;
    for (int i = 0; i < 10; ++i)
        cout<<  *(data + i)<< endl;
    return 0;
}
