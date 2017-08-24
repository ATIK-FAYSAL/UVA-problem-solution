#include<stdio.h>
int main()
{
	int i,j=0,input[100],press[100],size,number,x=1;
	scanf("%d",&number);
	while(x<=number){
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&input[i]);
	}
	for(j=0;j<size;j++){
		scanf("%d",&press[j]);
	}
	for(i=0,j=0;i<size;i++){
		if(input[i]==2){
			if(press[j]==1){
				printf("a");
				j++;
			}
			else if (press[j]==2){
				printf("b");
				j++;
			}
			else if(press[j]==3){
				printf("c");
				j++;
			}
		}
			else if(input[i]==3){
			if(press[j]==1){
				printf("d");
				j++;
			}
			else if (press[j]==2){
				printf("e");
				j++;
			}
			else if(press[j]==3){
				printf("f");
				j++;
			}
		}
			else if(input[i]==4){
			if(press[j]==1){
				printf("g");
				j++;
			}
			else if (press[j]==2){
				printf("h");
				j++;
			}
			else if(press[j]==3){
				printf("i");
				j++;
			}
		}
			else if(input[i]==5){
			if(press[j]==1){
				printf("j");
				j++;
			}
			else if (press[j]==2){
				printf("k");
				j++;
			}
			else if(press[j]==3){
				printf("l");
				j++;
			}
		}
			else if(input[i]==6){
			if(press[j]==1){
				printf("m");
				j++;
			}
			else if (press[j]==2){
				printf("n");
				j++;
			}
			else if(press[j]==3){
				printf("o");
				j++;
			}
		}
			else if(input[i]==7){
			if(press[j]==1){
				printf("p");
				j++;
			}
			else if (press[j]==2){
				printf("q");
				j++;
			}
			else if(press[j]==3){
				printf("r");
				j++;
			}
			else if(press[j]==4){
				printf("s");
				j++;
			}
		}
			else if(input[i]==8){
			if(press[j]==1){
				printf("t");
				j++;
			}
			else if (press[j]==2){
				printf("u");
				j++;
			}
			else if(press[j]==3){
				printf("v");
				j++;
			}
		}
			else if(input[i]==9){
			if(press[j]==1){
				printf("w");
				j++;
			}
			else if (press[j]==2){
				printf("x");
				j++;
			}
			else if(press[j]==3){
				printf("y");
				j++;
			}
			else if (press[j]==4){
				printf("z");
				j++;
			}
		}
		else if (input[i]==0){
			if(press[j]==1){
				printf(" ");
				j++;
			}
			else {
				printf("0");
				j++;
			}
		}
			else if(input[i]==1){
			if(press[j]==1){
				printf(".");
				j++;
			}
			else if (press[j]==2){
				printf(",");
				j++;
			}
			else if(press[j]==3){
				printf("?");
				j++;
			}
			else{
				printf("%c",34);
				j++;
				}
			}
		}
		printf("\n");
		x++;
	}
	return 0;
}
