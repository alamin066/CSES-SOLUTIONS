#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){

  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  cout<<((i*i)*(i*i-1))/2-4*(i-1)*(i-2)<<endl;
}

}
