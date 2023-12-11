#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> a;
    vector<double> b;
    vector<double> f;
    vector<double> cr;

    double total_m = 0;
    double total_cr = 0;

    for (int i = 0; i < n; i++){
        double first,second,fin,credits;
        cin >> first >> second >> fin >> credits;
        total_cr += credits;
        if(first+second<30 || fin<20){
            continue;
        }
        double sum = first + second + fin;
        double total = 0;
        int increasing = (sum - 50)/5 ;

        total = (1.0/3.0)*increasing + 1.0;
        total_m += (total)*credits;
    }
    
    cout << total_m/total_cr;
    
    return 0;
}