#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <limits.h>
#include <stddef.h>
#include <stdalign.h>
#include <assert.h>

bool is_odd(int n) {
 return n % 2 != 0;
}

int main(void){
      int i = 5;
      int e; // result of the expression
      e = i++; // postfix increment: i has the value 6; e has the value 5
      e = i--; // postfix decrement: i has the value 5; e has the value 6
      e = ++i; // prefix increment: i has the value 6; e has the value 6
      e = --i; // prefix decrement: i has the value 5; e has the value 5
      char abc[] = "abc";
      char xyz[] = "xyz";
      char *p = abc;
      printf("%c\n", ++*p);
      p = xyz;
      printf("%c\n", *p++);  

      size_t i_size = sizeof i; // the size of the object i
      printf("The size of object i is : %ld\n", i_size);
      size_t int_size = sizeof(int); // the size of the type int
      printf("The size of type int is : %ld\n", int_size);

      //shifting free from error
      int si1, si2, sresult;
      unsigned int ui1, ui2, uresult;
      // ---snip---
      if ( (si2 < 0) || (si2 >= sizeof(int)*CHAR_BIT) ) {
      /* error */
      }
      else {
      sresult = si1 >> si2;
      }
      if (ui2 >= sizeof(unsigned int)*CHAR_BIT) {
      /* error */
      }
      else {
      uresult = ui1 >> ui2;
      }

      i = 128;
      if (i == pow(2, 7)) {
            puts("equal");
      }

      //use of _Alignof (Clang compiler pls)
      int arr[4];
      static_assert(_Alignof(arr) == 4, "unexpected alignment"); // static assert
      assert(alignof(max_align_t) == 16); // runtime assertion
      printf("Alignment of arr = %zu\n", _Alignof(arr));
      printf("Alignment of max_align_t = %zu\n", alignof(max_align_t));

      //Pointer declration
      //int arr[100];
     //int *arrp1 = arr[40];
      //int *arrp2 = arrp1 + 20; // arrp2 points to arr[60]
      //printf("%td\n", arrp2-arrp1); // prints 20

      int m[2] = {1, 2};
      int *pi; int j = 0;
      for (pi = &m[0]; pi < &m[2]; ++pi) j += *pi;
      printf("%d\n", j);
}