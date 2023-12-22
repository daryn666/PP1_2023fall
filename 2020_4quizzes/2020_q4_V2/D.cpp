#include <bits/stdc++.h>
using namespace std;
bool in(int x, int y, int n, int m){
    return x>=0 && y>=0 && x<n && y<m;
}
int main(){
    int n, m;
    cin>>n>>m;
    bool used[n][m];
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
        for(int j=0; j<m; j++){
            if(used[i][j]){
                queue<pair<int, int>>q;
                q.push({i, j});
                while(!q.empty()){
                    int x = q.front().first, y = q.front().second;
                    q.pop();
                    if(in(x-1, y, n, m) && used[x-1][y]){
                        used[x-1][y]=false;
                        q.push({x-1, y});
                    }
                    if(in(x+1, y, n, m) && used[x+1][y]){
                        used[x+1][y]=false;
                        q.push({x+1, y});
                    }
                    if(in(x, y-1, n, m) && used[x][y-1]){
                        used[x][y-1]=false;
                        q.push({x, y-1});
                    }
                    if(in(x, y+1, n, m) && used[x][y+1]){
                        used[x][y+1]=false;
                        q.push({x, y+1});
                    }
                }
                res++;
            }
        }
    }
    cout<<(res? to_string(res) :"nothing is left");
}