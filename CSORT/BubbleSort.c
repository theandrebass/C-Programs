#include <stdio.h>
void bubble_sort(int *A,int size){
  for(int i=0;i<=size-2;i++)
    for(int j=size-1;j>i;j--){
      if(A[j]<A[j-1]){
        int temp=A[j];
        A[j]=A[j-1];
        A[j-1]=temp;
      }
    }
}
void printArray(int* A,int size){
  for(int i=0;i<size;i++)
    printf("%d ",A[i]);
  printf("\n");
}
void main(){
  int A[8]={4,3,8,6,9,7,11,23};
  printArray(A,8);
  bubble_sort(A,8);
  printArray(A,8);
}
