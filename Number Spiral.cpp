#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main()
{

  int t;
cin>>t;
while(t--)
{
  int i,j;
 cin>>i>>j;

 if(i==j)
    cout<<i*i-(i-1)<<endl;
  else if(i>j)
  {
     if(i%2==0)
    cout<<(i*i-(i-1))+(i-j)<<endl;
    else
    cout<<(i*i-(i-1))-(i-j)<<endl;

  }
  else
  {
    if(j%2==0)
    cout<<(j*j-(j-1))-(j-i)<<endl;
    else
    cout<<(j*j-(j-1))+(j-i)<<endl;
  }
}

}

