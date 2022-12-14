/*
*   Author       : Eklas Mohin
*   Prolem Name  : Ural Steaks
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1820
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},k{};
    cin >> n >> k;
    n+=n;
    n = n + k - 1 ;
    cout<<max(2,n/k)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
