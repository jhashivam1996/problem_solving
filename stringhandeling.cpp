
#include<stdio.h>
void concat(char src[],char dest[]){

    int j=0;
    while(src[j]!='\0'){
        j++;
    }

    int i=0;
    while(src[i]!='\0'){
         src[j]=dest[i];
         i++; j++;
    }
    src[j]='\0';

}

 main(){
    char src[10]="hello";
    char dest[10]="world";
    concat(src,dest);

    int i=0;
    while(src[i]!='\0'){
         printf("%c",src[i]);
         i++;
    }

    }
