//PD
#include<bits/stdc++.h>
#define pb push_back
#define SZ(a) (int)(a.size())
#define sortarr(a) sort(a.begin(),a.end()) 
#define sortrev(a) sort(a.rbegin(),a.rend())
#define mp make_pair
#define fi(i,a,b) for(i=a;i<b;i++)
#define X first
#define Y second

using namespace std;

typedef long long LL;
typedef vector<int> VI;
LL modpow(LL a, LL p, LL mod)
{LL ret = 1;while(p){if(p&1)ret = (ret*a)%mod;a=(a*a)%mod;p/=2;}return ret;}

LL power(LL a, LL p)
{LL ret = 1;while(p){if(p&1)ret = (ret*a);a=(a*a);p/=2;}return ret;}
/*int p[1000011];
VI prms;
void sieve(int n)
{int i,j;prms.pb(2);;fi(i,3,n){if(!i%2||!p[i])continue;prms.pb(i);for(j=2*i;j<n;j+=i)p[j]=1;}}*/

LL padsr(LL a[], LL n)
{
    LL i,j;
    if(n==1)
        return 0;
    LL pa=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]-a[j-1]!=1)
                break;
        }

        if(j==n && i==0)
            break;
        
        if(j-i!=1)
        {
            pa=pa+j-i;
            i=j-1;
        }
        
  


    }

    if(j-i==n && a[0]==1)
        return 0;


    else if(j-i==n)
        return n-1;

    
    return pa;
}


LL par(LL a[], LL n)
{
    LL i,j;

    if(a[0]!=1)
        return 0;
    LL pai=0;
    for(i=1;i<n;i++)

    {
        if(a[i]-a[i-1]==1)
            pai++;
        else
            break;
    }
    if(pai==0)
        return 0;
    if(i==n)
        return (n-1)*2 + 1;

        return (pai*2);



}






int main()
{
    LL i,j,tmp;
    ios_base::sync_with_stdio(0);

    LL a[100000];
    LL n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<par(a,n);



    return 0;
}

