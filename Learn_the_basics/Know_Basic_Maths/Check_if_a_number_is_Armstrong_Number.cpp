// Check if a number is Armstrong Number or not.

#include<bits/stdc++.h>
using namespace std;

bool ArmstrongNumber(int n){
    int original_n = n;
    int count = 0;
    int tmp = n;
    // cout no of digits.
    while(tmp > 0){
        count++;
        tmp = tmp / 10;
    }
    int sum_of_pow = 0;
    while(n > 0){
        int dig = n % 10;
        sum_of_pow += pow(dig, count);
        n /= 10;
    }
    return (sum_of_pow == original_n);
    // Time Complexity: O(n)
    // Space Complexity: O(1)
}

int main()
{
    int n = 153;
    if(ArmstrongNumber(n)){
        cout << "Yes, it is an Armstrong Number" << endl;
    }else{
        cout << "No, it is not an Armstrong Number" << endl;
    }
    return 0;
}