#include<bits/stdc++.h>
using namespace std;

// Print 1 to N Using Back tracking.

void print(int N){
    // Bace Condition
    if(N == 0) return;
    print(N - 1);
    cout << N << " ";   // Back Track
}

int main()
{
    int N = 10;
    print(N);
    return 0;
}