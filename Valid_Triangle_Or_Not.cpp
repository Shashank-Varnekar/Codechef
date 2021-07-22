#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float s = (a+b+c)/2;
    float ans = s * (s-a) * (s-b) * (s-c);
    float area = sqrt(ans);
    if(area > 0){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}