#include <bits/stdc++.h>
using namespace std;
double hyp(double a, double b){
return sqrt(a*a+b*b);
}
int main(){
double a, b;
cin>>a>>b;
cout<<setprecision(4)<<hyp(a, b);
}