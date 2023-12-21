#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=2*n; i++){
        cout<<string(2*n-i, ' ') + "*";
        if(i==n) cout<<string(2*i-2, '*');
        else if(i>1 && i<n+2) cout<<string(2*i-3, ' ') + "*";
        else if(i<2*n && i>1) cout<<string(2*(i-n)-3, ' ') + "*" + string(2*(2*n-i)+1, ' ') + "*" + string(2*(i-n)-3, ' ') + "*";
        else if(i==2*n) cout<<string(2*n-2, '*') + " " + string(2*n-1, '*');
        cout<<"\n";
    }
}
//5
//         *          1
//        * *         2
//       *   *        3
//      *     *       4
//     *********      5
//    *         *     6
//   * *       * *    7 3-7
//  *   *     *   *   8 2-5
// *     *   *     *  9 1-3
//********* ********* 10 0-1