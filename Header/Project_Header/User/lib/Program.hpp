#ifndef _PROGRAM_STAFF_HPP_
#define _PROGRAM_STAFF_HPP_

// HEADER FILES //--------------------------------------------------------------//
   #include "../User.hpp"
//------------------------------------------------------------------------------//

// THE DEFINITION ////------------------------------------------------------------//

/////////////////////////////////////////////////////////////
//////////////////// PROGRAM INSERT /////////////////////////
////////////////////////////////////////////////////////////
void DNN::User::Staff::Program::Insert()
{
   Account account;
   DNN::User::Staff::ManageUser manageStaff;
   DNN::Design::User::Staff::Insert(1, 7);
   manageStaff.Insert(account);
}

/////////////////////////////////////////////////////////////
//////////////////// PROGRAM DISPLAY ////////////////////////
////////////////////////////////////////////////////////////

void DNN::User::Staff::Program::Display()
{
  DNN::Design::User::Staff::Display(5, 5);
  
  // Account account;
  vector<Account> vc = DNN::File<Account>::read("Account.dnn");
   
  if(vc.empty())
  {
      H::gotoxy(83,28); H::setcolor(6); cout << "[ALERT]"; H::setcolor(4); cout << " NO DATA FOUND!";
  }

  else 
  {
    H::gotoxy(8,14); Account::Header();

    for(auto i = 0; i < vc.size(); i++)
    {
        H::gotoxy(8,16+i); vc[i].Display();
    }
  }
}

/////////////////////////////////////////////////////////////
////////// PROGRAM ACCOUNT SETTING /////////////////////////
////////////////////////////////////////////////////////////

