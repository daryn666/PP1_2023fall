#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; cin>>n; bool res=true;
    string d[n]; for(int i=0; i<n; i++)cin>>d[i];
    //if we need to check middle:
    // int k = n/2 + n%2;

    //if we don't need to check middle:
    int k=n/2;
    for(int i=0; i<k; i++){
        string s = d[n-1-i];
        while(s[s.size()-1]=='0'){
            s = s.substr(0, s.size()-1);
        }
        if(s.size() != d[i].size()){
            res=false; break;
        }
        for(int j=0; j<s.size()/2; j++){
            char copy = s[j]; 
            s[j] = s[s.size()-1-j];
            s[s.size()-1-j] = copy;
        }
        if(s!=d[i]){
            res=false; break;
        }
        
    }
    cout<<(res?"YES":"NO");
}