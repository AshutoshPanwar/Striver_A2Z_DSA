// Given an integer N , write program to count number of digits in N.

#include<bits/stdc++.h>
using namespace std;

// >>>>> Approach 1 <<<<<<
// int count_digits(int n){
//     int count = 0, x = n;

//     while(x > 0){
//         x = x / 10;
//         count++;
//     }
//     return count;
    // Time Complexity: O(n)
    // Spcae Complexity: O(1)
// }

// >>>>>> Approach 2 <<<<<<
// int count_digits(int n){
//     string str = to_string(n);
//     return str.length();
    // Time Complexity: O(1)
    // Spcae Complexity: O(1)
// }

// >>>>>> Approach 3 <<<<<<
int count_digits(int n){
    int dig = floor(log10(n) + 1);
    return dig;
    // Time Complexity: O(1)
    // Spcae Complexity: O(1)
}

int main()
{
    int n = 12345;
    cout<< "Number of digits in "<<n<<" is "<< count_digits(n) << endl;
    return 0;
}