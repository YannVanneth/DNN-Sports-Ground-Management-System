#ifndef _DNNLIB_H_
#define _DNNLIB_H_

#include "../DNN.hpp"

namespace DNN
{
    class input : public HinsyOOP::HLVInput
    {
        public:
        // DATE 
        static const char* inputMail(char* mail, int size);
        static const char* inputDate(char* date);
        static const char* inputDate(char* date, int limitAge); // Greater Than or Equal To limitAge
    };

   template<typename T> // File<Jersey>::write(filename, jersey)
   class File
   {
      public:
        static vector<T> read(const char* path);;
        static void write(const char* path, T &obj);
        static void write(const char* path, vector<T> *obj); 
           
   };

    class DateAndTimes
    {
        public:

            // Auto Time
            static void DisplayLocalDT(int x, int y); // Display Local Date and Time

            // GET CURRENT DATE AND TIMES
            static const char* getCurrentDate();
            static const char* getCurrentMonth();
            static const char* getCurrentYear();
            static const char* getCurrentDay();
            static const char* getCurrentTime();

            // GET CURRENT DATE AND TIMES
            static tm getCurrentDateAndTimes();
            
            // CALCULATING
            static int calculateAge(const char* date);
            static int calculateAge(tm &date);

            static bool checkvalidDate(const char* date);
            static bool futureDate(const char* date);
            static bool checkvalidDate(tm &date);

            static bool checkLeapYear(int year);


            static int calculateDayBetween(const char* date1, const char* date2);
            static int calculateDayBetween(tm date1, tm date2);

            // Simple Methods
            static tm setDate(const char* date);
            static const char* setDate(tm date);
    };

    class DLIB : public input, public DateAndTimes
    {
        public:
           static void maskPassword(const char* password, char* maskedPassword);
           static bool isValidEmail(const char* mail); 
    };

}

// DEFINITION //----------------------------------------------------------------------------------------------------------------------------------//

    #include "File_class/File.hpp"
    #include "DateAndTime_class/DateAndTime.hpp"
    #include "Input_class/input.hpp"

//-------------------------------------------------------//

void DNN::DLIB::maskPassword(const char* password, char* maskedPassword) 
{
    int length = strlen(password);

    strcpy(maskedPassword, password);

    if (length < 2) 
    {
        return;
    }

    for (int i = 1; i < length - 1; ++i)
	{
        maskedPassword[i] = '*';
    }
}

bool DNN::DLIB::isValidEmail(const char* mail) 
{
    const char* atPos = strchr(mail, '@');
    
	if (!atPos) return false;

    const char* dotPos = strchr(atPos, '.');
    
	if (!dotPos) return false;
    
	return true;
}

#endif