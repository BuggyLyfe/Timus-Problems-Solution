/*
*   Author       : Eklas Mohin
*   Prolem Name  : Wedding Dinner
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=2100
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},cnt{2};
    string str{};
    cin >> n;
    for(int i{1};i<=n;i++)
    {
        cin >> str;
        sort(str.begin(),str.end());
        if(*str.begin()=='+') {
            cnt+=2;
        } else {
            cnt++;
        }
    }
    if(cnt==13) {
        cnt++;
    }
    cout<<cnt*100<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
