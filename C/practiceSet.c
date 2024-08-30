// write a c program to calculate the area of rectangle
#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);
    printf("Area of rectangle is: %d\n", length * breadth);
    return 0;
}

/* Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.*/
#include <stdio.h>
int main()
{
    float radius, height, area, volume;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    area = 3.14 * radius * radius;
    volume = 3.14 * radius * radius * height;
    printf("Area of the circle is: %.2f\n", area);
    printf("Volume of the cylinder is: %.2f\n", volume);
}

// again coded the above question
#include <stdio.h>
int main()
{
    float area, height, radius, volume;
    printf("Enter the radius:");
    scanf("%f", &radius);
    area = 3.14573 * radius * radius;
    printf("Area of the circle is : %2f\n", area);

    // Volume
    printf("ENter the height: ");
    scanf("%f", &height);
    volume = 3.14573 * radius * radius * height;
    printf("VOlume of the cylinder is: %2f\n", volume);
    return 0;
}

//  . Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
int main()
{
    int celsius, fahrenheit;
    printf("enter the required celcius: ");
    scanf("%d", &celsius);
    fahrenheit = celsius * 9 / 5 + 32;
    printf("conversion of celcius is: %d\n", fahrenheit);
    return 0;
}

// Write a program to calculate simple interest for a set of values representing
int main()
{
    int principle, rate, time, simple_interest, exact_time;
    printf("Enter Your Principle:");
    scanf("%d", &principle);
    printf("Enter your Rate:");
    scanf("%d", &rate);
    printf("Enter your time (Year):");
    scanf("%d", &time);
    simple_interest = principle * rate * time / 100;
    printf("The required Simple Interest is: %d", simple_interest);
    return 0;
}