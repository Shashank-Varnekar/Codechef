#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    int mid = N/2;
    int left = 0;
    int right = N-1;
    int flag = 0;
    while(right >= left){
        if(arr[mid] == K){
            cout << 1 << endl;
            flag = 1;
            break;
        }
        else if(K > mid){
            left = mid+1;
            mid = (left+right)/2;
        }
        else{
            right = mid-1;
            mid = (left+right)/2;
        }
    }
    if(flag == 0)
        cout << -1 << endl;
    return 0;
}