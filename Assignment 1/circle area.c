#include <stdio.h>
#include <stdlib.h>

int main() {
    float radius, area;
    const float PI = 3.142;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle is %.2f", area);

    return 0;
}
