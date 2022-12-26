// Write a program to calculate roots of a quadratic equation

#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int a,b,c;
   cout<< "enter the coefficient of x^2: ";
   cin>> a;
   cout<< "enter the coefficient of x: ";
   cin>> b;
   cout<< "enter the constant: ";
   cin>> c;
   
   double d = b*b - 4*a*c;
   if (d>0){
      double root1 = (-b+sqrt(d))/2*a;
      double root2 = (-b-sqrt(d))/2*a;
      cout<<"root1:" <<root1<<"\n";
      cout<<"root2:" <<root2<<"\n";
   }
   else if (d==0){
      double root = (-b)/2*a;
      cout<<"root:" <<root;
   }
   else{
      double realpart = (-b)/2*a;
      double imgpart = sqrt(-d)/2*a;
      cout<<"root1:" << realpart << "+i"<<imgpart<<"\n";
      cout<<"root1:" << realpart << "-i"<<imgpart<<"\n";
   }

}