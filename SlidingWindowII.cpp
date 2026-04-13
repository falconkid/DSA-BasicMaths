#include <iostream>
#include <vector>
#include<climits>
using namespace std;


int pivotIndex(vector<int>& nums){
    int sum = 0;

    for(int num : nums){
        sum += num;
    }

    int leftsum = 0;

    for(int i = 0; i < nums.size(); i++ ){

        int rightsum = sum - leftsum - nums[i];

        if(leftsum == rightsum){
            return i;
        }
        leftsum += nums[i];
    }
    return -1;

}


int main() {
    vector<int> nums1 = {1, 7, 3, 6, 5, 6};
    cout << pivotIndex(nums1) << endl;  // Expected: 3
    
    vector<int> nums2 = {1, 2, 3};
    cout << pivotIndex(nums2) << endl;  // Expected: -1
    
    vector<int> nums3 = {2, 1, -1};
    cout << pivotIndex(nums3) << endl;  // Expected: 0

    return 0;
}
