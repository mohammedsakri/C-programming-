#include <stdio.h>
#include <time.h>
#include <unistd.h>

void alarmRing() {
    printf("\n\n*** ALARM RINGING!!! ***\n");
    printf("Wake up! Time to start your day!\n");
}

int main() {
    int alarmHour, alarmMinute;

    // Asking user for alarm time input
    printf("Set Alarm Time:\n");
    printf("Enter Hour (0-23): ");
    scanf("%d", &alarmHour);
    printf("Enter Minute (0-59): ");
    scanf("%d", &alarmMinute);

    printf("Alarm set for %02d:%02d. Waiting...\n", alarmHour, alarmMinute);

    while (1) {
        time_t currentTime;
        struct tm *localTime;

        // Get the current system time
        currentTime = time(NULL);
        localTime = localtime(&currentTime);

        int currentHour = localTime->tm_hour;
        int currentMinute = localTime->tm_min;

        // Check if the current time matches the alarm time
        if (currentHour == alarmHour && currentMinute == alarmMinute) {
            alarmRing();
            break; // Exit the loop once the alarm rings
        }

        // Wait for a short period before checking the time again
        sleep(30); // Check every 30 seconds to save processing power
    }

    return 0;
}
