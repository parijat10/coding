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



int main()
{
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    vector<pair<int,pair<int,int> > > v;
    int t,n,x,y,x1,y1,i1;
    //vector<pair<int,pair<int,int> > >::iterator i1;
    LL count;
    cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        count=0;
        v.clear();
        cin>>n;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
            {
                cin>>tmp;
                v.push_back(make_pair(tmp,make_pair(i,j)));
            }

        sort(v.begin(), v.end());
        i1=0;


        x=v[i1].second.first;
        y=v[i1].second.second;
        i1++;
    //    cout<<v.size();
        for(; i1!=v.size(); i1++)
        {
            
            x1=v[i1].second.first;
            y1=v[i1].second.second;
            count+=abs(x-x1) + abs(y-y1);

            x=x1;
            y=y1;
            
        }


        cout<<count<<'\n';




    }



    return 0;
}

