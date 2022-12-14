/*
*   Author       : Eklas Mohin
*   Prolem Name  : Titan Ruins: Hidden Entrance
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1910
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},sum{},mid{},mx{},arr[1005]={0};
    cin >> n;
    for(int i{0};i<n;i++) {
        cin >> arr[i];
    }
    for(int i{2};i<n;i++) {
        sum = arr[i]+arr[i-1]+arr[i-2];
        if(sum>mx) {
            mx = sum;
            mid = i;
        }
    }
    cout<<mx<<' '<<mid<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
