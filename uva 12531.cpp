#include<iostream>
using namespace std;
int main()
{
	int number;
	while(cin>>number){
		if(number<0||number%6!=0) cout<<"N"<<endl;
		else cout<<"Y"<<endl;
	}
	return 0;
}
