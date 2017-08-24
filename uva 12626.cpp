#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100000];
	int len,i;
	int arr[10000];
	int count=0;
	scanf("%s",&str);
	len = strlen(str);
	int B=0,a=0,b=0,s=0,r=0,u=0,l=0;
	for(i=0;i<len;i++){
		if(str[i]=='B')B+=2;
		if (str[i]=='u')u+=1;
		if (str[i]=='a')a+=1;
		if (str[i]=='b')b+=2;
		if (str[i]=='l')l+=2;
		if (str[i]=='s')s+=2;
		if (str[i]=='r')r+=2;
	}
	int min;
	if(B<=u&&B<=a&&B<=l&&B<=s&&B<=r&&B<=b)min = B;
	if (u<=B&&u<=a&&u<=l&&u<=s&&u<=r&&u<=b)min=u;
	if (a<=B&&a<=u&&a<=l&&a<=s&&a<=r&&a<=b)min =a;
	if (s<=B&&s<=a&&s<=l&&s<=u&&s<=r&&s<=b)min = s;
	if (b<=B&&b<=a&&b<=l&&b<=s&&b<=r&&b<=u)min = b;
	if (l<=B&&l<=a&&l<=u&&l<=s&&l<=r&&l<=b)min = l;
	if (r<=B&&r<=a&&r<=l&&r<=s&&r<=u&&r<=b)min = r;
	printf("%d\n",min/2);
}
