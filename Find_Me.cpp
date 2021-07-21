#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, K, flag = 0;
    cin >> N >> K;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    for(int i=0; i<N; i++){
        if(arr[i] == K){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << 1 << endl;
    else
        cout << -1 << endl;
    return 0;
}