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

LL par(LL a[], LL n)
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
        if(j-i!=1)
        {
            pa++;
            i=j-1;
        }

    }
    return pa;
}




int main()
{
    int i,j,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    LL n,k,a[10001],count,m;
    count=0;
    LL t,t1;
    cin>>n>>k;
    while(k--)
    {
        cin>>m;
        
        cin>>a[0];
        t=a[0];

        
        for(i=1;i<m;i++)
        {
            cin>>a[i];
            t1=a[i];
            if(t1-t!=1)
            {
                count++;
                t=t1;
            }

        }
        count=count-par(a,m);
    }

    cout<<count+n-1<<endl;






    return 0;
}

