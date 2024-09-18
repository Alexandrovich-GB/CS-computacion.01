#include <iostream>

using namespace std;

class Date {
    public:
        Date(int m ,int d ,int y ){
            if (m>=1 && m<=12){
                month = m;
            }
            else {
                month = 1;
            }
            day = d;
            year = y;
        }

        // Getters
        int getMonth() const {
            return month;
        }

        int getDay() const {
            return day;
        }

        int getYear() const {
            return year;
        }

        // Setters
        void setDay(int d) {
            day = d;
        }

        void setYear(int y) {
            year = y;
        }

        void setMonth(int m) {
            if(m >= 1 && m <= 12){
                month = m;
            }
            else {
                month = 1;
            }
        }

        // Mostrar la fecha
        void displayDate() const {
            cout << month << "/" << day << "/" << year << endl;
        }

    private:
        int month{0};
        int day{0};
        int year{0};
};