#include<bits/stdc++.h>
using namespace std;
// While Loop -> Check, Print, Increase.
// Do while -> Will run atlease 1 time weather condition is true of false.
int main()
{
    int i = 0;
    while (i <= 5)
    {
        cout << "Ashu " << i << endl;
        i++;
    }
    cout << "Beak!" << endl;
    do
    {
        cout << "Ashu " << i << endl;
        i++;
    } while (i <= 6);

    return 0;
}