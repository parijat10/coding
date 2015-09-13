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
    int i,j,k,tmp;
    char s[20][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven", "twelve", "thirteen", "fourteen" ,"fifteen", "sixteen", "seventeen", "eighteen" ,"nineteen"};
    cin>>i;
    char t[10][10]={" ", "ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(i<=19)
        cout<<s[i];
    else
    {
        j=i/10;
        i=i%10;
        if(i==0)
            cout<<t[j];
        else
            cout<<t[j]<<'-'<<s[i];
    }


    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout<<endl;
    return 0;
}

