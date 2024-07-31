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
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    vector<bool> v(d+1,false);
    v[0]= false;
    for (int i = 1; i < d+1; ++i) {
        if (i%k==0 or i%l==0 or i%m==0 or i%n==0){
            v[i]= true;
        }
    }
    int count=0;
    for (int i = 1; i < d+1; ++i) {
        if (v[i]){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
