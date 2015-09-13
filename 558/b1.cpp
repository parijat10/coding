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


struct stend
{
    int start;
    int end;
    int cou;
};

    stend count1[1000010];
int main()
{

    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    LL n;
    int a[100010];
    cin>>n;
    int a1[100010];
   // vector<pair<int,int>> stend[100010];

    for(i=0;i<1000002;i++)
    {
        count1[i].cou=0;
        count1[i].start=count1[i].end=-1;
    }

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a1[i]=a[i];
        count1[a[i]].cou++;
        if(count1[a[i]].start == -1)
        {
            count1[a[i]].start = i+1;
            count1[a[i]].end = i+1;
        }

        else
            count1[a[i]].end=i+1;


    }
    
    LL max=-1;
    LL maxn=-1;
    for(i=0;i<1000002;i++)
    {
        if(count1[i].cou>max)
        {
            max=count1[i].cou;
            maxn=i;
        }
        else
            if(count1[i].cou==max)
            {
            
                if((count1[maxn].end- count1[maxn].start)>(count1[i].end-count1[i].start))
                {
                    maxn=i;
                }
            }

    }

    

    cout<<count1[maxn].start<<' '<<count1[maxn].end<<endl;


/*
//    for(i=0;i<5;i++)
  //      cout<<count1[i].start<<' '<<count1[i].end<<endl;
   // cout<<endl;
    
    qsort(a,n,sizeof(int),compare);

    //for(i=0;i<n;i++)
      //  cout<<a[i];
    //cout<<endl;
    LL max=0;
    LL maxn=-1;
    LL num=0;
    for(i=0;i<n;i++)
    {
        if(max==0)
        {
            num=1;
            max=1;
            maxn=a[i];
            continue;
        }

        if(a[i]==a[i-1])
        {
        num++;
        }
        else
        {

        if(num>max)
             {
                max=num;
        
                maxn=a[i-1];
             }
        else if(num==max)
             {
            if((count1[maxn].end- count1[maxn].start)>(count1[a[i-1]].end-count1[a[i-1]].start))
                    maxn=a[i-1];


            
            }
        num=1;
        }
    }


    cout<<count1[maxn].start<<' '<<count1[maxn].end<<endl;
    //cout<<maxn<<' '<<max<<endl;


    LL start=-1,end=-1;

    for(i=0;i<n;i++)
    {
        if(a1[i]==maxn)
        {
            if(start==-1)
                start=i+1;
            else
                end=i+1;
        }
    }

    cout<<start<<' '<<end<<endl;

*/


    
    return 0;
}

