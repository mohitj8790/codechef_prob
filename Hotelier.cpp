#include<bits/stdc++.h>
using namespace std;

int m=10;

vector<int> hotel(char c,vector<int> &v)
{
    if(c=='L')
    {
        for(int i=0;i<m;i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                break;
            }
            
        }
    }
    else if(c=='R')
    {
        for(int i=m-1;i>=0;i--)
        {
            if(v[i]==0)
            {
                v[i]=1;
                break;
            }
            
        }
    }
    else
    {
        int r=c-'0';
        if(v[r]==1)
        {
            v[r]=0;
        }
    }
    
    return v;
}

vector<int> status(string str, int n)
{

    vector<int> v(m,0);
    
    for(int i=0;i<n;i++)
    {
        hotel(str[i],v);
    }
    return v;
}

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    vector<int> vec=status(str,n);
    
    for(auto i=0;i<vec.size();i++)
    {
        cout<<vec[i];
    }
    
    return 0;
}