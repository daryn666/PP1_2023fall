#include <iostream>
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
    int ch_count[n];
    for(int i=0; i<n; i++){
        cin>>ch[i];
        ch_count[i] = func(ch[i], s);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ch[i]>ch[j]){
                char tp = ch[i]; ch[i] = ch[j]; ch[j] = tp;
                int tp2 = ch_count[i]; ch_count[i] = ch_count[j]; ch_count[j] = tp2;
            }
        }
    }
    for(int i=0; i<n; i++) cout<<ch[i]<<" "<<ch_count[i]<<"\n";
}