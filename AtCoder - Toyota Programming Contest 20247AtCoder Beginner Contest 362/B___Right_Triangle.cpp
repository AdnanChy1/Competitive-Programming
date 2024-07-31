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
    ll x1,x2,y1,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    ll dis_1= ((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1));
    ll dis_2= ((y3-y2)*(y3-y2))+((x3-x2)*(x3-x2));
    ll dis_3= ((y3-y1)*(y3-y1))+((x3-x1)*(x3-x1));
    ll maxi= max(dis_1,max(dis_2,dis_3));
    ll mini= min(dis_1, min(dis_2,dis_3));
    ll x=dis_1+dis_2+dis_3-maxi-mini;
//    cout<<maxi<<" "<<mini<<" "<<x<<endl;
    if (maxi==mini+x) cout<<"Yes";
    else cout<<"No";
    return 0;
}
