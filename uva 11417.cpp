#include<iostream>
using namespace std;
int main()
{
	int number,i,k,j,sum,gcd;
	while(cin>>number){
		if(number==0)break;
		sum=0;
		for(i=1;i<number;i++){
			for(j=i+1;j<=number;j++){
				for(k=1;k<=i&&k<=j;k++){
					if(i%k==0&&j%k==0)gcd=k;
				}
				sum+=gcd;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
