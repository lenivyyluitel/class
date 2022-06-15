#include <stdio.h>

void printPalindromesUpto(int uptonum){
	int n = 0, mod = 0, rev = 0;
	for(int i = 1; i <= uptonum ; i++){
		n = i;
		rev = 0;

		while(n != 0)
		{
			mod = n % 10;
			rev = rev * 10 + mod;
			n = n / 10;
		}
		if(i == rev){
			printf("%d\n", rev);
		}
	}
}

void printPalindromes(int howmany){
	int n = 0, mod = 0, rev = 0;
	int i = 1;
	int j = 0;
	while(i){
		n = i;
		rev = 0;

		while(n != 0)
		{
			mod = n % 10;
			rev = rev * 10 + mod;
			n = n / 10;
		}
		if(i == rev){
			printf("%d\n", rev);
			j++;
		}
		if(j == 20){
			break;
		}
		i++;
	}
}

int main(void){
	//printPalindromes(20);
	//printPalindromesUpto(100);
}
