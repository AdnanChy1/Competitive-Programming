#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define vv vector<long long>
#define mpp map<long long,long long>
#define ss set<long long>
#define vp vector<pair<long long, long long>>
#define MOD 1000000007
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define all_v v.begin(),v.end()
#define all_a a.begin(),a.end()
#define all_n for(int i=0;i<n;i++)
void requisite(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
}
int main() {
    requisite();
    ll n,k;
    cin>>n>>k;
    vv v(n);
    all_n{
        cin>>v[i];
    }
    vv dp(n,INT_MAX);
    dp[0]=0;
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j <=i+k ; ++j) {
            if (j<n)
            dp[j]= min(dp[j], abs(v[j]-v[i])+dp[i]);
        }
    }
    cout<<dp[n-1]<<endl;
    return 0;
}
