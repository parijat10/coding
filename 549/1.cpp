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
    ios_base::sync_with_stdio(0);
    char a[100][100];
cin.tie(NULL);

    int m,n;
    cin>>m>>n;
    for(i=0;i<m;i++)
      //  for(j=0;j<n;j++)
            cin>>a[i];

  //  int cf,ca,cc,ce;
//    cf=ca=cc=ce=0;
    long long int count=0;
    for(i=0;i<m-1;i++)
        for(j=0;j<n-1;j++)
        {
            if( (a[i][j]=='f' || a[i+1][j]=='f' || a[i][j+1]=='f' || a[i+1][j+1]=='f') && 
(a[i][j]=='a' || a[i+1][j]=='a' || a[i][j+1]=='a' || a[i+1][j+1]=='a') &&  (a[i][j]=='c' || a[i+1][j]=='c' || a[i][j+1]=='c' || a[i+1][j+1]=='c')&& (a[i][j]=='e' || a[i+1][j]=='e' || a[i][j+1]=='e' || a[i+1][j+1]=='e' ))
            count++;
        
        }
    cout<<count<<endl;




    return 0;
}

