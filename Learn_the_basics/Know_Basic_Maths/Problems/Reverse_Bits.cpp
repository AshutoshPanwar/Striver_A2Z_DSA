//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        vector<int> ans;
        // Coverting Number to binary.
        while(X != 0){
            int digit = X % 2;
            ans.push_back(digit);
            X = X / 2;
        }
        while(ans.size() != 32){
            ans.push_back(0);
        }
        
        // Reverse the value.
        reverse(ans.begin(), ans.end());
        
        long long value = 0;
        
        for(int i=0; i < 32; i++){
            value = value + pow(2, i) * ans[i];
        }
        
        return value;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends