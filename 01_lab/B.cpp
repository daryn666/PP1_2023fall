#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<a+(b%1000)/100+b%10;
    return 0;
}