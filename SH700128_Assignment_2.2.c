#include <stdio.h>

void initialize(stack *s);      // initializes an empty stack.
int push(stack *s, char value); // pushes the char value to the stack
int isEmpty(stack *s);          // Returns 1 if the stack is empty, 0 otherwise.
char pop(stack *s);  // pops and returns character at the top of the stack.
char peek(stack *s); // returns character at the top of the stack.
// Note: pop and peek return 'I' if the stack s is empty.

int isPalindrome(char *str) {
  struct stack s;
  initialize(&s);
  int len = strlen(str), half = len / 2, i;
  if (len % 2 != 0){
    for (i=0;i<half;i++){
      push(&s,str[i]);
    }
    for(i=half+2;i<len;i++){
      if (str[i] == pop(&s))
        continue;
      else
        return 0;
    } 
  }
  else{
    for(i = 0; i<half;i++){
      push(&s,str[i]);
    }
    for (i=half+1;i<len;i++){
      if (str[i] == pop(&s))
        continue;
      else
        return 0;
    }
  }
  if(isEmpty(&s) == 1)
    return 1;
  else
    return 0;
}
