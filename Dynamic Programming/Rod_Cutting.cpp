#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter length: ";
    cin >> n;
    int price[n];
    cout << "Enter price for each length: ";
    for(int i=0 ; i<n ; i++){
        cin >> price[i];
    }
    
    int dp[n+1];
    dp[0] = 0;
    
    for(int i=1 ; i<=n ; i++){
        int maxprofit = 0;
        for(int j=1 ; j<=i ; j++){
            maxprofit = max(maxprofit, price[j-1]+dp[i-j]);
        }
        dp[i] = maxprofit;
    }
    
    cout << "Max profit ";
    for(int i=1 ; i<=n ; i++){
        cout << "For length " << i << " profit is " << dp[i] << endl; 
    }
    
    return 0;
}
