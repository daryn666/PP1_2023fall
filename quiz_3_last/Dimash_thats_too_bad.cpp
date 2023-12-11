#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string d[n], s, need = "@gmail.com";
    int id=0;
    while(n--){
        cin>>s;
        size_t f = s.find(need);
        if(f!=string::npos) d[id++] = s.substr(0, s.size()-need.size());
    }
    for(int i=0; i<id; i++) cout<<d[i]<<"\n";
}