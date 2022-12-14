/*
*   Author       : Eklas Mohin
*   Prolem Name  : SMS-spam
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=1567
*   Tags         : none
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    string str{};
    int cnt{},x{};
    getline(cin,str);
    for(int i{0}; i<str.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            x = str[i]-'a'+1;
            if(x%3==0) {
                cnt+=3;
            } else if(x%3==2) {
                cnt+=2;
            } else {
                cnt+=1;
            }
        }
        else if(str[i]==',') {
            cnt+=2;
        } else if(str[i]=='!') {
            cnt+=3;
        } else {
            cnt+=1;
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
