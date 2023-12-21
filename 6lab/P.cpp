#include <bits/stdc++.h>
using namespace std;
int res(int s){
    return sqrt(pow(s, 2));
    //return abs(s);
}

int main(){
    int s;
    cin>>s;
    cout<<res(s);
}