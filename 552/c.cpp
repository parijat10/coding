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



int check(LL w, LL m)
{
  if(m==1)
  return 1;

  if((m+1)%w == 0)
  if ( check(w, (m+1)/w ) == 1)
      return 1;

  if( m%w == 0)
  if(check(w, m/w)==1 ) 
      return 1;


  if( (m-1)%w == 0)
  if(check(w, (m-1)/w)==1)
      return 1;


  return 0;
}




int main()
{
    LL i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    LL w,m;
    cin>>w>>m;
//    if(m<(w-1))
  //  {
    //    cout<<"NO"<<endl;
     //   return 0;
   // }
    LL ans=0;


    
    
   
    if( check(w,m)==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    





    return 0;
}

