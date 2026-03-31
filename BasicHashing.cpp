#include<iostream>
#include<vector>
using namespace std;

vector<int> hashing(vector<char>& arr){
    int size = arr.size();
    vector<int> freq(26,0);

    for(int i =0; i< arr.size(); i++){
        char ch = arr[i];
        freq[ch - 'a']++;
    }
    return freq;

}

int main(){

    vector<char> arr = {'a' , 'b' , 'a' , 'c' , 'a' , 'b' , 'i'};
    vector<int> result = hashing(arr);
    for(int i = 0 ; i<result.size() ; i++){
        cout << result[i];
    }
}