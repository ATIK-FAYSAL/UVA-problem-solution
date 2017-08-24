#include<stdio.h>
#include<math.h>
int main()
{
	int number1,i,number2,result,j=0;
	while(j<1){
		int count=0;
		scanf("%d%d",&number1,&number2);
		if(number1==0&&number2==0){
			break;
		}
		for(i=number1;i<=number2;i++){
			result=sqrt(i);
			if(result*result==i){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
