// Write a program which will accept n and r and calculate nCr=n!/r!(n-r)! using recursive functions
#include<iostream>
using namespace std;

int  factorial(int n)  
{  
  if (n == 0)  {
    return 1;  
  }
  else  {
    return(n * factorial(n-1));  
  }
}


int main(){
    int n,r;
    cout<< "enter the value of n:";
    cin>> n;
    cout<< "enter the value of r:";
    cin>> r;
    int answer = factorial(n)/factorial(r)*factorial(n-r);
    cout<< "answer is: " << answer;
    return 0;
}