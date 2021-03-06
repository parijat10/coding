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

LL ncr[4001][4001];

long long int per( long long int n, long long int k ) {
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    return ncr[n][k];
}

void calculate() {
    for(int i = 0; i < 4001; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0) ncr[i][j] = 1;
            else if(i == j) ncr[i][j] = 1;
            else if(j == i - 1) ncr[i][j] = i;
            else if(j == 1) ncr[i][j] = i;
            else ncr[i][j] = (ncr[i - 1][j] + ncr[i - 1][j - 1]) % 1000000000;
        }
    }
}
    

    long long    int dp[2001][2001]; 
    long long int    perar[4001];
int main()
{

    calculate();
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    long long  int i,j,k,tmp,t;

    long long int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        dp[1][0]=1;
        for(i=0;i<m+1;i++)
            perar[i]=per(i+m-1,m-1);
        for(i=1;i<m+1;i++)
        {
            dp[1][i]=(dp[1][i-1] + perar[i])%1000000000;
        }

        for(i=2;i<n+1;i++)
        {
            dp[i][0]=(perar[0]*dp[i-1][0])%1000000000;
            for(j=1;j<m+1;j++)
                dp[i][j]=(  (dp[i][j-1]%1000000000)    +       (( perar[j]*dp[i-1][j])%1000000000)          )%1000000000;
        }

        cout<<dp[n][m]<<endl;
    }

    return 0;
}