void DNN::User::Staff::Program::AccountSetting()
{

   vector<Account> vc = DNN::File<Account>::read("Account.dnn");
   vector<int> index = DNN::File<int>::read("Temp.dnn");
   
   again:
   DNN::Design::User::Staff::AccountSetting(6, 1);

   char press; int y = 1;

   do
   {
     H::drawBoxDoubleLineWithBG(10,12,42,1,153); H::gotoxy(16,13); H::setcolor(151); cout << "VIEW ACCOUNT INFORMATION";
     H::drawBoxDoubleLineWithBG(10,16,42,1,153); H::gotoxy(16,17); H::setcolor(151); cout << "CHANGE ACCOUNT INFORMATION";
     H::drawBoxDoubleLineWithBG(10,20,42,1,153); H::gotoxy(16,21); H::setcolor(151); cout << "CHANGE ACCOUNT USERNAME";
     H::drawBoxDoubleLineWithBG(10,24,42,1,153); H::gotoxy(16,25); H::setcolor(151); cout << "CHANGE ACCOUNT PASSWORD";
     H::drawBoxDoubleLineWithBG(10,28,42,1,153); H::gotoxy(16,29); H::setcolor(151); cout << "BACK TO MAIN MENU";

     if(y == 1)
     {
       H::drawBoxDoubleLineWithBG(10,12,42,1,247); H::gotoxy(16,13); H::setcolor(249); cout << "VIEW ACCOUNT INFORMATION";

       H::clearBox(67,9,126,32,7);

       const auto panel = [](int x, int y)
       {
          H::gotoxy(x,y);    H::setcolor(9); cout << R"(____    ____  __   ___________    __    ____      _  _     _  _     _  _    )";     
          H::gotoxy(x,y+1);  H::setcolor(7); cout << R"(\   \  /   / |  | |   ____\   \  /  \  /   /    _| || |_ _| || |_ _| || |_  )"; 
          H::gotoxy(x,y+2);  H::setcolor(3); cout << R"( \   \/   /  |  | |  |__   \   \/    \/   /    |_  __  _|_  __  _|_  __  _| )";  
          H::gotoxy(x,y+3);  H::setcolor(3); cout << R"(  \      /   |  | |   __|   \            /      _| || |_ _| || |_ _| || |_  )";
          H::gotoxy(x,y+4);  H::setcolor(7); cout << R"(   \    /    |  | |  |____   \    /\    /      |__ __ __|__ __ __|__ __ __|)"; 
          H::gotoxy(x,y+5);  H::setcolor(7); cout << R"(    \__/     |__| |_______|   \__/  \__/         |_||_|   |_||_|   |_||_|   )";
          H::gotoxy(x,y+7);  H::setcolor(3); cout << R"(   _  _     _  _     _  _        ___       ______   ______   ______    __    __  .__   __. .___________.    )";          
          H::gotoxy(x,y+8);  H::setcolor(3); cout << R"( _| || |_ _| || |_ _| || |_     /   \     /      | /      | /  __  \  |  |  |  | |  \ |  | |           |    )";          
          H::gotoxy(x,y+9);  H::setcolor(7); cout << R"(|_  __  _|_  __  _|_  __  _|   /  ^  \   |  ,----'|  ,----'|  |  |  | |  |  |  | |   \|  | `---|  |----`    )";          
          H::gotoxy(x,y+10); H::setcolor(7); cout << R"( _| || |_ _| || |_ _| || |_   /  /_\  \  |  |     |  |     |  |  |  | |  |  |  | |  . `  |     |  |         )";          
          H::gotoxy(x,y+11); H::setcolor(3); cout << R"(|_  __  _|_  __  _|_  __  _| /  _____  \ |  `----.|  `----.|  `--'  | |  `--'  | |  |\   |     |  |         )";          
          H::gotoxy(x,y+12); H::setcolor(3); cout << R"(  |_||_|   |_||_|   |_||_|  /__/     \__\ \______| \______| \______/   \______/  |__| \__|     |__|         )";  
          H::gotoxy(x,y+13); H::setcolor(7); cout << R"(                                                                                                                       )";
          H::gotoxy(x,y+14); H::setcolor(7); cout << R"( __  .__   __.  _______   ______   .______      .___  ___.      ___   .___________. __    ______   .__   __.      _    )";
          H::gotoxy(x,y+15); H::setcolor(7); cout << R"(|  | |  \ |  | |   ____| /  __  \  |   _  \     |   \/   |     /   \  |           ||  |  /  __  \  |  \ |  |   /\| |/\ )";
          H::gotoxy(x,y+16); H::setcolor(7); cout << R"(|  | |   \|  | |  |__   |  |  |  | |  |_)  |    |  \  /  |    /  ^  \ `---|  |----`|  | |  |  |  | |   \|  |   \ ` ' / )";
          H::gotoxy(x,y+17); H::setcolor(7); cout << R"(|  | |  . `  | |   __|  |  |  |  | |      /     |  |\/|  |   /  /_\  \    |  |     |  | |  |  |  | |  . `  |  |_     _|)";
          H::gotoxy(x,y+18); H::setcolor(7); cout << R"(|  | |  |\   | |  |     |  `--'  | |  |\  \----.|  |  |  |  /  _____  \   |  |     |  | |  `--'  | |  |\   |   / , . \ )";
          H::gotoxy(x,y+19); H::setcolor(7); cout << R"(|__| |__| \__| |__|      \______/  | _| `._____||__|  |__| /__/     \__\  |__|     |__|  \______/  |__| \__|   \/|_|\/ )";                                                                                                                                                                                    
       };

       panel(71, 11);
     }

     if(y == 2)
     {
       H::drawBoxDoubleLineWithBG(10,16,42,1,247); H::gotoxy(16,17); H::setcolor(249); cout << "CHANGE ACCOUNT INFORMATION";
       
       H::clearBox(67,9,126,32,7);

       const auto panel = [](int x, int y)
       {
        H::gotoxy(x,y);    H::setcolor(9); cout << R"(  ______  __    __       ___      .__   __.   _______  _______                                              )";    
        H::gotoxy(x,y+1);  H::setcolor(3); cout << R"( /      ||  |  |  |     /   \     |  \ |  |  /  _____||   ____|    ______ ______ ______ ______              )";        
        H::gotoxy(x,y+2);  H::setcolor(3); cout << R"(|  ,----'|  |__|  |    /  ^  \    |   \|  | |  |  __  |  |__      |______|______|______|______|             )";          
        H::gotoxy(x,y+3);  H::setcolor(7); cout << R"(|  |     |   __   |   /  /_\  \   |  . `  | |  | |_ | |   __|      ______ ______ ______ ______              )";          
        H::gotoxy(x,y+4);  H::setcolor(7); cout << R"(|  `----.|  |  |  |  /  _____  \  |  |\   | |  |__| | |  |____    |______|______|______|______|             )";          
        H::gotoxy(x,y+5);  H::setcolor(3); cout << R"( \______||__|  |__| /__/     \__\ |__| \__|  \______| |_______|                                             )";          
        H::gotoxy(x,y+6);  H::setcolor(7); cout << R"(                                                                                                            )";          
        H::gotoxy(x,y+7);  H::setcolor(7); cout << R"(   _  _     _  _     _  _        ___       ______   ______   ______    __    __  .__   __. .___________.    )";          
        H::gotoxy(x,y+8);  H::setcolor(7); cout << R"( _| || |_ _| || |_ _| || |_     /   \     /      | /      | /  __  \  |  |  |  | |  \ |  | |           |    )";          
        H::gotoxy(x,y+9);  H::setcolor(7); cout << R"(|_  __  _|_  __  _|_  __  _|   /  ^  \   |  ,----'|  ,----'|  |  |  | |  |  |  | |   \|  | `---|  |----`    )";          
        H::gotoxy(x,y+10); H::setcolor(7); cout << R"( _| || |_ _| || |_ _| || |_   /  /_\  \  |  |     |  |     |  |  |  | |  |  |  | |  . `  |     |  |         )";          
        H::gotoxy(x,y+11); H::setcolor(7); cout << R"(|_  __  _|_  __  _|_  __  _| /  _____  \ |  `----.|  `----.|  `--'  | |  `--'  | |  |\   |     |  |         )";          
        H::gotoxy(x,y+12); H::setcolor(7); cout << R"(  |_||_|   |_||_|   |_||_|  /__/     \__\ \______| \______| \______/   \______/  |__| \__|     |__|         )";          
        H::gotoxy(x,y+13); H::setcolor(7); cout << R"(                                                                                                            )";          
        H::gotoxy(x,y+14); H::setcolor(7); cout << R"( __  .__   __.  _______   ______   .______      .___  ___.      ___   .___________. __    ______   .__   __.)";          
        H::gotoxy(x,y+15); H::setcolor(3); cout << R"(|  | |  \ |  | |   ____| /  __  \  |   _  \     |   \/   |     /   \  |           ||  |  /  __  \  |  \ |  |)";          
        H::gotoxy(x,y+16); H::setcolor(3); cout << R"(|  | |   \|  | |  |__   |  |  |  | |  |_)  |    |  \  /  |    /  ^  \ `---|  |----`|  | |  |  |  | |   \|  |)";          
        H::gotoxy(x,y+17); H::setcolor(7); cout << R"(|  | |  . `  | |   __|  |  |  |  | |      /     |  |\/|  |   /  /_\  \    |  |     |  | |  |  |  | |  . `  |)";          
        H::gotoxy(x,y+18); H::setcolor(3); cout << R"(|  | |  |\   | |  |     |  `--'  | |  |\  \----.|  |  |  |  /  _____  \   |  |     |  | |  `--'  | |  |\   |)";          
        H::gotoxy(x,y+19); H::setcolor(3); cout << R"(|__| |__| \__| |__|      \______/  | _| `._____||__|  |__| /__/     \__\  |__|     |__|  \______/  |__| \__|)";          

                                                                                                                                                                                
       };

       panel(78, 11);
     }

     if(y == 3)
     {
       H::drawBoxDoubleLineWithBG(10,20,42,1,247); H::gotoxy(16,21); H::setcolor(249); cout << "CHANGE ACCOUNT USERNAME";
       
       H::clearBox(67,9,126,32,7);
       
       const auto panel = [](int x, int y)
       {
        H::gotoxy(x,y+1);  H::setcolor(7); cout << R"(   ______  __    __       ___      .__   __.   _______  _______                                   )";   
        H::gotoxy(x,y+2);  H::setcolor(7); cout << R"(  /      ||  |  |  |     /   \     |  \ |  |  /  _____||   ____|    ______ ______ ______ ______   )";   
        H::gotoxy(x,y+3);  H::setcolor(7); cout << R"( |  ,----'|  |__|  |    /  ^  \    |   \|  | |  |  __  |  |__      |______|______|______|______|  )";   
        H::gotoxy(x,y+4);  H::setcolor(7); cout << R"( |  |     |   __   |   /  /_\  \   |  . `  | |  | |_ | |   __|      ______ ______ ______ ______   )";   
        H::gotoxy(x,y+5);  H::setcolor(7); cout << R"( |  `----.|  |  |  |  /  _____  \  |  |\   | |  |__| | |  |____    |______|______|______|______|  )";   
        H::gotoxy(x,y+6);  H::setcolor(7); cout << R"(  \______||__|  |__| /__/     \__\ |__| \__|  \______| |_______|                                  )";   
        H::gotoxy(x,y+7);  H::setcolor(7); cout << R"(                                                                                                  )";   
        H::gotoxy(x,y+8);  H::setcolor(7); cout << R"(                           ___       ______   ______   ______    __    __  .__   __. .___________.)";   
        H::gotoxy(x,y+9);  H::setcolor(7); cout << R"(  ______ ______           /   \     /      | /      | /  __  \  |  |  |  | |  \ |  | |           |)";   
        H::gotoxy(x,y+10); H::setcolor(9); cout << R"( |______|______|         /  ^  \   |  ,----'|  ,----'|  |  |  | |  |  |  | |   \|  | `---|  |----`)";   
        H::gotoxy(x,y+11); H::setcolor(3); cout << R"(  ______ ______         /  /_\  \  |  |     |  |     |  |  |  | |  |  |  | |  . `  |     |  |     )";   
        H::gotoxy(x,y+12); H::setcolor(9); cout << R"( |______|______|       /  _____  \ |  `----.|  `----.|  `--'  | |  `--'  | |  |\   |     |  |     )";   
        H::gotoxy(x,y+13); H::setcolor(3); cout << R"(                      /__/     \__\ \______| \______| \______/   \______/  |__| \__|     |__|     )";   
        H::gotoxy(x,y+14); H::setcolor(7); cout << R"(                                                                                                  )";   
        H::gotoxy(x,y+15); H::setcolor(7); cout << R"(  __    __       _______. _______ .______      .__   __.      ___      .___  ___.  _______        )";   
        H::gotoxy(x,y+16); H::setcolor(7); cout << R"( |  |  |  |     /       ||   ____||   _  \     |  \ |  |     /   \     |   \/   | |   ____|       )";   
        H::gotoxy(x,y+17); H::setcolor(3); cout << R"( |  |  |  |    |   (----`|  |__   |  |_)  |    |   \|  |    /  ^  \    |  \  /  | |  |__          )";   
        H::gotoxy(x,y+18); H::setcolor(7); cout << R"( |  |  |  |     \   \    |   __|  |      /     |  . `  |   /  /_\  \   |  |\/|  | |   __|         )";   
        H::gotoxy(x,y+19); H::setcolor(9); cout << R"( |  `--'  | .----)   |   |  |____ |  |\  \----.|  |\   |  /  _____  \  |  |  |  | |  |____        )";   
        H::gotoxy(x,y+20); H::setcolor(7); cout << R"(  \______/  |_______/    |_______|| _| `._____||__| \__| /__/     \__\ |__|  |__| |_______|       )";   
                                                                                                    
       };

       panel(80, 11);
     }

     if(y == 4)
     {
       H::drawBoxDoubleLineWithBG(10,24,42,1,247); H::gotoxy(16,25); H::setcolor(249); cout << "CHANGE ACCOUNT PASSWORD";
       
       H::clearBox(67,9,126,32,7);
       
       const auto panel = [](int x, int y)
       {
        H::gotoxy(x,y+1);  H::setcolor(7); cout << R"(   ______  __    __       ___      .__   __.   _______  _______                                   )";   
        H::gotoxy(x,y+2);  H::setcolor(7); cout << R"(  /      ||  |  |  |     /   \     |  \ |  |  /  _____||   ____|    ______ ______ ______ ______   )";   
        H::gotoxy(x,y+3);  H::setcolor(7); cout << R"( |  ,----'|  |__|  |    /  ^  \    |   \|  | |  |  __  |  |__      |______|______|______|______|  )";   
        H::gotoxy(x,y+4);  H::setcolor(7); cout << R"( |  |     |   __   |   /  /_\  \   |  . `  | |  | |_ | |   __|      ______ ______ ______ ______   )";   
        H::gotoxy(x,y+5);  H::setcolor(7); cout << R"( |  `----.|  |  |  |  /  _____  \  |  |\   | |  |__| | |  |____    |______|______|______|______|  )";   
        H::gotoxy(x,y+6);  H::setcolor(7); cout << R"(  \______||__|  |__| /__/     \__\ |__| \__|  \______| |_______|                                  )";   
        H::gotoxy(x,y+7);  H::setcolor(7); cout << R"(                                                                                                  )";   
        H::gotoxy(x,y+8);  H::setcolor(7); cout << R"(                           ___       ______   ______   ______    __    __  .__   __. .___________.)";   
        H::gotoxy(x,y+9);  H::setcolor(7); cout << R"(  ______ ______           /   \     /      | /      | /  __  \  |  |  |  | |  \ |  | |           |)";   
        H::gotoxy(x,y+10); H::setcolor(9); cout << R"( |______|______|         /  ^  \   |  ,----'|  ,----'|  |  |  | |  |  |  | |   \|  | `---|  |----`)";   
        H::gotoxy(x,y+11); H::setcolor(3); cout << R"(  ______ ______         /  /_\  \  |  |     |  |     |  |  |  | |  |  |  | |  . `  |     |  |     )";   
        H::gotoxy(x,y+12); H::setcolor(9); cout << R"( |______|______|       /  _____  \ |  `----.|  `----.|  `--'  | |  `--'  | |  |\   |     |  |     )";   
        H::gotoxy(x,y+13); H::setcolor(3); cout << R"(                      /__/     \__\ \______| \______| \______/   \______/  |__| \__|     |__|     )";   
        H::gotoxy(x,y+14); H::setcolor(7); cout << R"(                                                                                                  )";   
        H::gotoxy(x,y+15); H::setcolor(7); cout << R"( .______      ___           _______.     _______.____    __    ____  ______   .______       _______ )";   
        H::gotoxy(x,y+16); H::setcolor(7); cout << R"( |   _  \    /   \         /       |    /       |\   \  /  \  /   / /  __  \  |   _  \     |       \ )";   
        H::gotoxy(x,y+17); H::setcolor(3); cout << R"( |  |_)  |  /  ^  \       |   (----`   |   (----` \   \/    \/   / |  |  |  | |  |_)  |    |  .--.  |)";   
        H::gotoxy(x,y+18); H::setcolor(7); cout << R"( |   ___/  /  /_\  \       \   \        \   \      \            /  |  |  |  | |      /     |  |  |  |)";   
        H::gotoxy(x,y+19); H::setcolor(9); cout << R"( |  |     /  _____  \  .----)   |   .----)   |      \    /\    /   |  `--'  | |  |\  \----.|  '--'  |)";   
        H::gotoxy(x,y+20); H::setcolor(7); cout << R"( | _|    /__/     \__\ |_______/    |_______/        \__/  \__/     \______/  | _| `._____||_______/ )";                                                                                                      
       };

       panel(80, 11);

     }

     if(y == 5)
     {
       H::drawBoxDoubleLineWithBG(10,28,42,1,247); H::gotoxy(16,29); H::setcolor(249); cout << "BACK TO MAIN MENU";
     }

     press = getch();

     switch(press)
     {
       case KEY_ARROW_UP: y--; 
       {
         if(y < 1) y = 5;
       }
       break;

       case KEY_ARROW_DOWN: y++;
       {
         if(y > 5) y = 1;
       }
       break;

       case KEY_ESC: return; break;
     }
   } while (press != KEY_ENTER);

   if(y == 1)
   {
      const auto view = [vc, index](int x, int y) -> void
      {
         char maskedPassword[sizeof(vc[index[0]].getPassword())];

         H::gotoxy(x,y);    H::setcolor(151); for(int i = 0; i < 70; i++) cout << " ";
         H::gotoxy(x+27,y);    H::setcolor(151); cout << "ACCOUNT INFORMATION";
         
         H::gotoxy(x+1,y+3);   H::setcolor(7); cout << "\4 ACCOUNT ID             : " << vc[index[0]].getAccountNumber();
         H::gotoxy(x+1,y+5);   H::setcolor(7); cout << "\4 FIRST NAME             : " << vc[index[0]].getFirstName();
         H::gotoxy(x+1,y+7);   H::setcolor(7); cout << "\4 LAST NAME              : " << vc[index[0]].getLastName();
         H::gotoxy(x+1,y+9);   H::setcolor(7); cout << "\4 BIRTH DATE             : " << vc[index[0]].getBirthDate();
         H::gotoxy(x+1,y+11);  H::setcolor(7); cout << "\4 GENDER                 : " << vc[index[0]].getGender();
         H::gotoxy(x+1,y+13);  H::setcolor(7); cout << "\4 POSITION               : " << vc[index[0]].getPosition();
         H::gotoxy(x+1,y+15);  H::setcolor(7); cout << "\4 PHONE NUMBER           : " << vc[index[0]].getPhoneNumber();
         H::gotoxy(x+1,y+17);  H::setcolor(7); cout << "\4 EMAIL                  : " << vc[index[0]].getEmail();
         H::gotoxy(x+1,y+19);  H::setcolor(7); cout << "\4 ACCOUNT CREATED DATE   : " << vc[index[0]].getCreateDateAndTime();
         H::gotoxy(x+1,y+21);  H::setcolor(7); cout << "\4 ACCOUNT USERNAME       : " << vc[index[0]].getUsername();

         DNN::DLIB::maskPassword(vc[index[0]].getPassword(), maskedPassword);

         H::gotoxy(x+1,y+23);  H::setcolor(7); cout << "\4 ACCOUNT PASSWORD       : " << maskedPassword;
         
         H::HLine(x,y+25,70,7,178);

      };
      
      H::clearBox(67,9,126,32,7);
      
      view(70,11); 
      
      H::gotoxy(70,39); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
      H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC"; H::setcolor(7); cout << " TO BACK.";

      getch();
      goto again;
   }

   if(y == 2)
   {
      H::clearBox(67,9,126,32,7);
      
      const auto view = [vc, index](int x, int y) -> void
      {
         char maskedPassword[sizeof(vc[index[0]].getPassword())];

         H::gotoxy(x,y);    H::setcolor(151); for(int i = 0; i < 70; i++) cout << " ";
         H::gotoxy(x+27,y);    H::setcolor(151); cout << "ACCOUNT INFORMATION";
         
         H::gotoxy(x+1,y+3);   H::setcolor(7); cout << "\4 ACCOUNT ID             : " << vc[index[0]].getAccountNumber();
         H::gotoxy(x+1,y+5);   H::setcolor(7); cout << "\4 FIRST NAME             : " << vc[index[0]].getFirstName();
         H::gotoxy(x+1,y+7);   H::setcolor(7); cout << "\4 LAST NAME              : " << vc[index[0]].getLastName();
         H::gotoxy(x+1,y+9);   H::setcolor(7); cout << "\4 BIRTH DATE             : " << vc[index[0]].getBirthDate();
         H::gotoxy(x+1,y+11);  H::setcolor(7); cout << "\4 GENDER                 : " << vc[index[0]].getGender();
         H::gotoxy(x+1,y+13);  H::setcolor(7); cout << "\4 POSITION               : " << vc[index[0]].getPosition();
         H::gotoxy(x+1,y+15);  H::setcolor(7); cout << "\4 PHONE NUMBER           : " << vc[index[0]].getPhoneNumber();
         H::gotoxy(x+1,y+17);  H::setcolor(7); cout << "\4 EMAIL                  : " << vc[index[0]].getEmail();
         H::gotoxy(x+1,y+19);  H::setcolor(7); cout << "\4 ACCOUNT CREATED DATE   : " << vc[index[0]].getCreateDateAndTime();
         H::gotoxy(x+1,y+21);  H::setcolor(7); cout << "\4 ACCOUNT USERNAME       : " << vc[index[0]].getUsername();
         
         DNN::DLIB::maskPassword(vc[index[0]].getPassword(), maskedPassword);

         H::gotoxy(x+1,y+23);  H::setcolor(7); cout << "\4 ACCOUNT PASSWORD       : " << maskedPassword;
         
         H::HLine(x,y+25,70,7,178);

      };

      const auto update = [&vc, index, view](int x, int y) -> void
      {
        char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], positionTemp[15], phoneNumberTemp[12], emailTemp[25];
        char press; int yy = 1;

        do
        {
          view(70,11);

          if(yy == 1)
          {
            H::gotoxy(x+28,y+5);   H::setcolor(9); cout << vc[index[0]].getFirstName();
          }

          if(yy == 2)
          {
            H::gotoxy(x+28,y+7);   H::setcolor(9); cout << vc[index[0]].getLastName();
          }

          if(yy == 3)
          {
            H::gotoxy(x+28,y+9);   H::setcolor(9); cout << vc[index[0]].getBirthDate();
          }

          if(yy == 4)
          {
            H::gotoxy(x+28,y+11);  H::setcolor(9); cout << vc[index[0]].getGender();
          }

          if(yy == 5)
          {
            H::gotoxy(x+28,y+15);  H::setcolor(9); cout << vc[index[0]].getPhoneNumber();
          }

          if(yy == 6)
          {
            H::gotoxy(x+28,y+17);  H::setcolor(9); cout << vc[index[0]].getEmail();
          }

          H::gotoxy(70,39); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
          H::setcolor(7); cout << " PLEASE PRESS ARROW KEYS"; H::setcolor(6); cout << " UP"; H::setcolor(7); cout << " AND "; 
          H::setcolor(6); cout << "DOWN"; H::setcolor(7); cout << " TO SELECT FIELDS THAT YOU WANT TO UPDATE."; 
          H::gotoxy(69,41); H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ENTER"; H::setcolor(7); cout << " TO UPDATE";
          H::setcolor(7); cout << " OR PRESS "; H::setcolor(6); cout << "ESC"; H::setcolor(7); cout << " TO BACK.";
          
          press = getch();

        switch(press)
        {
          case KEY_ARROW_DOWN: yy++;
          {
            if(yy > 6) yy = 1; 
          } 
          break;

          case KEY_ARROW_UP: yy--;
          {
            if(yy < 1) yy = 6; 
          } 
          break;

          case KEY_ESC: DNN::User::Staff::Program::AccountSetting(); break;
        }

        } while (press != KEY_ENTER);

        
        if(yy == 1)
        {
          H::clearBox(70,39,100,3,7);
          
          H::gotoxy(70,39); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
          H::setcolor(7); cout << " PLEASE ENTER YOUR FIRST NAME.";

          for(int i = 0; i < 80; i++){ H::gotoxy(x+28+i,y+5); H::setcolor(7); cout << " "; } // CLEAR PREVIOUS DATA

          H::setcursor(true, 1);
          
          H::gotoxy(x+28,y+5); H::setcolor(6); H::inputLetter(firstNameTemp, sizeof(firstNameTemp));

          strcpy(genderTemp, vc[index[0]].getGender()); strcpy(emailTemp, vc[index[0]].getEmail());
          strcpy(positionTemp, vc[index[0]].getPosition()); strcpy(phoneNumberTemp, vc[index[0]].getPhoneNumber()); 
          strcpy(lastNameTemp, vc[index[0]].getLastName()); strcpy(birthDateTemp, vc[index[0]].getBirthDate());

          H::setcursor(false, 1);
        }

        if(yy == 2)
        {
          H::clearBox(70,39,100,3,7);
          
          H::gotoxy(70,39); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
          H::setcolor(7); cout << " PLEASE ENTER YOUR LAST NAME.";

          for(int i = 0; i < 80; i++){ H::gotoxy(x+28+i,y+7); H::setcolor(7); cout << " "; } // CLEAR PREVIOUS DATA

          H::setcursor(true, 1);
          
          H::gotoxy(x+28,y+7); H::setcolor(6); H::inputLetter(lastNameTemp, sizeof(lastNameTemp));

          strcpy(genderTemp, vc[index[0]].getGender()); strcpy(emailTemp, vc[index[0]].getEmail());
          strcpy(positionTemp, vc[index[0]].getPosition()); strcpy(phoneNumberTemp, vc[index[0]].getPhoneNumber()); 
          strcpy(firstNameTemp, vc[index[0]].getFirstName()); strcpy(birthDateTemp, vc[index[0]].getBirthDate());

          H::setcursor(false, 1);
        }

        if(yy == 3)
        {
          H::clearBox(70,39,100,3,7);
          // H::gotoxy(70,39); H::setcolor(7); for(int i=0; i < 100; i++) cout << " ";

          H::gotoxy(70,39); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : DATE FORMAT : DD/MM/YYYY "; H::setcolor(7); cout << "]"; 
          H::setcolor(7); cout << " EXAMPLE: 01/01/2000";
          
          H::gotoxy(x+28,y+9); H::setcolor(7); for(int i=0; i < sizeof(birthDateTemp) + 35; i++) cout << " ";
          
          INPUTDATEAGAIN:
          H::setcursor(true, 1);
          H::gotoxy(x+28,y+9); H::setcolor(6); DNN::input::inputDate(birthDateTemp);

          if(DNN::DateAndTimes::checkvalidDate(birthDateTemp) == false)
          {
            H::gotoxy(x+28+28,y+9); H::setcolor(6); cout << "INVALID DATE !";
            H::delay(1300);
            H::gotoxy(x+28,y+9); H::setcolor(7); for(int i=0; i < sizeof(birthDateTemp) + 35; i++) cout << " ";
            strcpy(birthDateTemp, ""); goto INPUTDATEAGAIN;
          }

          if(DNN::DateAndTimes::calculateAge(birthDateTemp) < 18)
          {
            H::gotoxy(x+28+28,y+9); H::setcolor(6); cout << "THE AGE MUST BE 18 AND ABOVE !";
            H::delay(1300);
            H::gotoxy(x+28,y+9); H::setcolor(7); for(int i=0; i < sizeof(birthDateTemp) + 52; i++) cout << " ";
            strcpy(birthDateTemp, ""); goto INPUTDATEAGAIN;
          }

          if(DNN::DateAndTimes::calculateAge(birthDateTemp) > 70)
          {
            H::gotoxy(x+28+28,y+9); H::setcolor(6); cout << "THE AGE MUST BE 70 AND BELOW !";
            H::delay(1300);
            H::gotoxy(x+28,y+9); H::setcolor(7); for(int i=0; i < sizeof(birthDateTemp) + 52; i++) cout << " ";
            strcpy(birthDateTemp, ""); goto INPUTDATEAGAIN;
          }

          strcpy(genderTemp, vc[index[0]].getGender()); strcpy(emailTemp, vc[index[0]].getEmail());
          strcpy(positionTemp, vc[index[0]].getPosition()); strcpy(phoneNumberTemp, vc[index[0]].getPhoneNumber()); 
          strcpy(firstNameTemp, vc[index[0]].getFirstName()); strcpy(lastNameTemp, vc[index[0]].getLastName());

          H::setcursor(false, 1);
        }

        if(yy == 4)
        {
          H::clearBox(70,39,100,3,7);

          H::gotoxy(70,39); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
          H::setcolor(7); cout << " PRESS ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << " AND "; H::setcolor(6); cout << "DOWN"; 
          H::setcolor(7); cout << " TO CHOOSE YOUR GENDER";

          H::setcursor(true, 1); int j = 1;
          
          do
           {
            if(j == 1)
            {
              H::gotoxy(x+28,y+11); H::setcolor(6); cout << "Male   ";
            }
            
            if(j == 2)
            {
              H::gotoxy(x+28,y+11); H::setcolor(6); cout << "Female ";
            }

            press = getch();

            switch(press)
            {
              case KEY_ARROW_UP: j--; 
              
              if(j < 1)
              { 
               j = 2; 
              }

              break;
              
              case KEY_ARROW_DOWN: j++; 
              
              if(j > 2)
              {
               j = 1; 
              } 

              break;

              case KEY_ESC: DNN::User::Staff::Program::AccountSetting(); break;
            }

          }while(press != KEY_ENTER);

          if(j == 1)
          {
            strcpy(genderTemp, "Male");
          }
          
          if(j == 2)
          {
            strcpy(genderTemp, "Female");
          } 
          
          strcpy(phoneNumberTemp, vc[index[0]].getPhoneNumber()); strcpy(emailTemp, vc[index[0]].getEmail());
          strcpy(positionTemp, vc[index[0]].getPosition()); strcpy(firstNameTemp, vc[index[0]].getFirstName()); strcpy(lastNameTemp, vc[index[0]].getLastName()); 
          strcpy(birthDateTemp, vc[index[0]].getBirthDate());

          H::setcursor(false, 1);
        }

        if(yy == 5)
        {
          H::clearBox(70,39,100,3,7);

          H::gotoxy(70,39); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : PHONE NUMBER FORMAT : 01XXXXXXXX "; H::setcolor(7); cout << "]"; 
          H::setcolor(7); cout << " EXAMPLE: 0969930997";
          
          for(int i = 0; i < 80; i++){ H::gotoxy(x+28+i,y+15); H::setcolor(7); cout << " "; } // CLEAR PREVIOUS DATA

          H::setcursor(true, 1); 

          H::gotoxy(x+28,y+15); H::setcolor(6); H::input4Tel(phoneNumberTemp, sizeof(phoneNumberTemp));
          
          // GETTING DATA OLD DATA
          strcpy(genderTemp, vc[index[0]].getGender()); strcpy(emailTemp, vc[index[0]].getEmail());
          strcpy(positionTemp, vc[index[0]].getPosition()); strcpy(firstNameTemp, vc[index[0]].getFirstName()); 
          strcpy(lastNameTemp, vc[index[0]].getLastName()); strcpy(birthDateTemp, vc[index[0]].getBirthDate());
          
          H::setcursor(false, 1);
        }

        if(yy == 6)
        {
          H::clearBox(70,39,100,3,7);

          H::gotoxy(70,39); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : EMAIL FORMAT : username@example.com "; H::setcolor(7); cout << "]"; 
          H::setcolor(7); cout << " EXAMPLE: yannvanneth.27@gmail.com";

          for(int i = 0; i < 80; i++){ H::gotoxy(x+28+i,y+17); H::setcolor(7); cout << " "; } // CLEAR PREVIOUS DATA

          INPUTEMAILAGAIN:
          H::setcursor(true, 1);
          H::gotoxy(x+28,y+17); H::setcolor(6); DNN::input::inputMail(emailTemp, sizeof(emailTemp));
          H::setcursor(false, 1);

          if(DNN::DLIB::isValidEmail(emailTemp) == false)
          {
            H::gotoxy(x+28+28,y+17); H::setcolor(4); cout << " INVALID EMAIL !";
            H::delay(1300);
            H::gotoxy(x+28+28,y+17); H::setcolor(7); for(int i = 0; i < sizeof(emailTemp)+18; i++) cout << " ";
            strcpy(emailTemp, "");
            goto INPUTEMAILAGAIN;
          }

          // GETTING DATA OLD DATA
          strcpy(genderTemp, vc[index[0]].getGender()); strcpy(birthDateTemp, vc[index[0]].getBirthDate());
          strcpy(positionTemp, vc[index[0]].getPosition()); strcpy(phoneNumberTemp, vc[index[0]].getPhoneNumber()); 
          strcpy(firstNameTemp, vc[index[0]].getFirstName()); strcpy(lastNameTemp, vc[index[0]].getLastName());
        }
        
        strcpy(positionTemp, vc[index[0]].getPosition());

        vc[index[0]].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp,phoneNumberTemp, emailTemp);

        DNN::File<Account>::write("Account.dnn", &vc);
      };

      update(70,11); 
      
      H::clearBox(70,39,126,3,7);

      H::gotoxy(70,39); 
      H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE STATUS "; H::setcolor(7); cout << "]";
      H::setcolor(2); cout << " SUCCESSFULLY !";

      H::gotoxy(70,41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PRESS ANY KEY TO CONTINUE..";
      
      getch(); 
      goto again;
   }

   if(y == 3)
   {
      H::clearBox(67,9,126,32,7);

     const auto view = [&vc, index](int x, int y) -> void
     {
        char NewUsernameTemp[20], passwordTemp[20];
        char maskedPassword[sizeof(vc[index[0]].getPassword())];

        H::gotoxy(x,y);    H::setcolor(151); for(int i = 0; i < 70; i++) cout << " ";
        H::HLine(x,y+10,70,7,178); 
        
        INPUTUSERNAMEAGAIN:

        H::setcursor(true, 1);
        H::gotoxy(x+27,y);    H::setcolor(151); cout << "ACCOUNT INFORMATION";
        H::gotoxy(x+1,y+3);   H::setcolor(7);   cout << "\4 ENTER YOUR OLD ACCOUNT USERNAME          : " << vc[index[0]].getUsername();
        H::gotoxy(x+1,y+5);   H::setcolor(7);   cout << "\4 ENTER YOUR NEW ACCOUNT USERNAME          : "; 
        H::gotoxy(x+46,y+5);  H::setcolor(6);   H::inputLetter(NewUsernameTemp, sizeof(NewUsernameTemp));

        vector<Account> vc2 = DNN::File<Account>::read("Account.dnn");

        for(auto& i : vc2)
        {
            if(strcmp(i.getUsername(), NewUsernameTemp) == 0 && strcmp(i.getUsername(), vc[index[0]].getUsername()) != 0) 
            {
              H::gotoxy(x+47+sizeof(NewUsernameTemp),y+5);
              H::setcolor(7); cout << " THIS USERNAME"; H::setcolor(4); cout << " ALREADY EXISTS !";
            
              H::delay(1300);
              H::gotoxy(x+46,y+5); H::setcolor(7); for(int i = 0; i < sizeof(NewUsernameTemp)+35; i++) cout << " ";
              strcpy(NewUsernameTemp, "");
              goto INPUTUSERNAMEAGAIN;
            }

            else if(strcmp(NewUsernameTemp, vc[index[0]].getUsername()) == 0)
            {
              break;
            }
        }
        
        H::gotoxy(x+1,y+7);  H::setcolor(7);    cout << "\4 ENTER YOUR ACCOUNT PASSWORD TO VERIFY    : "; 
        H::gotoxy(x+46,y+7); H::setcolor(6);    H::hidePassword(passwordTemp, sizeof(passwordTemp));
        
        H::setcursor(false, 1);
        
        if(strcmp(passwordTemp, vc[index[0]].getPassword()) == 0)
        {
           int AccountID; char Created_Date[12], password[20];

           AccountID = vc[index[0]].getAccountNumber();
           strcpy(Created_Date, vc[index[0]].getCreateDateAndTime());
           strcpy(password, passwordTemp);

           vc[index[0]].setAccount(AccountID, NewUsernameTemp, password, Created_Date);

           DNN::File<Account>::write("Account.dnn", &vc);
           
           H::clearBox(70,24,80,3,7);
           H::gotoxy(70,24); 
           H::setcolor(7); cout << "["; H::setcolor(6); cout << " USERNAME STATUS "; H::setcolor(7); cout << "]";
           H::setcolor(2); cout << " UPDATE SUCCESSFULLY !";
        }

        else
        {
           H::clearBox(70,24,80,3,7);
           H::gotoxy(70,24); 
           H::setcolor(7); cout << "["; H::setcolor(6); cout << " USERNAME STATUS "; H::setcolor(7); cout << "]";
           H::setcolor(4); cout << " UPDATE FAILED ! "; H::setcolor(7); cout << "INVALID PASSWORD !";
        }

     };

      H::gotoxy(70,24); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PLEASE ENTER YOUR OLD AND NEW ACCOUNT USERNAME.";
          
      view(70,11);

      H::gotoxy(70,26); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PRESS ANY KEY TO CONTINUE.."; getch();
      goto again;
   }

   if(y == 4)
   {
      H::clearBox(67,9,126,32,7);

     const auto view = [&vc, index](int x, int y) -> void
     {
        char NewPassword[20], passwordTemp[20];
        char maskedPassword[sizeof(vc[index[0]].getPassword())];

        H::HLine(x,y+7,70,7,178); 
        
        H::gotoxy(x,y);    H::setcolor(151); for(int i = 0; i < 70; i++) cout << " ";
        H::setcursor(true, 1);
        H::gotoxy(x+27,y);    H::setcolor(151); cout << "ACCOUNT INFORMATION";
        H::gotoxy(x+1,y+3);   H::setcolor(7);   cout << "\4 ENTER YOUR OLD ACCOUNT PASSWORD          : "; 
        H::gotoxy(x+1,y+5);   H::setcolor(7);   cout << "\4 ENTER YOUR NEW ACCOUNT PASSWORD          : "; 
        H::gotoxy(x+46,y+3); H::setcolor(6); H::inputAll(passwordTemp, sizeof(passwordTemp));

        H::setcursor(false, 1);
        if(strcmp(passwordTemp, vc[index[0]].getPassword()) == 0)
        {
           H::setcursor(true, 1);
           H::gotoxy(x+46,y+5);  H::setcolor(6);   H::inputAll(NewPassword, sizeof(NewPassword));
           H::setcursor(false, 1);
           
           if(strcmp(NewPassword, vc[index[0]].getPassword()) == 0)
           {
             H::clearBox(70,24,80,3,7); H::gotoxy(70,24); 
             H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
             H::setcolor(7); cout << "YOUR NEW ACCOUNT PASSWORD CAN'T BE THE SAME AS YOUR OLD PASSWORD !";
           }

           else
           {

           int AccountID; char Created_Date[12], username[20];

           AccountID = vc[index[0]].getAccountNumber();
           strcpy(Created_Date, vc[index[0]].getCreateDateAndTime());
           strcpy(username, vc[index[0]].getUsername());
           
           vc[index[0]].setAccount(AccountID, username, NewPassword, Created_Date);

           DNN::File<Account>::write("Account.dnn", &vc);
           
           H::clearBox(70,24,80,3,7);
           H::gotoxy(70,24); 
           H::setcolor(7); cout << "["; H::setcolor(6); cout << "PASSWORD STATUS"; H::setcolor(7); cout << "]";
           H::setcolor(2); cout << " UPDATESUCCESSFULLY !"; H::delay(1300);
           
           }
        }

        else
        {
           H::clearBox(70,24,80,3,7);
           H::gotoxy(70,24); 
           H::setcolor(7); cout << "["; H::setcolor(6); cout << "PASSWORD STATUS"; H::setcolor(7); cout << "]";
           H::setcolor(4); cout << " UPDATE FAILED ! "; H::setcolor(7); cout << "INVALID PASSWORD !"; H::delay(1300);
        }
      
     };

      H::gotoxy(70,24); H::setcolor(7); cout << "["; H::setcolor(6); cout << "TIPS"; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PLEASE ENTER YOUR OLD AND NEW ACCOUNT PASSWORD.";    

      view(70,11);

      H::gotoxy(70,26); H::setcolor(7); cout << "["; H::setcolor(6); cout << "TIPS"; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PRESS ANY KEY TO CONTINUE.."; getch();
      goto again;
   }

   if(y == 5)
   {
      H::clearBox(0,0,200,50,7);
      Account account; vector<LoginTemp> lt = DNN::File<LoginTemp>::read("temp.dnn");
      if(account.checkAdmin(lt[0].getUsername(),lt[0].getPassword())){DNN::User::MainMenu::Admin();}
      else{ DNN::User::MainMenu::Staff();}
   }
   
}

