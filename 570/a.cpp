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
    LL m,n;
    cin>>n>>m;

    LL a[10000];
    for(i=0;i<1000;i++)
        a[i]=0;
    LL max=-1,maxi=-1,tem;;
    for(i=0;i<m;i++)
    {

        max=-1;
        maxi=-1;

        for(j=0;j<n;j++)
        {
            cin>>tem;
            if(tem>max)
            {
                max=tem;
                maxi=j;
            }
        }
        a[maxi]++;

    }
    max=-1;
    maxi=-1;
    for(i=0;i<1000;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
     
            maxi=i;
    }
    }

    cout<<maxi+1<<endl;
    




    return 0;
}

