#ifndef __DNN_DATEANDTIME_HPP__
#define __DNN_DATEANDTIME_HPP__

#include "../DNNLIB.hpp"
// THE CLASS BODY DEFINITION //-----------------------------------------------------------------------------------------------------//

const char* DNN::DateAndTimes::getCurrentDate()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char *dt = new char[11];
    strftime(dt, 11, "%d/%m/%Y", ltm);

    // DATE FORMAT: DD/MM/YYYY
    
    return dt;
}

const char* DNN::DateAndTimes::getCurrentTime()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char *dt = new char[9];
    strftime(dt, 9, "%H:%M:%S", ltm);

    // TIME FORMAT: HH:MM:SS

    return dt;
}

const char* DNN::DateAndTimes::getCurrentDay()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char *dt = new char[3];
    strftime(dt, 3, "%d", ltm);

    return dt;
}

const char* DNN::DateAndTimes::getCurrentMonth()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char *dt = new char[3];
    strftime(dt, 3, "%m", ltm);

    return dt;
}

const char* DNN::DateAndTimes::getCurrentYear()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char *dt = new char[5];
    strftime(dt, 5, "%Y", ltm);

    return dt;
}

bool DNN::DateAndTimes::checkLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool DNN::DateAndTimes::checkvalidDate(const char* date)
{   
    if(strlen(date) != 10 || date[2] != '/' || date[5] != '/')
    {
        return false;
    }

    char day[3] = { date[0], date[1], '\0' };
    char month[3] = { date[3], date[4], '\0' };
    char year[5] = { date[6], date[7], date[8], date[9], '\0' };

    if (atoi(day) < 1 || atoi(day) > 31 || atoi(month) < 1 || atoi(month) > 12 || atoi(year) < 1 || atoi(year) > atoi(getCurrentYear()))
    {
        return false;
    }
    
    if (atoi(year) <= atoi(getCurrentYear()) || atoi(year) >= 1940)
    {
        if(atoi(month) > atoi(getCurrentMonth()) && atoi(year) == atoi(getCurrentYear())) return false;

        else if(atoi(month) == atoi(getCurrentMonth()) && atoi(year) == atoi(getCurrentYear()) && atoi(day) > atoi(getCurrentDay()))
        {
            return false;
        }

        else
        {
            false;
        }

        int daysInMonth[] = { 31, checkLeapYear(atoi(year)) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        if (atoi(day) > daysInMonth[atoi(month) - 1])
        {
            return false;
        }
    }

    else return false;

    return true;
}

bool DNN::DateAndTimes::futureDate(const char* date)
{
    if(strlen(date) != 10 || date[2] != '/' || date[5] != '/')
    {
        return false;
    }

    char day[3] = { date[0], date[1], '\0' };
    char month[3] = { date[3], date[4], '\0' };
    char year[5] = { date[6], date[7], date[8], date[9], '\0' };

    if (atoi(day) < 1 || atoi(day) > 31 || atoi(month) < 1 || atoi(month) > 12 || atoi(year) < 1 || atoi(year) <= atoi(getCurrentYear()) + 50)
    {
        return false;
    }
    
    if(atoi(year) < atoi(getCurrentYear()))
    {
        return false;
    }

    if (atoi(year) >= atoi(getCurrentYear()))
    {
        if(atoi(month) < atoi(getCurrentMonth()) && atoi(year) == atoi(getCurrentYear())) return false;

        else if(atoi(month) == atoi(getCurrentMonth()) && atoi(year) == atoi(getCurrentYear()) && atoi(day) < atoi(getCurrentDay()))
        {
            return false;
        }

        int daysInMonth[] = { 31, checkLeapYear(atoi(year)) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

        if (atoi(day) > daysInMonth[atoi(month) - 1])
        {
            return false;
        }

    }

    return true;
}

bool DNN::DateAndTimes::checkvalidDate(tm &date)
{
    if(date.tm_mday < 1 || date.tm_mday > 31 || date.tm_mon < 1 || date.tm_mon > 12 || date.tm_year < 1 
       || date.tm_year - 1900 > atoi(getCurrentYear()) || date.tm_mday > atoi(getCurrentDay()) || date.tm_mon - 1 > atoi(getCurrentMonth())) 
    {
        return false;
    }
    
    int daysInMonth[] = { 31, checkLeapYear(date.tm_year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (date.tm_mday > daysInMonth[date.tm_mon - 1])
    {
        return false;
    }

    return true;
}

int DNN::DateAndTimes::calculateAge(const char* date)
{
    if(!checkvalidDate(date))
    {
        return -1;
    }

    char day[3] = { date[0], date[1], '\0' };
    char month[3] = { date[3], date[4], '\0' };
    char year[5] = { date[6], date[7], date[8], date[9], '\0' };

    int age = atoi(getCurrentYear()) - atoi(year);
    
    if(atoi(getCurrentMonth()) < atoi(month) || (atoi(getCurrentMonth()) == atoi(month) && atoi(getCurrentDay()) < atoi(day)))
    {
        age = age - 1;
    }

    return age;
}

int DNN::DateAndTimes::calculateAge(tm &date)
{
    if(!checkvalidDate(date))
    {
        cout << "Invalid Date !";
        return -1;
    }

    int age = atoi(getCurrentYear()) - date.tm_year;

    if(atoi(getCurrentMonth()) < date.tm_mon || (atoi(getCurrentMonth()) == date.tm_mon && atoi(getCurrentDay()) < date.tm_mday))
    {
        age = age - 1;
    }

    return age;
}

int DNN::DateAndTimes::calculateDayBetween(const char* date1, const char* date2)
{
    if(!checkvalidDate(date1) || !checkvalidDate(date2))
    {
        cout << "Invalid Date !";
        return -1;
    }
    
    char day1[3] = { date1[0], date1[1], '\0' };
    char month1[3] = { date1[3], date1[4], '\0' };
    char year1[5] = { date1[6], date1[7], date1[8], date1[9], '\0' };

    char day2[3] = { date2[0], date2[1], '\0' };
    char month2[3] = { date2[3], date2[4], '\0' };
    char year2[5] = { date2[6], date2[7], date2[8], date2[9], '\0' };
    
    // Convert const char* to tm
    tm date1_tm, date2_tm;

    date1_tm.tm_mday = atoi(day1);
    date1_tm.tm_mon = atoi(month1) - 1;
    date1_tm.tm_year = atoi(year1) - 1900;

    date2_tm.tm_mday = atoi(day2);
    date2_tm.tm_mon = atoi(month2) - 1;
    date2_tm.tm_year = atoi(year2) - 1900;

    // Convert tm to time_t
    time_t date1_time = mktime(&date1_tm);
    time_t date2_time = mktime(&date2_tm);

    // Calculate the difference in days
    int days = (date2_time - date1_time) / (60 * 60 * 24);

    return days;
}

int DNN::DateAndTimes::calculateDayBetween(tm date1, tm date2)
{
    // Convert tm to time_t
    time_t date1_time = mktime(&date1);
    time_t date2_time = mktime(&date2);

    // Calculate the difference in days
    int days = (date2_time - date1_time) / (60 * 60 * 24);

    return days;
}

tm DNN::DateAndTimes::setDate(const char* date)
{

    char day[3] = { date[0], date[1], '\0' };
    char month[3] = { date[3], date[4], '\0' };
    char year[5] = { date[6], date[7], date[8], date[9], '\0' };

    tm date_tm;

    date_tm.tm_mday = atoi(day);
    date_tm.tm_mon = atoi(month) - 1;
    date_tm.tm_year = atoi(year) - 1900;
    
    return date_tm;
}

const char* DNN::DateAndTimes::setDate(tm date)
{
    int dayInt = date.tm_mday;
    int monthInt = date.tm_mon + 1;
    int yearInt = date.tm_year + 1900;

    char* date_c;

    // Format the date string
    sprintf(date_c, "%02d/%02d/%04d", dayInt, monthInt, yearInt);

    return date_c;
}

tm DNN::DateAndTimes::getCurrentDateAndTimes()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    return *ltm;
}

void DNN::DateAndTimes::DisplayLocalDT(int x, int y)
{
    while (!kbhit()) 
    {
        time_t now_time = time(nullptr);
        tm* local_time = localtime(&now_time);

        bool is_pm = local_time->tm_hour >= 12;
        int hour = local_time->tm_hour % 12;

        const char* days[] = {"SUN", "MON", "TUE", "WED", "THU", "FIR", "SAT"};

        if (hour == 0) 
        {
            hour = 12;
        }

        // Format the time as a string
        ostringstream oss;
        oss << setfill('0') << setw(2) << hour << ":"
            << setfill('0') << setw(2) << local_time->tm_min << ":"
            << setfill('0') << setw(2) << local_time->tm_sec << " "
            << (is_pm ? "PM" : "AM");

        H::gotoxy(x, y); H::setcolor(7); cout << days[local_time->tm_wday] << " " << DNN::DateAndTimes::getCurrentDate() << " " << oss.str() << flush;
     
    }
}
#endif 