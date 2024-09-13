#include <stdio.h>
#include <math.h>
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
}