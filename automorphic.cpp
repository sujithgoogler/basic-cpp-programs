#include<bits/stdc++.h>
using namespace std;
bool automorphic(int N){
    int sq=N*N;
    while(N>0){
        if(N%10!=sq%10)
            return false;
            N/=10;
            sq/=10;
}
        return true;
   }
    int main(){ 
        int N;
        cin>>N;
        automorphic(N) ?cout<<"automorphic ":cout<<"not an automorphic";    
}
