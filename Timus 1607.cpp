/*
*   Author       : Eklas Mohin
*   Prolem Name  : Taxi
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1607
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},m{},x{},y{};
    cin >> n >> m >> x >> y;
    while(n<x) {
        n = min(x,n+m);
        x = max(n,x-y);
    }
    cout<<n<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
