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
        int res=0;
        for (int i=0;i<n;i++){
            res^=a[i];
        }
        cout<<res<<endl;
    }
    return 0;
}   