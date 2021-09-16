#include <iostream>

 unsigned int numbers[] 
  = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};


const unsigned int len = sizeof (numbers) /sizeof *numbers;
unsigned int *input = numbers;

bool buble_pass(void){
  bool bubbled = false;

  // Each passs does the bubbling
  unsigned int *p = input;
  unsigned int *pp = p+1;
  for(int i = 0; i < len-1; i++, p++, pp++){
    if(*p > *pp){
      unsigned int tmp = *pp;
      *pp = *p;
      *p = tmp;
      bubbled = true;
    }
  }

  return bubbled;
}

void buble_sort(void) {
  // Sort input by running buble sort 
  // passes until all sorting us done
  if(len < 2) { // nothing to sort
    return;
  }
  bool bubbled = buble_pass();
  while(bubbled){
    bubbled = buble_pass();
  }
  return;
}

int main() {
  std::cout << "Hello World!\n";
  void buble_sort(void);
  for (int i = 0; i < len; i++){
    printf("%d,",numbers[i]);
  }
  buble_sort();
  printf("\n");
  for (int i = 0; i < len; i++){
    printf("%d,",numbers[i]);
  }

}