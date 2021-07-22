#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(0 < a && 0 < b && 0 < c){
        if((a+b > c || a+c > b || b+c > a) && a+b+c == 180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}