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


LL ee(LL n)
{
    if(n==2)
        return 1;
    if(n==1 && n==0)
        return 0;
            if(n%2==0)
            
            return n/2 + ee(n/2);
            else
            
            return n/2 + ee(n/2) + 1;
}



void eva(int n)

{
    LL count=0;
    

    count+=ee(co[0]);
    for(i=1;i<n;i++)
        if( co[i]==0)
            count+=ee(co[i-1]);

    count+=co[n-1];
}





int main()
{
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    LL n,m;
    cin>>n>>m;

    if(n==1)
    {
        cout<<'1'<<endl;
        return 0;
    }

    if(n%2==0)
    {
        if(m==n/2)
            cout<<m+1;
        else if (m==n/2 + 1)
            cout<<m-1;
        else
        {
            if(m<n/2)
                cout<<m+1;
            else
                cout<<m-1;
        }
    }

    else
    {
        if(m==n/2 + 1)
            cout<<m-1;
        else
        {
            if(m<n/2+1)
                cout<<m+1;
            else
                cout<<m-1;
        }

    }
    cout<<endl;
    return 0;
}

