//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    int count = 1;
    void printNos(int N)
    {
        // Approach 1
        // if(count > N) 
        //     return;
        // cout << count << " ";
        // count++;
        // printNos(N);
        
        // Approach 2
        if(N == 0){
            return;
        }
        printNos(N-1);
        cout << N << " ";
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends