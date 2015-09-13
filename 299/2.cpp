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
    long long int i,j,k,tmp,count;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    long long int n;
    cin>>n;
    long long int a[100];
    i=0;
    tmp=n;
    while(tmp!=0)
    {
        count++;
        a[i++]=tmp%10;

        tmp=tmp/10;
        
    }
    j=0;
    for(i=0;i<count;i++)
    {
        j=j+pow(2,i);
        if(a[i]==7)
        j=j+pow(2,i);
    }
    cout<<j<<endl;

    return 0;
}