/////////////////////////////////////////////////////////////
//////////////////// PROGRAM SEARCH /////////////////////////
////////////////////////////////////////////////////////////

void DNN::User::Staff::Program::Search()
{
   DNN::Design::User::Staff::Search(5, 7);
   DNN::User::Staff::ManageUser search;
   search.Search();
}

/////////////////////////////////////////////////////////////
//////////////////// PROGRAM HOME  /////////////////////////
////////////////////////////////////////////////////////////

void DNN::User::Staff::Program::Home()
{
   char press; int y = 1;
   
   again:
   H::clearBox(1,1,200,50,7);
   DNN::Design::User::Staff::Home(1,1);
   H::setcursor(false,0);

   Account account;

   do
   {
      H::drawBoxSingleLineWithBG(13, 13, 26, 1, 136); 
      H::gotoxy(16,14);  H::setcolor(135); cout << "    INSERT STAFF    ";
      H::drawBoxSingleLineWithBG(13, 17, 26, 1, 136);
      H::gotoxy(16,18);  H::setcolor(135); cout << "    APPROVAL STAFF    ";
      H::drawBoxSingleLineWithBG(13, 21, 26, 1, 136);
      H::gotoxy(16,22);  H::setcolor(135); cout << "    DISPLAY STAFF    ";
      H::drawBoxSingleLineWithBG(13, 25, 26, 1, 136);
      H::gotoxy(16,26);  H::setcolor(135); cout << "   SEARCH STAFF    ";
      H::drawBoxSingleLineWithBG(13, 29, 26, 1, 136);
      H::gotoxy(16,30);  H::setcolor(135); cout << "   UPDATE STAFF    ";
      H::drawBoxSingleLineWithBG(13, 33, 26, 1, 136);
      H::gotoxy(16,34);  H::setcolor(135); cout << "   DELETE STAFF    ";
      H::drawBoxSingleLineWithBG(13, 37, 26, 1, 136);
      H::gotoxy(16,38);  H::setcolor(135); cout << "   SORTING DATA    ";
      H::drawBoxSingleLineWithBG(13, 41, 26, 1, 136);
      H::gotoxy(14,42);  H::setcolor(135); cout << "   BACK TO MAIN MENU    ";
      
      if(y == 1)
      {
        H::clearBox(41, 41, 6, 3, 7); H::clearBox(41, 17, 6, 3, 7);
        H::clearBox(13, 13, 6, 3, 7);
        H::drawBoxSingleLineWithBG(19, 13, 26, 1, 153);
        H::gotoxy(22,14);  H::setcolor(151); cout << "    INSERT STAFF    ";
        H::delay(30);
      }

      if(y == 2)
      {
        H::clearBox(41, 13, 6, 3, 7); H::clearBox(41, 21, 6, 3, 7);
        H::clearBox(13, 17, 6, 3, 7);
        H::drawBoxSingleLineWithBG(19, 17, 26, 1, 153);
        H::gotoxy(22,18);  H::setcolor(151); cout << "    APPROVAL STAFF    ";
        H::delay(30);
      }

      if(y == 3)
      {
        H::clearBox(41, 17, 6, 3, 7); H::clearBox(41, 25, 6, 3, 7);
        H::clearBox(13, 21, 6, 3,7);
        H::drawBoxSingleLineWithBG(19, 21, 26, 1, 153);
        H::gotoxy(22,22);  H::setcolor(151); cout << "    DISPLAY STAFF    ";
        H::delay(30);
      }

      if(y == 4)
      {
        H::clearBox(41, 21, 6, 3, 7); H::clearBox(41, 29, 6, 3, 7);
        H::clearBox(13, 25, 6, 3,7);
        H::drawBoxSingleLineWithBG(19, 25, 26, 1, 153);
        H::gotoxy(22,26);  H::setcolor(151); cout << "   SEARCH STAFF    ";
        H::delay(30);
        
      }

      if(y == 5)
      {
        H::clearBox(41, 25, 6, 3, 7); H::clearBox(41, 33, 6, 3, 7);
        H::clearBox(13, 29, 6, 3,7);
        H::drawBoxSingleLineWithBG(19, 29, 26, 1, 153);
        H::gotoxy(22,30);  H::setcolor(151); cout << "   UPDATE STAFF    ";
        H::delay(30);
        
      }

      if(y == 6)
      {
        H::clearBox(41, 29, 6, 3, 7); H::clearBox(41, 37, 6, 3, 7);
        H::clearBox(13, 33, 6, 3,7);
        H::drawBoxSingleLineWithBG(19, 33, 26, 1, 153);
        H::gotoxy(22,34);  H::setcolor(151); cout << "   DELETE STAFF    ";
        H::delay(30);
      }

      if(y == 7)
      {
        H::clearBox(41, 33, 6, 3, 7); H::clearBox(41, 41, 6, 3, 7);
        H::clearBox(13, 37, 6, 3,7);
        H::drawBoxSingleLineWithBG(19, 37, 26, 1, 153);
        H::gotoxy(22,38);  H::setcolor(151); cout << "   SORTING DATA    ";    
        H::delay(30);
      }

      if(y == 8)
      {
        H::clearBox(41, 37, 6, 3, 7); H::clearBox(41, 13, 6, 3, 7);
        H::clearBox(13, 41, 6, 3,7);
        H::drawBoxSingleLineWithBG(19, 41, 26, 1, 153);
        H::gotoxy(20,42);  H::setcolor(151); cout << "   BACK TO MAIN MENU    ";
        H::delay(30);
      }

      press = getch();

      switch(press)
      {
         case KEY_ARROW_UP: y--;
         {
           if(y < 1) y = 8; 
         }
         break;

         case KEY_ARROW_DOWN: y++;
         {
           if(y > 8) y = 1;
         }
         break;

         case KEY_ARROW_LEFT: y--;
         {
           if(y < 1) y = 8;
         }
         break;

         case KEY_ARROW_RIGHT: y++;
         {
           if(y > 8) y = 1;
         }
         break;
      }

   }while(press != KEY_ENTER);

   if(y == 1)
   {
      H::clearBox(1,1,199,49,7);
      DNN::User::Staff::Program::Insert(); getch();
      goto again;
   }

   if(y == 2)
   {
      H::clearBox(1,1,199,49,7);
      
      DNN::User::Staff::Program::Approval();

      goto again;
   }

   if(y == 3)
   {
      H::clearBox(1,1,200,50,7);

      DNN::User::Staff::Program::Display();
      
      H::gotoxy(10, 41); H::setcolor(7); cout << "[" << " TIPS "; H::setcolor(7); cout << "]"; 
      H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " OR "; H::setcolor(6); cout << "N KEY"; H::setcolor(7); cout << " TO BACK";

      do
      {
        press = getch();
        
        if(press != KEY_ESC && press != 'N' && press != 'n')
        {
          H::clearBox(10,41,80,1,7);
          H::gotoxy(10, 41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
          H::setcolor(4); cout << "  INVALID KEY !";
          H::delay(1000);
          H::clearBox(10,41,80,1,7);
          H::gotoxy(10, 41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
          H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " OR "; H::setcolor(6); cout << "N KEY"; 
          H::setcolor(7); cout << " TO BACK ";
        }

      }while(press != KEY_ESC && press != 'N' && press != 'n');

      goto again;
   }

   if(y == 4)
   {
      SearchAgain:

      H::clearBox(1,1,200,50,7);
      DNN::User::Staff::Program::Search(); 
      
      do
      {  
        H::gotoxy(10, 43); H::setcolor(6); cout << "[TIPS]"; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC KEY"; 
        H::setcolor(7); cout << " OR "; H::setcolor(6); cout << "N KEY"; H::setcolor(7); cout << " TO BACK. ";
        H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO SEARCH AGAIN.";

        press = getch();
        
        if(press == KEY_ENTER || press == 'Y' || press == 'y')
        {
           goto SearchAgain;
        }

        if(press != KEY_ESC && press != 'N' && press != 'n' && press != KEY_ENTER && press != 'Y' && press != 'y')
        {
          H::clearBox(10,41,40,1,7);
          H::gotoxy(10, 41); H::setcolor(6); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << "  INVALID KEY                                                 ";
          H::delay(1000);
          H::clearBox(10,41,40,1,7);
          H::gotoxy(10, 41); H::setcolor(6); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; H::setcolor(7); cout << " PRESS "; 
          H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " OR "; H::setcolor(6); cout << "N"; H::setcolor(7); cout << " KEY TO BACK                             ";
        }


      }while(press != KEY_ESC && press != 'N' && press != 'n');

      goto again;
   }

   if(y == 5)
   {
      H::clearBox(1,1,200,50,7);

      DNN::User::Staff::ManageUser::Update::Run();
      goto again;
   }

   if(y == 6)
   {
      do
      {
        H::clearBox(1,1,200,50,7);
        DNN::User::Staff::Program::Delete();

        more:
        press = getch();

        if((press == KEY_ENTER || press == 'Y' || press == 'y' ) && (press != KEY_ESC && press != 'N' && press != 'n'))
        {
          continue;
        }

        else if(press == KEY_ESC || press == 'N' || press == 'n')
        {
          break;
        }
         
        else goto more;

      }while(press != KEY_ESC && press != 'N' && press != 'n');
      goto again;
   }

   if(y == 7)
   {
      H::clearBox(1,1,200,50,7);
      DNN::User::Staff::Program::sort();
      goto again;
   }

   if(y == 8)
   {
      H::clearBox(1,1,199,49,7);
      Account account; vector<LoginTemp> lt = DNN::File<LoginTemp>::read("temp.dnn");
      if(account.checkAdmin(lt[0].getUsername(),lt[0].getPassword())){DNN::User::MainMenu::Admin();}
      else{ DNN::User::MainMenu::Staff();}
   }
}

/////////////////////////////////////////////////////////////
//////////////////// PROGRAM UPDATE /////////////////////////
////////////////////////////////////////////////////////////

void DNN::User::Staff::ManageUser::Update::Run()
{
   char press; int y = 1;
   
   again:
   H::clearBox(1,1,200,50,7);
   
   DNN::Design::User::Staff::Update(4, 4);

   vector<Account> vc = DNN::File<Account>::read("Account.dnn");
   
   const auto swaper = [](int x, int y)
   {
      H::VLine(x,y,48,7,178);
   };

   do
   {
      swaper(184, 1);
      H::drawBoxDoubleLineWithBG(7,12,44,1,247);  H::gotoxy(16,13); H::setcolor(249); cout << "UPDATE ALL DATA";
      H::drawBoxDoubleLineWithBG(17,16,44,1,247); H::gotoxy(26,17); H::setcolor(249); cout << "UPDATE BY FIRST NAME";
      H::drawBoxDoubleLineWithBG(27,20,44,1,247);  H::gotoxy(36,21); H::setcolor(249); cout << "UPDATE BY LAST NAME";
      H::drawBoxDoubleLineWithBG(37,24,44,1,247);  H::gotoxy(46,25); H::setcolor(249); cout << "UPDATE BY GENDER";
      H::drawBoxDoubleLineWithBG(47,28,44,1,247);  H::gotoxy(56,29); H::setcolor(249); cout << "UPDATE BY BIRTHDATE";
      H::drawBoxDoubleLineWithBG(37,32,44,1,247);  H::gotoxy(46,33); H::setcolor(249); cout << "UPDATE BY PHONE NUMBER";
      H::drawBoxDoubleLineWithBG(27,36,44,1,247);  H::gotoxy(36,37); H::setcolor(249); cout << "UPDATE BY EMAIL";
      H::drawBoxDoubleLineWithBG(17,40,44,1,247);  H::gotoxy(26,41); H::setcolor(249); cout << "UPDATE BY USERNAME";
      H::drawBoxDoubleLineWithBG(7,44,44,1,247);  H::gotoxy(16,45); H::setcolor(249); cout << "UPDATE BY PASSWORD";
      
      if(y == 1)
      {
        H::drawBoxDoubleLineWithBG(7,12,44,1,153);  H::gotoxy(16,13); H::setcolor(151); cout << "UPDATE ALL DATA";
      }
      
      if(y == 2)
      {
        H::drawBoxDoubleLineWithBG(17,16,44,1,153); H::gotoxy(26,17); H::setcolor(151); cout << "UPDATE BY FIRST NAME";
      }
      
      if(y == 3)
      {
        H::drawBoxDoubleLineWithBG(27,20,44,1,153);  H::gotoxy(36,21); H::setcolor(151); cout << "UPDATE BY LAST NAME";
      }
      
      if(y == 4)
      {
        H::drawBoxDoubleLineWithBG(37,24,44,1,153);  H::gotoxy(46,25); H::setcolor(151); cout << "UPDATE BY GENDER";
      }
      
      if(y == 5)
      {
        H::drawBoxDoubleLineWithBG(47,28,44,1,153);  H::gotoxy(56,29); H::setcolor(151); cout << "UPDATE BY BIRTHDATE";
      }
      
      if(y == 6)
      {
        H::drawBoxDoubleLineWithBG(37,32,44,1,153);  H::gotoxy(46,33); H::setcolor(151); cout << "UPDATE BY PHONE NUMBER";
      }
      
      if(y == 7)
      {
        H::drawBoxDoubleLineWithBG(27,36,44,1,153);  H::gotoxy(36,37); H::setcolor(151); cout << "UPDATE BY EMAIL";
      }
      
      if(y == 8)
      {
        H::drawBoxDoubleLineWithBG(17,40,44,1,153);  H::gotoxy(26,41); H::setcolor(151); cout << "UPDATE BY USERNAME";
      }
      
      if(y == 9)
      {
        H::drawBoxDoubleLineWithBG(7,44,44,1,153);  H::gotoxy(16,45); H::setcolor(151); cout << "UPDATE BY PASSWORD";
      }

      if(vc.empty())
      {
          H::gotoxy(100, 13); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA FOUND !";
          H::delay(1300);
          return;
      }

      // THE MESSAGE
      H::gotoxy(90,45); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PRESS ARROW KEYS"; H::setcolor(6); cout << " UP "; H::setcolor(7); cout << "AND "; H::setcolor(6); cout << "DOWN "; 
      H::setcolor(7); cout << "TO NAVIGATE"; H::setcolor(7); cout << " AND PRESS "; H::setcolor(6); cout << "ENTER KEY";
      H::setcolor(7); cout << " TO SELECT THE MENU.";
      H::gotoxy(90,47); H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ESC KEY "; H::setcolor(7); cout << "TO BACK.";

      press = getch();
     
      switch(press)
      {
         case KEY_ARROW_UP: y--; 
         {
            if(y < 1) y = 9;
         }
          break;

         case KEY_ARROW_DOWN: y++; 
         {
            if(y > 9) y = 1;
         }
          break;

         case KEY_ESC:
         {
            H::cls(); DNN::User::Staff::Program::Home();
         }
      }
   }while(press != KEY_ENTER);

   if(y == 1)
   {
      char AccountID[8];
      
      H::gotoxy(36,13); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
      
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0);

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdateAll(atoi(AccountID)); H::delay(700);

      goto again;
   }

   if(y == 2)
   {
      char AccountID[8];
      
      H::gotoxy(48,17); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
       
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0);

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdateFirstName(atoi(AccountID)); H::delay(700);

      goto again;
   }

   if(y == 3)
   {
      char AccountID[8];
      
      H::gotoxy(56,21); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
      
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0);

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdateLastName(atoi(AccountID)); H::delay(700);

      goto again;
   }

   if(y == 4)
   {
      char AccountID[8];
      
      H::gotoxy(66,25); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
      
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0);

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdateGender(atoi(AccountID)); H::delay(700);

      goto again;
   }

   if(y == 5)
   {
      char AccountID[8];
      
      H::gotoxy(76,29); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
        
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0);

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdateBirthDate(atoi(AccountID)); H::delay(700);

      goto again;
   }

   if(y == 6)
   {
      char AccountID[8];
      
      H::gotoxy(70,33); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
      
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0);

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdatePhoneNumber(atoi(AccountID)); H::delay(700);

      goto again;
   }

   if(y == 7)
   {
      char AccountID[8];
      
      H::gotoxy(56,37); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
       
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0);

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdateEmail(atoi(AccountID)); H::delay(700);

      goto again;
   }

   if(y == 8)
   {
      char AccountID[8];
      
      H::gotoxy(46,41); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
      
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0); 

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdateUsername(atoi(AccountID)); H::delay(700);

      goto again;
   }

   if(y == 9)
   {
      char AccountID[8];
      
      H::gotoxy(38,45); H::setcolor(148); cout << "SELECTED";
      
      for(int i = 0; i < 65; i++)
      {
       H::drawBoxSingleLineWithBG(100,12,i,1,3); H::delay(30);
      }

      H::gotoxy(102,13); H::setcolor(7); cout << "PLEASE ENTER ACCOUNT ID THAT YOU WANT TO UPDATE : "; 
         
      H::setcursor(true, 1);
      H::inputNumber(AccountID,6); 
      H::setcursor(false, 0);

      H::clearBox(184, 1, 1, 49, 7);
      
      DNN::User::Staff::ManageUser::Update::UpdatePassword(atoi(AccountID)); H::delay(700);

      goto again;
   }
}

