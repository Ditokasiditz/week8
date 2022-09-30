#include<stdio.h>
#include<string.h>

int main(){
    char text[50];
    int i,j,length;
    printf("type your string : ");
    scanf("%s",text);
    length = strlen(text);

    for(i=0;i<strlen(text);i++){
        for(j=0;j<length;j++){
            printf("%c",text[j]);
        }
        length--;
        printf("\n");
    }
    return 0;

}