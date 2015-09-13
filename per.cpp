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

long long int per( long long int n, long long int k )
{
        if (k > n) return 0;
            if (k * 2 > n) k = n-k;
                if (k == 0) return 1;

                    long long int result = n;
                        for( long long int i = 2; i <= k; ++i ) {
                                    result =((result%1000000000) *((n-i+1)%1000000000))%1000000000;
                                            result /= i;
                                            
                                                }
                            return result;

}


int main()
{
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    while(1)
    {
        long long int result;
        long long int n,r;
        cin>>n>>r;
        cout<<per(n,r)<<endl;
    }
    return 0;
}

