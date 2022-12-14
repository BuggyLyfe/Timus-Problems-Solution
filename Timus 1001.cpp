/*
*   Author       : Eklas Mohin
*   Prolem Name  : Reverse Root
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1001
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    long long d{};
    vector<long long >v;
    while(cin >> d) {
        v.push_back(d);
    }
    for(int i{v.size()-1};i>=0;i--) {
        cout<<sqrt((double)v[i])<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    cout<<fixed<<setprecision(4)<<endl;
    __solve();
    return 0;
}
