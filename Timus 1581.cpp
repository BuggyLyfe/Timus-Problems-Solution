/*
*   Author       : Eklas Mohin
*   Prolem Name  : Teamwork
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1581
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},cnt{1},arr[1005]={};
    cin >> n;
    for(int i{0};i<n;i++) {
        cin >> arr[i];
    }
    arr[n]=-1;
    for(int i{0};i<n;i++) {
        if(arr[i]==arr[i+1]) {
            cnt++;
        } else {
            cout<<cnt<<' '<<arr[i]<<' ';
            cnt=1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
