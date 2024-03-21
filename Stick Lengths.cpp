
#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){

 int n;cin>>n;int stick[n+1];
 for(int i=1;i<=n;i++)
    cin>>stick[i];
 sort(stick+1,stick+n+1);
 if(n%2==1)
 {
  //median
  int median=(n+1)/2;
  int total_cost=0;
   for(int i=1;i<=n;i++)
   {
     total_cost+=abs(stick[i]-stick[median]);
   }
  cout<<total_cost;
}

  if(n%2==0)
 {
  //median
  int median1=(n)/2;
  int median2=(n/2)+1;
  int avgmedianvalue=(stick[median1]+stick[median2])/2;
   int total_cost=0;
  if(abs(avgmedianvalue-stick[median1])<abs(avgmedianvalue-stick[median2]))
  {
   for(int i=1;i<=n;i++)
   {
     total_cost+=abs(stick[i]-stick[median1]);
   }

  cout<<total_cost;
   }
 else if(abs(avgmedianvalue-stick[median1])==abs(avgmedianvalue-stick[median2]))
  {
   for(int i=1;i<=n;i++)
   {
     total_cost+=abs(stick[i]-stick[median1]);
   }

  cout<<total_cost;
   }
 else
 {
  for(int i=1;i<=n;i++)
   {
     total_cost+=abs(stick[i]-stick[median2]);
   }

  cout<<total_cost;
  }
}
}
