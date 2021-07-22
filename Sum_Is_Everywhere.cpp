#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int N;
    cin >> N;
    long int odd = 0;
    long int even = 0;
    long int i = 1;
    long int j = 2;
    while(N--){
        odd = odd + i;
        i +=2;
        even = even + j;
        j +=2;
    }
    cout << odd << " " << even << endl;
    return 0;
}