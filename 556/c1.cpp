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

int main()
{
    LL i,j,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    LL n,k,a[1000001],count,m;
    count=0;
    LL t,t1;
    cin>>n>>k;
    while(k--)
    {
        cin>>m;
        
        //cin>>a[0];

        LL pairr=0;

        
        cin>>a[0];
        LL co=0;
        if(a[0]==1)
        pairr=1;
        for(i=1;i<m;i++)
        {
            cin>>a[i];
            if(pairr==1 && a[i]-a[i-1]==1)
            {
                co++;
            }
            else
                pairr=0;

            

        }
        count=count+m-1;



        count=count-(co*2);

    }

    cout<<count+n-1<<endl;






    return 0;
}

