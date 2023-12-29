//text: Professor of IT wants to find a cabinet for midterm exam. 
//However, he remember how it was difficult to find cabinet that will be empty at the given day(once, he had to postpone midterm until 14-th week). 
//So, he asked you to collect the data about cabinets that will be busy on the midterm day. Knowing the range of numbers of cabinets in the KBTU and busy cabinets, you should provide the sorted list of free cabinets to the professor.


//two numbers l and r
//massive without size
//output: all numbers from l to r which doesn't exist in our massive
#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, r, x;
    cin>>l>>r;
    map<int, bool>mp;
    while(cin>>x){
        mp[x] = true;
        if(cin.get()=='\n') break;
    }
    for(int i=l; i<=r; i++){
        if(!mp[i]) cout<<i<<" ";
    }
}