// . Write a program to implement bubble sorting algorithm for sorting numbers in ascending order Write
// algorithm & Draw flowchart for the same. 
#include<iostream>
using namespace std;
int main(){
    int i;
    int data[] = {-2, 45, 0, 11, -9};
    for(i =0;i<5;i++){
        if (data[i] > data[i+1]){
            int temp = data[i];
            data[i] = data[i+1];
            data[i+1] = temp; 
        }
    }
    for (i=0;i<5;i++){
        cout<< data[i]<< "\n";
    }
    
    return 0;
}