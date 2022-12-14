/*
*   Author       : Eklas Mohin
*   Prolem Name  : Spammer
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1496
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{};
    string str{};
    map<string,int>m_p;
    vector<string>v_s;
    cin >> n;
    for(int i{1};i<=n;i++) {
        cin >> str;
        m_p[str]++;
        if(m_p[str]==2) {
            v_s.push_back(str);
        }
    }
    for(int i{0};i<v_s.size();i++) {
        cout<<v_s[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
