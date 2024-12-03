#include <ctime>
#include <iostream>

using namespace std;

int main() {
    time_t t = time(0); // get now time
    char* dt = ctime(&t);// convert in string from
    cout << "local date and time is: " << dt << endl;

    tm* gmtm = gmtime(&t);//converting now to tm struct for utc date/ti,e
    
    dt = asctime(gmtm);
    cout << "UTC date and time is: " << dt << "\n\n";

             
    //////////////////////////////////////////////

    tm* now = localtime(&t);
    cout << "Year: " << now->tm_year + 1900 << endl;
    cout << "Month: " << now->tm_mon + 1 << endl;
    cout << "Hour: " << now->tm_hour << endl;
    cout << "minute: " << now->tm_min << endl;
    cout << "Secand: " << now->tm_sec << endl;
    cout << "week day (day since sunday): " << now->tm_wday << endl;
    cout << "Year day (day since 1jun 1st): " << now->tm_yday << endl;
    cout << "hours of daylight savings time: " << now->tm_isdst << endl;
    cout << "+ secand time now with UTC time: " << now->tm_gmtoff << endl;
    cout << "month day: " << now->tm_mday << endl;
    cout << "difrent time zone with UTC: " << now->tm_zone << endl;
    cout << "Place: Morocoo - ouarzazate\n";
    cout << " تم الانتهاء من الكورس الحمدلله " << endl;
    cout << "جزيل الشكر لك يابشمهندس على هاته الدورة ورحم الله والديك والدينا اجمعين" << endl;

    return 0;
}