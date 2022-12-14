/*
*   Author       : Eklas Mohin
*   Prolem Name  : One Step from Happiness
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1493
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},nxt{},prev{},sum{};
    bool flag = false;
    cin >> n;
    nxt = n + 1;
    prev = n - 1;
    for(int i{1}; i<=6; i++)
    {
        if(i<4) {
            sum = sum + nxt%10;
            nxt = nxt / 10;
        }
        else {
            sum = sum - nxt%10;
            nxt = nxt / 10;
        }
    }
    if(sum==0) {
        flag = true;
    }
    sum = 0;
    for(int i{1}; i<=6; i++)
    {
        if(i<4) {
            sum = sum + prev%10;
            prev = prev / 10;
        }
        else {
            sum = sum - prev%10;
            prev = prev / 10;
        }
    }
    if(sum==0) {
        flag = true;
    }
    if(flag) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
