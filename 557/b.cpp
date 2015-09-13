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
       if( *(long long int*)a - *(long long int*)b < 0 )
                   return -1;
           if( *(long long int*)a - *(long long int*)b > 0 )
                       return 1;
               if( *(long long int*)a - *(long long int*)b == 0 )
                           return 0;
}

// qsort (values, 6, sizeof(int), compare);



int main()
{
    LL i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    LL n,w,a[1000001];
    cin>>n>>w;
    for(i=0;i<2*n;i++)
        cin>>a[i];
    qsort (a,2*n,sizeof(LL), compare);

    //for(i=0;i<2*n;i++)
      //  cout<<a[i]<<' ';
    //cout<<endl;
    //cout<<a[0]<<a[5];
    LL max1,max2;
    max1=1000000000,max2=1000000000;
/*    for(i=0;i<n;i++)
        if(a[i]<max1)
            max1=a[i];
    for(i=n;i<2*n;i++)
        if(a[i]<max2)
        
            max2=a[i];
*/
    max1=a[0];
    max2=a[n];
    //cout<<max1<<' '<<max2<<endl;
    double max;
    if((double)max1<((double)max2)/2.0)

            max=(double)max1;
    else
        max=(double)max2/2.0;

    //cout<<"max="<<max;
    double limit=w/(3.0*(double)n);

    max=max*3.0*double(n);
    double ans;
    if(w > max)
        ans=max;
    else
        ans=w;

    cout<<ans<<endl;



            










    return 0;
}

