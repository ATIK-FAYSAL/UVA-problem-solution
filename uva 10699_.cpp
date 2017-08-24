#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
int prime_count (int n)
{
    int i,count=0;
    for(i=2;n>1;i++){
        if(n%i==0){
            count++;
            prime.push_back(i);
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    return count;
}
int main()
{
    int number;
    while(true)
    {
        scanf("%d",&number);
        if(number==0)break;
        printf("%d : %d\n",number,prime_count(number));
    }
}
