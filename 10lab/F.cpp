#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    // freopen("ladder.in", "r", stdin);
    // freopen("ladder.out", "w", stdout);
    int n;
    double f, s, t, c, kr=0, sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>f>>s>>t>>c;
        kr+=c; 
        int sm =f+s+t;
        if(f+s>=30 && t>=20){
            sum += (((sm-50)/5) * 1.0/3.0 + 1.0)*c;
        }
    }
    cout<<sum/kr;
}
// 50-54 1.0
// 55-59 1.33
// 60-64 1.66 
// 65-69 2.0
// 70-74 2.33
// 75-79 2.66
// 80-84 3.0
// 85-89 3.33
// 90-94 3.66
// 95-99 4