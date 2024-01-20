#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){
      int n,x,val,c=0;
      cin>>n>>x;
      vector<pair<int,int>>vec;
       for(int i=1;i<=n;i++)
       {
       cin>>val;
       vec.push_back({val,i});
     }
   sort(vec.begin(),vec.end());
  int i=0,j=n-1;
while(i<j)
   {
      if((vec[i].first+vec[j].first)==x)
      {
         c=1;
         cout<<vec[i].second<<" "<<vec[j].second;
          break;
      }
   if((vec[i].first+vec[j].first)<x)
   i++;
  if((vec[i].first+vec[j].first)>x)
    j--;
}
if(c==0)
    cout<<"IMPOSSIBLE";
}
