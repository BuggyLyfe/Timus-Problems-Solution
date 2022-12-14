/*
*   Author       : Eklas Mohin
*   Prolem Name  : The battle near the swamp
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1991
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},k{},in{};
    long long  bb{},sr{};
    cin >> n >> k;
    for(int i{1};i<=n;i++) {
        cin >> in;
        if(in>k) {
            sr = sr + in - k;
        } else if(in<k) {
            bb = bb + k - in;
        }
    }
    cout<<sr<<' '<<bb<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
