#include<bits/stdc++.h>
using namespace std;
# define int long long
signed main(){

    int x,n;
    cin>>x>>n;
    set<int>position;
    multiset<int>length;
    position.insert(0);
    position.insert(x);
    length.insert(x-0);

    for(int i=0;i<n;i++)
    {
     int added;
     cin>>added;
     //position.insert(added);
     auto it=position.insert(added).first;
     int prev_val=*prev(it);
     int next_val=*next(it);
     length.erase(length.find(next_val-prev_val));
     length.insert(added-prev_val);
     length.insert(next_val-added);
     cout<<*length.rbegin()<<" ";

}
}
