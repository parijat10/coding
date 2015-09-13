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
    LL n,a;
    cin>>n;

    while(n--)
    {
        cin>>a;
        LL aa=a;
        LL count=0;
        while(a%5==0)
        {
            count++;
            a=a/5;
        }

        LL count1=0;
        LL aaa=aa;
        while(aaa%2==0)
        {
            count1++;
            aaa=aaa/2;
        }

        if(count>count1)
            count=count-count1;
        else
            count=0;



        //cout<<"count="<<count;

        if(count%2!=0)
            count++;
        if (count==0)
            cout<<aa<<endl;
        else
            cout<<aa*count*2<<endl;
    }



    return 0;
}

