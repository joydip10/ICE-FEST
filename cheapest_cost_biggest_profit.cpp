#include<bits//stdc++.h>
using namespace std;

int main()
{
    long int test;
    cin>>test;
    while(test--)
    {
        long int a,b,c,p,i;
        c =0;
        cin>>a>>b;
        if(a<1 || a>100 || b<10 || b>50 ) {
            return 0;
          }
        for(long int i =1;i<a;i++)
        {
            c += b-5;
        }
        p = c+b;
        printf("%ld %ld\n",a,b);
        cout<<p<<endl;
    }
    return 0;
}
