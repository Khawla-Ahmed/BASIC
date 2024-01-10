//Khawla_Ahmed
// BINARY_SEARCH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int to_find;
    cin>>to_find;

    int low=0,high=n-1,mid;
int i=0;
    while((high-low)>1)
    {
        i++;
        cout<<i<<endl;
        cout<<"low high : "<<low<<"  "<<high<<endl;
        mid=(high+low)/2;
        cout<<"mid : "<<mid<<endl;
        if(v[mid]<to_find)
        {
            low=mid+1;
        }
        else{
            high=mid;
        }
        cout<<"01low high : "<<low<<"  "<<high<<endl;
    }
    if(v[low]==to_find) cout<<low<<endl;
    else if(v[high]==to_find)cout<<high<<endl;
    else cout<<-1<<endl;
    return 0;
}

