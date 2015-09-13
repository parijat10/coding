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

struct point
{
    LL x,y;
};

double calarea(vector <struct point> a)
{
    LL i;
    LL size=a.size();
    double area = 0.0f;

    for ( i = 0; i < size - 1; ++i)
          area += a[i].x * a[i+1].y - a[i+1].x * a[i].y;

    area += a[size-1].x * a[0].y - a[0].x * a[size-1].y;

    area = abs(area) / 2.0f;

    return area;

}


int main()
{
    LL i,j,k,tmp,siz[100001],x1,y1;
    //double are[100001];



   vector <pair <long long,long long> > tem;
    vector <pair <long long,long long> > are;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    LL t,n;
    vector<struct point> a[100001];

    struct point temp;
    cin>>t;
    while(t--)
    {
        are.clear();
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>siz[i];
            LL max=0;
            LL t;
            for(j=0;j<siz[i];j++)
            {
                cin>>x1>>y1;
                t=x1*x1 + y1*y1;
                if(t>max)
                    max=t;

        

            }
        

            are.push_back(make_pair(max,i));



        }


        sort(are.begin(),are.end());

    

    for(i=0;i<n;i++)
    {
        siz[are[i].second]=i;
    }

    for(i=0;i<n;i++)
        printf("%lld ",siz[i]);
    

    printf("\n");


    }

    return 0;
}

