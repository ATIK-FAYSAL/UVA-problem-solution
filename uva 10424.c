#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100],name2[100];
	int x,len1,len2,sum1,sum2,i,j;
	float parcent;
	int total,total1;
	while(scanf(" %[^\n]",name1)!=EOF){
		scanf(" %[^\n]",name2);
		sum1=0,sum2=0;
		len1=strlen(name1);
		len2=strlen(name2);
		for(i=0;i<len1;i++){
			if(name1[i]>='a'&&name1[i]<='z'){
				sum1+=name1[i]-96;
			}
			else if (name1[i]>='A'&&name1[i]<='Z'){
				sum1+=name1[i]-64;
			}
		}
		for(i=0;i<len2;i++){
			if(name2[i]>='a'&&name2[i]<='z'){
				sum2+=name2[i]-96;
			}
			else if (name2[i]>='A'&&name2[i]<='Z'){
				sum2+=name2[i]-64;
			}
		}
		printf("SUM1 = %d SUM2 = %d\n",sum1,sum2);
		for(j=1;j<=200;j++){
			total=0;
			while(sum1!=0){
				total+=sum1%10;
				sum1/=10;
			}
			if(total<=9){
				break;
			}
			sum1=total;
		}
		for(x=1;x<=200;x++){
			total1=0;
			while(sum2!=0){
				total1+=sum2%10;
				sum2/=10;
			}
			if(total1<=9){
				break;
			}
			sum2=total1;
		}
		if(total>total1){
		parcent=(float)(total1*100)/total;
		printf("parcent = %.2f\n",parcent);
		}
		//printf("total = %d  total1 = %d\n",total,total1);
		else if(total<total1){
		parcent=(float)(total*100)/total1;
		printf("parcent = %.2f\n",parcent);
		}
		else if(total==total1){
			printf("100.00\n");
		}
		else if(total==0||total1==0){
			printf("0.00\n");
		}
	}
}
