#ifndef _DNN_USER_AUTHENTICATION_HPP_
#define _DNN_USER_AUTHENTICATION_HPP_

// HEADER FILES //--------------------------------------------------------------//
   #include "../../DNN_Header/DNN.hpp"
   #include "lib/Account.hpp"
//------------------------------------------------------------------------------//

// THE DEFINITION ////------------------------------------------------------------//
namespace DNN
{
   namespace User
   {
      class Staff
      {
         public:
            Staff() = default;
            ~Staff() = default;
            class ManageUser
            {
               public:
                  void Insert(Account &account);
                  void Search();
                  void Delete(int accountID);
                  class Update
                  {
                    private:

                     static void UpdateAll(int accountID);
                     static void UpdateFirstName(int accountID);
                     static void UpdateLastName(int accountID);
                     static void UpdateBirthDate(int accountID);
                     static void UpdateEmail(int accountID);
                     static void UpdatePhoneNumber(int accountID);
                     static void UpdatePosition(int accountID);
                     static void UpdateGender(int accountID);
                     static void UpdateUsername(int accountID);
                     static void UpdatePassword(int accountID);

                    public : 
                      static void Run();
                  };

                  class Sort
                  {
                    public:
                     static void SortByAccountNumber(string mode);
                     static void SortByFirstName(string mode);
                     static void SortByLastName(string mode);
                     static void SortByBirthDate(string mode);
                     static void SortByEmail(string mode);
                     static void SortByGender(string mode);
                     static void SortByPhoneNumber(string mode);
                     static void SortByPosition(string mode);
                     static void SortByUsername(string mode);
                     static void SortByApprovalStatus(bool approved = false);
                  };
                  
               
            };

            class Program
            {
              private:
                static void Insert();
                static void Display();
                static void Search();
                static void Delete();
                static void sort();

              public:
                static void Approval();
                static void AccountSetting();
                static void Home();
            };
      };

      class MainMenu
      {
         public:
            static void Staff();
            static void Admin();
      };

      class Auth
      {
         public:
            static void Login();
            static void Register();
      };
   }
}


// ADDITIONAL LIBRARIES //--------------------------------------------------------//
   #include "lib/Staff.hpp"
   #include "../../DNN_Header/Program.hpp"
   #include "lib/Program.hpp"
   #include "../Ground/Ground.hpp"
   #include "../Store/Store.hpp"
   #include "../Booking/Booking.hpp"
//-------------------------------------------------------------------------------//

