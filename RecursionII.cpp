#include<iostream>
using namespace std;

void sumofN(int arr[] , int n){
    if( n == 0  ){
        return;
    }
    
    sumofN(arr+1 , n-1);
    cout << arr[0];

}
int main(){
    int n;
    int arr[] = {5,1,3,2,3};
    
    sumofN(arr , sizeof(arr)/sizeof(arr[0]));
    
}
