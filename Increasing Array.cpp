
#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){


  int n;
  cin>>n;
  int a[n];

for(int i=0;i<n;i++)
 {
   cin>>a[i];
 }
  int ans=0;
for(int i=0;i<n-1;i++)
 {
   if(a[i]>a[i+1])
   {
 ans+=a[i]-a[i+1];
a[i+1]=a[i];
}
 }
 cout<<ans;

 }
