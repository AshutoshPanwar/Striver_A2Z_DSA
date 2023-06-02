// Find GCD of two numbers

#include<bits/stdc++.h>
using namespace std;

// >>>>> Approach 1 <<<<<<
// int GCD(int n1, int n2){
//     int res = 1;
//     for (int i = 1; i <= min(n1, n2); i++)
//     {
//         if((n1 % i == 0) && (n2 % i == 0)){
//             res = i;
//         }
//     }
//     return res;
//     // Time Complexity: O(N)
//     // Space Complexity: O(1)
// }

// >>>>>> Appraoch 2 <<<<<<
int GCD(int a, int b){
    if(b == 0)
        return a;
    return GCD(b, a%b);
    // Time Complexity: O(log min(a,b)).
    // Space Complexity: O(1).
}

int main()
{
    int num1 = 4, num2 = 8;
    cout << "The GCD of the two numbers is " << GCD(num1, num2) << endl;
    return 0;
}