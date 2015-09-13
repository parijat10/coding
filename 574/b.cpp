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


    int a[4010][4010];

int main()
{
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int visit[4010];
    int count[4010];
    int n,m;
    cin>>n>>m;
    int rec[4001]={0};
    for(i=0;i<n+1;i++)
    {
        visit[i]=count[i]=rec[i]=0;

        for(j=0;j<n+1;j++)
            a[i][j]=0;
    }
    for(i=0;i<m;i++)
    {
        cin>>j>>k;
        a[j][k]=a[k][j]=1;
        rec[j]++;
        rec[k]++;
    }

   // for(i=0;i<10;i++)
    //    cout<<rec[i]<<' ';
    int max=5000;

    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i][j]==1)
            {
                for(k=1;k<=n;k++)
                {
                    if(a[j][k]==1 && a[i][k]==1)
                    {
                        
                        int temp=rec[i]+rec[j]+rec[k]-6;
                        if(temp<max)
                        {
     //                       cout<<i<<' '<<j<<' '<<k<<' ';
                            max=temp;
                        }
                    }
                }
            }
        }

    }
    if(max==5000)
        cout<<"-1\n";
    else
        cout<<max<<'\n';







    



    return 0;
}

