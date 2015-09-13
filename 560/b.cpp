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

    int a,b,a1,b1,a2,b2;
    int f=0;
    cin>>a>>b>>a1>>b1>>a2>>b2;
    if(a1+a2<=a && max(b1,b2)<=b)
        f=1;
    else if(max(a1,a2)<=a && b1+b2<=b)
        f=1;
    else if(max(a1,a2)<=b && b1+b2<=a)
        f=1;


    else if(a1+b2<=a && max(a2,b1)<=b)
        f=1;
    else if(b1+a2<=a && max(a1,b2)<=b)
        f=1;
    else if(a1+a2<=b && max(b1,b2)<=a)
        f=1;
    else if(a1+b2<=b && max(a2,b1)<=a)
        f=1;
    else if(b1+a2<=b && max(a1,b2)<=a)
        f=1;


    if(f==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    //ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    return 0;
}

