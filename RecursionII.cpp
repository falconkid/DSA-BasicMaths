#include<iostream>
using namespace std;
#include <string>
#include <cctype>
#include<vector>

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




//----------------TWO-POINTER -------------------






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


int maxArea(vector<int>& height){
    int start = 0;
    int end = height.size()-1;
    int maxarea = 0;
    while(start<end){
        int heightt = min(height[start], height[end]);
        int width = end-start;
        int area = heightt * width;
        maxarea = max(maxarea , area);

        if(height[start] < height[end]){
            start++;
        }
        else{
            end--;
        }
    }

return maxarea;
}



int main() {
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    
    cout << (isPalindrome(test1) ? "true" : "false") << endl;  // Expected: true
    cout << (isPalindrome(test2) ? "true" : "false") << endl;  // Expected: false


    vector<int> height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height1) << endl;  // Expected: 49
    
    vector<int> height2 = {2, 3, 4, 5, 18, 17, 6};
    cout << maxArea(height2) << endl;  // Expected: 17
    
    return 0;
}