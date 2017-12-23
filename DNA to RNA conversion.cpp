//#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>

int main(){

	char str[1000];


	printf(" Enter DNA Sequence :: ");
	gets(str);
	strupr(str);

	int i=0;
	while (str[i]!='\0'){


		if (str[i]=='T'){		// DNA to RNA
			str[i]='U';
		}
		i++;
		}

	printf("\n\n Transcribed RNA Sequence :: ");
	puts(str);

	getch();
	return 0;
}
