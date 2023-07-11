// How Hashing is Implemented.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // Precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    
    int q;
    cin >> q;
    while(q--){         // since 0 is equally to false in a logical context.
        int number;
        cin >> number;
        // Fetch
        cout << hash[number] << endl;
    }
    return 0;
}