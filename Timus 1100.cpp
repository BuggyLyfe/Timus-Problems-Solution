/*
*   Author       : Eklas Mohin
*   Prolem Name  : Final Standings
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1100
*   Tags         : data structures
*/
#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second > b.second);
}
void __solve()
{
    int n{},no{},sc{};
    vector<pair<int,int>>vp;
    cin >> n;
    for(int i{1}; i<=n; i++){
        cin >> no >> sc;
        vp.push_back(make_pair(no,sc));
    }
    stable_sort(vp.begin(),vp.end(),sortbysec);
    for(int i{0};i<n;i++) {
        cout<<vp[i].first<<' '<<vp[i].second<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
