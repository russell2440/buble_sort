#include <iostream>

 unsigned int numbers[] 
  = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};

void buble_sort(unsigned int nap[]) {
  unsigned int len = sizeof(numbers)/sizeof *numbers;
  for (int i = 0; i < len; i++){
    printf("%d,",nap[i]);
  }
  return;
}

int main() {
  std::cout << "Hello World!\n";
  void buble_sort(unsigned int nap[]);
  buble_sort(numbers);
  printf("\n");
  unsigned int len = sizeof(numbers)/sizeof *numbers;
  for (int i = 0; i < len; i++){
    printf("%d,",numbers[i]);
  }

}