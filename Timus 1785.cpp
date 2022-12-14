/*
*   Author       : Eklas Mohin
*   Prolem Name  : Lost in Localization
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1785
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{};
    cin >> n;
    if(n>999) {
        cout<<"legion"<<endl;
    } else if(n>499) {
        cout<<"zounds"<<endl;
    } else if(n>249) {
        cout<<"swarm"<<endl;
    } else if(n>99) {
        cout<<"throng"<<endl;
    } else if(n>49) {
        cout<<"horde"<<endl;
    } else if(n>19) {
        cout<<"lots"<<endl;
    } else if(n>9) {
        cout<<"pack"<<endl;
    } else if(n>4) {
        cout<<"several"<<endl;
    } else {
        cout<<"few"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
