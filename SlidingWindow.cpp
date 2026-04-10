#include <iostream>
#include <string>
#include <unordered_map>
#include<vector>
#include<climits>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_map<char , int> mp;
    int maxlength = 0;
    int left = 0;
    
    for(int right = 0; right < s.length(); right++){
        char c = s[right];
        
        if(mp.find(c) != mp.end() && mp[c] >= left){
            left = mp[c] + 1;
        }
        
        mp[c] = right;
        
        int currentlength = right - left +1;
        maxlength = max(currentlength, maxlength);
        
    }
    
    return maxlength;
}


int minSubArrayLen(int target , vector<int>& nums){
    int left = 0;
    int sum = 0 ;
    int minlength = INT_MAX;

    for(int right = 0; right < nums.size(); right++){

        int sum = sum + nums[right];

        while(sum >= target){
            minlength = min(minlength , right - left +1);
            
            sum -= nums[left];
            left++;
        }

    }

return(minlength == INT_MAX) ? 0 : minlength;

}


int main() {
    string test1 = "abcabcbb";
    cout <<  "Length of longhest substring without repetition" <<  lengthOfLongestSubstring(test1) << endl;  // Expected: 3
    
    string test2 = "bbbbb";
    cout << lengthOfLongestSubstring(test2) << endl;  // Expected: 1
    
    string test3 = "pwwkew";
    cout <<lengthOfLongestSubstring(test3) << endl;  // Expected: 3


    vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    int target1 = 7;
    cout << "Minimum sub array for the sum: " << minSubArrayLen(target1, nums1) << endl;  // Expected: 2
    
    return 0;
}