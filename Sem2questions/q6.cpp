// Write a program to find the sum of seven terms using a for loop for the following series:
// 1/1!+2/2!+3/3!+………..+7/7!

#include<iostream>
using namespace std;
int main(){
    int n;
    float fact = 1;
    float sum = 0;
    cout<< "enter the number of terms to sum: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        fact = fact*i;
        sum = sum + (i/fact);
    }
    cout<< sum;
    return 0;
}