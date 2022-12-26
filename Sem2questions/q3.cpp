// Write a program to check if the year entered is leap year or not. Write algorithm & Draw flowchart for the
// same.

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<< "enter the year: ";
    cin>> year;
    if (year % 400 == 0) {
      cout<< " is a leap year.";
   }

   else if (year % 100 == 0) {
      cout<< " is not a leap year.";
   }

   else if (year % 4 == 0) {
      cout<< " is a leap year.";
   }

   else {
      cout<< " is not a leap year.";
   }

    return 0;
}
