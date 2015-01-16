#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

float ftoc(float fahr)
{
  return (5.0/9.0) * (fahr-32);
}

int main() 
{
  for (int fahr=0; fahr <= 300; fahr+=20) {
    printf("%3d %6.1f\n", fahr, ftoc((float)fahr));
  }
  return 0;
}
