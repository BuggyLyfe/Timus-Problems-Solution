/*
*   Author       : Eklas Mohin
*   Prolem Name  : Psych Up's Eigenvalues
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1880
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},in{},cnt{};
    map<int,bool>mp_1;
    map<int,bool>mp_2;
    cin >> n;
    for(int i{1};i<=n;i++) {
        cin >> in;
        mp_1[in]=true;
    }
    cin >> n;
    for(int i{1};i<=n;i++) {
        cin >> in;
        mp_2[in]=true;
    }
    cin >> n;
    for(int i{1};i<=n;i++) {
        cin >> in;
        if(mp_1[in]==true && mp_2[in]==true) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
