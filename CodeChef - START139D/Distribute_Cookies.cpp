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
    ll t;
    cin>>t;
    while (t--){
        ll n,m;
        cin>>n>>m;
        ll count1=m%n;
        ll count2=n-count1;
        if (m==1){
            cout<<n-m<<endl;
        }
        else if (m==0){
            cout<<n<<endl;
        }
        else if (n>m){
            cout<<n-m<<endl;
        }
        else{
            cout<<min(count1,count2)<<endl;
        }
    }
    return 0;
}
