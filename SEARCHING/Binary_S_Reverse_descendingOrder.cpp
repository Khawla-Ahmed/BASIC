//Khawla_Ahmed
//Binary Search(Reverse Sorted)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int to_find;
    cin>>to_find;

    ll low=0,high=n-1,mid;
    while((high-low)>1)
    {
        mid=(high-low)/2;
        if(v[mid]<to_find)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(v[low]==to_find)cout<<low<<endl;
    else if(v[high]==to_find) cout<<high<<endl;
    else cout<<-1<<endl;

    return 0;
}
