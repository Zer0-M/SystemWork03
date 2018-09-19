#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  srand(time(NULL));
  int ar[10];
  for(int i=0;i<(int)(sizeof(ar)/4);i++){
    int j=rand();
    ar[i]=j;
  }
  ar[9]=0;
  printf("First Array:\n");
  for(int i=0;i<(int)(sizeof(ar)/4);i++){
    printf("element %d: %d\n",i,ar[i]);
  }
  int a[10];
  int *ap=&a;
  int *arp=&ar;
  for(int i=9;i>=0;i--){
    *(ap+9-i)=*(arp+i);
  }
  printf("Second Array:\n");
  for(int i=0;i<(int)(sizeof(a)/4);i++){
    printf("element %d: %d\n",i,*(ap+i));
  }
}
