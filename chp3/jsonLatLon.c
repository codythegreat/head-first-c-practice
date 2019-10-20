// usage : run the command ./jsonLatLon < gpsData.csv > output.json

#include <stdio.h>

int main()
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data=[");
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3) { // info does not need ampersand since its an array
        if (started) {
            printf(",\n");
        } else {
            started = 1;
        }
        if (latitude > 90.0 || latitude < -90.0) { // we don't want to print the error to the file, so here well use fprintf(stderr, error)
            fprintf(stderr, "Invalid latitude: %f\n", latitude);
            return 2;
        } else if (longitude > 180.0 || longitude < -180.0) {
            fprintf(stderr, "Invalid longitude: %f\n", longitude);
            return 2;
        }
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
    return 0;
}