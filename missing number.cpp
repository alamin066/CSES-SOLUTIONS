#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   ll i,sum=0,n;cin>>n;ll a[n-1];

    for(i=0;i<n-1;i++){
            cin>>a[i];
     sum=sum+a[i];


     }
    ll sum1=(n*(n+1))/2;
    cout<<sum1-sum;
}


