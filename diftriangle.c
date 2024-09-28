//if the three sides of a triangle are entered through the keyboard,write a program 
//to check whether the triangle is isosceles,equilateral,scalene or rightangle triangel
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    // Input the sides of the triangle
    printf("Enter the first side: ");
    scanf("%d", &a);
    printf("Enter the second side: ");
    scanf("%d", &b);
    printf("Enter the third side: ");
    scanf("%d", &c);

    // Check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Check for equilateral triangle
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        // Check for isosceles triangle
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        // Check for right-angled triangle using Pythagoras' theorem
        else if ((a * a == b * b + c * c) || 
                 (b * b == a * a + c * c) || 
                 (c * c == a * a + b * b)) {
            printf("Right-Angled Triangle\n");
        }
        // If none of the above, it's a scalene triangle
        else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Not a valid triangle.\n");
    }

    return 0;
}
 
