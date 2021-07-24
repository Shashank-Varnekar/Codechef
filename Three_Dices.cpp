#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a+b > 6){
            cout << 0 << endl;
        }
        else{
            float prob = (float)(6-(a+b))/6;
            cout << prob << endl;
        }
    }
    return 0;
}