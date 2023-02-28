/*#include <stdio.h>

void hesapla(int x,int y){
    int point[100],s,sum=0,p=0;;
    for (s=0; s<x; s++){
        printf("Enter %d student number : ",s+1);
        scanf("%d",&point[s]);
        if (y<point[s]){
            p++;
        }
        sum += point[s];
    }
    printf("Average of the class = %d\n",sum/x);
    printf("number of the student who passed the class = %d",p);
}

void main(){
    int stnum,pass;
    printf("Please enter studen number (Maximum 100) : ");
    scanf("%d",&stnum);
    printf("Please enter pass note : ");
    scanf("%d",&pass);
    hesapla(stnum,pass);
}
*/

//2. Örnek
#include <stdio.h>

int kitleindex(float x, float y){
    float bmi;
    int r;
    bmi=x/(y*y);
    if(bmi<=18){
        r=1;
    }else if(bmi<=25){
        r=2;
    }else if (bmi<=30){
        r=3;
    }else{
        r=4;
    }
    return r;
}

void main(){
    float kilo,boy;
    int a;
    printf("Please enter your kilo : ");
    scanf("%f",&kilo);
    printf("Please enter your boy : ");
    scanf("%f",&boy);
    a=kitleindex(kilo,boy);
    switch (a){
        case 1:
            printf("zayıf");
            break;

        case 2:
            printf("normal");
            break;

        case 3:
            printf("kilolu");
            break;

        case 4:
            printf("Obez");
            break;
    }

}