#include <iostream>
using namespace std;

int main(){
    string s; 
    int sum=0;
    cin>>s;
    for(auto i:s){
        if(isdigit(i)){
            sum+=i-48;
        }
    }   
    cout<<sum;
}