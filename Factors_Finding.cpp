#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    for(int i=1; i<= N; i++){
        if(N % i == 0)
            count++;
    }
    cout << count << endl;
    for(int i=1; i<= N; i++){
        if(N % i == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}