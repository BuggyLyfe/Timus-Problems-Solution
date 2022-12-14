/*
*   Author       : Eklas Mohin
*   Prolem Name  : Some Words about Sport
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1313
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
int arr[105][105];
void __solve()
{
    int n{},x{},k{};
    cin >> n;
    for(int i{1};i<=n;i++) {
        for(int j{1};j<=n;j++) {
            cin >> arr[i][j];
        }
    }
    for(int i{1};i<(n+n);i++)
    {
        if(i<=n)
        {
            x=1;
            for(int j{i};j>=1;j--) {
                cout<<arr[j][x]<<' ';
                x++;
            }
        }
        else
        {
           k=i-n+1;
           x = k;
           for(int j{n};j>=k;j--) {
                cout<<arr[j][x]<<' ';
                x++;
           }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
