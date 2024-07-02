#include <stdio.h>
double CelToFah(double value);
double FahToCel(double value);

int main() {
  double temperature;
  int choice;
  printf("1. Celsius to Fahrenheit  2. Fahrenheit to Celsius \n");
  printf("Choose your conversion type:");
  scanf("%d", &choice);
  switch(choice) {
    case 1:
      printf("Enter the temperature in Celsius: ");
      scanf("%lf", &temperature);
      printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperature, CelToFah(temperature));
      break;
    case 2:
      printf("Enter the temperature in Fahrenheit: ");
      scanf("%lf", &temperature);
      printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temperature, FahToCel(temperature));
      break;
    default:
      printf("Invalid choice. Please choose 1 or 2.\n");
  }
}

double CelToFah(double value) {
  return (value * 9.0 / 5.0) + 32.0;
}

double FahToCel(double value) {
  return (value - 32.0) * 5.0 / 9.0;
}