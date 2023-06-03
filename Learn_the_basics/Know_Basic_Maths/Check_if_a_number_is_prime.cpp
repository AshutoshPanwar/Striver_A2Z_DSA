// Check if a number is prime or not.

#include<bits/stdc++.h>
using namespace std;

// >>>>> Approache 1 <<<<<<
// bool isPrime(int n){
//     for(int i = 2; i < n; i++){
//         if(n % i == 0)
//             return false;
//     }
//     return true;
//     // Time Complexity: O(n)
//     // Space Complexity: O(1)
// }

// >>>>>> Approahe 2 <<<<<<
bool isPrime(int N){
    for(int i = 2; i < sqrt(N); i++){
        if(N % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 11;
    if (n != 1 && isPrime(n)) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Non Prime Number" << endl;
    }
    return 0;
}