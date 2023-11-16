#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
   int m=1e9+7;
   int n;
   cin>>n;
   int fact=1;
   for(int i=1;i<=n;i++){
   fact=(fact*i);
   }
  string str=to_string(fact);
  int c=0;
  for(int i=str.size()-1;i>=0;i--)
  {
    if(str[i]!=0){
    cout<<c;
    break;
    }
    else
    c++;
  }



}
