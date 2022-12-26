// To calculate simple interest taking principal, rate of interest and number of years as input from user.
// Write algorithm & Draw flowchart for the same
#include <iostream>
using namespace std;

int main(){
    
    double p,r,n;
    cout<< "enter the principle amount:";
    cin>> p;
    cout<< "enter the rate of interest:";
    cin>> r;
    cout<< "enter the number of years:";
    cin>> n;
    cout << "the simple interest is: " << p*r*n;
    return 0;

}