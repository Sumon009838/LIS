#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define ll long long int
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void solve()
{
     int n,i,a,b;
     cin>>n;
     vector<int>v1,v;
     for(i=0;i<n;i++)
     {
         cin>>a;
         v.push_back(a);
     }
     for(i=0;i<n;i++)
     {
         auto it=lower_bound(v1.begin(),v1.end(),v[i]);
         if(it==v1.end())
         {
             v1.push_back(v[i]);
         }
         else
         *it=v[i];
     }
     cout<<v1.size()<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}