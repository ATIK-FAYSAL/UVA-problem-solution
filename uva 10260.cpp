#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000];
    int len,i,num,number;
    while(scanf("%s",&str)!=EOF)
    {
        len = strlen(str);
        number=0;
        for(i=0;i<len;i++){
            if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V')num=1;
            else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z')num=2;
            else if (str[i]=='D'||str[i]=='T')num=3;
            else if (str[i]=='L')num=4;
            else if(str[i]=='M'||str[i]=='N')num=5;
            else if(str[i]=='R')num=6;
            else num=-1;
            if(number!=num&&num!=-1)printf("%d",num);
            number = num;
        }
        printf("\n");
    }
}
