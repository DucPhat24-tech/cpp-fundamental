#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void nhap(int &n,int &m, int a[],int hoanvi[]){
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int j=1;j<=m;j++){
        int p;cin>>p;
        hoanvi[p]=1;
    }
}
//sap xep thu tu tang dan trong doan [L,R]
void sapxep(int a[],int L,int R){
    for (int i=L;i<=R;i++){
            for (int j=i+1;j<=R;j++){
            if (a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
//Ham xu li va in ket qua
void solve(int n, int a[],int hoanvi[]){
    int i=1;
    while(i<n){
        if(hoanvi[i]==1){
            int L=i;
            while(i<n && hoanvi[i]==1){
                i++;
            }
        int R=i;
        sapxep(a,L,R);
        }else{
        i++;
        }
    bool ok=true;
    for(int i=1;i<n;i++){
        if (a[i]>a[i+1]){
        ok=false;
        break;
        }
    }
    if (ok){
        cout<<"YES\n";}
    else{
            cout<<"NO\n";
        }
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int a[105];
        int hoanvi[105]={0};
        nhap(n,m,a,hoanvi);
        solve(n,a,hoanvi);
    }
} 

