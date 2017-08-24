#include<bits/stdc++.h>
using namespace std;
vector<int>divisor;
int sum_of_devisor(int number,int n)
{
        int sum=0;
		int len,x,i;
		//vector<int>divisor;
        if(number==1)printf("1\n");
        else {
            for(i=1;i<=sqrt(number);i++){
                if(number%i==0)divisor.push_back(i);
            }
        if(sqrt(number)*sqrt(number)==number){
            len = divisor.size();
            for(i=0;i<len-1;i++){
                x = number/divisor[i];
                divisor.push_back(x);
            }
        }
        else {
            len = divisor.size();
            for(i=0;i<len;i++){
                x = number/divisor[i];
                divisor.push_back(x);
            }
        }
        for(i=0;i<divisor.size();i++){
            if(divisor[i]%n!=0)sum+=divisor[i];
        }
    }
    return sum;
}
int main()
{
	int number,i,sum,num;
	int test_case,t=1;
	scanf("%d",&test_case);
	while(t<=test_case){
        scanf("%d%d",&number,&num);
		printf("%d\n",sum_of_devisor(number,num));
		t++;
		divisor.clear();
	}
	return 0;
}
