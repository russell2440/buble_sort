#include <iostream>

 unsigned int numbers[] 
  = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
const unsigned int len = sizeof (numbers) /sizeof *numbers;
unsigned int *input = numbers;

bool buble_pass(void){
  bool done = false;

  return done;
}

void buble_sort(void) {
  // Sort input by running buble sort 
  // passes until all sorting us done
  if(len < 2) { // nothing to sort
    return;
  }
  bool bubles = buble_pass();
  while(bubles){
    bubles = buble_pass();
  }
  return;
}

int main() {
  std::cout << "Hello World!\n";
  void buble_sort(void);
  buble_sort();
  printf("\n");
  unsigned int len = sizeof(numbers)/sizeof *numbers;
for (int i = 0; i < len; i++){
    printf("%d,",numbers[i]);
  }

}