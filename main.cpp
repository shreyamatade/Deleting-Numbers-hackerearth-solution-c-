#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int ans=-1;

    int low=(n+1-k)/2;
    int high=(n+1-k)/2+k;

    for(int i=low;i<=high;i++)
    {
        ans=max(ans,a[i-1]);
    }
    cout<<ans<<"\n";
}

