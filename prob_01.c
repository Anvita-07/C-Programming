#include <stdio.h>
#include<math.h>
int main() {
    double a,area;
    printf("Enter the side length:");
    scanf("%lf",&a);
    area=pow(a,2);
    printf("The square with side%.2lf has area%.2lf:\n", a,area);
    return 0;
}