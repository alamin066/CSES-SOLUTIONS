#include<bits/stdc++.h>
using namespace std;
# define int long long

 signed main()
{
    int n,p;
    cin>>n>>p;
    int m[n];
   int lo=0,hi=1e18;
   int time=0;
    for(int i=0;i<n;i++)cin>>m[i];
    while(lo<=hi)
    {
         int mid=lo+(hi-lo)/2;
          int total=0;
          for(int j=0;j<n;j++)
        {
           total+=mid/m[j];
           if(total>=p)
           {
             time=mid;

              break;
           }
        }
    if(time==mid)
    hi=mid-1;
    else
    lo=mid+1;
    }
    cout<<time;
}
