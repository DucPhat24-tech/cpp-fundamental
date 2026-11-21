#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Xu li day con lien tuc co do dai nho nhat lon hon X
void solve(const vector<int>&a,int n,int X){
    int l=0;
    int res=1e9;
    long long sum=0;
    for (int r=0;r<n;r++){
        sum+=a[r];    
        while(sum>X){
            res=min(res,r-l+1);
            sum-=a[l];l++;
        }
    }
    if (res==1e9){cout<<"-1\n";}
    else{cout<<res<<endl;}
}
int main(){
    int t,n,X;
    cin>>t;
    while(t--){
    cin>>n>>X;
    vector<int>a(n);
    for (int&x:a){
        cin>>x;
    }
    solve(a,n,X);
    }
}