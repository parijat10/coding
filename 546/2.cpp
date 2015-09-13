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
int compare (const void * a, const void * b)
{
      return ( *(int*)a - *(int*)b );
}
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
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,a[5000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
     qsort (a, n, sizeof(int), compare);
     k=0;
     for(i=1;i<n;i++)
     {
         if(a[i]<=a[i-1] )
         {
             k=k+a[i-1]-a[i]+1;;
             a[i]=a[i-1]+1;
         }
     }
//     if(a[n-1]==a[n-2])
  //       k++;
     cout<<k<<endl;



    return 0;
}