void DNN::User::MainMenu::Staff()
{
   vector<Account> vc = DNN::File<Account>::read("Account.dnn");
   vector<LoginTemp> lt = DNN::File<LoginTemp>::read("temp.dnn");
   
   char press; int y = 1, x = 1;
      
   again:

   H::clearBox(1,1,200,50,7);
   
   DNN::Design::User::MainMenu::Home(1,5,"STAFF");

   tm currentDate = DNN::DateAndTimes::getCurrentDateAndTimes();
   int hour = currentDate.tm_hour;
   char str[20];

   if(hour < 12)
   {
      strcpy(str, "Good Morning");
   }
   else if(hour >= 12 && hour < 16)
   {
      strcpy(str, "Good Afternoon");
   }

   else if(hour >= 16 && hour < 20)
   {
      strcpy(str, "Good Evening");
   }

   else if(hour >= 20 && hour < 24)
   {
      strcpy(str, "Good Night");
   }

   do
   { 
      H::drawBoxSingleLineWithBG(36, 18, 26, 1, 136); H::gotoxy(37,19);  H::setcolor(135); cout << "          STORE          ";
      H::drawBoxSingleLineWithBG(36, 22, 26, 1, 136); H::gotoxy(37,23);  H::setcolor(135); cout << "         GROUND         ";
      H::drawBoxSingleLineWithBG(36, 26, 26, 1, 136); H::gotoxy(37,27);  H::setcolor(135); cout << "    BOOKING / INVOICE    ";
      H::drawBoxSingleLineWithBG(36, 30, 26, 1, 136); H::gotoxy(37,31);  H::setcolor(135); cout << "        ABOUT US        ";
      H::drawBoxSingleLineWithBG(36, 34, 26, 1, 136); H::gotoxy(37,35);  H::setcolor(135); cout << "    ACCOUNT SETTINGS    ";
      H::drawBoxSingleLineWithBG(36, 38, 11, 1, 136); H::gotoxy(37,39);  H::setcolor(135); cout << " LOGOUT ";
      H::drawBoxSingleLineWithBG(51, 38, 11, 1, 136); H::gotoxy(53,39);  H::setcolor(135); cout << " EXIT ";
      
      if(y == 1 && x == 1)
      {
         H::drawBoxSingleLineWithBG(36, 18, 26, 1, 153); H::gotoxy(37,19);  H::setcolor(151); cout << "          STORE          ";
      }
      if(y == 2 && x == 1)
      {
         H::drawBoxSingleLineWithBG(36, 22, 26, 1, 153); H::gotoxy(37,23);  H::setcolor(151); cout << "         GROUND         "; 
      }
      if(y == 3 && x == 1)
      {
        H::drawBoxSingleLineWithBG(36, 26, 26, 1, 153); H::gotoxy(37,27);  H::setcolor(151); cout << "    BOOKING / INVOICE    ";
      }
      if(y == 4 && x == 1)
      {
      H::drawBoxSingleLineWithBG(36, 30, 26, 1, 153); H::gotoxy(37,31);  H::setcolor(151); cout << "        ABOUT US        ";
      }
      if(y == 5 && x == 1)
      {
      H::drawBoxSingleLineWithBG(36, 34, 26, 1, 153); H::gotoxy(37,35);  H::setcolor(151); cout << "    ACCOUNT SETTINGS    ";
      }
      
      if(y == 6 && x == 1)
      {
      H::drawBoxSingleLineWithBG(36, 38, 11, 1, 153); H::gotoxy(37,39);  H::setcolor(151); cout << " LOGOUT ";
      }
      
      if(y == 6 && x == 2)
      { 
      H::drawBoxSingleLineWithBG(51, 38, 11, 1, 153); H::gotoxy(53,39);  H::setcolor(151); cout << " EXIT ";
      }

      H::gotoxy(3,21); H::setcolor(7); cout << str << ", " << vc[lt[0].getIndex()].getFirstName() << " !";

      DNN::DateAndTimes::DisplayLocalDT(3, 19);
      
      press = getch();

      switch(press)
      {
         case KEY_ARROW_UP: y--;
         {
            if(y < 1 && x == 1)
            {
            y = 6; x = 1;
            }
            
            else if(y < 6 && x == 2)
            {
            y = 5; x = 1;
            }
         }
         break;
         
         case KEY_ARROW_DOWN: y++;
         {
            if(y > 6 && x == 1 || x == 2)
            {
            y = 1; x = 1;
            }
         }
         break;

         case KEY_ARROW_LEFT: x--;
         {
            if(y == 1 && x < 1)
            { 
            y = 6; x = 2;
            }
            
            else if(y == 6 && x < 1)
            {
            y = 5, x = 1;
            }
            
            if(y < 6 && x < 1)
            {
            y--, x = 1;
            }
         }
         break;

         case KEY_ARROW_RIGHT: x++;
         {
            if(y < 6 && x > 1)
            { 
            y++; x = 1;
            }
            else if(y == 6 && x > 2) y = 1, x = 1;
         }
         break;
      }

   } while (press != KEY_ENTER);

   if(y == 6 && x == 1)
   {
      H::clearBox(1,1,200,50,7);
      DNN::Program::Home();
      goto again;
   }

   if(y == 6 && x == 2)
   {
      H::clearBox(1,1,200,50,7);
      DNN::Program::Design::_ArrowEixit();
      exit(0);
      goto again;
   }

   if(y == 4 && x == 1)
   {
      H::clearBox(1,1,200,50,7);
      DNN::Ground::DemoDNNSportGround::AboutUs();
      goto again;
   }

   if(y == 5 && x == 1)
   {
      H::clearBox(1,1,200,50,7);
      DNN::User::Staff::Program::AccountSetting();
      goto again;
   }
   
   if(vc[lt[0].getIndex()].getAdminApproval() == false)
   {
      H::clearBox(1,1,200,50,7);
      H::gotoxy(50, 20); H::setcolor(7); 
      cout << "SORRY, " << vc[lt[0].getIndex()].getFirstName() << " !";
      H::gotoxy(50, 23); cout << "YOUR ACCOUNT IS NOT HAVE PERMISSION TO USE THIS FEATURE. ";
      H::gotoxy(50, 25); cout << "PLEASE WAIT FOR APPROVAL FROM ADMINISTRATOR..";
      getch();
      goto again;      
   }

   else
   {
      if(y == 3 && x == 1)
      {
         H::clearBox(1,1,200,50,7);
         DNN::Ground::Booking::Program::Run();
         goto again;
      }

      if(y == 1 && x == 1)
      {
         H::clearBox(1,1,200,50,7);
         DNN::Store::DemoFoodAndDrink::RunDrink();
         goto again;
      }

      if(y == 2 && x == 1)
      {
         H::clearBox(1,1,200,50,7);
         DNN::Ground::DemoDNNSportGround::RunProgram();
         goto again;
      }

   }
}

