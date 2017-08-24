#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[10000];
    int i,len;
    int test_case,t=1;
    vector<int>number;
    scanf("%d",&test_case);
    while(t<=test_case)
    {
        for(i=0;i<26;i++)number.push_back(0);
        scanf("%s",&str);
        len = strlen(str);
        for(i=0;i<len;i++)
        {
            number[str[i]-65]++;
        }
        bool flag ;
        int count=0,count1=0;
        printf("Case %d: ",t);
        for(i=0;i<26;i++){
            flag = true;
            if(number[i]!=0){
                    count1++;
                for(int j=2;j<=sqrt(number[i]);j++){
                    if(number[i]%j==0){
                        flag = false;
                        break;
                    }
                }
                if(flag==true&&number[i]!=0&&number[i]!=1)printf("%c",i+65);
                else count++;
            }
        }
        if(count==count1)printf("empty");
        printf("\n");
        number.clear();
        t++;
    }
}
