#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){
int n;
  cin>>n;
  vector<pair<int,int>>movie(n);

 int start,end;
  for(int i=0;i<n;i++)
  {
   cin>>movie[i].second>>movie[i].first;
  }



  sort(movie.begin(),movie.end());

  int lastfinishmov=-1;
int totmovie=0;
  for(int i=0;i<n;i++)
  {
           if(lastfinishmov<=movie[i].second)
           {
              lastfinishmov=movie[i].first;
            totmovie++;
           }
 }
cout<<totmovie;
}

