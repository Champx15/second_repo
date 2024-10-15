//first method
#include<stdio.h>
#include<conio.h>
void main(){
  int a[5]={2,1,3,5,4},max=a[0],smax=a[1],i;
  for(i=0;i<5;i++){
    if(a[i]>max){
      max=a[i];
    }

  }
  for(i=0;i<5;i++){
    if(a[i]>smax && a[i]<max){
      smax=a[i];
    }
  }
  printf("Second maximum number is %d",smax);
}
 /*second method
#include<stdio.h>
#include<conio.h>
void main(){
  int temp,i,j,a[10]={2,1,3,5,4},max;
  for(j=0;j<3;j++){
    for(i=0;i<3;i++){
      if(a[i]<a[i+1]){
        continue;

      }
      else{
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        
      }
    }
  }
  max=a[9];
  for(i=4;i>=0;i--){
    if(a[i]!=max){
    printf("Second largest no is %d",a[i]);
    break;
    }
  }

  getch();
}*/