//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int sp = 0;
        for(int i = 0; i < n; i++){
            // Print
            for(int j = 0; j < n-i; j++){
                cout << "*";
            }
            // Space
            for(int j = 0; j < sp; j++){
                cout << " ";
            }
            // Print
            for(int j = 0; j < n-i; j++){
                cout << "*";
            }
            cout << endl;
            sp= sp + 2;
        }
        sp = 2*n-2;
        for(int i = 1; i <= n; i++){
            // Print
            for(int j = 0; j < i; j++){
                cout << "*";
            }
            // Space
            for(int j = 0; j < sp; j++){
                cout << " ";
            }
            // Print
            for(int j = 0; j < i; j++){
                cout << "*";
            }
            cout << endl;
            sp= sp - 2;
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