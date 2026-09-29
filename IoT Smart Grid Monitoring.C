#include <stdio.h>

int main() {

    float voltage;
    float current;
    float frequency;
    float power;

    printf("=== IoT SMART GRID MONITORING ===\n\n");

    printf("Enter Voltage (V): ");
    scanf("%f", &voltage);

    printf("Enter Current (A): ");
    scanf("%f", &current);

    printf("Enter Frequency (Hz): ");
    scanf("%f", &frequency);

    // Calculate power
    power = voltage * current;

    printf("\n--- GRID DATA ---\n");
    printf("Voltage   : %.2f V\n", voltage);
    printf("Current   : %.2f A\n", current);
    printf("Frequency : %.2f Hz\n", frequency);
    printf("Power     : %.2f W\n", power);

    // Grid monitoring
    if (voltage > 250) {
        printf("WARNING: High Voltage!\n");
    }
    else if (voltage < 180) {
        printf("WARNING: Low Voltage!\n");
    }
    else {
        printf("Voltage: NORMAL\n");
    }

    if (frequency < 49 || frequency > 51) {
        printf("WARNING: Frequency Problem!\n");
    }
    else {
        printf("Frequency: NORMAL\n");
    }

    if (current > 10) {
        printf("WARNING: Over Current!\n");
    }
    else {
        printf("Current: NORMAL\n");
    }

    printf("\nGrid Monitoring Complete.\n");

    return 0;
}
