#include<stdio.h>
int main()
{
	int loop,length,j,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,I=0,J=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,i;
	char input[1000];
	scanf("%d",&loop);
	for(j=1;j<=loop;j++){
		scanf(" %[^\n]",input);
		length=0;
		for(i=0;input[i]!='\0';i++){
			length++;
		}
		for(i=0;i<length;i++){
			if(input[i]=='a'||input[i]=='A'){
				a++;
			}
			else if(input[i]=='b'||input[i]=='B'){
				b++;
			}
			else if(input[i]=='c'||input[i]=='C'){
				c++;
			}
			else if(input[i]=='d'||input[i]=='D'){
				d++;
			}
			else if(input[i]=='e'||input[i]=='E'){
				e++;
			}
			else if(input[i]=='f'||input[i]=='f'){
				f++;
			}
			else if(input[i]=='g'||input[i]=='G'){
				g++;
			}
			else if(input[i]=='h'||input[i]=='H'){
				h++;
			}
			else if(input[i]=='i'||input[i]=='I'){
				I++;
			}
			else if(input[i]=='j'||input[i]=='J'){
				J++;
			}
			else if(input[i]=='k'||input[i]=='K'){
				h++;
			}
			else if(input[i]=='l'||input[i]=='L'){
				l++;
			}
			else if(input[i]=='m'||input[i]=='M'){
				m++;
			}
			else if(input[i]=='n'||input[i]=='N'){
				n++;
			}
			else if(input[i]=='o'||input[i]=='P'){
				p++;
			}
			else if(input[i]=='q'||input[i]=='Q'){
				q++;
			}
			else if(input[i]=='r'||input[i]=='R'){
				r++;
			}
			else if(input[i]=='s'||input[i]=='S'){
				s++;
			}
			else if(input[i]=='t'||input[i]=='T'){
				t++;
			}
			else if(input[i]=='u'||input[i]=='U'){
				u++;
			}
			else if(input[i]=='v'||input[i]=='V'){
				v++;
			}
			else if(input[i]=='w'||input[i]=='W'){
				w++;
			}
			else if(input[i]=='x'||input[i]=='X'){
				x++;
			}
			else if(input[i]=='y'||input[i]=='Y'){
				y++;
			}
			else if(input[i]=='z'||input[i]=='Z'){
				z++;
			}
		}
	}
	printf("%c %d\n",input[i]+32,a);
		printf("%c %d\n",input[i]+32,b);
		printf("%c %d\n",input[i]+32,c);
		printf("%c %d\n",input[i]+32,d);
		printf("%c %d\n",input[i]+32,e);
		printf("%c %d\n",input[i]+32,f);
		printf("%c %d\n",input[i]+32,g);
		printf("%c %d\n",input[i]+32,h);
		printf("%c %d\n",input[i]+32,I);
		printf("%c %d\n",input[i]+32,J);
		printf("%c %d\n",input[i]+32,k);
		printf("%c %d\n",input[i]+32,l);
		printf("%c %d\n",input[i]+32,m);
		printf("%c %d\n",input[i]+32,n);
		printf("%c %d\n",input[i]+32,o);
		printf("%c %d\n",input[i]+32,p);
		printf("%c %d\n",input[i]+32,q);
		printf("%c %d\n",input[i]+32,r);
		printf("%c %d\n",input[i]+32,s);
		printf("%c %d\n",input[i]+32,t);
		printf("%c %d\n",input[i]+32,u);
		printf("%c %d\n",input[i]+32,v);
		printf("%c %d\n",input[i]+32,w);
		printf("%c %d\n",input[i]+32,x);
		printf("%c %d\n",input[i]+32,y);
		printf("%c %d\n",input[i]+32,z);
}