void DNN::User::MainMenu::Admin()
{
   vector<Account> vc = DNN::File<Account>::read("Account.dnn");

   char press; int y = 1, x = 1;
   
   again:

   H::clearBox(0,0,200,50,7);
   
   DNN::Design::User::MainMenu::Home(1,5,"ADMIN");

   tm currentDate = DNN::DateAndTimes::getCurrentDateAndTimes();
   int hour = currentDate.tm_hour;
   char str[20];

   if(hour < 12)
   {
      strcpy(str, "Good Morning");
   }
   else if(hour >= 12 && hour < 16)
   {
      strcpy(str, "Good Afternoon");
   }

   else if(hour >= 16 && hour < 20)
   {
      strcpy(str, "Good Evening");
   }

   else if(hour >= 20 && hour < 24)
   {
      strcpy(str, "Good Night");
   }

   do
   {
      H::drawBoxSingleLineWithBG(36, 18, 26, 1, 136); H::gotoxy(37,19);  H::setcolor(135); cout << "          STAFF          ";
      H::drawBoxSingleLineWithBG(36, 22, 26, 1, 136); H::gotoxy(37,23);  H::setcolor(135); cout << "          STORE          ";
      H::drawBoxSingleLineWithBG(36, 26, 26, 1, 136); H::gotoxy(37,27);  H::setcolor(135); cout << "         GROUND          ";
      H::drawBoxSingleLineWithBG(36, 30, 26, 1, 136); H::gotoxy(37,31);  H::setcolor(135); cout << "    BOOKING / INVOICE    ";
      H::drawBoxSingleLineWithBG(36, 34, 26, 1, 136); H::gotoxy(37,35);  H::setcolor(135); cout << "        ABOUT US         ";
      H::drawBoxSingleLineWithBG(36, 38, 11, 1, 136); H::gotoxy(37,39);  H::setcolor(135); cout << " LOGOUT ";
      H::drawBoxSingleLineWithBG(51, 38, 11, 1, 136); H::gotoxy(53,39);  H::setcolor(135); cout << " EXIT ";
      
      if(y == 1 && x == 1)
      {
         H::drawBoxSingleLineWithBG(36, 18, 26, 1, 153); H::gotoxy(37,19);  H::setcolor(151); cout << "          STAFF          ";
      }
      if(y == 2 && x == 1)
      {
         H::drawBoxSingleLineWithBG(36, 22, 26, 1, 153); H::gotoxy(37,23);  H::setcolor(151); cout << "          STORE          "; 
      }
      if(y == 3 && x == 1)
      {
      H::drawBoxSingleLineWithBG(36, 26, 26, 1, 153); H::gotoxy(37,27);  H::setcolor(151); cout << "         GROUND         ";
      }
      if(y == 4 && x == 1)
      {
      H::drawBoxSingleLineWithBG(36, 30, 26, 1, 153); H::gotoxy(37,31);  H::setcolor(151); cout << "    BOOKING / INVOICE    ";
      }
      
      if(y == 5 && x == 1)
      {
      H::drawBoxSingleLineWithBG(36, 34, 26, 1, 153); H::gotoxy(37,35);  H::setcolor(151); cout << "        ABOUT US        ";
      }
      
      if(y == 6 && x == 1)
      { 
      H::drawBoxSingleLineWithBG(36, 38, 11, 1, 153); H::gotoxy(37,39);  H::setcolor(151); cout << " LOGOUT ";
      }

      if(y == 6 && x == 2)
      {
      H::drawBoxSingleLineWithBG(51, 38, 11, 1, 153); H::gotoxy(53,39);  H::setcolor(151); cout << " EXIT ";
      }

      H::gotoxy(3,21); H::setcolor(7); cout << str << ", Admin !";

      DNN::DateAndTimes::DisplayLocalDT(3, 19);
      
      press = getch();
      
      switch(press)
      {
         case KEY_ARROW_UP: y--;
         {
            if(y < 1 && x == 1)
            {
            y = 6; x = 1;
            }
            
            else if(y < 6 && x == 2)
            {
            y = 5; x = 1;
            }
         }
         break;
         
         case KEY_ARROW_DOWN: y++;
         {
            if(y > 6 && x == 1 || x == 2)
            {
            y = 1; x = 1;
            }
         }
         break;

         case KEY_ARROW_LEFT: x--;
         {
            if(y == 1 && x < 1)
            { 
            y = 6; x = 2;
            }
            
            else if(y == 6 && x < 1)
            {
            y = 5, x = 1;
            }
            
            if(y < 6 && x < 1)
            {
            y--, x = 1;
            }
         }
         break;

         case KEY_ARROW_RIGHT: x++;
         {
            if(y < 6 && x > 1)
            { 
            y++; x = 1;
            }
            else if(y == 6 && x > 2) y = 1, x = 1;
         }
         break;
      }

   } while (press != KEY_ENTER);

   if(y == 1 && x == 1)
   {
      H::clearBox(0,0,200,50,7);
      DNN::User::Staff::Program::Home();
      goto again;
   }

   if(y == 2 && x == 1)
   {
      H::clearBox(0,0,200,50,7);
      DNN::Store::DemoFoodAndDrink::RunDrink();
      goto again;
   }

   if(y == 3 && x == 1)
   {
      H::clearBox(0,0,200,50,7);
      DNN::Ground::DemoDNNSportGround::RunProgram();
      goto again;
   }

   if(y == 4 && x == 1)
   {
      H::clearBox(0,0,200,50,7);
      DNN::Ground::Booking::Program::Run();
      goto again;
   }

   if(y == 5 && x == 1)
   {
      H::clearBox(0,0,200,50,7);
      DNN::Ground::DemoDNNSportGround::AboutUs();
      getch();
      goto again;
   }

   if(y == 6 && x == 1)
   {
      H::clearBox(0,0,200,50,7);
      DNN::Program::Home();
      goto again;
   }

   if(y == 6 && x == 2)
   {
      H::clearBox(0,0,200,50,7);
      DNN::Program::Design::_ArrowEixit();
      exit(0);
   }
}
void DNN::User::Auth::Login()
{
   Account account; 

   DNN::Design::User::Auth::Login(27, 8); 

   char username[20], password[20]; int fine = 0, times = 3; 
   
   do
   {
      again:
      H::gotoxy(71, 38); H::setcolor(7); for(int j = 0; j < 30; j++) cout << " ";
      H::setcursor(true, 1);
      
      for(int i = 0; i < sizeof(username); i++) 
      {
         H::gotoxy(86+i,23); cout << " ";
         H::gotoxy(86+i,27); cout << " ";
      }

      H::clearBox(74,32,45,5,7);

      H::gotoxy(71,41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
      cout << " PLEASE TYPE "; H::setcolor(6); cout << "exit "; H::setcolor(7); cout << "OR"; H::setcolor(6); cout << " Exit"; 
      H::setcolor(7); cout << " TO BACK TO MAIN MENU.";
      
      H::gotoxy(86,23); input::inputLetter(username, sizeof(username));
      if(strcmp(username, "exit") == 0 || strcmp(username,"Exit") == 0 || (strcmp(username, "EXIT") == 0) || (strcmp(username, "exit") == 0))
      {
         H::setcursor(false, 0);
         H::clearBox(1,1,199,49,7); DNN::Program::Home();
         return;
      }
      
      H::gotoxy(86,27); input::hidePassword(password, sizeof(password));
      if(strcmp(password, "exit") == 0 || strcmp(password, "Exit") == 0 || (strcmp(password, "EXIT") == 0) || (strcmp(password, "exit") == 0))
      {
         H::setcursor(false, 0);
         H::clearBox(1,1,199,49,7); DNN::Program::Home();
         return;
      }
      
      H::setcursor(false, 0);
      
      if(times < 1)
      {
         fine += 5; times = 3;
         
         for(int i = fine; i >= 0; i--)
         {
            H::gotoxy(71, 38); H::setcolor(6); cout << "TRY AGAIN. " << i << " TIMES LEFT. "; H::delay(1000);
            H::gotoxy(71, 38); H::setcolor(7); 

            for(int j = 0; j < 30; j++)
            {
               cout << " ";
            }

         }
         
         goto again;
      }

      if(times >= 1 && account.checkAccount(username, password) != true)
      {
       H::gotoxy(71, 38); H::setcolor(6); cout << "TRY AGAIN. " << times << " TIMES LEFT. ";
      }
      
      times--;

      if(strcmp(username, "SuperUser") == 0 && strcmp(password, "SuperUser") == 0)
      {
         H::gotoxy(73,32); H::setcolor(2); cout << " LOGIN SUCCESSFULLY"; H::delay(1000);
      }

   }while(account.Login(username, password) != true);

   H::clearBox(1,1,199,49,7);

   if(account.checkAdmin(username, password))
   {
      DNN::User::MainMenu::Admin();
   }

   else
   {
      DNN::User::MainMenu::Staff();
   }
   
}

void DNN::User::Auth::Register()
{
   Account account;
   DNN::Design::User::Auth::Register(1, 7);
   account.Register();
}
#endif 