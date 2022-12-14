/*
*   Author       : Eklas Mohin
*   Prolem Name  : Scholarship
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=2056
*   Tags         : problem for beginners
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int n{},in{};
    double sum{0.0},marks{};
    bool flag = false;
    bool ex = true;
    cin >> n;
    for(int i{1};i<=n;i++) {
        cin >> in;
        if(in==3) {
            flag  = true ;
        }
        if(in!=5) {
            ex = false;
        }
        sum = sum + in;
    }
    marks = sum / n;
    if(flag) {
        cout<<"None"<<endl;
    } else if(ex) {
        cout<<"Named"<<endl;
    } else if(marks>=4.50) {
        cout<<"High"<<endl;
    } else {
        cout<<"Common"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
