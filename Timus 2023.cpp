/*
*   Author       : Eklas Mohin
*   Prolem Name  : Donald is a postman
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=2023
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},cnt{},c_p{};
    string str{};
    cin >> n ;
    for(int i{1}; i<=n; i++)
    {
        cin >> str;
        if(str[0]=='A' || str[0]=='P' || str[0]=='O' || str[0]=='R'){
            cnt = cnt + c_p ;
            c_p = 0;
        }
        else if(str[0]=='B' || str[0]=='M' || str[0]=='S'){
            cnt = cnt + abs(c_p-1);
            c_p=1;
        }
        else{
            cnt = cnt + abs(c_p-2);
            c_p=2;
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
