#include <stdio.h>
#include <string.h>

// Function to convert day to a string with appropriate suffix
const char* getDayWithSuffix(int day) {
    switch (day) {
        case 1: case 21: case 31:
            return "st";
        case 2: case 22:
            return "nd";
        case 3: case 23:
            return "rd";
        default:
            return "th";
    }
}

// Function to convert month number to month name
const char* getMonthName(int month) {
    switch (month) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "";
    }
}

// Function to convert number to words
void convertToWords(int num, char* result) {
    char* units[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    char* teens[] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    char* tens[] = { "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
    
    if (num >= 1000 && num < 2000) {
        strcpy(result, "One Thousand ");
        num -= 1000;
    } else if (num >= 2000 && num < 3000) {
        strcpy(result, "Two Thousand ");
        num -= 2000;
    }

    if (num >= 100) {
        strcat(result, units[num / 100]);
        strcat(result, " Hundred ");
        num %= 100;
    }

    if (num >= 20) {
        strcat(result, tens[num / 10]);
        strcat(result, " ");
        num %= 10;
    } else if (num >= 10) {
        strcat(result, teens[num - 10]);
        strcat(result, " ");
        num = 0;
    }

    if (num > 0) {
        strcat(result, units[num]);
        strcat(result, " ");
    }
}

// Function to convert year to a worded format
void getYearInWords(int year, char* yearWords) {
    yearWords[0] = '\0';  // Initialize the result string
    convertToWords(year, yearWords);
}

int main() {
    int day, month, year;
    printf("Enter day, month and year (e.g., 19 2 2024): ");
    scanf("%d %d %d", &day, &month, &year);

    const char* daySuffix = getDayWithSuffix(day);
    const char* monthName = getMonthName(month);

    char yearWords[100];
    getYearInWords(year, yearWords);

    printf("%d%s %s, %s\n", day, daySuffix, monthName, yearWords);

    return 0;
}
