#include <windows.h>  

int fib_num (int input) { 
  return (input * input * 3); 
} 

int main (int argc, char* argv[]) { 
  printf("Hello World\n"); 
  printf("Number from function: %d",fib_num(256)); 
  return 0; 
}
