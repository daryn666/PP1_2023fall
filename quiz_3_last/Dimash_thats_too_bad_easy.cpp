#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n], s;
    for(int i=0; i<n; i++) cin>>arr[i];
    string need = "@gmail.com";
    for(int i=0; i<n; i++){
        if(arr[i].find(need) != string::npos) cout<<arr[i].substr(0, arr[i].size()-need.size())<<"\n";
    }
}