#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){

 int n,x;
 cin>>n>>x;
 multiset<int,greater<int>>ticket;
 for(int i=0;i<n;i++)
 {
  int a;
 cin>>a;
  ticket.insert(a);
}
 for(int i=0;i<x;i++)
 {
   int p;
   cin>>p;
   auto it=ticket.lower_bound(p);
     if(it==ticket.end())
     cout<<"-1"<<endl;
     else{
    cout<<*it<<endl;
    ticket.erase(it);
   }
}
}


