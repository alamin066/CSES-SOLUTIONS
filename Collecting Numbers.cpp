
#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){
  int n;
  cin>>n;
  int a[n];
  vector<pair<int,int>>index;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
   index.push_back(make_pair(a[i],i));
  sort(index.begin(),index.end());
  int ans=1;
 for(int i=0;i<n-1;i++)
 if(index[i].second>index[i+1].second)
    ans++;
 cout<<ans;
}
