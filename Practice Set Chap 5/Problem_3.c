// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2

#include<stdio.h>

// Function prototype
float calculateGravitationalForce(float mass);

// Function definition to calculate gravitational force
float calculateGravitationalForce(float mass) {
    // Constants
    const float G = 6.67430e-11;  // Gravitational constant in m^3 kg^-1 s^-2
    const float M = 5.972e24;     // Mass of the Earth in kg
    const float radiusEarth = 6371000; // Radius of the Earth in meters

    // Calculate distance from Earth's center to body's center (approximation)
    float r = radiusEarth;

    // Calculate gravitational force
    return G * (mass * M) / (r * r);
}
int main(){ 

    float mass = 50, force;

    // Calculate gravitational force using the function
    force = calculateGravitationalForce(mass);

    printf("Gravitational force on the body: %.2f Newtons\n", force);
    
    return 0;
}