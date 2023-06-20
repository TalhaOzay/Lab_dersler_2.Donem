#include <stdio.h>
#include <string.h>

// 1. Örnek
/*
void main(){
    char str1[100],str2[100];
    int length1,length2;
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    if (strcmp(str1,str2)==0){
        printf("First and second string is same.");
    }else{
        length1 = strlen(str1);
        length2 = strlen(str2);
        if (length1 - length2 == 0){
            printf("First and second strings length same.");
        }else if (length1 - length2 < 0){
            printf("Second string is longer then first string.");
        }else{
            printf("First string is longer then second string.");
        }
    }
}
*/

void main(){
    char str1[100],temp[100],finder[100];
    int j,i,L;
    printf("Enter first string : ");
    gets(str1);
    printf("Which word do you want to search in the string : ");
    scanf("%s",finder);
    L=strlen(finder);
    for(i=0;str1[i] != '\0';i++){
        if (str1[i] == ' '){
            if (strcmp(temp,finder) == 0){
                printf("Entered word founded in string.\n");
                printf("Founded index : %d",i-L+1);
                break;
            }else{
                printf("%s\n",temp);
                for (j=0;j<=i;j++){
                    temp[j] = '\0';
                }
            }
        }else{
            temp[i-j] = str1[i];
        }
    }
    if (strcmp(temp,finder) == 0){
        printf("Entered word founded in string.\n");
        printf("Founded index : %d",i-L+1);
    }else{
        printf("Given string does not contain in sentence.");
    }
}