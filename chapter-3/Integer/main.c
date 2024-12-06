#include <stdio.h>
#include <climits>

void too_big(){
    puts("The Number is too big\n");
}
void negative(){
    puts("The Number is negative.");
}
//for aviding overflow
int abs(int i) {
    return (i >= 0) ? i : -(unsigned)i; // avoids overflow
}

int main(void){
      /*
      unsigned int ui = UINT_MAX; // 4,294,967,295 on x86
      ui++;
      printf("ui = %u\n", ui); // ui is 0
      ui--;
      printf("ui = %u\n", ui); // ui is 4,294,967,295*/


      //wrong comparation
       unsigned int ui, sum;
      ui = 500;
      sum = 0;
      if (sum + ui > UINT_MAX)
        too_big();
      else{
        sum = sum + ui;
      }


      //Currect comparation
      if (ui > UINT_MAX - sum)
        too_big();
      else
        sum = sum + ui;


    //wrong comparation
     unsigned int i, j;
    // assign values to i and j
    if (i - j < 0) // cannot happen
        negative();
    else
        i = i - j;

    //Currect comparation
    if (j > i)  // correct
        negative();
    else
        i = i - j;

    #define Abs(i) ((i) < 0 ? (-(i)) : (i))
    //absolute val
    signed int si = -25;
    signed int abs_si = Abs(si);
    printf("%d\n", abs_si); // prints 25

    //absolute val without macro
     si = -25;
     abs_si = ((si) < 0 ? (si * -1) : (si));
    printf("%d\n", abs_si); // prints 25


    #define AbsM(i, flag) ((i) >= 0 ? (i) : ((i)==(flag) ? (flag) : -(i)))
     si = -25; // try INT_MIN to trigger the problem case
     abs_si = AbsM(si, INT_MIN);
    if (abs_si == INT_MIN)
        printf("goto recover : special case"); // special case
    else
        printf("%d\n", abs_si); // prints 25

    
}
