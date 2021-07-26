#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    long t;
    cin >> t;
    ll E, K;
    while(t--){
        cin >> E >> K;
        ll count = 0;
        while(E > 0){
            E = floor(E/K);
            count++;
        }
        cout << count << endl;
    }
    return 0;
}