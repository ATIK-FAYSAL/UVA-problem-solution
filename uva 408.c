#include<stdio.h>
int main()
{
	int number1,x,y,number2,i,j,ara1[1000],ara2[1000],result,count,count1;
	int number_count1,number_count2,last_number,num1,num2;
	while(scanf("%d%d",&number1,&number2)!=EOF){
		i=0,j=0,count=0,count1=0,result=0;
		number_count1=0,number_count2=0;
		for(x=2;x<=number1;x++){
			if(number1%x==0){
				ara1[i]=x;
				i++;
				count++;
			}
		}
		for(y=2;y<=number2;y++){
			if(number2%y==0){
				ara2[j]=y;
				j++;
				count1++;
			}
		}
		for(i=0;i<count;i++){
			for(j=0;j<count1;j++){
				if(ara1[i]==ara2[j]){
					result++;
				}
			}
		}
		printf("    %d    %d bad choice \n",number1,number2);
	}
}
