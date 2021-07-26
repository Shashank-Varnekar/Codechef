#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    long t;
    cin >> t;
    while(t--){
        int N;
        ll K;
        cin >> N >> K;
        ll size = pow(2, N);
        if(K > size /2){
            K = size;
        }
        cout << K * size * 2;
    }
    return 0;
}