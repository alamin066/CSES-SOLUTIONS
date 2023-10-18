#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
   int n;
   cin>>n;
   if(n==1)
    cout<<n;
   else  if(n==2||n==3)
    cout<<"NO SOLUTION";
   else{
     for(int i=1;i<=n;i++)
    if(i%2==0)
    cout<<i<<" ";
   for(int i=1;i<=n;i++)
    if(i%2==1)
    cout<<i<<" ";


}
}
