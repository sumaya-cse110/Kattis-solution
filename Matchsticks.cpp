#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define ld          long double

#define si(a)       scanf("%d",&a)
#define si2(a,b)    scanf("%d%d",&a,&b)
#define si3(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define sl(a)       scanf("%lld",&a)
#define sl2(a,b)    scanf("%lld%lld",&a,&b)
#define sl3(a,b, c)    scanf("%lld%lld%lld",&a,&b,&c)

#define pfi(a)      printf("%d", a)
#define pfl(a)      printf("%lld", a)
#define pf(a)       printf("a")
#define el          printf("\n");
#define YES         printf("YES\n")
#define NO          printf("NO\n")
#define Yes         printf("Yes\n")
#define No          printf("No\n")
#define yes         printf("yes\n")
#define no          printf("no\n")
#define space       printf(" ")
#define loop(i,a,b) for(int i=a; i<=b; i++)
#define pll         pair<ll,ll>
#define pii         pair<int, int>

#define sq(a)       (a)*(a)

#define pb          push_back
#define mk          make_pair
#define sz          size()
#define ff          first
#define ss          second
#define mem(a,val)  memset(a, val, sizeof(a))
#define all(v)      v.begin(), v.end()

#define md          1000000007
#define pi          acos(-1.0)
#define inf         1000000000000

#define p(a, b, e)  for(int i=b; i<=e; i++) printf("%lld ", a[i]);
#define csh         printf("Case #%d: ", ++cs)
#define csc         printf("Case %d: ", ++cs)


#define fast1 ios::sync_with_stdio(false);
#define fast2 cin.tie(nullptr);

int x[5]= {0, 1, 0, -1};
int y[5]= {1, 0, -1, 0};

int mn[100], mx[100];
vector<int>v, a, b;
int main()
{
    int t,n,k,m,l,r,sum=0, ans=0,nm=0,cnt=0,x,y,z;
    int  cs=0;

    mn[2]=1, mn[3]=7, mn[4]=4,  mn[5]=2,  mn[6]= 6,  mn[7]=8 ;

    si(t);
    while(t--)
    {
        si(n);
        int p=n;
        if(n<8) pfi(mn[n]);
        else
        {
            ll p = n%7;
            ll pp = n/7;

           if(p==1)
           {
               printf("10");
               pp--;
           }
           else if(p==2)
           {
               printf("1");
           }
           else if(p==3)
           {
               if(n>=17) printf("200"), pp-=2;
               else printf("22"),pp--;
           }
           else if(p==4)
           {
               printf("20");
               pp--;
           }
           else if(p==5)
           {
               printf("2");
           }
           else if(p==6) printf("6");

           for(int i=0; i<pp; i++)
            printf("8");

        }
        space;

        if(n%2)
            printf("7"), n-=3;
        for(int i=0; i<(n/2); i++)
        {
            printf("1");
        }
        el;

    }
}
