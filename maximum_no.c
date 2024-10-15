#include<stdio.h>
#include<conio.h>
void main(){
  int a[5]={2,1,3,5,4},max=a[0],smax=a[1],i;
  for(i=0;i<5;i++){
    if(a[i]>max){
      max=a[i];
    }

  }
  printf("maximum no is %d",max);
  getch();
}