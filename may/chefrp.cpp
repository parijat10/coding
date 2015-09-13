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
   long long int i,j,k,tmp,t,n,a[100001],min;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin>>t;
    while(t--)
    {
        long long int sum=0;
        tmp=0;
        min=0;
        cin>>n;
        k=n;
        while(n--)
        {
            cin>>i;
            if(min==0)
                min=i;
            else if (i<min)
                min=i;
            if(i<2)
                tmp=1;
            else
                sum+=i;
        }
/*
        if(k==1)
        {
            if(i>=2)
                cout<<'2'<<endl;
            else
                cout<<"-1"<<endl;

            continue;
        }
        
*/
        if(tmp==1)
            cout<<"-1"<<endl;
        else
            cout<<sum-min+2<<endl;
    }

    return 0;
}

