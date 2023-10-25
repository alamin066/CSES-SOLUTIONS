#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
     int n;
     cin>>n;
     if(n%4==1||n%4==2)
     cout<<"NO"<<endl;
     else if(n%4==0)
     {
     cout<<"YES"<<endl;
     cout<<n/2<<endl;
     for(int i=1;i<=n;i++)
     {
       cout<<i<<" "<<i+3<<" ";
       i=i+3;
     }
      cout<<endl<<n/2<<endl;
     for(int i=2;i<n;)
     {
       cout<<i<<" "<<i+1<<" ";
       i=i+1+3;
     }
    }
   else if(n%4==3)
   {
     cout<<"YES"<<endl;
     cout<<n/2+1<<endl<<"1 2 ";

     for(int i=4;i<=n;i++)
     {
       cout<<i<<" "<<i+3<<" ";
       i=i+3;
     }
      cout<<endl<<n/2<<endl<<"3 ";
     for(int i=5;i<n;)
     {
       cout<<i<<" "<<i+1<<" ";
       i=i+1+3;
     }
}



}
