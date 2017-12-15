//#include<stdio.h>
#include<bits/stdc++.h>
#include<conio.h>

int main(){

	char str[1000];
	int A,C,G,T;		A=C=G=T=0;

	printf(" Enter DNA Sequence :: ");
	gets(str);
	strupr(str);

	int i=0;
	while (str[i]!='\0'){

		// Project 01

		if(str[i]=='A'){		//Counting A
			A++;
		}
		if(str[i]=='C'){		//Counting C
			C++;
		}
		if(str[i]=='G'){		//Counting G
			G++;
		}
		if(str[i]=='T'){		//Counting T
			T++;
		}



		i++;
		}
	printf("\n Counting all the DNA Nucleotides\n");
	printf(" ----------------------------------");
	printf("\n A :: %d \n C :: %d \n G :: %d \n T :: %d",A,C,G,T);

	getch();
	return 0;
}
