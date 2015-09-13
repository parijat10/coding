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




    LL n,a[100010];
short pos[100000001];

//int neg[1000000001];
int main()
{
    int i,j,k,tmp;
    LL b[100010];

int num[100010];
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    for(i=0;i<100000001;i++)
        pos[i]=0;
    LL ai=0,bi=0;
    cin>>n>>k;
    LL t;
    for(i=0;i<n;i++)
    {
        
        cin>>t;
        if(t>0)
            a[ai++]=t;
        else if(t<0)
            b[bi++]=t;
    }




    for(i=0;i<ai;i++)
    {
        if(a[i]%k==0)
            num[i]=pos[a[i]/k];


        pos[a[i]]++;
        
    }


    LL count=0;
  
    if(k==1)
    {
        for(i=0;i<100000001;i++)
        {
            if(pos[i]>=3)
                count++;
            pos[i]=0;
        }

        
        for(j=0;j<bi;j++)
        {
        if(b[j]%k==0)
            num[j]=pos[b[j]/k];


        pos[b[j]]++;
        
        }


        for(i=0;i<100000001;i++)
        {
            if(pos[i]>=3)
                count++;
            pos[i]=0;
        }
        cout<<count<<endl;
        return 0;
    }






    
    for(i=0;i<100000001;i++)
        pos[i]=0;
    
    for(i=0;i<ai;i++)
        pos[a[i]]+=num[i];

    
    for(i=ai-1;i>=0;i--)
    {
        if(a[i]%k==0)
            count+=pos[a[i]/k];
        pos[a[i]]-=num[i];
    }

// ///////////////////////////////////
 
    for(i=0;i<100000001;i++)
        pos[i]=0;
    
    for(i=0;i<bi;i++)
    {
        if(b[i]%k==0)
            num[i]=pos[b[i]/k];


        pos[b[i]]++;
        
    }
    
    
    for(i=0;i<100000001;i++)
        pos[i]=0;
    
    for(i=0;i<bi;i++)
        pos[b[i]]+=num[i];

    
    for(i=bi-1;i>=0;i--)
    {
        if(b[i]%k==0)
            count+=pos[b[i]/k];
        pos[b[i]]-=num[i];
    }



    cout<<count<<endl;




    

    return 0;
}

