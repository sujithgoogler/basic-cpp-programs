#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rem,temp;
    cin>>n;
    int ans;
    int fact;
    int sum=0;
    temp=n;
while(n){
    rem=n%10;
    ans=1; fact=1;
 while(ans<=rem){
        fact=fact*ans;
        ans++;
 }
       sum=sum+fact;
     n/=10;
    }
    if(temp==sum){
cout<<"strong"<<endl;
    }
    else
    {
        cout<<"not"<<endl;
    }
    return 0;
}
