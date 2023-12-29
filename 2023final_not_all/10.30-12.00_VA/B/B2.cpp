#include <bits/stdc++.h>
using namespace std;
bool compinc(vector<int>f, vector<int>s){
    return (f[0]*3600+f[1]*60+f[2]) < (s[0]*3600+s[1]*60+s[2]);
}
bool compdec(vector<int>f, vector<int>s){
    return (f[0]*3600+f[1]*60+f[2]) > (s[0]*3600+s[1]*60+s[2]);
}
string two(int n){
    return to_string(n/10) + to_string(n%10);
}
int main(){
    int n; string s;
    cin>>n>>s;
    vector<vector<int>>d(n, vector<int>(3));
    for(int i=0; i<n; i++) cin>>d[i][0]>>d[i][1]>>d[i][2];
    if(s=="inc") sort(d.begin(), d.end(), compinc);
    else sort(d.begin(), d.end(), compdec);
    for(vector<vector<int>>::iterator i=d.begin(); i!=d.end(); i++){
        vector<int>copy = *i;
        // if we need output like 3 4 22:
        cout<<copy[0]<<" "<<copy[1]<<" "<<copy[2]<<"\n";

        // if we need output like 03 04 22:
        //cout<<two(copy[0]) + " " + two(copy[1]) + " " + two(copy[2]) + "\n";
    }
    
}