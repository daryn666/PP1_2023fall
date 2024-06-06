#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k;
    cin>>n>>k;
    double first_stage = ceil(n/k);
    double remaining = n-(int)(first_stage*k)%(int)n;
    double second_stage = ceil(remaining/k);
    cout << (int) (first_stage + second_stage) ;
}
