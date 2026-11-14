//Find UCLN among 2 numbers in array
#include <iostream>
#include <algorithm>
using namespace std;
int ucln(int a,int b){
    if(b==0) return a;
    return ucln(b, a%b);
}
const int maxn=1000;
int a[maxn];


int main() 
{   
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for (int i=0;i<n;i++) cin>>a[i];
        int res=ucln(a[0],a[1]);
            for (int i=0;i<n;i++)
            {   for(int j=i+1;j<n;j++){ 
                        if (res<ucln(a[i],a[j])){
                            res=ucln(a[i],a[j]);
                        }
                    }


            }
        cout<<res<<endl;
        }
}    