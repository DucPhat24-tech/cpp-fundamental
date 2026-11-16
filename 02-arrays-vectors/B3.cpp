//Math problems related to balance
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
        long long sum=0;
        for (int i=0;i<n;i++) sum+=a[i];
        long long left=0;
        bool check=false;
        for (int i=0;i<n;i++){
            sum-=a[i];
            if(sum==left){
                cout<<i<<endl;
                check=true;
            }
            left +=a[i];
        }
        if (!check) cout<<"-1\n";
        else cout<<endl;
    }
    return 0;
}   