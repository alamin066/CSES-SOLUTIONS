#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){

/*lets count how many 5 is in n?
             how many 5*5 is in ?
             how many 5*5*5 is in n?
             and so on..
 */
 int n;
 cin>>n;
 int cur=5;
 int ans=0;
 while(cur<=n)
 {
  ans+=n/cur;
  cur*=5;
}
cout<<ans;

}
