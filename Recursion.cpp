#include<iostream>
using namespace std;

int count = 0;
int f(int n){

    
    if(count == n){
        return n;
    }
    cout << count;
    count++;
    return f(n);


    
}
    


int main(){

    
    cout << f(4);

    return 0;
    
}