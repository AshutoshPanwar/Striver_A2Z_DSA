// Given a number N reverse the number and print it.

#include<bits/stdc++.h>
using namespace std;

int reverse_num(int n){
    int x = n;
    int rev = 0;
    while(x > 0){
        int dig = x % 10;
        rev = rev * 10 + dig;
        x /= 10;
    }
    return rev;
    // Time Complexity: O(n)
    // Space Complexity: O(1)
}

int main()
{
    int N = 123;
    cout << reverse_num(N) << endl;
    return 0;
}