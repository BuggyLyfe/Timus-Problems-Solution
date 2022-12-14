/*
*   Author       : Eklas Mohin
*   Prolem Name  : Penguins
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1585
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},em{},ma{},li{};
    string str;
    cin >> n;
    getline(cin,str);
    for(int i{1}; i<=n; i++)
    {
        getline(cin,str);
        if(str[0]=='E') {
            em++;
        }
        else if(str[0]=='M') {
            ma++;
        }
        else {
            li++;
        }
    }
    if(em>li && em>ma) {
        cout<<"Emperor Penguin"<<endl;
    } else if(ma>em && ma>li) {
        cout<<"Macaroni Penguin"<<endl;
    } else {
        cout<<"Little Penguin"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
