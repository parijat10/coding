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
    LL i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    LL n,m;

    cin>>n>>m;
    LL a[200003];
    LL t,t1,t2,t3;
    cin>>t>>t1;
    fi(i,0,n-1)
    {
        cin>>t2>>t3;

        a[i]=t2-t1;
        t=t2;
        t1=t3;
    }

    //LL bri[1000000];

    vector <pair <long long,long long> > bri;
    fi(i,0,m)
    {
        cin>>k;
        bri.push_back(make_pair(k,i+1));
    }


    LL  ans[200010];
    //qsort (bri, m, sizeof(LL), compare);

    sort(bri.begin(),bri.end());
    j=0;
    fi(i,0,n-1)
    {
        while(1)
        {
            if(a[i]>bri[j].first && j<m)
                j++;
            else if(j<m)
            {
                ans[i]=bri[j].second;
                j++;
                break;
            }
            else
                break;

        }

        if(j==m)
            break;
    }
    if(i==n-1)
    {
        cout<<"Yes"<<endl;
        fi(i,0,n-1)
            cout<<ans[i]<<' ';
        cout<<endl;
    }
    else
        cout<<"No"<<endl;
    
    bri.clear();




    
    return 0;
}

