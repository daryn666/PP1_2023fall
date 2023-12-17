#include <bits/stdc++.h>
using namespace std;
#define pb push_back
string stars = "********************************************************************************************************************************************************************************************************";
string empt = "                                                                                                                                                                                                                 ";
int main(){
    int n, b;
    cin>>n;
    b = (n-1)*2+1;
    for(int i=0; i<n; i++){
        cout<<empt.substr(0, b/2-i+1) + stars.substr(0, 1+i*2)<<"\n";
    }
    
}