/*
*   Author       : Eklas Mohin
*   Prolem Name  : Farm
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1349
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{};
    cin >> n;
    if(n==1) {
        cout<<1<<' '<<2<<' '<<3<<endl;
    } else if(n==2) {
        cout<<3<<' '<<4<<' '<<5<<endl;
    } else {
        cout<<-1<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
