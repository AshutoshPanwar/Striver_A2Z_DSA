#include<bits/stdc++.h>
using namespace std;
// String are made up of characters.
int main()
{
    string s = "Ashu";
    int len = s.size();
    s[len-1] = 'z';         // Can only assign characters
    cout << s[len - 1] << endl;
    return 0;
}