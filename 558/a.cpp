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
    cin.tie(NULL);
    LL pos=0,neg=0;
    LL posc=0,negc=0;
    LL n;
    cin>>n;
    LL po[100010],ne[100010];
    for(i=0;i<100002;i++)
    {
        po[i]=0;
        ne[i]=0;
    }

    while(n--)
    {
        cin>>i>>j;
        if(i<0)
        {
            ne[i*-1]=j;
            neg++;
            negc+=j;
        }
        else
        {
            po[i]=j;
            pos++;
            posc+=j;
        }
        
    }

    LL max=0;
    LL sum=0;
    LL sum1=0;
    if (pos<neg)
    {
        k=0;
        for(i=0;i<100002;i++)
        {
            if(ne[i]!=0)
            {
                sum+=ne[i];
                k++;
            }
            if(k==pos+1)
                break;
        }

        max=sum+posc;
    }
    else if(neg<pos)
    {

        k=0;
        for(i=0;i<100002;i++)
        {
            if(po[i]!=0)
            {
                sum+=po[i];
                k++;
            }
            if(k==neg+1)
                break;
        }

        max=sum+negc;
    }

    else {
        max=posc+negc;
    }


    cout<<max<<endl;


    return 0;
}

