/*
*   Author       : Eklas Mohin
*   Prolem Name  : Turn for MEGA
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1787
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},k{},x{},arr[105]={};
    cin >> k >> n;
    for(int i{0}; i<n; i++) {
        cin >> arr[i];
    }
    for(int i{1}; i<n; i++) {
        x=max(0,(arr[i-1]-k));
        arr[i]+=x;
    }
    cout<<max(0,(arr[n-1]-k))<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
