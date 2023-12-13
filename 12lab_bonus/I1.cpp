#include <iostream>
using namespace std;
int res(string st, int sum){
    if(st.empty())return sum;
    if(isdigit(st[0])) sum+=st[0]-'0'; 
    return res(st.erase(0, 1), sum);
}
int main(){
    string s;
    cin>>s;
    cout<<res(s, 0);   
}