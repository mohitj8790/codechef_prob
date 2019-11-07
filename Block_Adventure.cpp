#include<bits/stdc++.h>
using namespace std;

#define ll long long int

string game(ll arr[],ll n,ll m,ll k)
{
    int r;
    if(n==1)
    {
        return "YES";
    }
    
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
            {
                r=arr[i]-arr[i+1];
                
            }
            else
            {
                r=arr[i]+k-arr[i+1];
            }
            m=m+r;
            if(m<0)
            {
                return "NO";
            }
    }
    
    return "YES";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0)
    {
        ll n,m,k;
        
        cin>>n;
        cin>>m;
        cin>>k;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        cout<<game(arr,n,m,k)<<"\n";
        t--;
    }
    return 0;
}