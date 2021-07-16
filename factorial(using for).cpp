#include<bits/stdc++.h>
using namespace std;

 int fact_n(int n){
int fact=1,i;
 if(n==0)
     return 1;
 for(int i=1;i<=n;i++){
     fact=fact*i;
 }
     return fact;
 }

int main(){
int n;
cin>>n;
if(n<0){
cout<<"invalid"<<endl;
}
    else
    {
        cout<<fact_n(n)<<endl;
}
return 0;
}
