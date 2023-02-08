// Block letter project
#include <stdio.h>

typedef struct BLOCK_LETTER {
  char letter;
  char block[5][4];
} blockletter;

int main(void) {

  int n1;
  n1 = 100;

  int n2= 100;

  blockletter a = {
    'a',
    {
     {' ', 'A', 'A', ' '},
     {'A', ' ', ' ', 'A'},
     {'A', 'A', 'A', 'A'},
     {'A', ' ', ' ', 'A'},
     {'A', ' ', ' ', 'A'},
    }
  
  };

  print_blockletter(a);

  return 0;
}