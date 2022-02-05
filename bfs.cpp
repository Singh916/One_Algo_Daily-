#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
	
using namespace std;
using namespace __gnu_pbds;
	
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
*this << "[";
for (auto it = d.b; it != d.e; ++it)
*this << ", " + 2 * (it == d.b) << *it;
ris << "]";
}
 
#define trace(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
 
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define cool ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int  long long int
#define pb push_back
#define fe first
#define lb lower_bound 
#define ub upper_bound
#define pii pair<pair<int,int>,pair<int,int> >
#define se second
#define endl "\n"
#define pi pair<int, int>
#define mi          map<int,int>
#define mii         map<pi,int>
#define vi vector<int> 
#define vvi vector<vi>
#define bs   binary_search
#define rep(i,a,b) for(int i=a;i<b;i++)
#define gd(a,b) __gcd((int)a,(int)b)
#define rep1(i,a,b) for(int i=a;i<=b;i++)	
#define all(c) (c).begin(),(c).end()
#define sz(x)       (int)x.size() 
#define PI 3.14159265358979323846
	
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> o_set;
	
	
const int N=5e3+10;

const int INF=1e18;

const int mod=1e9+7;

int dx[4]={0,0,+1,-1};
int dy[4]={+1,-1,0,0};  

 
int po(int a, int b) {
	int res = 1;
	while (b > 0) {
	  if (b & 1)
	    res = (res%mod * a%mod) % mod;
	  a =(a%mod*a%mod) % mod;
	  b >>= 1;
	}
	return res;
}

vi adj[N];
int vis[N];

  
void solve() {
   int n,m;
   cin>>n>>m;
   
   rep(i,0,m) {
     int x,y;
     cin>>x>>y;
     --x,--y;
     adj[x].pb(y);
     adj[y].pb(x);    
   }
   
   queue<int> q;
   
   q.push(0);
   vis[0]=1;
   while(!q.empty()) {
	     int x=q.front();
	     q.pop();
	     cout<<x<<" ";
	     for(auto to:adj[x]) {
			   if(!vis[to]) {
				     q.push(to);
				     vis[to]=1;
				   }
			 }
	   }
   	   
   
 }
	  
				
int32_t main() {
	cool;	
	int t=1;
 
	//freopen("input.txt","r",stdin);	
	//freopen("output.txt","w",stdout);	
 
	//cin>>t;
 
	while(t--)
			solve();
	
		return 0;	   
}
	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
