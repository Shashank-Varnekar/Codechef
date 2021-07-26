#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int num = 1;
    for(int i=1; i<=N; i++){
        if(i % 2 != 0){
            for(int j=num; j<=num+4; j++){
                cout << j << " ";
            }
            cout << endl;
        }
        else if(i % 2 == 0){
            for(int j=num+4; j>=num; j--){
                cout << j << " ";
            }
            cout << endl;
        }
        num += 5;
    }
    return 0;
}