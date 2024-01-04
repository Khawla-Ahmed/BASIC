//Khawla_Ahmed
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int is_prime(ll i)
{
    if(i<2) return 0;
    for(ll j=2;j<=sqrt(i);j++)
    {
        if(i%j==0 )
        {
            return 0;
        }

    }
    return 1;

}
int main()
{
    ll n;
    cin>>n;
    if(is_prime(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
         cout<<"NO"<<endl;
    }
    return 0;
}

