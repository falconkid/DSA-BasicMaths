#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> result;
    int n = nums.size();

    sort(nums.begin() , nums.end());
    for(int i=0; i< n-2; i++){
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }

        int target = -nums[i];
        int start = i+1;
        int end = n-1;
        while(start < end){
            int sum = nums[start] + nums[end];
            if(target == sum){
                result.push_back({nums[i], nums[start] , nums[end]});

                while(start < end && nums[start] == nums[start+1] ){
                    start++;
                }
            
                while(start < end && nums[end] == nums[end+1] ){
                    end++;
                }
                start++;
                end--;
            }
            else if(sum < target){
                start++;
            }
            else{
                end--;
            }
        }
    }
    return result;
}


int main() {
    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result1 = threeSum(nums1);
    
    cout << "Result 1:" << endl;
    for (auto triplet : result1) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }
    //[-1, -1, 2] and [-1, 0, 1]
    
    vector<int> nums2 = {0, 0, 0, 0};
    vector<vector<int>> result2 = threeSum(nums2);
    
    cout << "\nResult 2:" << endl;
    for (auto triplet : result2) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }
    //[0, 0, 0]
    
    return 0;
}