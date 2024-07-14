#include<stdio.h>

int main(){
    /* Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case-sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (such as int) cannot be used as names */

    int minutesPerHour = 60;  // Camel case
    int seconds_Per_Hour = 3600;  // Snake case
    int HoursPerDay = 24;   // Pascal case

    printf("%d \n", minutesPerHour);
    printf("%d \n", seconds_Per_Hour);
    printf("%d \n", HoursPerDay);
    
    return 0;
}
