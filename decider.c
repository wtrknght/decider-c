#include <stdio.h>
#include <stdlib.h>
// exit() is also in this one!^
#include <unistd.h>
#include <stdbool.h>
#include <time.h>
int decide(){
  srand(time(NULL));
  rando = rand() % 1000000 + 1;
  if (rando == 1){
    bool ifone = true;
  }
  else{
    bool ifone = false;
  }
  return ifone;
}
int main(){
  while(1){
    sleep(21600);
    if (decide()){
      printf("Do it");
      exit();
    }
    else{
      printf("");
    }
  }
}
