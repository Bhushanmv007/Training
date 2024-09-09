#include<iostream>
#include<vector>
using namespace std;

int fib(int n,vector<int> &dp){
    if(n==0 || n==1){
        return n;
    }
    
    //step 3
    if(dp[n]!=-1){
        return dp[n];
    }
    
    //step 2
    dp[n]= fib(n-2,dp)+fib(n-1,dp);
}

int main(){
    int n;
    cout<<"Enter the no of elem:"<<endl;
    cin>>n;
    //step 1
    vector<int> dp(n+1,-1);
    cout<<fib(n,dp)<<endl;
    return 0;
}