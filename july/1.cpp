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

int strcm(char s[], char t[])
{
    int i;
    for(i=0; s[i]!='\0'&& t[i]!='\0' ;i++)
    {
        if (s[i]!=t[i])
            return -1;
    }
    if(s[i]!='\0' || t[i]!='\0')
        return -1;

    return 0;
}
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
    LL t;
    char a[6][100];
    cin>>t;
    int f=-1,se=-1;
    int count=0;
    while(t--)
    {
        count=0;
        for(i=0;i<6;i++)
        cin>>a[i];

        

        if((strcmp(a[2],a[0])==0 || strcmp(a[3],a[0])==0) && (strcmp(a[4],a[0])==0 || strcmp(a[5],a[0])==0))  
            count=1;


        if((strcmp(a[2],a[1])==0 || strcmp(a[3],a[1])==0) &&(strcmp(a[4],a[1])==0 || strcmp(a[5],a[1])==0))  
          count=1;
    
        /*

        if( (a[2]==a[0] || a[3]==a[0] ) && (a[4]==a[0] || a[5]==a[0] ) )
            count=1;

        if( (a[2]==a[1] || a[3]==a[1] ) && (a[4]==a[1] || a[5]==a[1] ) )
            count=1;

*/


        if(count==1)
            printf("YES\n");
        else
            printf("NO\n");
    }


    


   
                       
            return 0;
}

