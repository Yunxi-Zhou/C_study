#include <iostream>
#include <ctime>
using namespace std;

void n() {
    cout << "********************************" << endl;
}

void print_time() {
    // Get the timestamp for the current date and time
    time_t timestamp;
    time(&timestamp);

    //Display the date and time
    cout << ctime(&timestamp);

    // ctime: library has a variety of functions to measure dates and times.
}

void print_time2() {
    time_t timestamp = time(NULL);
    
    cout << ctime(&timestamp);
}

void create_time() {
    struct tm datetime;
    time_t timestamp;

    datetime.tm_year = 2023 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;

    // Daylight Savings must be specified
    // -1 uses the computer's timezone setting
    datetime.tm_isdst = 1;

    timestamp = mktime(&datetime); 
    //The mktime() function converts a datetime structure into a timestamp.

    cout << ctime(&timestamp);
}

void create_week() {
    struct tm datetime;
    time_t timestamp;

    datetime.tm_year = 2023 - 1900;
    datetime.tm_mon = 12 - 1;
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 0;
    datetime.tm_sec = 0;

    datetime.tm_isdst = -1;

    string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "The data is on a " << weekdays[datetime.tm_wday];
}

void create_local() {
    time_t timestamp = time(&timestamp);
    struct tm datetime = *localtime(&timestamp);

    cout << datetime.tm_hour << endl;
}

void display_date() {
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    cout << asctime(&datetime); // To display dates from a datetime structure
}

// strftime() -> choose how a date is displayed
void time_strftime() {
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    char output[50];

    strftime(output, 50, "%B %e %Y", &datetime);
    cout << output << endl;

    strftime(output, 50, "%I:%M:%S %p", &datetime);
    cout << output << endl;

    strftime(output, 50, "%m/%d/%y", &datetime);
    cout << output << endl;

    strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
    cout << output << endl;
}

//difftime() function measures the number if seconds that passed between two different time stamps
void time_difftime() {
    time_t now;
    time_t nextYear;
    struct tm datetime;

    now = time(NULL);
    datetime = *localtime(&now);
    datetime.tm_year = datetime.tm_year + 1;
    datetime.tm_mon = 0;
    datetime.tm_mday = 1;
    datetime.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
    datetime.tm_isdst = -1;
    nextYear = mktime(&datetime);

    int diff = difftime(nextYear, now);


    cout << diff << " seconds until next year" << endl;
    
}

//clock() function use for measuring short intervals of time while programming is running
void time_clock() {
    clock_t before = clock();
    int k = 0;
    for (int i = 0; i < 1000000; i++) {
        k += i;
    }
    clock_t duration = clock() - before;
    cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << endl;
}

int main() {
    print_time();
    print_time2();
    create_time();
    //create_week();
    create_local();
    display_date();
    n();
    time_strftime();
    n();
    time_difftime();
    time_clock();
    return 0;
}