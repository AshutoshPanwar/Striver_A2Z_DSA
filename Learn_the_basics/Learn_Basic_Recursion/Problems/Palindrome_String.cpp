//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int stringP(string &S, int i){
	    if(i > S.size()/2){
	        return true;
	    }
	    if(S[i] != S[S.size() - i -1]){
	        return false;
	    }
	    return stringP(S,i+1);
	}
	
	int isPalindrome(string S)
	{
	   stringP(S,0);
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends