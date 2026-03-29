#include<iostream>
using namespace std;


void printName(int i , int n){

    if(i > n){
        return;
    }
    cout << "Name ";
    return printName(i+1 , n);
}
    
void printN(int i  , int n){
    if(i > n){
        return;
    }
    cout << i ;
    printN(i+1, n);
    
}

void printReverse(int i , int n){

    if(i > n){
        return;
    }
    cout << n;
    printReverse(i , n-1);
    
    
}

int main(){
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    printName(1 , n);
    printN(1 , n);
    cout << endl;
    printReverse(1 , n);

    return 0;
    
}