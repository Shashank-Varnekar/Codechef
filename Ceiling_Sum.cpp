#include<bits/stdc++.h>
#define ll long
using namespace std;

int main()
{
    long t;
    cin >> t;
    while(t--){
        float A, B, X;
        cin >> A >> B;
        ll sum = 0;
        if(A == B){
            sum = 0;
        }
        else if(A > B){
            X = A-1;
            sum = ceil((B-X)/2) + ceil((X-A)/2);    
        }
        else{
            X = B-1;
            sum = ceil((B-X)/2) + ceil((X-A)/2);
        }
        cout << sum << endl;
    }
    return 0;
}