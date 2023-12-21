#include <bits/stdc++.h>
//notmine
using namespace std;

int main (){
    int d , c;
    cin >> d;
    vector<int> a(d);
    for(int i = 0; i < d; i++){
        cin >> a[i];
    }
    cin >> c;
    int b = 0 ,q = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] > c){
            for(int j = 2; j <= sqrt(a[i]); j++){
                if(a[i] % j == 0)
                b++;
            }
            if(b == 0){
                q++;
            }
        }
        b = 0;
    }
    cout << q;
}