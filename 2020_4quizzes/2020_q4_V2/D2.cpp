#include <bits/stdc++.h>
using namespace std;
bool in(int x, int y, int n, int m){
    return x>=0 && y>=0 && x<n && y<m;
}
void check(int x, int y, int n, int m, queue<pair<int, int>>&q, vector<vector<bool>>&u){
    if(in(x, y, n, m) && u[x][y]){
        u[x][y] = false;
        q.push({x, y});
    }
}
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<bool>>used(n, vector<bool>(m));
    char c;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>c;
            if(c-'0') used[i][j]=true;
            else used[i][j]=false;
        }
    }
    int res=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(used[i][j]){
                queue<pair<int, int>>q;
                q.push({i, j});
                while(!q.empty()){
                    int x = q.front().first, y = q.front().second;
                    check(x-1, y, n, m, q, used);
                    check(x+1, y, n, m, q, used);
                    check(x, y-1, n, m, q, used);
                    check(x, y+1, n, m, q, used);
                    q.pop();
                }
                res++;
            }
        }
    }
    if(res)cout<<res;
    else cout<<"nothing is left";
}