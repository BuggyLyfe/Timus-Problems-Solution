/*
*   Author       : Eklas Mohin
*   Prolem Name  : 1, 10, 100, 1000...
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1209
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    long long  n{},x{};
    cin >> n;
    n-=1;
    x=(-1+sqrt(1+8*n))/2;
    x = x*(x+1)/2;
    if(x==n) {
        cout<<1<<' ';
    } else {
        cout<<0<<' ';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    int t{};
    cin >> t;
    while(t-->0){
        __solve();
    }
    return 0;
}
