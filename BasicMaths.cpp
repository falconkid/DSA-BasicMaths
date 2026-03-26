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
    bool palindrome = false;
    int copy = n;
    while(copy != 0){
        int divided = copy/10;
        int lastdigit = copy%10;
        copy = divided;
        current = current +  lastdigit;
        cout << lastdigit ;
        count++;
        reversed = reversed + to_string(lastdigit);
       
        
        
    }

    if(reversed == to_string(n)){
        palindrome = true;
    }
    cout << endl;
    cout << "Sum is: " << current << endl;
    cout << "Count is: " << count << endl;
    cout << "Reversed is: " << reversed << endl;
    palindrome ? cout << "The number is palindrome" << endl : cout << "Not Palindrome" << endl;

    return 0;
}