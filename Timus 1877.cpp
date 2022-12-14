/*
*   Author       : Eklas Mohin
*   Prolem Name  : Bicycle Codes
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1877
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},m{};
    cin >> n >> m;
    if(n%2==0 || m%2==1) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
