#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Enumerated data type for months
enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

// Define the structure for weather data
struct WeatherData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

// Function to input weather data for a month
void inputWeatherData(WeatherData& month) {
    cout << "Enter total rainfall for the month (in inches): ";
    cin >> month.totalRainfall;

    do {
        cout << "Enter high temperature for the month (between -100 and 140 degrees Fahrenheit): ";
        cin >> month.highTemperature;
    } while (month.highTemperature < -100 || month.highTemperature > 140);

    do {
        cout << "Enter low temperature for the month (between -100 and 140 degrees Fahrenheit): ";
        cin >> month.lowTemperature;
    } while (month.lowTemperature < -100 || month.lowTemperature > 140);

    month.averageTemperature = (month.highTemperature + month.lowTemperature) / 2.0;
}

int main() {
    const int NUM_MONTHS = 12;
    WeatherData year[NUM_MONTHS];

    // Input weather data for each month using enumerated type
    for (int i = JANUARY; i <= DECEMBER; ++i) {
        cout << "\nEnter weather data for " << static_cast<Month>(i) << ":\n";
        inputWeatherData(year[i]);
    }

    // Calculate statistics for the year
    double totalRainfall = 0;
    double highestTemperature = -100;
    int highestTempMonth = JANUARY;
    double lowestTemperature = 140;
    int lowestTempMonth = JANUARY;
    double totalAvgTemperature = 0;

    for (int i = JANUARY; i <= DECEMBER; ++i) {
        totalRainfall += year[i].totalRainfall;

        if (year[i].highTemperature > highestTemperature) {
            highestTemperature = year[i].highTemperature;
            highestTempMonth = i;
        }

        if (year[i].lowTemperature < lowestTemperature) {
            lowestTemperature = year[i].lowTemperature;
            lowestTempMonth = i;
        }

        totalAvgTemperature += year[i].averageTemperature;
    }

    // Display statistics for the year
    cout << fixed << setprecision(2);
    cout << "\nYearly Weather Statistics:\n";
    cout << "Average Monthly Rainfall: " << totalRainfall / NUM_MONTHS << " inches\n";
    cout << "Total Rainfall for the Year: " << totalRainfall << " inches\n";
    cout << "Highest Temperature for the Year: " << highestTemperature
         << " degrees Fahrenheit (Month " << static_cast<Month>(highestTempMonth) << ")\n";
    cout << "Lowest Temperature for the Year: " << lowestTemperature
         << " degrees Fahrenheit (Month " << static_cast<Month>(lowestTempMonth) << ")\n";
    cout << "Average of Monthly Average Temperatures: " << totalAvgTemperature / NUM_MONTHS
         << " degrees Fahrenheit\n";

    return 0;
}
