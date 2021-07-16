#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
    int ans=1;
    while(n>1){
ans=ans*n;
    n-=1;
    }
    cout<<ans<<endl;
    return 0;
}
