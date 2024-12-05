#include <stdio.h>
int main(){
  char k[] = "volvo";
  int length = sizeof(k)/sizeof(k[0]);
  for (int i=0; i<length; i++){
    printf("%c\n", k[i]);
  }
  return 0;
}
