#include <iostream>

class Auto {
private:
    int year;
    int month;
    int day;

public:
    Auto() {
        year = 2000;
        month = 12;
        day = 25;

        get();
        std::cout << std::endl;
    }

        Auto() {
        year = 2000;
        month = 12;
        day = 25;

        get();
        std::cout << std::endl;
    }

    void set(int date_year,int date_month, int date_day) {

        year = date_year;
        month = date_month;
        day = date_day;


    }
    
    void get() {

        std::cout << "Year of this auto " << year << ", month " << month << ", day " << day << std::endl;
    }
};


int main() {

    Auto skoda;
    
    skoda.set(2005,11,23);
    skoda.get();
    
    Auto bmw;
    bmw.set(2012,5,9);
    bmw.get();
    return 0;

}