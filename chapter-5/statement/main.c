#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

struct node {
  int data;
  struct node *next;
};
struct node *p;

void *memset2(void *dest, int val, size_t n) {
  unsigned char *ptr = (unsigned char *)dest;
  for (size_t i = 0; i < n; ++i){
    *(ptr + i) = val;
  }
  return dest;
}

void *memset(void *dest, int val, size_t n) {
  unsigned char *ptr = (unsigned char*)dest;
  while (n-- > 0){
    *ptr++ = (unsigned char)val;
  }
  return dest;
}

void f(unsigned int x) {
  while (x > 0){
    printf("%d\n," x);
    --x;
  }
  return;
}

bool safediv(int dividend, int divisor, int *quotient) {
   if (!quotient) return false;
   if ((divisor == 0) || ((dividend == INT_MIN) && (divisor == -1)))
        return false;
   *quotient = dividend / divisor;
  return true;
}

void printgrade(unsigned int marks) {
  if (marks >= 90){
    puts("YOUR GRADE : A"); 
  } else if (marks >= 80){
    puts("YOUR GRADE : B");
  } else if (marks >= 70){
    puts("YOUR GRADE : C");
  } else{
    puts("YOUR GRADE : Failed");
  }
}

typedef enum { Savings, Checking, MoneyMarket } AccountType;
void assignInterestRate(AccountType account) {
  double interest_rate;
  switch (account){
    case Savings:
      interest_rate = 3.0; 
      break;
    case Checking:
      interest_rate = 1.0;
      break;
    case MoneyMarket:
      interest_rate = 4.5;
      break;
      default: abort();
  }
  printf("Interest rate = %g.\n", interest_rate);

}

int do_something(void) {
    FILE *file1, *file2;
    object_t *obj;
    int ret_val = 0; // Initially assume a successful return val
    file1 = fopen("a_file", "w");
    if (file1 == NULL){
      ret_val = -1;
  goto FAIL_FILE1;
    }
    file2 = fopen("another_file", "w"
    if (file2 == NULL){
      ret_val = -1;
  goto FAIL_FILE2;
    }
    obj = malloc(sizeof(object_t));
    if (obj == NULL){
      ret_val = -1;
  goto FAIL_OBJ;
    }
  
    // Operate on allocated resourc
    // Clean up everything
    free(obj);
  FAIL_OBJ:  // Otherwise, close only the resources we opened
    fclose(file2);
  FAIL_FILE2:
    fclose(file1);
  FAIL_FILE1:
    return ret_val;
}

size_t find_element(size_t len, int arr[len], int key) {
    size_t pos = (size_t)-1;
    // traverse arr and search for key
    for (size_t i = 0; i < len; ++i){
      if (arr[i] == key){
        pos = i;
  break; // terminate loop
    }
  }
  return pos;
}

int absolute_value(int a) {
  if (a < 0){
    return -a;
  }
  return a;
}


int main(void){

     assignInterestRate(MoneyMarket);
     int count; float quant; char units[21], item[21];
do {
  count = fscanf(stdin, "%f%20s of %20s", &quant, units, item);
  fscanf(stdin,"%*[^\n]");
} while (!feof(stdin) && !ferror(stdin));
  for (p = head; p != NULL; p = q) {
  q = p->next;
  free(p);
}

char c;
  for(;;){
    puts("Press any key, Q to quit: ");
    c = toupper(getchar());
    if (c == 'Q') break;
  }
return 0;
}