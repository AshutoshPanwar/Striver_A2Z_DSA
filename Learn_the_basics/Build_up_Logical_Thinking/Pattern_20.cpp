//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int spaces = 2*n-2;
        // code here
        for(int i = 1; i <= 2*n-1; i++){
            int star = i;
            if(i > n){
                star = 2*n - i;
            }
            // Star
            for(int j = 0; j < star; j++){
                cout << "*";
            }
            // Space 
            for(int j = 1; j <= spaces; j++){
                cout << " ";
            }
            // Star
            for(int j = 0; j < star; j++){
                cout << "*";
            }
            cout << endl;
            if(i < n){
                spaces -= 2;
            }
            else spaces += 2;
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