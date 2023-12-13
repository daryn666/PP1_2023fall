#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x; 
    cin>>x;
    vector<int>arr1(x);
    for(int i=0;i<x;i++){
        cin>>arr1[i];
    } 
    int y;
    cin>>y;
    vector<int>arr2(y);
    for(int i=0;i<y;i++){
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());
    for(int i=0;i<y;i++){
        int left=0;
        int right=x-1;
        int amount=0;

        while(left<right){
            int sum=arr1[left]+arr1[right];
            if(sum==arr2[i]){
                amount++;
                break;  
            }else if(sum>arr2[i]){
                right--;
            }else{
                left++;
            }
        }
        if(amount>0){
            cout<<"YES"<< endl;
        }else{
            cout<<"NO"<< endl;
        }
    }
    return 0;
}