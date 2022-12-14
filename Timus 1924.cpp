/*
*   Author       : Eklas Mohin
*   Prolem Name  : Four Imps
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1924
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{};
    cin >> n;
    n = (n*(n+1))/2;
    if(n%2==0) {
        cout<<"black"<<endl;
    } else {
        cout<<"grimy"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
