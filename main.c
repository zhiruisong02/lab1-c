// Author: Song Zhirui zjs5301@psu.edu
// Collaborator: Jack Hillman jsh5719@psu.edu
// Collaborator:  Shrey Hillman sxs6588@psu.edu
// Collaborator: Alexandros Condeelis afc5865@psu.edu
// Section:5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
int main(void) {
  char *tem =readline("Enter temperature in celsius: ");
  double newtemp = atof(tem)*1.8 +32;
  double temp = atof(tem);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, newtemp);
  return 0;
}