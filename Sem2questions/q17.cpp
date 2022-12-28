// Write a program to multiply two matrices using a function.
//assuming both 3x3 matrices
#include<iostream>
using namespace std;
int product(int a[10][10],int b[10][10]){
    int prod[10][10];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            prod[i][j] = a[i][j]*b[j][i]; 
        }
    }
    cout<<"product matrix is: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<prod[i][j]<< '\t';
        }
        cout<<"\n";
    }
    
}

int main(){
    int i,j,a[10][10],b[10][10],prod[10][10];
    cout<<"enter the first matrix elements: \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter the second matrix elements: \n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>b[i][j];
        }
    }

    // calculation of product 
    product(a,b);


    return 0;
}