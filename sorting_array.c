//descending order
#include<stdio.h>
#include<conio.h>
void main(){
  int temp,i,j,a[10]={1,2,3,5,4,6,5,10,3,9};
  for(j=0;j<9;j++){
    for(i=0;i<9;i++){
      if(a[i]>a[i+1]){
        continue;

      }
      else{
        temp=a[i+1];
        a[i+1]=a[i];
        a[i]=temp;
      }
    }
  }
  printf("After sorting : ");
  printf("[");
  for(i=0;i<10;i++)
  printf("%d,",a[i]);
  printf("]");
  getch();
}

//ascnding order
#include<stdio.h>
#include<conio.h>
void main(){
  int temp,i,j,a[10]={1,2,3,5,4,6,5,10,3,9};
  for(j=0;j<9;j++){
    for(i=0;i<9;i++){
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
  printf("After sorting : ");
  printf("[");
  for(i=0;i<10;i++)
  printf("%d,",a[i]);
  printf("]");
  getch();
}