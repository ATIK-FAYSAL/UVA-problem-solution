#include<stdio.h>
#include<string.h>
int main()
{
	int len,i,test_case,sum,j=1,a,b,c,d,e,f,g,h;
	int A,B,C,D,E,F,G,x,y,arr[10];
	char input[100];
	scanf("%d",&test_case);
	while(j<=test_case){
		a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,x=0,y=0;
		scanf(" %[^\n]",input);
		len=strlen(input);
		for(i=0;i<len;i++){
			if(input[i]=='B'){
				a++;
				arr[i]=1;
			}
			else if (input[i]=='U'){
				b++;
				arr[i]=2;
			}
			else if (input[i]=='S'){
				c++;
				arr[i]=3;
			}
			else if (input[i]=='P'){
				d++;
				arr[i]=4;
			}
			else if (input[i]=='F'){
				e++;
				arr[i]=5;
			}
			else if(input[i]=='T'){
				f++;
				arr[i]=6;
			}
			else if(input[i]=='M'){
				g++;
				arr[i]=7;
			}
			if(a>9||b>9||c>9||d>9||e>9||f>9||g>9){
				x=1;
				break;
			}
			
		}
		
		if(x==1){
			printf("error\n");
		}
		else {
		sum=a*1+b*10+c*100+d*1000+e*10000+f*100000+g*1000000;
		printf("TOTAL =  %d\n",sum);
		}
	}
}
