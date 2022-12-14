/*
*   Author       : Eklas Mohin
*   Prolem Name  : Sum
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1068
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{};
    cin >> n;
    if(n>0) {
        cout<<(n*(n+1))/2<<endl;
    } else {
        cout<<1-(n*(n-1)/2)<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
