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
//    requisite();
    string s;
    cin>>s;
    ll n;
    cin>>n;
    vp v;
    for (int i = 0; i < n; ++i) {
        int a,b;
        cin>>a>>b;
        v.emplace_back(a,b);
    }
    vv dp(s.size(),0);
    dp[0]=0;
    for (int i = 0; i < s.size()-1; ++i) {
        if (s[i]==s[i+1]){
            dp[i+1]=dp[i]+1;
        }
        else{
            dp[i+1]=dp[i];
        }
    }
    for(auto it:v){
        cout<< dp[it.second-1]- dp[it.first-1]<<endl;
    }
    return 0;
}
