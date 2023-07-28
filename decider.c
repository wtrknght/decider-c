#include <stdio.h>
#include <stdlib.h>
// exit() is also in this one!^
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
bool ifone;
bool decided;
bool decide(){
  srand(time(NULL));
  int rando = rand() % 11 + 1;
  if (rando == 5){
    ifone = true;
  }
  else{
    ifone = false;
  }
  return ifone;
}
int main(){
  while(1){
    sleep(60);
    decided = decide();
    if (decided){
      printf("Do it");
    }
  }
}