/////////////////////////////////////////////////////////////
//////////////////// PROGRAM APPROVAL ///////////////////////
////////////////////////////////////////////////////////////

void DNN::User::Staff::Program::Approval()
{
   H::setcursor(false,0);

   DNN::Design::User::Staff::Approval(7, 3);

   char press; int y = 1;
   again:

   H::clearBox(70,12,122,29,7);

   do
   {
       H::gotoxy(80,5); for(int i = 0; i < 112; i++){ H::setcolor(7); cout << " "; }

       H::gotoxy(90,5); H::setcolor(6); cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"; H::setcolor(7); cout << " APPROVAL MENU "; H::setcolor(6); cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"; 

       H::drawBoxDoubleLineWithBG(11,12,42,1,153); H::gotoxy(14,13); H::setcolor(151); cout << "DISPLAY ACCOUNT LIST";
       H::drawBoxDoubleLineWithBG(11,16,42,1,153); H::gotoxy(14,17); H::setcolor(151); cout << "CHAGE APPROVAL STATUS";
       H::drawBoxDoubleLineWithBG(11,20,42,1,153); H::gotoxy(14,21); H::setcolor(151); cout << "BACK TO MAIN MENU";
       
       if(y == 1)
       {
          H::drawBoxDoubleLineWithBG(11,12,42,1,247); H::gotoxy(14,13); H::setcolor(249); cout << "DISPLAY ACCOUNT LIST";
       }

       if(y == 2)
       {
          H::drawBoxDoubleLineWithBG(11,16,42,1,247); H::gotoxy(14,17); H::setcolor(249); cout << "CHAGE APPROVAL STATUS";
       }

       if(y == 3)
       {
          H::drawBoxDoubleLineWithBG(11,20,42,1,247); H::gotoxy(14,21); H::setcolor(249); cout << "BACK TO MAIN MENU";
       }

       press = getch();
       
       switch(press)
       {
           case KEY_ARROW_UP: y--;
            {
               if(y < 1)
               {
                 y = 3;
               }
            }
            break;
            
            case KEY_ARROW_DOWN: y++;
            {
               if(y > 3)
               {
                  y = 1;
               } 
            }
            break;
       }
  }while(press != KEY_ENTER);
    
    if(y == 2)
    {
      H::gotoxy(80,5); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PRESS ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << " , "; H::setcolor(6); cout << "DOWN"; H::setcolor(7); cout << " , "; 
      H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND "; H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO NAVIGATE AND CHANGE THE APPROVAL STATUS";
      
      vector<Account> vc = DNN::File<Account>::read("Account.dnn");
   
      if(vc.empty())
      {
        H::gotoxy(115,26); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; 
        H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO APPROVED ACCOUNT YET !";
        H::delay(1000);
      }
      else
      {
        for(auto i = 0; i < vc.size(); i++)
        {
          char status[10];

          H::gotoxy(70,12); H::setcolor(9);
          cout << left << setw(15) << "ACCOUNT ID " << setw(15) << "First Name " << setw(15) << "Last Name " 
               << setw(17) << "Birth Date " << setw(11) << "Gender " << setw(15) << "Position " 
               << setw(20) << "Created Date " << "Approval Status " << endl;
          
          vc[i].getAdminApproval() == true ? strcpy(status, "APPROVED") : strcpy(status, "PENDING");

          H::gotoxy(70,14+i);  H::setcolor(7);
          
          cout << left << setw(15) << vc[i].getAccountNumber() << setw(15) << vc[i].getFirstName() 
               << setw(15) << vc[i].getLastName() << setw(17) << vc[i].getBirthDate() << setw(11) << vc[i].getGender()
               << setw(15) << vc[i].getPosition() << setw(20) << vc[i].getCreateDateAndTime();

               vc[i].getAdminApproval() ? H::setcolor(4) : H::setcolor(6); cout << left << status << " ";
        }
        
        H::gotoxy(70,41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
        H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC"; H::setcolor(7); cout << " KEY TO BACK"; 

        int j = 0; int x = 1; bool approve = false, pending = false; int num = 0;
        
        do
        {
          for(int i = 0; i < vc.size(); i++)
          {
              char status[10];
              
              if(j == i && x == 1)
              {
                strcpy(status, "APPROVED");
                H::gotoxy(178,14+j); H::setcolor(9); cout << left << status << " ";
                approve = true; pending = false; num = j;
              }

              else if(j == i && x == 2)
              {
                strcpy(status, "PENDING");
                H::gotoxy(178,14+j); H::setcolor(4); cout << left << status << " ";
                approve = false; pending = true; num = j;
              }

              else 
              {
                char status[10];
                H::gotoxy(178,14+i); H::setcolor(7); 
                
                vc[i].getAdminApproval() == true ? strcpy(status, "APPROVED") : strcpy(status, "PENDING");
                vc[i].getAdminApproval() ? H::setcolor(2) : H::setcolor(6); cout << left << status << " ";
              }
            }

            press = getch();

            switch(press)
            {
              case KEY_ARROW_UP: j--;
              {
                if(j < 0)
                {
                  j = vc.size() - 1;
                }
              }
              break;

              case KEY_ARROW_DOWN: j++;
              {
                if(j > vc.size() - 1)
                {
                  j = 0;
                }
              }
              break;

              case KEY_ARROW_LEFT: x--;
              {
                if(x < 1) x = 2;
              }
              break;

              case KEY_ARROW_RIGHT: x++;
              {
                if(x > 2) x = 1;
              }
              break;

              case KEY_ESC: break;

            }
        }while(press != KEY_ENTER && press != KEY_ESC);

        if(approve == true && pending == false)
        {
          vc[num].setApproval(true);
          DNN::File<Account>::write("Account.dnn", &vc);
        }

        if(pending == true && approve == false)
        {
          vc[num].setApproval(false);
          DNN::File<Account>::write("Account.dnn", &vc);
        }
      }
      goto again;
    }

    if(y == 1)
    {
      H::gotoxy(80,5); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "A"; H::setcolor(7); cout << " TO SORT TO DISPLAY THE APPROVED ACCOUNT OR PRESS "; 
      H::setcolor(6); cout << "P"; H::setcolor(7); cout << " TO DISPLAY THE PENDING ACCOUNT";

      vector<Account> vc = DNN::File<Account>::read("Account.dnn");
   
      if(vc.empty())
      {
        H::gotoxy(115,26); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; 
        H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA YET !";
        H::delay(1000);
      }

      else
      {
        int line = 0;
        for(auto i = 0; i < vc.size(); i++)
        {
            char status[10];

            H::gotoxy(70,12); H::setcolor(9);

            cout << left << setw(15) << "ACCOUNT ID " << setw(15) << "First Name " << setw(15) << "Last Name " 
                  << setw(17) << "Birth Date " << setw(11) << "Gender " << setw(15) << "Position " 
                  << setw(20) << "Created Date " << "Approval Status " << endl;
            
            vc[i].getAdminApproval() == true ? strcpy(status, "APPROVED") : strcpy(status, "PENDING");

            H::gotoxy(70,14+line);  H::setcolor(7);
            
            cout << left << setw(15) << vc[i].getAccountNumber() << setw(15) << vc[i].getFirstName() 
                  << setw(15) << vc[i].getLastName() << setw(17) << vc[i].getBirthDate() << setw(11) << vc[i].getGender()
                  << setw(15) << vc[i].getPosition() << setw(20) << vc[i].getCreateDateAndTime();

                vc[i].getAdminApproval() ? H::setcolor(2) : H::setcolor(6); cout << left << status << " ";
            
            line++;
        }

        H::gotoxy(70,41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
        H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC"; H::setcolor(7); cout << " KEY TO BACK"; 

        do
        {

        press = getch();

        if(press == 'P' || press == 'p')
        {
          H::clearBox(70,12,122,27,7); int line = 0;

          for(auto i = 0; i < vc.size(); i++)
          {
            if(vc[i].getAdminApproval() == false)
            {
              char status[10];

              H::gotoxy(70,12); H::setcolor(9);

              cout << left << setw(15) << "ACCOUNT ID " << setw(15) << "First Name " << setw(15) << "Last Name " 
                   << setw(17) << "Birth Date " << setw(11) << "Gender " << setw(15) << "Position " 
                   << setw(20) << "Created Date " << "Approval Status " << endl;
              
              vc[i].getAdminApproval() == true ? strcpy(status, "APPROVED") : strcpy(status, "PENDING");

              H::gotoxy(70,14+line);  H::setcolor(7);
              
              cout << left << setw(15) << vc[i].getAccountNumber() << setw(15) << vc[i].getFirstName() 
                   << setw(15) << vc[i].getLastName() << setw(17) << vc[i].getBirthDate() << setw(11) << vc[i].getGender()
                   << setw(15) << vc[i].getPosition() << setw(20) << vc[i].getCreateDateAndTime();

                  vc[i].getAdminApproval() ? H::setcolor(4) : H::setcolor(6); cout << left << status << " ";
              
              line++;
            }
          }
        }

        else if(press == 'A' || press == 'a')
        {
          H::clearBox(70,12,122,27,7); int line = 0;

          for(auto i = 0; i < vc.size(); i++)
          {
            if(vc[i].getAdminApproval() == true)
            {
              char status[10];

              H::gotoxy(70,12); H::setcolor(9);
              cout << left << setw(15) << "ACCOUNT ID " << setw(15) << "First Name " << setw(15) << "Last Name " 
                   << setw(17) << "Birth Date " << setw(11) << "Gender " << setw(15) << "Position " 
                   << setw(20) << "Created Date " << "Approval Status " << endl;
              
              vc[i].getAdminApproval() == true ? strcpy(status, "APPROVED") : strcpy(status, "PENDING");

              H::gotoxy(70,14+line);  H::setcolor(7);
              
              cout << left << setw(15) << vc[i].getAccountNumber() << setw(15) << vc[i].getFirstName() 
                   << setw(15) << vc[i].getLastName() << setw(17) << vc[i].getBirthDate() << setw(11) << vc[i].getGender()
                   << setw(15) << vc[i].getPosition() << setw(20) << vc[i].getCreateDateAndTime();

                  vc[i].getAdminApproval() ? H::setcolor(4) : H::setcolor(6); cout << left << status << " ";

              line++;
            }
          }
        }

        }while(press != KEY_ESC);
      }

      goto again;
    }

    if(y == 3)
    {
      H::clearBox(0,0,200,50,7);
      DNN::User::Staff::Program::Home();
    }
}

/////////////////////////////////////////////////////////////
//////////////////// PROGRAM SORT  /////////////////////////
////////////////////////////////////////////////////////////

void DNN::User::Staff::Program::sort()
{
  char press; int y = 1, x = 1;

  vector <Account> vc = DNN::File<Account>::read("Account.dnn");

  const auto btn = [](int x, int y, int color)
  {
      H::drawBoxDoubleLine(x,y,46,1,color);
  };

  const auto btn2 = [](int x, int y, int color)
  {
      H::drawBoxDoubleLineWithBG(x,y,38,1,color);
  };

  const auto SBox = [btn, btn2](int x, int y, int color, int color2, int color3)
  {
      btn(x+2,y+8,color); btn2(x+6,y+11,color3); btn(x+2,y+14,color2);
  };

  const auto SSBox = [btn, btn2, SBox]()
  {
    SBox(15,7, 5, 2,247); SBox(75,7, 6,3, 247); SBox(135,7, 9,5, 247); 
    SBox(15,17, 5,9, 247); SBox(75,17, 7,6, 247); SBox(135,17, 4,3, 247);
    SBox(15,27, 2,3, 247); SBox(75,27, 3,9, 247); SBox(135,27, 2,7, 247);
  };

  again:

  H::clearBox(0,0,200,50,7);
  DNN::Design::User::Staff::sort(15, 7);

  do
  {
    SSBox();
    
    H::gotoxy(30,19);  H::setcolor(248); cout << "SORT BY FIRST NAME";
    H::gotoxy(90,19);  H::setcolor(248); cout << "SORT BY LAST NAME";
    H::gotoxy(150,19); H::setcolor(248); cout << "SORT BY BIRTHDATE";
    H::gotoxy(30,29);  H::setcolor(248); cout << "SORT BY GENDER";
    H::gotoxy(90,29);  H::setcolor(248); cout << "SORT BY PHONE NUMBER";
    H::gotoxy(150,29); H::setcolor(248); cout << "SORT BY EMAIL";
    H::gotoxy(30,39);  H::setcolor(248); cout << "SORT BY POSITION";
    H::gotoxy(87,39);  H::setcolor(248); cout << "SORT BY ACCOUNT CREATE DATE";
    H::gotoxy(150,39); H::setcolor(248); cout << "SORT BY USERNAME";
    
    if(vc.empty())
    {
      H::gotoxy(157,5); H::setcolor(7); cout << "["; H::setcolor(6); cout << " ALERT "; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " NO ACCOUNT "; H::setcolor(4); cout << "DATA FOUND "; H::setcolor(6); cout << "!"; y = 0;
      getch();
      break;
    }
    
    if( y == 1 && x == 1)
    {
      SBox(15,7, 5,2, 136); H::gotoxy(30,19); H::setcolor(135); cout << "SORT BY FIRST NAME";  
    }

    if( y == 1 && x == 2)
    {
      SBox(75,7, 6,3, 136); H::gotoxy(90,19);  H::setcolor(135); cout << "SORT BY LAST NAME"; 
    }

    if( y == 1 && x == 3)
    {
      SBox(135,7, 9,5, 136); H::gotoxy(150,19); H::setcolor(135); cout << "SORT BY BIRTHDATE"; 
    }

    if( y == 2 && x == 1)
    {
      SBox(15,17, 5,9, 136); H::gotoxy(30,29);  H::setcolor(135); cout << "SORT BY GENDER"; 
    }

    if( y == 2 && x == 2)
    {
      SBox(75,17, 7,6, 136); H::gotoxy(90,29);  H::setcolor(135); cout << "SORT BY PHONE NUMBER"; 
    }

    if( y == 2 && x == 3)
    {
      SBox(135,17, 4,3, 136); H::gotoxy(150,29); H::setcolor(135); cout << "SORT BY EMAIL"; 
    }

    if( y == 3 && x == 1)
    {
      SBox(15,27, 2,3, 136); H::gotoxy(30,39);  H::setcolor(135); cout << "SORT BY POSITION"; 
    }

    if( y == 3 && x == 2)
    {
      SBox(75,27, 2,7, 136); H::gotoxy(87,39);  H::setcolor(135); cout << "SORT BY ACCOUNT CREATE DATE"; 
    }

    if( y == 3 && x == 3)
    {
      SBox(135,27, 2,7, 136); H::gotoxy(150,39); H::setcolor(135); cout << "SORT BY USERNAME"; 
    }

    press = getch();

    switch(press)
    {
      case KEY_ARROW_UP: y--; 
      {
        if(y < 1 && x == 1)
        {
          y = 3; x = 3;
        } 
        else if(y < 1 && x == 2)
        {
          y = 3; x = 1;
        }
        else if(y < 1 && x == 3)
        {
          y = 3; x = 2;
        }
      }
      break;

      case KEY_ARROW_DOWN: y++; 
      {
        if(y > 3 && x == 1)
        {
          y = 1; x = 2;
        } 
        else if(y > 3 && x == 2)
        {
          y = 1; x = 3;
        }
        else if(y > 3 && x == 3)
        {
          y = 1; x = 1;
        }
      }
      break;

      case KEY_ARROW_LEFT: x--;
      {
        if(x < 1 && y == 1)
        {
          x = 3; y = 3;
        } 
        else if(x < 1 && y == 2)
        {
          x = 3; y = 1;
        }
        else if(x < 1 && y == 3)
        {
          x = 3; y = 2;
        }
      } 
      break;

      case KEY_ARROW_RIGHT: x++;
      {
        if(x > 3 && y == 1)
        {
          x = 1; y = 2;
        } 
        else if(x > 3 && y == 2)
        {
          x = 1; y = 3;
        }
        else if(x > 3 && y == 3)
        {
          x = 1; y = 1;
        }
      }
      break;

      case KEY_ESC: DNN::User::Staff::Program::Home(); break;
    }

  } while (press != KEY_ENTER);

  if(y == 1 && x == 1)
  {
    int g = 1;

    for(int i = 0; i < 40; i++)
    {
      H::drawBoxDoubleLineWithBG(154,4, i,1, 247);
      H::drawBoxDoubleLineWithBG(154,8, i,1, 247);
    }

    H::delay(100);
    
    do
    {
      H::drawBoxDoubleLineWithBG(154,4, 40,1, 247); H::gotoxy(164,5); H::setcolor(249); cout << "SORT BY ASCENDING";
      H::drawBoxDoubleLineWithBG(154,8, 40,1, 247); H::gotoxy(164,9); H::setcolor(249); cout << "SORT BY DESCENDING";

      if(g == 1)
      {
        H::drawBoxDoubleLineWithBG(154,4, 40,1, 153); H::gotoxy(164,5); H::setcolor(151); cout << "SORT BY ASCENDING";
      }
      if(g == 2)
      {
        H::drawBoxDoubleLineWithBG(154,8, 40,1, 153); H::gotoxy(164,9); H::setcolor(151); cout << "SORT BY DESCENDING";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP: g--; 
        {
          if(g < 1) g = 2;
        }
        break;

        case KEY_ARROW_DOWN: g++; 
        {
          if(g > 2) g = 1;
        }
        break;
      }
    
    }while(press != KEY_ENTER);

    if(g == 1)
    {
      DNN::User::Staff::ManageUser::Sort::SortByFirstName("asc");
    }

    if(g == 2)
    {
      DNN::User::Staff::ManageUser::Sort::SortByFirstName("desc");
    }

    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(18+i,16); H::setcolor(5); cout << ">";
      H::gotoxy(18+i,22); H::setcolor(2); cout << ">"; H::delay(30);
    }

    H::gotoxy(25,19); H::setcolor(135); cout << "SORT BY FIRST NAME SUCCESSFULLY";
    getch();
  }

  if(y == 1 && x == 2)
  {
    int g = 1;

    for(int i = 0; i < 40; i++)
    {
      H::drawBoxDoubleLineWithBG(154,4, i,1, 247);
      H::drawBoxDoubleLineWithBG(154,8, i,1, 247);
    }

    H::delay(100);
    
    do
    {
      H::drawBoxDoubleLineWithBG(154,4, 40,1, 247); H::gotoxy(164,5); H::setcolor(249); cout << "SORT BY ASCENDING";
      H::drawBoxDoubleLineWithBG(154,8, 40,1, 247); H::gotoxy(164,9); H::setcolor(249); cout << "SORT BY DESCENDING";

      if(g == 1)
      {
        H::drawBoxDoubleLineWithBG(154,4, 40,1, 153); H::gotoxy(164,5); H::setcolor(151); cout << "SORT BY ASCENDING";
      }
      if(g == 2)
      {
        H::drawBoxDoubleLineWithBG(154,8, 40,1, 153); H::gotoxy(164,9); H::setcolor(151); cout << "SORT BY DESCENDING";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP: g--; 
        {
          if(g < 1) g = 2;
        }
        break;

        case KEY_ARROW_DOWN: g++; 
        {
          if(g > 2) g = 1;
        }
        break;
      }
    
    }while(press != KEY_ENTER);

    if(g == 1)
    {
      DNN::User::Staff::ManageUser::Sort::SortByLastName("asc");
    }

    if(g == 2)
    {
      DNN::User::Staff::ManageUser::Sort::SortByLastName("desc");
    }

    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(78+i,16); H::setcolor(6); cout << ">";
      H::gotoxy(78+i,22); H::setcolor(3); cout << ">"; H::delay(30);
    }

    H::gotoxy(85,19); H::setcolor(135); cout << "SORT BY LAST NAME SUCCESSFULLY";
    getch();
  }

  if(y == 1 && x == 3)
  {
    int g = 1;

    for(int i = 0; i < 40; i++)
    {
      H::drawBoxDoubleLineWithBG(154,4, i,1, 247);
      H::drawBoxDoubleLineWithBG(154,8, i,1, 247);
    }

    H::delay(100);
    
    do
    {
      H::drawBoxDoubleLineWithBG(154,4, 40,1, 247); H::gotoxy(164,5); H::setcolor(249); cout << "SORT BY ASCENDING";
      H::drawBoxDoubleLineWithBG(154,8, 40,1, 247); H::gotoxy(164,9); H::setcolor(249); cout << "SORT BY DESCENDING";

      if(g == 1)
      {
        H::drawBoxDoubleLineWithBG(154,4, 40,1, 153); H::gotoxy(164,5); H::setcolor(151); cout << "SORT BY ASCENDING";
      }
      if(g == 2)
      {
        H::drawBoxDoubleLineWithBG(154,8, 40,1, 153); H::gotoxy(164,9); H::setcolor(151); cout << "SORT BY DESCENDING";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP: g--; 
        {
          if(g < 1) g = 2;
        }
        break;

        case KEY_ARROW_DOWN: g++; 
        {
          if(g > 2) g = 1;
        }
        break;
      }
    
    }while(press != KEY_ENTER);

    if(g == 1)
    {
      DNN::User::Staff::ManageUser::Sort::SortByGender("asc");
    }

    if(g == 2)
    {
      DNN::User::Staff::ManageUser::Sort::SortByGender("desc");
    }

    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(138+i,16); H::setcolor(9); cout << ">";
      H::gotoxy(138+i,22); H::setcolor(5); cout << ">"; H::delay(30);
    }

    H::gotoxy(145,19); H::setcolor(135); cout << "SORT BY BIRTHDATE SUCCESSFULLY";
    getch();
  }

  if(y == 2 && x == 1)
  {
    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(18+i,26); H::setcolor(5); cout << ">";
      H::gotoxy(18+i,32); H::setcolor(9); cout << ">"; H::delay(30);
    }

    H::gotoxy(27,29); H::setcolor(135); cout << "SORT BY GENDER SUCCESSFULLY";
    getch();

  }

  if(y == 2 && x == 2)
  {
    int g = 1;

    for(int i = 0; i < 40; i++)
    {
      H::drawBoxDoubleLineWithBG(154,4, i,1, 247);
      H::drawBoxDoubleLineWithBG(154,8, i,1, 247);
    }

    H::delay(100);
    
    do
    {
      H::drawBoxDoubleLineWithBG(154,4, 40,1, 247); H::gotoxy(164,5); H::setcolor(249); cout << "SORT BY ASCENDING";
      H::drawBoxDoubleLineWithBG(154,8, 40,1, 247); H::gotoxy(164,9); H::setcolor(249); cout << "SORT BY DESCENDING";

      if(g == 1)
      {
        H::drawBoxDoubleLineWithBG(154,4, 40,1, 153); H::gotoxy(164,5); H::setcolor(151); cout << "SORT BY ASCENDING";
      }
      if(g == 2)
      {
        H::drawBoxDoubleLineWithBG(154,8, 40,1, 153); H::gotoxy(164,9); H::setcolor(151); cout << "SORT BY DESCENDING";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP: g--; 
        {
          if(g < 1) g = 2;
        }
        break;

        case KEY_ARROW_DOWN: g++; 
        {
          if(g > 2) g = 1;
        }
        break;
      }
    
    }while(press != KEY_ENTER);

    if(g == 1)
    {
      DNN::User::Staff::ManageUser::Sort::SortByPhoneNumber("asc");
    }

    if(g == 2)
    {
      DNN::User::Staff::ManageUser::Sort::SortByPhoneNumber("desc");
    }

    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(78+i,26); H::setcolor(8); cout << ">";
      H::gotoxy(78+i,32); H::setcolor(6); cout << ">"; H::delay(30);
    }

    H::gotoxy(83,29); H::setcolor(135); cout << "SORT BY PHONE NUMBER SUCCESSFULLY";
    getch();
  }

  if(y == 2 && x == 3)
  {
    int g = 1;

    for(int i = 0; i < 40; i++)
    {
      H::drawBoxDoubleLineWithBG(154,4, i,1, 247);
      H::drawBoxDoubleLineWithBG(154,8, i,1, 247);
    }

    H::delay(100);
    
    do
    {
      H::drawBoxDoubleLineWithBG(154,4, 40,1, 247); H::gotoxy(164,5); H::setcolor(249); cout << "SORT BY ASCENDING";
      H::drawBoxDoubleLineWithBG(154,8, 40,1, 247); H::gotoxy(164,9); H::setcolor(249); cout << "SORT BY DESCENDING";

      if(g == 1)
      {
        H::drawBoxDoubleLineWithBG(154,4, 40,1, 153); H::gotoxy(164,5); H::setcolor(151); cout << "SORT BY ASCENDING";
      }
      if(g == 2)
      {
        H::drawBoxDoubleLineWithBG(154,8, 40,1, 153); H::gotoxy(164,9); H::setcolor(151); cout << "SORT BY DESCENDING";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP: g--; 
        {
          if(g < 1) g = 2;
        }
        break;

        case KEY_ARROW_DOWN: g++; 
        {
          if(g > 2) g = 1;
        }
        break;
      }
    
    }while(press != KEY_ENTER);

    if(g == 1)
    {
      DNN::User::Staff::ManageUser::Sort::SortByEmail("asc");
    }

    if(g == 2)
    {
      DNN::User::Staff::ManageUser::Sort::SortByEmail("desc");
    }

    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(138+i,26); H::setcolor(4); cout << ">";
      H::gotoxy(138+i,32); H::setcolor(3); cout << ">"; H::delay(30);
    }

    H::gotoxy(147,29); H::setcolor(135); cout << "SORT BY EMAIL SUCCESSFULLY";
    
    getch();
    goto again;
  } 

  if(y == 3 && x == 1)
  {
    int g = 1;

    for(int i = 0; i < 40; i++)
    {
      H::drawBoxDoubleLineWithBG(154,4, i,1, 247);
      H::drawBoxDoubleLineWithBG(154,8, i,1, 247);
    }

    H::delay(100);
    
    do
    {
      H::drawBoxDoubleLineWithBG(154,4, 40,1, 247); H::gotoxy(164,5); H::setcolor(249); cout << "SORT BY ASCENDING";
      H::drawBoxDoubleLineWithBG(154,8, 40,1, 247); H::gotoxy(164,9); H::setcolor(249); cout << "SORT BY DESCENDING";

      if(g == 1)
      {
        H::drawBoxDoubleLineWithBG(154,4, 40,1, 153); H::gotoxy(164,5); H::setcolor(151); cout << "SORT BY ASCENDING";
      }
      if(g == 2)
      {
        H::drawBoxDoubleLineWithBG(154,8, 40,1, 153); H::gotoxy(164,9); H::setcolor(151); cout << "SORT BY DESCENDING";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP: g--; 
        {
          if(g < 1) g = 2;
        }
        break;

        case KEY_ARROW_DOWN: g++; 
        {
          if(g > 2) g = 1;
        }
        break;
      }
    
    }while(press != KEY_ENTER);

    if(g == 1)
    {
      DNN::User::Staff::ManageUser::Sort::SortByPosition("asc");
    }

    if(g == 2)
    {
      DNN::User::Staff::ManageUser::Sort::SortByPosition("desc");
    }

    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(18+i,36); H::setcolor(2); cout << ">";
      H::gotoxy(18+i,42); H::setcolor(3); cout << ">"; H::delay(30);
    }

    H::gotoxy(25,39); H::setcolor(135); cout << "SORT BY POSITION SUCCESSFULLY";
    

    DNN::User::Staff::ManageUser::Sort::SortByPosition("asc");

    getch();

  }

  if(y == 3 && x == 2)
  {
    int g = 1;

    for(int i = 0; i < 40; i++)
    {
      H::drawBoxDoubleLineWithBG(154,4, i,1, 247);
      H::drawBoxDoubleLineWithBG(154,8, i,1, 247);
    }

    H::delay(100);
    
    do
    {
      H::drawBoxDoubleLineWithBG(154,4, 40,1, 247); H::gotoxy(164,5); H::setcolor(249); cout << "SORT BY ASCENDING";
      H::drawBoxDoubleLineWithBG(154,8, 40,1, 247); H::gotoxy(164,9); H::setcolor(249); cout << "SORT BY DESCENDING";

      if(g == 1)
      {
        H::drawBoxDoubleLineWithBG(154,4, 40,1, 153); H::gotoxy(164,5); H::setcolor(151); cout << "SORT BY ASCENDING";
      }
      if(g == 2)
      {
        H::drawBoxDoubleLineWithBG(154,8, 40,1, 153); H::gotoxy(164,9); H::setcolor(151); cout << "SORT BY DESCENDING";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP: g--; 
        {
          if(g < 1) g = 2;
        }
        break;

        case KEY_ARROW_DOWN: g++; 
        {
          if(g > 2) g = 1;
        }
        break;
      }
    
    }while(press != KEY_ENTER);

    if(g == 1)
    {
      DNN::User::Staff::ManageUser::Sort::SortByFirstName("asc");
    }

    if(g == 2)
    {
      DNN::User::Staff::ManageUser::Sort::SortByFirstName("desc");
    }

    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(78+i,36); H::setcolor(2); cout << ">";
      H::gotoxy(78+i,42); H::setcolor(7); cout << ">"; H::delay(30);
    }

    H::gotoxy(85,39); H::setcolor(135); cout << "  DATA SORTED SUCCESSFULLY   ";
    getch();
  }

  if(y == 3 && x == 3)
  {
    int g = 1;

    for(int i = 0; i < 40; i++)
    {
      H::drawBoxDoubleLineWithBG(154,4, i,1, 247);
      H::drawBoxDoubleLineWithBG(154,8, i,1, 247);
    }

    H::delay(100);
    
    do
    {
      H::drawBoxDoubleLineWithBG(154,4, 40,1, 247); H::gotoxy(164,5); H::setcolor(249); cout << "SORT BY ASCENDING";
      H::drawBoxDoubleLineWithBG(154,8, 40,1, 247); H::gotoxy(164,9); H::setcolor(249); cout << "SORT BY DESCENDING";

      if(g == 1)
      {
        H::drawBoxDoubleLineWithBG(154,4, 40,1, 153); H::gotoxy(164,5); H::setcolor(151); cout << "SORT BY ASCENDING";
      }
      if(g == 2)
      {
        H::drawBoxDoubleLineWithBG(154,8, 40,1, 153); H::gotoxy(164,9); H::setcolor(151); cout << "SORT BY DESCENDING";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP: g--; 
        {
          if(g < 1) g = 2;
        }
        break;

        case KEY_ARROW_DOWN: g++; 
        {
          if(g > 2) g = 1;
        }
        break;
      }
    
    }while(press != KEY_ENTER);

    if(g == 1)
    {
      DNN::User::Staff::ManageUser::Sort::SortByUsername("asc");
    }

    if(g == 2)
    {
      DNN::User::Staff::ManageUser::Sort::SortByUsername("desc");
    }

    for(int i = 0; i < 44; i++)
    {
      H::gotoxy(138+i,36); H::setcolor(2); cout << ">";
      H::gotoxy(138+i,42); H::setcolor(7); cout << ">"; H::delay(30);
    }

    H::gotoxy(145,39); H::setcolor(135); cout << "SORT BY USERNAME SUCCESSFULLY";
    getch();
  }
}

