#include<bits/stdc++.h>
using namespace std;

int main()
{
    int L, R;
    cin >> L >> R;
    for(int i=L; i<=R; i++){
        if(i % 2 != 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}