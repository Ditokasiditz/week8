#include<stdio.h>
#include<string.h>

int main(){
	char text[50];
	int i,j,length;
	printf("type your text : ");
	scanf("%s",text);
	length = strlen(text);
	for(i=0;i<length;i++){
		printf("%s",text);
		text[strlen(text)-1] = '\0';
		printf("\n");
	}
	return 0;
}