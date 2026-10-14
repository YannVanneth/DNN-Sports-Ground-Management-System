#ifndef _BOOKING_HPP_
#define _BOOKING_HPP_

#include "../../DNN_Header/DNN.hpp"
#include "libs/Design/Booking.hpp"

namespace DNN
{
    namespace Ground 
    {
        class Booking
        { 
            private:
               char type[10];
               int GroundNo;
               char bookingDate[12];
               char TeamA[10];
               char TeamB[10];
               char timeShift[10];
               float price;
               bool bookingStatus;
            
            public:
               Booking();
               ~Booking(){};
               void setGroundNo(int number);
               void setBookingDate(const char* date);
               void setTime_Shift(const char* shift);
               void setPrice(float price);
               void setBookingStatus(bool status);
               void setTeamA(const char* teamA);
               void setTeamB(const char* teamB);
               void setType(const char* type);
            public:   
               int getGroundNo() const;
               float getPrice() const;
               const char* getBookingDate() const;
               const char* getTime_Shift() const;

               const char* getTeamA() const;
               const char* getTeamB() const;
               
               bool getBookingStatus() const;
               bool checkBooking();
               long long int autoBookingID();
               const char* getType() const;

            public:
               void displayBooking();
               static void Header();
            public:
               class Program
               {
                   public:
                      static void Run();
                      static void DisplayBooking();
               };
        };
    }
}

#include "libs/BookingClass.hpp"

////////////////////////////////////////////////////////////////
///////////////////////// THE SETTER //////////////////////////
//////////////////////////////////////////////////////////////

DNN::Ground::Booking::Booking()
{
    GroundNo = 0;
    bookingStatus = false;
    strcpy(bookingDate, "00-00-0000");
    strcpy(TeamA, "NOTYET");
    strcpy(TeamB, "NOTYET");
    strcpy(timeShift, "NOTYET");
    strcpy(type, "NOTYET");
}
void DNN::Ground::Booking::setGroundNo(int number)
{
    this->GroundNo = number;
}

void DNN::Ground::Booking::setBookingDate(const char* date)
{
    strcpy(this->bookingDate, date);
}

void DNN::Ground::Booking::setTime_Shift(const char* shift)
{
    strcpy(this->timeShift, shift);
}

void DNN::Ground::Booking::setBookingStatus(bool status)
{
    this->bookingStatus = status;
}

void DNN::Ground::Booking::setTeamA(const char* teamA)
{
    strcpy(this->TeamA, teamA);
}

void DNN::Ground::Booking::setTeamB(const char* teamB)
{
    strcpy(this->TeamB, teamB);
}

void DNN::Ground::Booking::setType(const char* type)
{
    strcpy(this->type, type);
}

void DNN::Ground::Booking::setPrice(float price)
{
    this->price = price;
}
///////////////////////////////////////////////////////////
/////////////// THE GETTER ////////////////////////////////
///////////////////////////////////////////////////////////
int DNN::Ground::Booking::getGroundNo() const
{
    return GroundNo;
}

float DNN::Ground::Booking::getPrice() const
{
    return price;
}
const char* DNN::Ground::Booking::getBookingDate() const
{
    return bookingDate;
}

const char* DNN::Ground::Booking::getTime_Shift() const
{
    return timeShift;
}

const char* DNN::Ground::Booking::getTeamA() const
{
    return TeamA;
}

const char* DNN::Ground::Booking::getTeamB() const
{
    return TeamB;
}

bool DNN::Ground::Booking::getBookingStatus() const
{
    return bookingStatus;
}

const char* DNN::Ground::Booking::getType() const
{
    return type;
}

////////////////////////////////////////////////////////////////////////////////////////
//////////// THE DISPLAY BOOKING //////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::Booking::displayBooking()
{
    (strcmp(TeamA, "BOOKED") == 0 && strcmp(TeamB, "BOOKED") == 0) ? setBookingStatus(true) : setBookingStatus(false);
    
    cout << left <<
    setw(18) << getGroundNo() <<
    setw(15) << getBookingDate() <<
    setw(10) << getTime_Shift();
    
    strcmp(TeamA, "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);

    cout <<
    setw(13) << (strcmp(TeamA, "BOOKED") == 0 ? "BOOKED" : "NOTYET");

    strcmp(TeamB, "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
    cout <<
    setw(13) << (strcmp(TeamB, "BOOKED") == 0 ? "BOOKED" : "NOTYET");

    getBookingStatus() ? H::setcolor(2) : H::setcolor(6);
    cout <<
    setw(15) << (getBookingStatus() ? "COMFIRMED" : "PENDING");
    
    H::setcolor(7);
    cout << getType() << endl;
}

///////////////////////////////////////////////////
//////////////// THE HEADER //////////////////////
/////////////////////////////////////////////////
void DNN::Ground::Booking::Header()
{
    cout << left <<
    setw(18) << "Ground No" <<
    setw(15) << "Date" <<
    setw(10) << "Shift" <<
    setw(13) << "Team A" <<
    setw(13) << "Team B" <<
    setw(15) << "Status" <<
    "Type" << endl;
}

#endif
