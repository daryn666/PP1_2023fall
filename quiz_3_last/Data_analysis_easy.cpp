#include <iostream>
#include<algorithm>
using namespace std;
int func(char ch, string s, int sum=0){
    for(int j=0; j<s.size(); j++)
        if(s[j]==ch)sum++;
    return sum;
}
int main(){
    string s;
    getline(cin, s);
    int n;
    cin>>n;
    char ch[n];
    for(int i=0; i<n; i++) cin>>ch[i];
    sort(ch, ch+n);
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" "<<func(ch[i], s)<<"\n";
    }
}