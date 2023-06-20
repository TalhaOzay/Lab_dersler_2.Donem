#include <stdio.h>
#include <string.h>

// 2. Örnek
/*
int main(){
    int num1, num2,sum;
    int *p;
    p = &sum;
    printf("Enter 2 number for summation :\n");
    scanf("%d%d",&num1,&num2);
    *p=num1+num2;
    printf("Answer : %d\n",*p);
    return 0;
}
*/

// 3. Örnek
/*
void main(){
    int nums[5],i;
    int *p = nums;
    for (i=0;i<5;i++){
        printf("Enter %d. element : ",i+1);
        scanf("%d",&nums[i]);
    }
    for (i=0;i<5;i++){
        printf("%d. element : %d\n",i+1,*(p+i));
    }
}
*/

// 4. Örnek
/*
void main(){
    char girilen[50];
    char *t;
    t = girilen;
    int length=0;
    printf("Write sth :\n");
    gets(girilen);
    while (*t != '\0'){
        length++;
        t++;
    }
    printf("Length of entered string : %d",length);
}
*/

// 5. Örnek
/*
void swaper(int *t){
    int temp=*(t+1);
    *(t+1)=*t;
    *t=*(t+2);
    *(t+2)=temp;
}

void main(){
    int num[3],i;
    int *t;
    t = num;
    for (i=0;i<3;i++){
        printf("Enter %d. element : ",i+1);
        scanf("%d",&num[i]);
    }
    swaper(num);
    for (i=0;i<3;i++){
        printf("%d. element : %d\n",i+1,*(t+i));
    }
}
*/

// 6. Örnek

void main(){
    int element;
    printf("Enter how many elements you want to enter : ");
    scanf("%d",&element);
    int nums[element],i,sum=0;
    int *t = nums;
    for (i=0;i<element;i++){
        printf("Enter %d. number : ",i+1);
        scanf("%d",&*(t+i));
    }
    for (i=0;i<element;i++){
        sum += *(t+i);
    }
    printf("Sum of the array is = %d",sum);
}


// 7. Örnek
/*
void main(){
    char str[100];
    char *t = str;
    printf("Write sth. for reverse : ");
    gets(str);
    int length = strlen(str);
    for (length-1;0<=length;length--){
        printf("%c",*(t+length));
    }
}
*/