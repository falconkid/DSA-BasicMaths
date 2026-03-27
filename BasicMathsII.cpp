// #include <iostream>
// #include<cmath>
// using namespace std;

// int main() {
    
//     int n;
//     cout << "Enter the number: " << endl;
//     cin >> n;
    
    
    
//     for(int i = 1; i <= (n/2); i++) {
//         if(n%i == 0){
//             cout << i << endl;
//         }
        
//     }
    

//     return 0;
// }



//GCD of two numbers

#include <iostream>
#include<cmath>
using namespace std;


int gcd(int a , int b) {

    int highestA = 0;
    int highestB = 0;
    for(int i=1; i <= min(a,b); i++){
        if(a%i == 0 && i > highestA && b%i == 0 && i > highestB ) {
            highestA = i;
            highestB = i;
        }
    }
    return highestA , highestB;

}

int main() {
    
    int a , b;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;
    cout << "The gcd is: " << gcd(a , b);

    return 0;
}