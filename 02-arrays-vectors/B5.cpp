//Use xor to solve problem about frequency odd number
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int maxn=1000000;
int a[maxn],n;


int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for (int i=0;i<n;i++) cin>>a[i];
        int res=1,dem=1;
        for (int i=1;i<n;i++){
            if (a[i]==a[i-1]){
                dem++;
            }else{
                dem=1;
            }
            res=max(res,dem);
        }
        cout<<n-res<<endl;
    }
    return 0;
}   