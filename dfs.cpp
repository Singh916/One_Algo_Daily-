#include<bits/stdc++.h>
using namespace std;

#define ll long long int

const int N = 1e3+5;

vector<int> adj[N];

int n,m,vis[N];

void dfs(int u) {
	 vis[u]=1;
	 cout<<u<<" ";
	 for(auto to:adj[u]) {
		   if(!vis[to]) {
			     dfs(to);
			   }
		 }	
	}
	
	
int32_t main() {
	  cin>>n>>m;
	  for(int i=0;i<m;i++) {
		    int x,y;
		    cin>>x>>y;
		    --x,--y;
		    adj[x].push_back(y);
		    adj[y].push_back(x);
		  }
	  
	  dfs(0);	
	  cout<<endl;
	 
	}
