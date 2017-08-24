#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
int seive(long long int n)
{
    int mx,i,x;
    for(i=2;n>1;i++){
        if(n%i==0){
            prime.push_back(i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    mx=0;
    if(prime.size()==1)mx = -1;
    else {
        for(i=0;i<prime.size();i++){
            if(mx<prime[i])mx=prime[i];
        }
    }
    return mx;
}
int main()
{
    long long int number;
    while(true){
        scanf("%lld",&number);
        if(number==0)break;
        printf("%d\n",seive(number));
        prime.clear();
    }
}
