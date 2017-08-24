#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
vector<int>prime_count;
void prime_factorization(int number)
{
    int i,cnt;
    for(i=2;number>1;i++)
    {
        if(number%i==0){
            cnt=0;
            prime.push_back(i);
            while(number%i==0)
            {
                number/=i;
                cnt++;
            }
            prime_count.push_back(cnt);
        }
    }
}
int main()
{
    int test_case,t=1;
    int number1,number2,i;
    bool flag;
    scanf("%d",&test_case);
    while(t<=test_case)
    {
        flag = false;
        int count=0,num;
        scanf("%d%d",&number1,&number2);
        for(i=2;i<=sqrt(number1);i++)
        {
            if(number1%i==0){
                flag=true;
                break;
            }
        }
        vector<int>devisor;
        if(flag==false)
        {
            num = number2;
            while(num>1)
            {
                count+=num/number1;
                num/=number1;
            }
            if(count==0)printf("Case %d:\nImpossible to divide\n",t);
            else printf("Case %d:\n%d\n",t,count);
        }
        else {
            prime_factorization(number1);
            for(i=0;i<prime.size();i++){
                num = number2;
                count=0;
                while(num!=0){
                    count+=num/prime[i];
                    num/=prime[i];
                }
                devisor.push_back(count/prime_count[i]);
            }
            int mini=devisor[0];
            for(i=0;i<devisor.size();i++){
                if(mini>devisor[i])mini = devisor[i];
            }
            if(mini==0)printf("Case %d:\nImpossible to divide\n",t);
            else printf("Case %d:\n%d\n",t,mini);
            prime.clear();
            devisor.clear();
            prime_count.clear();
        }
        t++;
    }
}
