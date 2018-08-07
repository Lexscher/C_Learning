#include <stdio.h>
#include <math.h>

int main() {

    int myvar1 = 10;
    int myvar2 = 8;
    int year = myvar1 + myvar2;
    printf("Hello, World!\nLet's do stuff here");
    printf(" because today is Thursday, %i/%i/20%i.\n", 8, 2, year);
    year += 2000;
    while (year < 2021) {
        year++;
    }

    printf("Sealab %i was a cool, funny show that I was definitely too young to watch.\n", year);

    float myreal = 5.678;
    float reallymine = floorf(myreal * 100) / 100;
    char a = 'a';
    printf("I am %cn intern. I only have $%.2f in my bank account. This is not a drill.\n", a, reallymine);

    // positive int with range of 0 to 4 billion.
    unsigned int legs = 2000000001;

    // Base 8 number.
    int basic = 015; // 0 1 2 3 4 5 6 7 10 11 12 13 14 15 16 17 20...
    // This would print 13 (if we were to print this).
    return 0;
}