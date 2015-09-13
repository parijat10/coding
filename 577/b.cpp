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

//asc
int compare (const void * a, const void * b)
{
      return ( *(int*)a - *(int*)b );
}

// qsort (values, 6, sizeof(int), compare);



int main()
{
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;
        LL total;
    LL a[1000010];
    cin>>n>>m;
    a[0]=0;
    
    
    total= 0;
    

    for(i=1;i<=n;i++)
    {
        cin>>k;
        total=(total + k);
        a[i]=(a[i-1]+k);
    }
    //cout<<total;

    if((total)%m==0 )
    {
        cout<<"YES"<<endl;
        return 0;
    }

    

    for(i=0;i<=n;i++)
        for(j=i+1;j<=n;j++)
        {
            if((total-(a[j]-a[i]))%m==0 && !(j==n && i==0))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    cout<<"NO"<<endl;







    return 0;
}

