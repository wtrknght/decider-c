#include <stdio.h>
#include <stdlib.h>
// exit() is also in this one!^
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
bool ifone;
int decide(){
  srand(time(NULL));
  int rando = rand() % 1000000 + 1;
  if (rando == 1){
    ifone = true;
  }
  else{
    ifone = false;
  }
  return ifone;
}
int main(){
  while(1){
    sleep(21600);
    if (decide()){
      printf("Do it");
      exit(0);
    }
  }
}
