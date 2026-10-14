//-----------------------------------------------------------------------------------------------------------------------------------------------//
#ifndef __DNN_HPP__
#define __DNN_HPP__

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

// User Define Header
#include "../ANT_Library/HinsyOOPV2.hpp"

// DEFINE 

#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_RIGHT 77
#define KEY_BACKSPACE 8
#define KEY_SPACE 32
#define KEY_ESC 27
#define KEY_ENTER 13

using namespace HinsyOOP;

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN


/////////////////////////////////////
//    DNN NAMESPACE DEFINITION     //
/////////////////////////////////////

namespace DNN
{
   // Main Abstract Class
   namespace User
   {
      class Admin;
      class Staff;
   }
   
   namespace Ground
   {
      class Fusal;
      class Tennis;
      class Volleyball;
      class Basketball;
      class Checking;
      class Booking;
   }

   namespace Store
   {
      class Drinks;
   }

   namespace Invoice
   {
      class Invoice_Record;
   }
   
   namespace Design
   {
      class Ground;
      class Store;
      class User;
      class Invoice;
      class Booking;
   }

} // End of DNN Namespace

// ADDITIONAL LIBRARY INCLUDES //------------------------------------------------------------------------------------------------------------------------------//
   #include "Lib/DNNLIB.hpp"
//---------------------------------------------------------------------------//

// DESIGN HEADER INCLUDES //-------------------------------------------------------------------------------------------------------------------------------//
   #include "../Project_Header/User/lib/Design/User.hpp"
//---------------------------------------------------------------------------//

// PROJECT HEADER INCLUDES //-------------------------------------------------------------------------------------------------------------------------------//
   #include "../Project_Header/User/User.hpp"
   #include "../Project_Header/Store/Store.hpp"
   #include "../Project_Header/Ground/Ground.hpp"
   #include "../Project_Header/Invoice/Invoice.hpp"
   #include "../Project_Header/Booking/Booking.hpp"
//---------------------------------------------------------------------------------------------------------------------------------------------------------//

// RUNNER HEADER INCLUDES //-------------------------------------------------------------------------------------------------------------------------------//   
   #include "Program.hpp"
//-------------------------------------------------------------------------------------------------------------------------------------------//

#endif
// -------------------------------------------------------------------------------------------------------------------------------------------------//
