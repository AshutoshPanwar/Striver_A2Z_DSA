// Print all Divisors of a given Number.

#include<bits/stdc++.h>
using namespace std;

// void printDivisorsBruteForce(int n){
//     cout<<"The Divisors of "<<n<<" are: ";
//     for (int i = 1; i <= n; i++)
//     {
//         if(n % i == 0){
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//     // Time Complexity: O(n)
//     // Space Complexity: O(1)
// }

void printDivisorsBruteForce(int n){
    cout<<"The Divisors of "<<n<<" are: ";
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0)
            cout << i << " ";
            if(i != (n/i))
                cout << n/i << " ";
    }
    cout << endl;
    // Time Complexity: O(sqrt(n))
    // Space Complexity: O(1)
}

int main()
{
    printDivisorsBruteForce(36);
    return 0;
}