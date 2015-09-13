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


    string str;
int check()
{
    int i;
int f=0,f1=0;
    int ind=-1;
    int ind1=-1;

    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='A' && str[i+1]=='B' && f==0)
        {
            f=1;
            ind=i;
        }

        if(str[i]=='B' && str[i+1]=='A')
        {
            f1=1;
            ind1=i;
        }

        if(f==1 && f1==1 && ind!=ind1+1 && ind!=ind1-1)
        {
          //  cout<<"YES"<<endl;
            return 1;
        }
    }

    return 0;
}


int check1()
{
    int i;
int f=0,f1=0;
    int ind=-1;
    int ind1=-1;

    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='B' && str[i+1]=='A' && f==0)
        {
            f=1;
            ind=i;
        }

        if(str[i]=='A' && str[i+1]=='B')
        {
            f1=1;
            ind1=i;
        }

        if(f==1 && f1==1 && ind!=ind1+1 && ind!=ind1-1)
        {
           // cout<<"YES"<<endl;
            return 1;
        }
    }

//
    return 0;
    //cout<<"NO"<<endl;
}




int main()
{
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);


    cin>>str;
  /*  int f=0,f1=0;
    int ind=-1;
    int ind1=-1;

    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]=='A' && str[i+1]=='B' && f==0)
        {
            f=1;
            ind=i;
        }

        if(str[i]=='B' && str[i+1]=='A')
        {
            f1=1;
            ind1=i;
        }

        if(f==1 && f1==1 && ind!=ind1+1 && ind!=ind1-1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
*/
    if(check()==1 || check1()==1)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";



    return 0;
}

