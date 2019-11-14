#include <stdio.h>

typedef struct NODE {
    struct NODE *new;
    int value;
    }Node;
 
int main(void)
{
    Node previous, current;
    previous.new = &current;
   previous.value = 100;
}
