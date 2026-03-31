#include<iostream>
using namespace std;
#include <string>
#include <cctype>

// void ReverseofN(int arr[] , int n){
//     if( n == 0  ){
//         return;
//     }
    
//     ReverseofN(arr+1 , n-1);
//     cout << arr[0];

// }
// int main(){
//     int n;
//     int arr[] = {5,1,3,2,3};
    
//     ReverseofN(arr , sizeof(arr)/sizeof(arr[0]));
    
// }




//----------------Palindrome or not -------------------






bool isPalindrome(string test1){
    
    int start = 0;
    int end = test1.length()-1;
    
    while(start < end){
        while(start < end && !isalnum(test1[start])){
            start++;
        }
        while(start < end && !isalnum(test1[end])){
            end--;
        }
        while(tolower(test1[start]) != tolower(test1[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
    
    
}



int main() {
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    
    cout << (isPalindrome(test1) ? "true" : "false") << endl;  // Expected: true
    cout << (isPalindrome(test2) ? "true" : "false") << endl;  // Expected: false
    
    return 0;
}