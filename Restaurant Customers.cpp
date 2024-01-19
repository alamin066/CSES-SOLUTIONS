#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){
  vector<pair<int,int>>events;
  int n;
  cin>>n;
 int start,end;
  for(int i=0;i<n;i++)
  {
   cin>>start>>end;
   events.push_back({start,+1});
   events.push_back({end,-1});
  }
  sort(events.begin(),events.end());
  int overlap=0;
  int maxoverlap=0;
  for(auto i : events)
  {
  overlap+=i.second;
  maxoverlap=max(overlap,maxoverlap);
  }
cout<<maxoverlap;



}
