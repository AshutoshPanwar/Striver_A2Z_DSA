// Check if a number is Palindrome or Not.

#include<bits/stdc++.h>
using namespace std;

int check_Palindrome(int n){
    int res = 0;
    while(n > 0){
        // Extracting last digit.
        int dig = n % 10;
        // Appending last digit.
        res = res * 10 + dig;
        // Shrinking n by removing last digit.
        n = n / 10;
    }
    return res;
    // Time Complexity: O(logN)
    // Space Complexity: O(1)
}

int main()
{
    int x = 123;
    int dummy = x;
    int y = check_Palindrome(x);
    if (x == y)
    {
        cout << "Palindrome Number" << endl;
    }else{
        cout << "Not Palindrome Number" << endl;
    }

    return 0;
}