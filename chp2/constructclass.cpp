#include <cstdio>
int main(){
struct Taxonomist {
  Taxonomist() {
    printf("(no argument)\n");
  }
  Taxonomist(char x) {
    printf("char: %c\n", x);
  }
  Taxonomist(int x) {
    printf("int: %d\n", x);
  }
  Taxonomist(float x) {
    printf("float: %f\n", x);
  }
};
};