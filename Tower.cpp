#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){

  int n;cin>>n;vector<int>v;
 while(n--){
  int temp;cin>>temp;
  auto it=upper_bound(v.begin(),v.end(),temp);
  if(it==v.end())
    v.push_back(temp);
  else
    *it=temp;//karo upper bound pele take basement value k oi value dara replace korte hbe

 }
 cout<<v.size();
//karo upper bound na thakle shey nijei ekta basement


}
