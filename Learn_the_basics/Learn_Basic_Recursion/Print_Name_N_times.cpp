#include<bits/stdc++.h>
using namespace std;

// Print Name N times using Recursion

void print(int i, int n){
    // Base Condition
    if(i > n) return;
    cout << "I luv DSA" << endl;
    // Functin call itself
    print(i+1, n);

    // Space Complexity: O(N)
    // Time Complexity: O(N)
}

int main()
{
    int n;
    cin >> n;
    print(1, n);
    return 0;
}
