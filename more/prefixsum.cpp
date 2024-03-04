/*
    Khawla Ahmed
    created: 04.03.2024
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll arr[n+10];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll presum[n+10];
    presum[0]=arr[0];
    for(ll i=1;i<n;i++)
    {
        presum[i]=arr[i]+presum[i-1];
    }
    for(ll i=0;i<n;i++)
    {
        cout<<presum[i]<<" ";

    }

    return 0;
}
