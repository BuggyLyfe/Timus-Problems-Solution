/*
*   Author       : Eklas Mohin
*   Prolem Name  : Mathematicians and Berries
*   Problem url  : https://acm.timus.ru/problem.aspx?space=1&num=2001
*   Tags         : problem for beginners 
*/
#include<bits/stdc++.h>
using namespace std;
void __solve()
{
    int a1{},a2{},a3{},b1{},b2{},b3{},f{},s{};
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    s = b1 - b2;
    f = a1 - a3;
    cout<<f<<' '<<s<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);cout.tie(0);cout.tie(0);
    __solve();
    return 0;
}
