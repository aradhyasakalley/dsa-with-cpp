// Write a program to display first n elements of Fibonacci series (using 'for')
#include<iostream>
using namespace std;
int main(){
    int n;
    int t1=0,t2=1;
    int next = t1+t2;
    cout<< "enter the number of  you want:";
    cin>> n;
    cout<< t1 << "\n" << t2 << "\n";
    for (int i=3;i<=n;i++){
        cout<< next << "\n";
        t1=t2;
        t2 = next;
        next = t1+t2;
    }
    return 0;
}