#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if(N % 5 == 0 || N % 6 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}