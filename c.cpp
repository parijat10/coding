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

int check(int b,int a,int c)
{
    //if(a%b!=0)
      //  return 0;
    //a=a/b;
    while(a%2==0)
    {
        a=a/2;
    }
    while(a%3==0)
    {
        a=a/3;
    }
    //cout << a;
    if(a!=c)
        return 0;

    return 1;


}
int main()
{
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[100010];
    int maxi=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }

    int root=maxi;
    while(root%2==0)
    {
        root/=2;
    }
    while(root%3==0)
    {
        root/=3;
    }

//    cout<<root;
    for(i=0;i<n;i++)
    {
        if(check(maxi,a[i],root)==0)
        {
            cout<<"No\n";
            return 0;
        }
    }

    cout<<"Yes\n";

    return 0;
}

