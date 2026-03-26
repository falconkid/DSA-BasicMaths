// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int n = 1879;
    int current = 0;
    int count = 0;
    string reversed = "";
    
    while(n != 0){
        int divided = n/10;
        int lastdigit = n%10;
        n = divided;
        current = current +  lastdigit;
        cout << lastdigit << endl;
        count++;
        reversed = reversed + to_string(lastdigit);
       
        
    }
    cout << " Sum is: " << current << endl;
    cout << " Count is: " << count << endl;
    cout << " Reversed is: " << reversed << endl;
    return 0;
}