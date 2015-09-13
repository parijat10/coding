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

    int co[4000000];
LL ee(LL n)
{
    if(n==2)
        return 1;
    if(n==1 || n==0)
        return 0;
            if(n%2==0)
            
            return n/2 + ee(n/2);
            else
            
            return n/2 + ee(n/2) + 1;
}



LL eva(int n)

{
    LL count=0;
    

    //count+=ee(co[0]);
    for(int i=1;i<n;i++)
        if( co[i]==0)
            count+=ee(co[i-1]);

    count+=ee(co[n-1]);
   return count;
}



void pr(int n)
{
    for(int i=0;i<n;i++)
        cout<<co[i]<<' ';

    cout<<endl;
}


int main()
{
    int i,j,k,tmp;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    char a[4000000];
    LL n,m;


    for(i=0;i<400000;i++)
        co[i]=0;

//    cout<<ee(4)<<endl;
    cin>>n>>m;
    cin>>a;
    //cout<<a;
  //  a[0]='1';
    int f=0;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(f==0 &&  a[i]=='.')
        {
            f=1;
            count=1;
        }
        else if(f==1 && a[i]=='.')
        {
            count++;
            //continue;
        }
        else if(f==1)
        {
            j=i-1;
            while(a[j]=='.' && j>=0)
            {
                co[j]=count;
                j--;
            }

            count=0;
            f=0;
        }
    }
    if(f==1)
        {
            j=i-1;
            while(a[j]=='.' && j>=0)
            {
                co[j]=count;
                j--;
            }

            count=0;
            f=0;
        }
//        cout<<a<<endl;
//pr(n);        

    LL in;
    char ch;
    
    int tt;
    int cc;

    LL ev=eva(n);
    for(i=0;i<m;i++)
    {
        cin>>in>>ch;
        //if(in==1)
       // {
        in--;
        cc=0;
            if(ch=='.' && a[in]!='.')
            {
                
                tt=0;
                a[in]='.';
                
                if(in!=n-1 && a[in+1]=='.')
                {

                    //ev-=ee(co[in+1]);
                    //tt+=co[in+1];
                    tt++;
                }

                    if(in!=0 && a[in-1]=='.' )
                    {
                        tt++;
                        //tt+=co[in-1];
                        //ev-=ee(co[in-1]);
                    }


                    /*for(j=in;a[j]=='.'&&j<=n;j++)
                        co[j]=tt;
                    j=in-1;
                    for(j=in-1;a[j]=='.' ;j--)
                    {
                        //cout<<j<<' '<<tt<<' ';
                        if(j==-1)
                            break;
                        
                        co[j]=tt;
                        //cout<<co[j]<<endl;

                    }
                    */
                    ev+=tt;
                    

            }

                else if(ch!='.' && a[in]=='.')
                {
                    cc=0;
                   /* ev-=ee(co[in]);
                    for(j=in-1;a[j]=='.'&&j>=0;j--)
                        cc++;
                    
                    for(j=in-1;a[j]=='.'&&j>=0;j--)
                        co[j]=cc;

                    cc=0;
                    for(j=in+1;a[j]=='.'&&j<=n;j++)
                        cc++;
                    
                    for(j=in+1;a[j]=='.'&&j<=n;j++)
                        co[j]=cc;
                    
                    a[in]=ch;
                    co[in]=0;

                    if(in!=0)
                        ev+=ee(co[in-1]);
                    if(in!=n-1)
                        ev+=ee(co[in+1]);
                        */

                    tt=0;
                
                if(in!=n-1 && a[in+1]=='.')
                {

                    //ev-=ee(co[in+1]);
                    //tt+=co[in+1];
                    tt--;
                }

                    if(in!=0 && a[in-1]=='.' )
                    {
                        tt--;
                        //tt+=co[in-1];
                        //ev-=ee(co[in-1]);
                    }

                    a[in]=ch;
                    ev+=tt;


                }


  //              pr(n);        

                //eva(n);
                cout<<ev<<endl;
                //cout<<a<<endl;
    }






                   
                    

    
        
    return 0;
}

