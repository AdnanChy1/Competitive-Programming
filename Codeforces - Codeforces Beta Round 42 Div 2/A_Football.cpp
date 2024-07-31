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
    ll n;
    cin>>n;
    string s[n];
    all_n{
        cin>>s[i];
    }
    map<string,int>mp;
    string a;
    ll count=0;
    all_n{
        mp[s[i]]++;
    }
    for(auto it:mp){
        if (it.second>count){
            count=it.second;
            a=it.first;
        }
    }
    cout<<a<<endl;
    return 0;
}
