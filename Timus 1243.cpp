/*
*   Author       : Eklas Mohin
*   Prolem Name  : Divorce of the Seven Dwarfs
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1243
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int x{};
    string str{};
    cin >> str;
    for (int i{0};i<str.length();i++) {
        x = x * 10 + str[i] - '0';
        x = x % 7 ;
    }
    cout<<x<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