/////////////////////////////////////////////////////////////
//////////////////// PROGRAM DELETE /////////////////////////
////////////////////////////////////////////////////////////
void DNN::User::Staff::Program::Delete()
{
    DNN::User::Staff::ManageUser Del;

    char AccountID[10];

    DNN::Design::User::Staff::Delete(10,1);

    vector<Account> vc = DNN::File<Account>::read("Account.dnn");

    if(vc.empty())
    {
      H::gotoxy(98,30); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARING "; H::setcolor(7); cout << "]"; 
      H::setcolor(4); cout << " NO ACCOUNT DATA !";
      H::gotoxy(52,30); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
      H::setcolor(7); cout << " PRESS"; H::setcolor(6); cout << " ESC KEY"; H::setcolor(7); cout << " TO BACK TO MAIN MENU. ";
      H::gotoxy(52,32); H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ENTER KEY"; H::setcolor(7); cout << " TO DELETE MORE.";

      return;
    }

    H::setcursor(true,0);
    H::gotoxy(113,18), H::setcolor(199); DNN::input::inputNumber(AccountID,6);
    H::setcursor(false,0);

    Del.Delete(atoi(AccountID));

    H::gotoxy(52,30); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " PRESS"; H::setcolor(6); cout << " ESC KEY"; H::setcolor(7); cout << " TO BACK TO MAIN MENU. ";
    H::gotoxy(52,32); H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ENTER "; H::setcolor(7); cout << "KEY TO DELETE MORE.";

    getch();

}

#endif 