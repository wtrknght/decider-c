#include <stdio.h>
#include <stdlib.h>
// exit() is also in this one!^
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
bool ifone;
bool decide(){
  srand(time(NULL));
  int rando = rand() % 11 + 1;
  if (rando == 5){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  while(1){
    sleep(60);
    if (decide()){
      printf("Do it");
    }
  }
  return 0;
}
