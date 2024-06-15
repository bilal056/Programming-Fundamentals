#include <stdio.h>

// This program classifies earthquake magnitudes based on the Richter scale.
int main()
{
    // Variable to store earthquake magnitude
    float earthq;

    // Asking user for input
    printf("Enter earthquake magnitude: ");
    scanf("%f", &earthq);

    // Classifying earthquake magnitude based on Richter scale
    if (earthq >= 10.0)
    {
        printf("Meteoric"); // Output for very rare meteoric earthquakes
    }
    else if ((earthq >= 8.0 && earthq < 10.0))
    {
        printf("Great"); // Output for great earthquakes
    }
    else if ((earthq >= 7.0 && earthq < 8.0))
    {
        printf("Major"); // Output for major earthquakes
    }
    else if ((earthq >= 6.0 && earthq < 7.0))
    {
        printf("Strong"); // Output for strong earthquakes
    }
    else if ((earthq >= 5.0 && earthq < 6.0))
    {
        printf("Moderate"); // Output for moderate earthquakes
    }
    else if ((earthq >= 4.0 && earthq < 5.0))
    {
        printf("Light"); // Output for light earthquakes
    }
    else if ((earthq >= 3.0 && earthq < 4.0))
    {
        printf("Minor"); // Output for minor earthquakes
    }
    else if ((earthq >= 2.0 && earthq < 3.0))
    {
        printf("Very minor"); // Output for very minor earthquakes
    }
    else if (earthq < 2.0)
    {
        printf("Micro"); // Output for micro earthquakes
    }

    return 0;
}
