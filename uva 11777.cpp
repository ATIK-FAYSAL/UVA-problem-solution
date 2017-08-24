#include<stdio.h>
int main()
{
	int i,number,f_term,s_term,final,atten,class_t[3],sum,max,min,s_max,j=1,avg;
	scanf("%d",&number);
	while(j<=number){
		sum=0,max=0,s_max=0;
		scanf("%d%d%d%d",&f_term,&s_term,&final,&atten);
			for(i=0;i<3;i++){
			scanf("%d",&class_t[i]);
		}
		max=s_max;
		for(i=0;i<3;i++){
			if(max<class_t[i]){
				s_max=max;
				max=class_t[i];
			}
			else if(s_max<class_t[i]){
				s_max=class_t[i];
			}
		}
		avg=(max+s_max)/2;
		sum=f_term+s_term+final+atten+avg;
		if(sum>=90){
			printf("Case %d: A\n",j);
		}
		else if (sum>=80&&sum<=89){
			printf("Case %d: B\n",j);
		}
		else if (sum>=70&&sum<80){
			printf("Case %d: C\n",j);
		}
		else if (sum>=60&&sum<70){
			printf("Case %d: D\n",j);
		}
		else {
			printf("Case %d: F\n",j);
		}
		j++;
	}
	return 0;
}
