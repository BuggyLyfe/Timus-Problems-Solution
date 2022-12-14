/*
*   Author       : Eklas Mohin
*   Prolem Name  : About Grisha N.
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=2012
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},t{};
    cin >> n;
    t = (12-n)*45;
    if(t<=240) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
