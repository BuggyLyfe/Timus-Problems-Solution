/*
*   Author       : Eklas Mohin
*   Prolem Name  : Fuses
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1327
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},m{},k{};
    cin >> n >> m;
    k=(m-n)/2;
    if(m%2==1 || n%2==1) {
        ++k;
    }
    cout<<k<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
