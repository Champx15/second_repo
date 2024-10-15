#include<stdio.h>
#include<conio.h>
void main(){
    int i,ask,a[3]={1,2,3};
    printf("Enter the number you want to search the index for: ");
    scanf("%d",&ask);
    for(i=0;i<3;i++){
        if(a[i]==ask){
            printf("%d is at index %d",ask,i);
        }
        else{
        printf("Entered number is not present in the array");
        break;
        }

    }
    getch();
}