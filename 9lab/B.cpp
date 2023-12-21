#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

int Minimumindex(deque<int>q, int end){
    int mn=INT_MAX, mn_id=-1, n =q.size();
    for(int i=0; i<n; i++){
        
        int tp = q.front();
        q.pop_front();
        if(tp<mn && i<=end){
            mn_id=i;
            mn=tp;
        }
        q.push_front(tp);
    }
    return mn_id;
}

void changebymin(deque<int>&q, int mn_id){
    int mn;
    for(int i=0; i<q.size(); i++){
        int tp = q.front();
        q.pop_front();
        if(i==mn_id) mn=tp;
        else q.push_front(tp);
    }
    q.push_front(mn);

}
void sorting(deque<int>&q){
    for(int i=1; i<=q.size(); i++){
        int minid = Minimumindex(q, q.size()-i);
        changebymin(q, minid);
    }
}
int main(){
    int n, tp;
    cin>>n;
    deque<int>even;
    deque<int>odd;
    for(int i=0; i<n; i++){
        cin>>tp;
        if(tp&1)odd.push_back(tp);
        else even.push_back(tp);
    }
    sort(even.begin(), even.end());
   sort(odd.begin(), odd.end());
   while(!even.empty()){
    cout<<even.back()<<" "; even.pop_back();
   }
   while(!odd.empty()){
    cout<<odd.front()<<" "; odd.pop_front();
   }
}