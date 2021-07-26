#include<bits/stdc++.h>
#define ll long
using namespace std;

int main()
{
    long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int bits[32] = {0};
        for(int i=0; i<n; i++){
            int j = 31;
            while(i > 0){
                bits[j] += i % 2;
                i = i/2;
                j--;
            }
        }
        int count = 0;
        for(int i = 31; i>=0; i--){
            count += bits[i];
        }
        cout << count << endl;
    }
    return 0;
}