#include<bits/stdc++.h>
using namespace std;
typedef long long int a;
int main()
{
    a n;
    cin>>n;
    if(n==1){
        cout<<"1";
        return 0;
    }
cout<<n<<" ";
    while(n!=1)
    {
        if(n%2==0)
         {

            n=n/2;
            cout<<n<<" ";

         }
        else{
            n=(n*3)+1;
            cout<<n<<" ";

        }
    }

    return 0;
}
