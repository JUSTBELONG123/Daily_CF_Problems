#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 1e5;
void solve()
{
  int n,m;cin>>n>>m;
  vector<vector<int>> edge(n+1);
  vector<int> deed(n+1,0);
  for(int i=1;i<=m;i++)
  {
  	int v,u;cin>>v>>u;
    edge[max(v,u)].push_back(min(v,u));
    deed[v]++;
    deed[u]++;
  }
 int ans=0;
 vector<int> dp(n+1);
 for(int i=1;i<=n;i++)
 {
 	for(auto c:edge[i])
 	dp[i]=max(dp[i],dp[c]+1);
    ans=max(ans,(dp[i]+1)*(deed[i]));
 }
 cout<<ans<<endl;
}
signed main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
        solve();
    return 0;
}
