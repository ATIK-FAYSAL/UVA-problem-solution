#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
bitset<mx>is_prime;
vector<int>prime;
void seive()
{
    int i,j;
    is_prime[0]=is_prime[1]=1;
    prime.push_back(2);
    for(i=3;i*i<mx;i+=2)
    {
        if(!is_prime[i])
        {
            for(j=i*i;j<mx;j+=i)is_prime[j]=1;
        }
    }
    for(i=3;i<mx;i+=2)
    {
        if(!is_prime[i])prime.push_back(i);
    }
}
int number_of_devisor(int n)
{
    int i,cnt,ans=1;
    for(i=0;prime[i]*prime[i]<=n&&i<prime.size();i++)
    {
        if(n%prime[i]==0)
        {
            cnt = 0;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                cnt++;
            }
            ans*=(cnt+1);
        }
    }
    if(n!=1)ans*=2;
    return ans;
}
int main()
{
    seive();
    int number1,number2,i,maxi,max_number,num;
    int test_case,t=1;
    scanf("%d",&test_case);
    while(t<=test_case)
    {
        maxi = 0;
        int x;
        scanf("%d%d",&number1,&number2);
        for(i=number1;i<=number2;i++)
        {
            num = i;
            x = number_of_devisor(num);
            if(maxi<x)
            {
                max_number=i;
                maxi=x;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",number1,number2,max_number,maxi);
        t++;
    }
}
