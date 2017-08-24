#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,t=1,i,n,m;
    char str1[100000],str2[100000];
    scanf("%d",&test_case);
    while(t<=test_case){
        scanf("%d%d",&n,&m);
        for(i=1;i<=n+m;i++)cin>>str1;
        //for(i=1;i<=m;i++)cin>>str2;
        printf("Case %d: %d\n",t,n*m);
        t++;
    }
}

