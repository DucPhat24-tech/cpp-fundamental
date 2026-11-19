#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[100005];
void nhap (int&n,long long &c){
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
}

void solve(int n, long long c,int &sotu){
    for (int i=1;i<n;i++){
        if ( (a[i+1]-a[i])<=c )
        {
            sotu++;
        }
        else
        {   sotu=1;

        }
        
    }
}
int main(){
        int n;
        long long c;
        int sotu=1;
        nhap(n,c);
        solve(n,c,sotu);
        cout<<sotu<<endl;
}