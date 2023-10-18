#include<bits/stdc++.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{
  string s;
  cin>>s;int c=1,ans=1;
  for(int i=0;i<s.size()-1;i++)
  {
    if(s[i]==s[i+1])
    c++;
    else
    c=1;
    ans=max(ans,c);
  }
  cout<<ans;
 }
