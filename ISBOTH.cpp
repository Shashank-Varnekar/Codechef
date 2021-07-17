#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if(N % 5 == 0 && N % 11 == 0)
        cout << "BOTH" << endl;
    else if(N % 5 == 0 || N % 11 == 0)
        cout << "ONE" << endl;
    else
        cout << "NONE" << endl;
    return 0;
}