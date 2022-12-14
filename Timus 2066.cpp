/*
*   Author       : Eklas Mohin
*   Prolem Name  : Simple Expression
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=2066
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int a{},b{},arr[3]={};
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    a = arr[0]-arr[1]*arr[2];
    b = arr[0]-arr[1]-arr[2];
    cout<<min(a,b)<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
