#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <limits.h>
//check if value is between signed char range
errno_t do_stuff(signed long value) {
 if ((value < SCHAR_MIN) || (value > SCHAR_MAX)) {
      return ERANGE;
 }
 signed char sc = (signed char)value; // Cast quiets warning
 //---snip---
}

const char *show_classification(double x) {
      switch(fpclassify(x)) {
      case FP_INFINITE: return "Inf";
      case FP_NAN: return "NaN";
      case FP_NORMAL: return "normal";
      case FP_SUBNORMAL: return "subnormal";
      case FP_ZERO: return "zero";
      default: return "unknown";
      }
      }
int main(void){
      double x = (0 / 1);
      printf("%s\n",show_classification(x));
      return 0;

      //Casting
      int si = 5;
      short ss = 8;
      long sl = (long)si;
      unsigned short us = (unsigned short)(ss + sl); //may causing error



}