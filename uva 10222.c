#include<stdio.h>
int main()
{
	char letter;
	int i;
	while(scanf("%c",&letter)!=EOF){
		if(letter=='E'||letter=='e'){
			printf("q");
		}
		else if(letter=='R'||letter=='r'){
			printf("w");
		}
		else if(letter=='T'||letter=='t'){
			printf("e");
		}
		else if(letter=='Y'||letter=='y'){
			printf("r");
		}
		else if (letter=='U'||letter=='u'){
			printf("t");
		}
		else if(letter=='I'||letter=='i'){
			printf("y");
		}
		else if (letter=='O'||letter=='o'){
			printf("u");
		}
		else if(letter=='P'||letter=='p'){
			printf("i");
		}
		else if(letter=='['){
			printf("o");
		}
		else if(letter==']'){
			printf("p");
		}
		else if(letter=='D'||letter=='d'){
			printf("a");
		}
		else if(letter=='F'||letter=='f'){
			printf("s");
		}
		else if(letter=='G'||letter=='g'){
			printf("d");
		}
		else if(letter=='H'||letter=='h'){
			printf("f");
		}
		else if(letter=='J'||letter=='j'){
			printf("g");
		}
		else if(letter=='K'||letter=='k'){
			printf("h");
		}
		else if(letter=='L'||letter=='l'){
			printf("j");
		}
		else if(letter==';'){
			printf("k");
		}
		else if(letter==39){
			printf("l");
		}
		
		else if(letter=='C'||letter=='c'){
			printf("z");
		}
		else if(letter=='V'||letter=='v'){
			printf("x");
		}
		else if(letter=='B'||letter=='b'){
			printf("c");
		}
		else if(letter=='N'||letter=='n'){
			printf("v");
		}
		else if(letter=='M'||letter=='m'){
			printf("b");
		}
		else if(letter==','){
			printf("n");
		}
		else if(letter=='.'){
			printf("m");
		}
		else if(letter=='/'){
			printf(",");
		}
		else if (letter=='\\'){
			printf(";");
		}
		else if(letter=='\n'){
			printf("\n");
		}
		else if (letter==' '){
			printf(" ");
		}
	}
	return 0;
}
