/*
*   Author       : Eklas Mohin
*   Prolem Name  : Chocolate 2
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1639
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},m{},t{};
    cin >> n >> m;
    t=n*m;
    if(t%2==0) {
        cout<<"[:=[first]"<<endl;
    } else {
        cout<<"[second]=:]"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
