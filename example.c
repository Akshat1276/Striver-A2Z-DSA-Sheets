#include <stdio.h>
struct boom{
  int number;
  char alpha;
};
int main(){
  struct boom shit;
  shit.number = 12;


  shit.alpha = 'a';
  printf("%d\n", shit.number);
  printf("%c\n", shit.alpha);
  return 0;
}

