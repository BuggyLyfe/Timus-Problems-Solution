/*
*   Author       : Eklas Mohin
*   Prolem Name  : Hieroglyphs
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1545
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{};
    string str[1005]={},s{},k{};
    cin >> n;
    for(int i{0};i<=n;i++) {
        cin >> str[i];
    }
    for(int i{n-1};i>=0;i--) {
        s = str[i];
        k = str[n];
        if(s[0]==k[0]) {
            cout<<s<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
