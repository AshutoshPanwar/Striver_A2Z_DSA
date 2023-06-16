//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    long long HCF(long long A, long long B){
        if(A == B) return A;
        else if(A > B) return HCF(A-B, B);
        else return HCF(A, B-A);
    }
    
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long hcf = HCF(A,B);
        long long lcm = A*B/hcf;
        vector<long long> res;
        res.push_back(lcm);
        res.push_back(hcf);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends