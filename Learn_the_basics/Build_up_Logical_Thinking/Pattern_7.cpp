//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
    
        for(int i = 0; i < n; i++){
            // Space
            for(int j = 0; j < n-i-1; j++){
                cout << " ";
            }
            // Star
            for(int k = 0; k < 2*i+1; k++){
                cout << "*";
            }
            // Space
            // for(int l = 0; l <= n-i-1; l++){
            //     cout << " ";
            // }
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends