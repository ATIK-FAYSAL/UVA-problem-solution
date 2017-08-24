#include<bits/stdc++.h>
using namespace std;
#define mx 20000005
bitset <mx> isprime;
vector <int> prime;
void sieve()
{
    isprime[1]=1;

        for(int i=4; i<mx; i+=2) isprime[i]=1;

            for(int i=3; i*i<=mx; i+=2)
            {
                if(isprime[i] == 0)
                {
                    for(int j=i*i; j<mx; j+=i) isprime[j]=1;
                }
            }
            for(int i=1; i<mx; i++)
            {
                if(isprime[i]==0) prime.push_back(i);
            }
}  
int main ()
{
	vector<int>twin;
	int i,num;
	sieve();
	for(i=1;i<=prime.size();i++){
		if(prime[i]-prime[i+1]==-2){
			twin.push_back(prime[i]);
		}
	}
	while(scanf("%d",&num)!=EOF){
		printf("(%d, %d)\n",twin[num-1],twin[num-1]+2);
	}
}
