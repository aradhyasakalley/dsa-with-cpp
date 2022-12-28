// Write a program to find nCr using function. Write algorithm & Draw flowchart for the same.
#include<iostream>
using namespace std;
int factorial(int n) {
      if(n == 0)
      return 1;
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int ncr(int n,int r){
   int answer = (factorial(n)/factorial(n-r)*factorial(r));
}
int main(){
    int n,r,val;
    cout<<"enter the value of n:";
    cin>> n;
    cout<<"enter the value of r:";
    cin>> r;
    val = ncr(n,r);
    cout<< "the value of ncr is: "<< val;
    return 0;
}