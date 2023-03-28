#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
   
    while(t--)
    {
        int n;cin>>n;
        int k=n;
       vector<int> v;
       while(n--)
       {
        int a;cin>>a;
        v.push_back(a);
       }
       int lund=0;
       for(int i=0;i<k;i++)
       {
        if(v[i]==k/2)
        lund=i;

       }
    int i=lund-1,j=lund+1;
    while(i>=0)
    {
        if(v[i]>v[lund])
        break;
        i--;
    }
    while(j<k)
    {
       if(v[j]<v[lund])
       {
        break;
       }
       j++;
    }
    int a=k-j+i+1;
    if(a%2)
    cout<<a/2+1<<endl;
    else
    cout<<a/2<<endl;
    }
    return 0;
}