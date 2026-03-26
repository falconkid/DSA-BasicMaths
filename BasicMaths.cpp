// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n = 0;
    cout << "Enter the number: " << endl;
    cin >> n;
    int current = 0;
    int count = 0;
    string reversed = "";
    
    int copy = n;
    while(copy != 0){
        
        int lastdigit = copy%10;
        copy = copy/10;
        current = current +  lastdigit;
        cout << lastdigit ;
        count++;
        reversed = reversed + to_string(lastdigit);
       
        
        
    }
    cout << endl;
    if(reversed == to_string(n)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    
    cout << "Sum is: " << current << endl;
    cout << "Count is: " << count << endl;
    cout << "Reversed is: " << reversed << endl;
    

    return 0;
}