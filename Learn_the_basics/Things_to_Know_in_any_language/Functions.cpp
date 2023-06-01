#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readebility.
// Functions are used to use same code multiple times.
// Void -> which does not return anything
// return
// parameterised
// non parameterised

// Take two number and print sum.
// Pass by value & referrence.
void doSomething(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main()
{
    int n1 = 10;
    doSomething(n1);
    cout << n1;
    return 0;
}