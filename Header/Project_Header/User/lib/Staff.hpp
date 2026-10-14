#ifndef _DNN_STAFF_HPP_
#define _DNN_STAFF_HPP_

// HEADER FILES DECLARATION //--------------------------------------------------------------//
  #include "../User.hpp"  
//------------------------------------------------------------------------------------------//

//////////////////////////////////////////////////////////
//////////////// INSERT /////////////////////////////////
////////////////////////////////////////////////////////
void DNN::User::Staff::ManageUser::Insert(Account &account)
{
  // Variables //-------------------------------------------------------------------------------
  int accountIDTemp, x = 1; char press; // x and press Use for Arrow Keys
  char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], positionTemp[15], phoneNumberTemp[12], emailTemp[25];
  char userNameTemp[20], passwordTemp[20], passwordTempp[20], Create_DateAndTimeTemp[11];
  // END OF VAIRABLES --------------------------------------------------------------------------

  vector<Account> vc = DNN::File<Account>::read("Account.dnn"); // READ DATA FROM ACCOUNT FILE.

  // LAMBDA FUNCTION FOR AUTO ACCOUNT ID //----------------------------------------------------- 
  const auto accountID = []() -> int
  {
      vector<Account> vc = DNN::File<Account>::read("Account.dnn");

      int id = 1000;

      for(int i = 0; i < vc.size(); i++)
      {
          if(vc[i].getAccountNumber() > id)
          {
              id = vc[i].getAccountNumber();
          }
      }
      
      return ++id;
  };
  // END OF AUTO ACCOUNT ID --------------------------------------------------------------------
    
  ENTERAGAIN: H::setcursor(true, 1); // GOTO STATEMENT FOR ENTERING DATA AGAIN.

  accountIDTemp = accountID();
  
  H::gotoxy(117,24); H::setcolor(249); cout << accountIDTemp;
  
  H::setcursor(false, 0);
  H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WELCOME TO THE ACCOUNT REGISTRATION FORM "; H::setcolor(7); cout << "]"; 
  H::setcolor(7); cout << " PLEASE FILL IN THE FIELDS ABOVE. THANKS \3";
  H::setcursor(true, 0);

  H::gotoxy(117,26); H::setcolor(249); DNN::input::inputLetter(firstNameTemp,sizeof(firstNameTemp)); 
  H::gotoxy(117,28); H::setcolor(249); DNN::input::inputLetter(lastNameTemp,sizeof(lastNameTemp));
  
  // DATE //-------------------------------------------------------------------------------------------------------------------------------
  EnterDateAgain:
  H::gotoxy(116,30); H::setcolor(249); for(int i = 0; i < 60; i++) cout << " ";
  H::setcursor(false, 0);
  H::clearBox(90,42,96,3,7);
  H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : DATE FORMAT : DD/MM/YYYY "; H::setcolor(7); cout << "]"; 
  H::setcolor(7); cout << " EXAMPLE: 01/01/2000";
  
  H::setcursor(true, 1);
  H::gotoxy(117,30); H::setcolor(249); DNN::input::inputDate(birthDateTemp);
  H::setcursor(false, 0);
  
  // CHECK VALID DATE //------------------------------------------------------------------------------------
  if(DNN::DateAndTimes::checkvalidDate(birthDateTemp) == false)
  {
    H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 60; i++) cout << " ";
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
    H::setcolor(4); cout << " INVALID DATE."; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
    H::setcolor(7); cout << " TO TRY AGAIN !"; strcpy(birthDateTemp, ""); getch();
    goto EnterDateAgain;
  }
  // END OF CHECK VALID DATE -----------------------------------------------------------------------------------

  // THE AGE VALIDATION //--------------------------------------------------------------------------------------------
  if(DNN::DateAndTimes::calculateAge(birthDateTemp) < 18) // IF AGE IS LESS THAN 18
  {
    H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 60; i++) cout << " ";
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " THE STAFFS MUST BE AT LEAST"; H::setcolor(6); cout << " 18 YEARS OLDS."; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
    H::setcolor(7); cout << " TO TRY AGAIN !"; strcpy(birthDateTemp, ""); getch();
    goto EnterDateAgain; 
  }

  if(DNN::DateAndTimes::calculateAge(birthDateTemp) > 70) // IF AGE IS GREATER THAN 70
  {
    H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 60; i++) cout << " ";
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " THE STAFFS MUST NOT EXCEED"; H::setcolor(6); cout << " 70 YEARS OLDS"; H::setcolor(7); cout << " OF AGE."; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
    H::setcolor(7); cout << " TO TRY AGAIN !"; strcpy(birthDateTemp, ""); getch();
    goto EnterDateAgain; 
  }
  // END OF THE AGE VALIDATION //----------------------------------------------------------------------------------------
// END OF DATE //---------------------------------------------------------------------------------------------------------------

  // GENDER //---------------------------------------------------------------------------------------------------------------------
  H::setcursor(false, 0);
  H::clearBox(90,42,92,3,7);
  H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
  H::setcolor(7); cout << " PRESS ARROW KEYS UP AND DOWN TO CHOOSE YOUR GENDER.";
  
  H::setcursor(true, 1);
  do // THE ARROW KEYS TO CHOOSE THE GENDER
  {
    if(x == 1)
    {
        H::gotoxy(117,32); H::setcolor(249); cout << "Male   ";
    }
    
    if(x == 2)
    {
        H::gotoxy(117,32); H::setcolor(249); cout << "Female ";
    }

    press = getch();

    switch(press)
    {
      case KEY_ARROW_UP: x--; 
      if(x < 1)
      { 
        x = 2; 
      }
        break;
      
      case KEY_ARROW_DOWN: x++; 
      if(x > 2)
      {
        x = 1; 
      } 
        break;
    }

  }while(press != KEY_ENTER);

  if(x == 1)
  {
    strcpy(genderTemp, "Male");
  }
  
  if(x == 2)
  {
    strcpy(genderTemp, "Female");
  } 

  // END OF GENDER //------------------------------------------------------------------------------------------------------------

  // POSITION //------------------------------------------------------------------------------------------------------------------
  do // THE ARROW KEYS TO CHOOSE THE POSITION
  {
    if(x == 1)
    {
        H::gotoxy(157,32); H::setcolor(249); cout << "STAFF   ";
    }
    
    if(x == 2)
    {
        H::gotoxy(157,32); H::setcolor(249); cout << "ADMIN ";
    }

    press = getch();

    switch(press)
    {
      case KEY_ARROW_UP: x--; 
      if(x < 1)
      { 
        x = 2; 
      }
        break;
      
      case KEY_ARROW_DOWN: x++; 
      if(x > 2)
      {
        x = 1; 
      } 
        break;
    }

  }while(press != KEY_ENTER);

  if(x == 1)
  {
    strcpy(positionTemp, "Staff");
  }
  
  if(x == 2)
  {
    strcpy(positionTemp, "Admin");
  } 
  // END OF POSITION //----------------------------------------------------------------------------------------------------------
  
  // PHONE NUMBER //-------------------------------------------------------------------------------------------------------------
  H::setcursor(false, 0);
  H::clearBox(90,42,92,3,7);
  H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : PHONE NUMBER FORMAT : 01XXXXXXXX "; H::setcolor(7); cout << "]"; 
  H::setcolor(7); cout << " EXAMPLE: 0969930997";
  
  H::setcursor(true, 1);
  H::gotoxy(117,34); H::setcolor(249); DNN::input::inputNumber(phoneNumberTemp,sizeof(phoneNumberTemp));
  H::setcursor(false, 0);
  // END OF PHONE NUMBER //------------------------------------------------------------------------------------------------------

  // EMAIL //---------------------------------------------------------------------------------------------------------------------
  inputMailAgain:
  H::gotoxy(116,36); H::setcolor(249); for(int i = 0; i < 60; i++) cout << " ";
  H::setcursor(false, 0);
  H::clearBox(90,42,92,3,7);
  H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : EMAIL FORMAT : username@example.com "; H::setcolor(7); cout << "]"; 
  H::setcolor(7); cout << " EXAMPLE: yannvanneth.27@gmail.com";

  H::setcursor(true, 1);
  H::gotoxy(117,36); H::setcolor(249); DNN::input::inputMail(emailTemp, sizeof(emailTemp));
  H::setcursor(false, 1);
  
  // EMAIL VALIDATION //-----------------------------------------------------------------------------------------------
  if(DNN::DLIB::isValidEmail(emailTemp) == false)
  {
    H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 81; i++) cout << " ";
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
    H::setcolor(4); cout << " INVALID EMAIL ADDRESS "; H::setcolor(7); cout << "!"; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
    H::setcolor(7); cout << " TO TRY AGAIN !"; strcpy(emailTemp, ""); getch();
    goto inputMailAgain;
  }
  // END OF EMAIL //--------------------------------------------------------------------------------------------
  
  H::setcursor(false, 1);
  H::delay(100); H::clearBox(93,24,92,12,7); H::clearBox(90,42,92,3,7);
  
  H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
  H::setcolor(7); cout << " PLEASE CHECK YOUR INFORMATION AGAIN !!";
  H::gotoxy(90,44); H::setcolor(7); cout << "IF CORRECT PRESS ["; H::setcolor(6); cout << " ENTER "; H::setcolor(7); cout << "] , IF NOT PRESS [";
  H::setcolor(6); cout << " BACKSPACE "; H::setcolor(7); cout << "] TO RE-ENTER YOUR INFORMATION.";  
  
  // SET DATA TO ACCOUNT CLASS //-----------------------------------------------------------------------------------------
  account.setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
  account.setAccount(accountIDTemp, userNameTemp, passwordTemp, Create_DateAndTimeTemp);
  // END OF SET DATA TO ACCOUNT CLASS //-----------------------------------------------------------------------------------

  // DISPLAY DATA //-----------------------------------------------------------------------------------------------------------------------
  H::gotoxy(93, 24);   H::setcolor(151); cout << "  ACCOUNT ID    "; H::gotoxy(112, 24); H::setcolor(7); cout << account.getAccountNumber();
  H::gotoxy(93, 26);   H::setcolor(151); cout << "  FIRST NAME    "; H::gotoxy(112, 26); H::setcolor(7); cout << account.getFirstName();
  H::gotoxy(93, 28);   H::setcolor(151); cout << "  LAST  NAME    "; H::gotoxy(112, 28); H::setcolor(7); cout << account.getLastName();
  H::gotoxy(93, 30);   H::setcolor(151); cout << "  BIRTH DATE    "; H::gotoxy(112, 30); H::setcolor(7); cout << account.getBirthDate();
  H::gotoxy(93, 32);   H::setcolor(151); cout << "  GENDER        "; H::gotoxy(112, 32); H::setcolor(7); cout << account.getGender();
  H::gotoxy(135, 32);  H::setcolor(151); cout << "    POSITION    "; H::gotoxy(155, 32); H::setcolor(7); cout << account.getPosition();
  H::gotoxy(93, 34);   H::setcolor(151); cout << "  PHONE NUMBER  "; H::gotoxy(112, 34); H::setcolor(7); cout << account.getPhoneNumber();
  H::gotoxy(93, 36);   H::setcolor(151); cout << "  EMAIL         "; H::gotoxy(112, 36); H::setcolor(7); cout << account.getEmail();
  // END OF DISPLAY DATA //-----------------------------------------------------------------------------------------------------------------

  press = getch();

  if(press == KEY_ENTER)
  {
    H::clearBox(90,42,92,3,7);
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(2); cout << " CONGRATULATIONS "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " YOUR INFORMATION HAS BEEN SUCCESSFULLY ADDED !"; H::delay(700);

    H::setcursor(false, 1);
    H::delay(100); H::clearBox(93,24,92,12,7);

    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " NOW , PLEASE ENTER YOUR USERNAME AND PASSWORD FOR YOUR ACCOUNT.  "; 
    
    FILLAGAIN:
    H::gotoxy(93, 24);   H::setcolor(249); cout << "  ACCOUNT ID    "; 
    H::gotoxy(93, 26);   H::setcolor(151); cout << "  USERNAME      "; 
    H::gotoxy(93, 28);   H::setcolor(151); cout << "  PASSWORD      "; 
    H::gotoxy(93, 30);   H::setcolor(151); cout << "  RE-PASSWORD   ";
    
    H::gotoxy(115, 24);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " "; H::gotoxy(117, 24); H::setcolor(249); cout << account.getAccountNumber();
    H::gotoxy(115, 26);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
    H::gotoxy(115, 28);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
    H::gotoxy(115, 30);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
    
    FILLAGAIN2:
    H::setcursor(true, 0);
    H::gotoxy(117,26); H::setcolor(249); DNN::input::inputLetter(userNameTemp,sizeof(userNameTemp)); 
    H::setcursor(false, 0);

    // CHECK IF USERNAME ALREADY EXISTS //-----------------------------------------------------------------------------------------
    for(auto& i : vc)
    {
      if(strcmp(i.getUsername(),userNameTemp) == 0)
      {
        H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
        H::setcolor(7); cout << " THIS USERNAME"; H::setcolor(6); cout << " ALREADY EXISTS "; H::setcolor(7); cout << "!"; 
        H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; H::setcolor(7); cout << " TO RE-ENTER USERNAME AGAIN.";

        getch();
        H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 100; i++) cout << " ";
        H::gotoxy(117,26); H::setcolor(249); for(int i = 0; i < sizeof(userNameTemp); i++) cout << " ";
        strcpy(userNameTemp, "");

        goto FILLAGAIN2;
      }
    }
    // END //-----------------------------------------------------------------------------------------

    // CHECK IF USERNAME == SPECIAL WORDS--EXIT //-----------------------------------------------------------------------------
    if(strcmp(userNameTemp, "Exit") == 0 || strcmp(userNameTemp, "exit") == 0 || (strcmp(userNameTemp, "EXIT") == 0))
    {
        H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
        H::setcolor(7); cout << " THIS USERNAME"; H::setcolor(4); cout << " NOT ALLOWED !"; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
        H::setcolor(7); cout << " TO RE-ENTER USERNAME AGAIN."; 
        
        getch();
        H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 100; i++) cout << " ";
        H::gotoxy(117,26); H::setcolor(249); for(int i = 0; i < sizeof(userNameTemp); i++) cout << " ";
        strcpy(userNameTemp, "");

        goto FILLAGAIN2;
    }
    // END //---------------------------------------------------------------------------------------------------
    
    H::setcursor(true, 1);
    H::gotoxy(117,28); H::setcolor(249); DNN::input::inputAll(passwordTemp,sizeof(passwordTemp)); 
    H::setcursor(false, 1);
    
    // CHECK IF PASSWORD == SPECIAL WORDS--EXIT -----------------------------------------------------------------------------
    if(strcmp(passwordTemp, "Exit") == 0 || strcmp(passwordTemp, "exit") == 0 || (strcmp(passwordTemp, "EXIT") == 0))
    {
        H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
        H::setcolor(7); cout << " THIS PASSWORD"; H::setcolor(4); cout << " NOT ALLOWED !"; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
        H::setcolor(7); cout << " TO RE-ENTER INFORMATION AGAIN."; 
        
        getch();
        H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 100; i++) cout << " ";
        H::gotoxy(117,26); H::setcolor(249); for(int i = 0; i < sizeof(passwordTemp); i++) cout << " ";
        
        strcpy(userNameTemp, ""); strcpy(passwordTemp, "");

        goto FILLAGAIN2;
    }   
    // END //--------------------------------------------------------------------------------------------------- 

    H::setcursor(false, 1);
    H::delay(100); H::clearBox(90,42,80,3,7);
    
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " RE-PASSWORD SHOULD BE SAME AS PASSWORD THAT YOU ENTERED PREVIOUSLY.";

    H::setcursor(true, 1); 
    H::gotoxy(117,30); H::setcolor(249); DNN::input::inputAll(passwordTempp,sizeof(passwordTempp));
    
    // CHECK PASSWORD AND RE-PASSWORD ARE SAME OR NOT //-----------------------------------------------------------
    if(strcmp(passwordTemp, passwordTempp) != 0)
    {
        strcpy(passwordTemp, ""); strcpy(passwordTempp, ""); strcpy(userNameTemp, "");
        H::clearBox(90,42,92,3,7);
        H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
        H::setcolor(7); cout << " YOUR RE-PASSWORD IS "; H::setcolor(6); cout << "NOT SAME"; H::setcolor(7); cout << " AS PASSWORD THAT YOU ENTERED PREVIOUSLY.";
        H::gotoxy(90,44); H::setcolor(7); cout << "PLEASE RE-ENTER YOUR INFORMATION AGAIN !"; 
        goto FILLAGAIN;
    }
    H::setcursor(false, 1);
    H::delay(100); H::clearBox(90,42,92,3,7);
    
    H::clearBox(93,24,92,12,7);

    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " PLEASE CHECK YOUR INFORMATION AGAIN !!";
    H::gotoxy(90,42); H::setcolor(7); cout << "IF CORRECT PRESS ["; H::setcolor(6); cout << " ENTER "; H::setcolor(7); cout << "] , IF NOT PRESS [";
    H::setcolor(6); cout << " BACKSPACE "; H::setcolor(7); cout << "] TO RE-ENTER YOUR INFORMATION";  
    // END //---------------------------------------------------------------------------------------------------

    // SET INFORMATION TO ACCOUNT CLASS OBJECT ----------------------------------------------------------------------------
    account.setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
    account.setAccount(accountIDTemp, userNameTemp, passwordTemp, Create_DateAndTimeTemp);
    // END //--------------------------------------------------------------------------------------------------------------

    // DISPLAY INFORMATION -------------------------------------------------------------------------------------------------------------------
    H::gotoxy(93, 24);   H::setcolor(151); cout << "  ACCOUNT ID    "; H::gotoxy(112, 24); H::setcolor(7); cout << account.getAccountNumber();
    H::gotoxy(93, 26);   H::setcolor(151); cout << "  FIRST NAME    "; H::gotoxy(112, 26); H::setcolor(7); cout << account.getFirstName();
    H::gotoxy(93, 28);   H::setcolor(151); cout << "  LAST  NAME    "; H::gotoxy(112, 28); H::setcolor(7); cout << account.getLastName();
    H::gotoxy(93, 30);   H::setcolor(151); cout << "  BIRTH DATE    "; H::gotoxy(112, 30); H::setcolor(7); cout << account.getBirthDate();
    H::gotoxy(93, 32);   H::setcolor(151); cout << "  GENDER        "; H::gotoxy(112, 32); H::setcolor(7); cout << account.getGender();
    H::gotoxy(135, 32);  H::setcolor(151); cout << "    POSITION    "; H::gotoxy(155, 32); H::setcolor(7); cout << account.getPosition();
    H::gotoxy(93, 34);   H::setcolor(151); cout << "  PHONE NUMBER  "; H::gotoxy(112, 34); H::setcolor(7); cout << account.getPhoneNumber();
    H::gotoxy(93, 36);   H::setcolor(151); cout << "  EMAIL         "; H::gotoxy(112, 36); H::setcolor(7); cout << account.getEmail();
    
    H::gotoxy(135, 26);   H::setcolor(151); cout << "  USERNAME         "; H::gotoxy(155, 26); H::setcolor(7); cout << account.getUsername();
    H::gotoxy(135, 28);   H::setcolor(151); cout << "  PASSWORD         "; H::gotoxy(155, 28); H::setcolor(7); cout << account.getPassword();
    // END //-----------------------------------------------------------------------------------------------------------------------------------
    if(press == KEY_ENTER)
    {
      H::clearBox(90,42,92,3,7);
      H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " ACCOUNT STATUS "; H::setcolor(7); cout << "]"; 
      H::setcolor(2); cout << " REGISTERED SUCCESSFULLY !";
      H::gotoxy(90,44); H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << "ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE.."; 

      strcpy(Create_DateAndTimeTemp, DNN::DateAndTimes::getCurrentDate()); // GET CURRENT DATE
      
      account.setAccount(accountIDTemp, userNameTemp, passwordTemp, Create_DateAndTimeTemp); // SET DATA TO ACCOUNT CLASS
      account.setApproval(false); // SET DATA TO ACCOUNT CLASS
      
      DNN::File<Account>::write("Account.dnn", account); // WRITE DATA TO FILE
    }

    else if(press == KEY_BACKSPACE)
    {
      // CLEAR INPUT DATA 
      strcpy(firstNameTemp, ""); strcpy(lastNameTemp, ""); strcpy(birthDateTemp, "");
      strcpy(positionTemp, ""); strcpy(phoneNumberTemp, ""); strcpy(emailTemp, "");
      strcpy(genderTemp, ""); strcpy(userNameTemp, ""); strcpy(passwordTemp, "");
      strcpy(Create_DateAndTimeTemp, "");

      H::setcursor(false, 0);
      H::clearBox(93,24,92,12,7); H::clearBox(90,42,92,3,7); DNN::Design::User::Auth::Register(1, 1);
      
      goto ENTERAGAIN;
    }
  }

  else if(press == KEY_BACKSPACE)
  {
    // CLEAR INPUT DATA
    strcpy(firstNameTemp, ""); strcpy(lastNameTemp, ""); strcpy(birthDateTemp, "");
    strcpy(positionTemp, ""); strcpy(phoneNumberTemp, ""); strcpy(emailTemp, "");
    strcpy(genderTemp, ""); strcpy(Create_DateAndTimeTemp, "");

    H::setcursor(false, 0);
    H::clearBox(93,24,92,12,7); H::clearBox(90,42,92,3,7); DNN::Design::User::Auth::Register(1, 7); 
    
    goto ENTERAGAIN;
  }
}

//////////////////////////////////////////////////////////
//////////////// SEARCH /////////////////////////////////
////////////////////////////////////////////////////////
void DNN::User::Staff::ManageUser::Search()
{
  vector<Account> account = File<Account>::read("Account.dnn"); // READ DATA FROM FILE.

  if(account.empty()) // CHECK FILE EMPTY OR NOT !
  {
    H::gotoxy(83,28); H::setcolor(6); cout << "[ALERT]"; H::setcolor(4); cout << " NO DATA FOUND!";
  }

  else // IF FILE IS NOT EMPTY
  {
    // VARIABLES DECLARATION //---------------------------------------------------------------
    char AccountID[20]; bool status = false; 
    // END //----------------------------------------------------------------------------------
    
    H::setcursor(true,25);
    H::gotoxy(149,11); H::setcolor(7); H::inputNumber(AccountID,6); // INPUT ACCOUNT ID
    
    for(int i = 0; i < account.size(); i++)
    {
      if(account[i].getAccountNumber() == atoi(AccountID)) // IF ACCOUNT ID EQUAL SEACRH ACCOUNT ID
      {
        H::gotoxy(8, 17); Account::Header();
        H::gotoxy(8, 19); H::setcolor(39); account[i].Display();
        status = true;
        break;
      }
    }
    
    H::setcursor(false,0);
    
    // THE MESSAGE //------------------------------------------------------------------------------------------ 
    if(!status) // IF NOT FOUND.
    {
      H::gotoxy(117, 12); H::setcolor(6); cout << "[SEARCH RESULT]"; H::setcolor(4); cout << " NOT FOUND!                                                 ";
    }

    if(status) // IF FOUND.
    {
      H::gotoxy(117, 12); H::setcolor(6); cout << "[SEARCH RESULT]"; H::setcolor(2); cout << " FOUND!                                               ";
    }
  }
}

//////////////////////////////////////////////////////////
//////////////// UPDATE /////////////////////////////////
////////////////////////////////////////////////////////

/////////////////////////////////////////////////////
///////////// UPDATE ALL ////////////////////////////
/////////////////////////////////////////////////////

void DNN::User::Staff::ManageUser::Update::UpdateAll(int accountID)
{
  vector<Account> vc = DNN::File<Account>::read("Account.dnn"); // READ DATA FROM FILE.
  bool found = false; // VARIABLE DECLARATION
  
  // DESIGN TEXT - LAMBDA FUNCTION //--------------------------------------------------------------------------------------
  const auto text = [](int x, int y)
  {
    H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
    H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
    H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
    H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
  };
  // END //---------------------------------------------------------------------------------------------------------------

  if(!vc.empty()) // IF FILE OR VECTOR IS NOT EMPTY
  {
    for(int i = 0; i < vc.size(); i++)
    {
      if(vc[i].getAccountNumber() == accountID)
      {
        found = true; int d = 1; char press; // VARIABLE DECLARATION

        char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], positionTemp[15], phoneNumberTemp[12], emailTemp[25];
        char userNameTemp[20], passwordTemp[20], passwordTempp[20], Create_DateAndTimeTemp[20]; 
        int idTemp;
        
        // THE MESSAGE //----------------------------------------------------------------------------------------------------------
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);
        
        // SWEEPING BAR - LAMBDA FUNCTION ----------------------------------------------------------------------------------------
        for(int i = 184; i >= 88; i--)
        {
          H::VLine(i,1,49,7,178); 
          
          for(int j = 1; j <= 49; j++)
          {
            H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
          }
          
          H::delay(10);
        }
        // END //---------------------------------------------------------------------------------------------------------------
        
        // DESIGN BOX //---------------------------------------------------------------------------------------------------------
        H::delay(100); text(119,2);  
        
        for(int i = 0; i <= 23; i++)
        {
          H::drawBoxSingleLineWithBG(106,11,80,i,3);
        }     
        
        H::delay(100); text(119,2);    
        
        for(int i = 0; i < 50; i++)
        {
          H::HLine(108,12,i,7,178); H::delay(10);
        }
        // END //---------------------------------------------------------------------------------------------------------------
        
        H::setcursor(true, 1);
        H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID           : " << vc[i].getAccountNumber();
        H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER FIRST NAME     : "; 
        H::gotoxy(108,18); H::setcolor(7); cout << "\4 ENTER LAST NAME      : "; 
        H::gotoxy(108,20); H::setcolor(7); cout << "\4 ENTER BIRTH DATE     : "; 
        H::gotoxy(108,22); H::setcolor(7); cout << "\4 ENTER GENDER         : "; 
        H::gotoxy(108,24); H::setcolor(7); cout << "\4 ENTER POSITION       : "; 
        H::gotoxy(108,26); H::setcolor(7); cout << "\4 ENTER PHONE NUMBER   : "; 
        H::gotoxy(108,28); H::setcolor(7); cout << "\4 ENTER EMAIL          : "; 
        H::gotoxy(108,30); H::setcolor(7); cout << "\4 ENTER USERNAME       : "; 
        H::gotoxy(108,32); H::setcolor(7); cout << "\4 ENTER PASSWORD       : "; 

        H::gotoxy(133,16); DNN::input::inputLetter(firstNameTemp,sizeof(firstNameTemp));
        H::gotoxy(133,18); DNN::input::inputLetter(lastNameTemp,sizeof(lastNameTemp));

        ENTERDATEAGAIN:
        H::gotoxy(133,20); DNN::input::inputDate(birthDateTemp);
        
        // CHECK VALID DATE //----------------------------------------------------------------------------------------
        if(DNN::DateAndTimes::checkvalidDate(birthDateTemp) == false)
        {
          H::gotoxy(133+sizeof(birthDateTemp),20); H::setcolor(4); cout << " Invalid Date !";
          H::delay(1300);
          H::gotoxy(132,20); H::setcolor(7); for(int i = 0; i < sizeof(birthDateTemp) + 16; i++) cout << " ";
          strcpy(birthDateTemp, "");
          goto ENTERDATEAGAIN;
        }
        // END //---------------------------------------------------------------------------------------------------------------
        
        // CHECK AGE //----------------------------------------------------------------------------------------------------------
        if(DNN::DateAndTimes::calculateAge(birthDateTemp) < 18) // IF AGE UNDER 18
        {
          H::gotoxy(133+sizeof(birthDateTemp),20); H::setcolor(6); cout << " THE AGE MUST BE 18 AND ABOVE !";
          H::delay(1300);
          H::gotoxy(132,20); H::setcolor(7);  for(int i = 0; i < sizeof(birthDateTemp) + 32; i++) cout << " ";
          strcpy(birthDateTemp, "");
          goto ENTERDATEAGAIN;
        }

        if(DNN::DateAndTimes::calculateAge(birthDateTemp) > 70) // IF AGE ABOVE 70
        {
          H::gotoxy(133+sizeof(birthDateTemp),20); H::setcolor(6); cout << " THE AGE MUST BE 70 AND BELOW !";
          H::delay(1300);
          H::gotoxy(132,20); H::setcolor(7); for(int i = 0; i < sizeof(birthDateTemp) + 32; i++)  cout << " ";
          strcpy(birthDateTemp, "");
          goto ENTERDATEAGAIN;
        }
        // END //---------------------------------------------------------------------------------------------------------------
        
        // UPDATE GENDER //-------------------------------------------------------------------------------------------------------
        do
        {
          if(d == 1)
          {
            H::gotoxy(133,22); H::setcolor(7); cout << "Male   ";
          }
          
          if(d == 2)
          {
            H::gotoxy(133,22); H::setcolor(7); cout << "Female ";
          }

          press = getch();

          switch(press)
          {
            case KEY_ARROW_UP: d--; 
            if(d < 1)
            { 
              d = 2; 
            }
            break;
            
            case KEY_ARROW_DOWN: d++; 
            if(d > 2)
            {
              d = 1; 
            } 
            break;
          }

        }while(press != KEY_ENTER);

        if(d == 1)
        {
          strcpy(genderTemp, "Male");
        }
        
        if(d == 2)
        {
          strcpy(genderTemp, "Female");
        } 
        // END //---------------------------------------------------------------------------------------------------------------

        // UPDATE POSITION //-----------------------------------------------------------------------------------------------------
        do
        {
          if(d == 1)
          {
            H::gotoxy(133,24); H::setcolor(7); cout << "STAFF   ";
          }
          
          if(d == 2)
          {
            H::gotoxy(133,24); H::setcolor(7); cout << "ADMIN ";
          }

          press = getch();

          switch(press)
          {
            case KEY_ARROW_UP: d--; 
            {
              if(d < 1)
              { 
                d = 2; 
              }
            }
            break;
            
            case KEY_ARROW_DOWN: d++; 
            {
              if(d > 2)
              {
                d = 1; 
              } 
            }
            break;
          }

        }while(press != KEY_ENTER);

        if(d == 1)
        {
          strcpy(positionTemp, "Staff");
        }
        
        if(d == 2)
        {
          strcpy(positionTemp, "Admin");
        } 
        // END //---------------------------------------------------------------------------------------------------------------

        H::gotoxy(133,26); DNN::input::inputNumber(phoneNumberTemp,sizeof(phoneNumberTemp)); // INPUT NEW PHONE NUMBER

        ENTEREMAILAGAIN:
        H::gotoxy(133,28); DNN::input::inputMail(emailTemp, sizeof(emailTemp)); // INPUT NEW EMAIL
        
        // CHECK VALID EMAIL //----------------------------------------------------------------------------------------
        if(DNN::DLIB::isValidEmail(emailTemp) == false)
        {
          H::gotoxy(133+sizeof(emailTemp),28); H::setcolor(4); cout << " Invalid Email !";
          H::delay(1300);
          H::gotoxy(132,28); H::setcolor(7); for(int i = 0; i < sizeof(emailTemp) + 17; i++) cout << " ";
          strcpy(emailTemp, "");
          goto ENTEREMAILAGAIN;
        }
        // END //---------------------------------------------------------------------------------------------------------------

        // GETTING OLD USERNAME 
        char oldUsername[10];

        for(auto& i : vc)
        {
          if(i.getAccountNumber() == accountID)
          {
            strcpy(oldUsername, i.getUsername());
            break;
          }
        }

        ENTERUSERNAMEAGAIN:
        H::gotoxy(133,30); DNN::input::inputLetter(userNameTemp, sizeof(userNameTemp)); // INPUT NEW USERNAME
        
        // CHECK USERNAME IF EQUAL SPECIAL WORDS "EXIT" OR "exit" OR "EXIT" //------------------------------------------------------------
        if(strcmp(userNameTemp, "Exit") == 0 || strcmp(userNameTemp, "exit") == 0 || (strcmp(userNameTemp, "EXIT") == 0))
        {
          H::gotoxy(133+sizeof(userNameTemp),30);
          H::setcolor(7); cout << " THIS USERNAME"; H::setcolor(4); cout << " NOT ALLOWED !";
          
          H::delay(1300);
          H::gotoxy(132,30); H::setcolor(7); for(int i = 0; i < sizeof(userNameTemp)+31; i++) cout << " ";
          strcpy(userNameTemp, "");

          goto ENTERUSERNAMEAGAIN;
        }
        // END //---------------------------------------------------------------------------------------------------------------
        
        // CHECK USERNAME IF ALREADY EXISTS //-----------------------------------------------------------------------------------
        if(!vc.empty())
        {
          for(auto& a : vc)
          {
            if(strcmp(userNameTemp, a.getUsername()) == 0 && strcmp(userNameTemp, oldUsername) != 0)
            {
              H::gotoxy(133+sizeof(userNameTemp),30);
              H::setcolor(7); cout << " THIS USERNAME"; H::setcolor(4); cout << " ALREADY EXISTS !";
              
              H::delay(1300);
              H::gotoxy(132,30); H::setcolor(7); for(int i = 0; i < sizeof(userNameTemp)+33; i++) cout << " ";
              strcpy(userNameTemp, "");
              goto ENTERUSERNAMEAGAIN;
            }

            else if(strcmp(userNameTemp, oldUsername) == 0)
            {
              break;
            }
          }
        }
        // END //---------------------------------------------------------------------------------------------------------------
        
        // IF PASSWORD IS NOT EQUAL SPECIAL WORDS "EXIT" OR "exit" OR "EXIT" -------------------------------------------------------------------
        ENTERPASSWORDAGAIN:
        H::gotoxy(133,32); DNN::input::inputLetter(passwordTemp, sizeof(passwordTemp));

        if(strcmp(passwordTemp, "Exit") == 0 || strcmp(passwordTemp, "exit") == 0 || (strcmp(passwordTemp, "EXIT") == 0))
        {
          H::gotoxy(133+sizeof(passwordTemp),32);
          H::setcolor(7); cout << " THIS PASSWORD"; H::setcolor(4); cout << " NOT ALLOWED !";
          
          H::delay(1300);
          H::gotoxy(132,32); H::setcolor(7); for(int i = 0; i < sizeof(passwordTemp)+31; i++) cout << " ";
          strcpy(passwordTemp, "");

          goto ENTERPASSWORDAGAIN;
        }
        // END //---------------------------------------------------------------------------------------------------------------

        H::setcursor(false, 0);
        
        // LINE AFTER INPUT DATA //-----------------------------------------------------------------------------------------
        for(int i = 0; i < 50; i++)
        {
          H::HLine(108,34,i,7,178);
        }
        // END //---------------------------------------------------------------------------------------------------------------

        // THE MESSAGE //--------------------------------------------------------------------------------------------------------
        H::gotoxy(108,38); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";
        H::delay(700);

        strcpy(Create_DateAndTimeTemp,vc[i].getCreateDateAndTime()); // GETTING OLD CREATE DATE AND TIME
        idTemp = vc[i].getAccountNumber(); // GETTING OLD ACCOUNT ID
        
        // SETTING NEW DATA TO ACCOUNT CLASS //----------------------------------------------------------------------------
        vc[i].setAccount(idTemp, userNameTemp, passwordTemp, Create_DateAndTimeTemp);
        vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);

        DNN::File<Account>::write("Account.dnn",&vc); // WRITING NEW DATA TO FILE

        found = true;

        break;
      }
    } 

    if(!found) // IF ACCOUNT ID NOT FOUND
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
      H::setcolor(4); cout << " Account ID NOT FOUND !";
    } 

  }

  else // IF FILE IS EMPTY
  {
    H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
  }

}

/////////////////////////////////////////////////////
////////// UPDATE FIRST NAME  ///////////////////////
/////////////////////////////////////////////////////

void DNN::User::Staff::ManageUser::Update::UpdateFirstName(int accountID)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn"); // READING DATA FROM FILE
    bool found = false; // TO CHECK IF ACCOUNT ID FOUND OR NOT

    const auto text = [](int x, int y)
    {
      H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
      H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
      H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
      H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
    };

    if(!vc.empty())
    {
      for(int i = 0; i < vc.size(); i++)
      {
        if(vc[i].getAccountNumber() == accountID)
        {
          char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
          char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];

          H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);

          for(int i = 184; i >= 88; i--)
          {
              H::VLine(i,1,49,7,178); 
              
              for(int j = 1; j <= 49; j++)
              {
                H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
              }
              
              H::delay(10);
          }
          
          H::delay(100); text(119,2);  

          for(int i = 0; i <= 9; i++)
          {
            H::drawBoxSingleLineWithBG(106,10,80,i,3);
          }     
          
          H::delay(100); text(119,2);    
          
          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,12,i,7,178); H::delay(10);
          }

          H::setcursor(true, 1);
          H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID               : " << vc[i].getAccountNumber();
          H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW FIRST NAME     : "; DNN::input::inputLetter(firstNameTemp,sizeof(firstNameTemp));
          H::setcursor(true, 1);

          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,18,i,7,178); H::delay(10);
          }
          
          H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";

          strcpy(lastNameTemp, vc[i].getLastName());       strcpy(birthDateTemp, vc[i].getBirthDate()); strcpy(genderTemp, vc[i].getGender());
          strcpy(phoneNumberTemp, vc[i].getPhoneNumber()); strcpy(emailTemp, vc[i].getEmail());         strcpy(positionTemp, vc[i].getPosition());
          strcpy(userNameTemp, vc[i].getUsername());       strcpy(passwordTemp, vc[i].getPassword());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());

          vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
          vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);

          DNN::File<Account>::write("Account.dnn", &vc);

          found = true;

          break;
         }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    }

}

//////////////////////////////////////////////
//////// UPDATE LAST NAME ///////////////////
/////////////////////////////////////////////

void DNN::User::Staff::ManageUser::Update::UpdateLastName(int accountID)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    bool found = false;

    const auto text = [](int x, int y)
    {
      H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
      H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
      H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
      H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
    };  
    
    if(!vc.empty())
    {
      for(int i = 0; i < vc.size(); i++)
      {
        if(vc[i].getAccountNumber() == accountID)
        {
          char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
          char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];
          
          H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);

          for(int i = 184; i >= 88; i--)
          {
              H::VLine(i,1,49,7,178); 
              
              for(int j = 1; j <= 49; j++)
              {
                H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
              }
              
              H::delay(10);
          }
          
          H::delay(100); text(119,2);  

          for(int i = 0; i <= 9; i++)
          {
            H::drawBoxSingleLineWithBG(106,10,80,i,3);
          }     
          
          H::delay(100); text(119,2);    
          
          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,12,i,7,178); H::delay(10);
          }
          
          H::setcursor(true, 1);
          H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID              : " << vc[i].getAccountNumber();
          H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW LAST NAME     : "; DNN::input::inputLetter(lastNameTemp, sizeof(lastNameTemp));
          H::setcursor(false, 0);

          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,18,i,7,178); H::delay(10);
          }
          
          H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";
          
          strcpy(firstNameTemp, vc[i].getFirstName());     strcpy(birthDateTemp, vc[i].getBirthDate()); strcpy(genderTemp, vc[i].getGender());
          strcpy(phoneNumberTemp, vc[i].getPhoneNumber()); strcpy(emailTemp, vc[i].getEmail());         strcpy(positionTemp, vc[i].getPosition());
          strcpy(userNameTemp, vc[i].getUsername());       strcpy(passwordTemp, vc[i].getPassword());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());

          vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
          vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);

          DNN::File<Account>::write("Account.dnn", &vc);

          found = true;

          break;
         }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    }
}

///////////////////////////////////////////////
///// UPDATE BIRTH DATE //////////////////////
//////////////////////////////////////////////


void DNN::User::Staff::ManageUser::Update::UpdateBirthDate(int accountID)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    bool found = false;

    const auto text = [](int x, int y)
    {
      H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
      H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
      H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
      H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
    };  

    if(!vc.empty())
    {
      for(int i = 0; i < vc.size(); i++)
      {
        if(vc[i].getAccountNumber() == accountID)
        {
          char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
          char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];
          
          H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);

          for(int i = 184; i >= 88; i--)
          {
              H::VLine(i,1,49,7,178); 
              
              for(int j = 1; j <= 49; j++)
              {
                H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
              }
              
              H::delay(10);
          }
          
          H::delay(100); text(119,2);  

          for(int i = 0; i <= 9; i++)
          {
            H::drawBoxSingleLineWithBG(106,10,80,i,3);
          }     
          
          H::delay(100); text(119,2);    
          
          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,12,i,7,178); H::delay(10);
          }

          INPUTBIRTHDATE:
          H::setcursor(true, 1);
          H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID               : " << vc[i].getAccountNumber();
          H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW BIRTH DATE     : "; DNN::input::inputDate(birthDateTemp);
          H::setcursor(false, 0);

        // CHECK VALID DATE //----------------------------------------------------------------------------------------
        if(DNN::DateAndTimes::checkvalidDate(birthDateTemp) == false)
        {
          H::gotoxy(138+sizeof(birthDateTemp),20); H::setcolor(4); cout << " Invalid Date !";
          H::delay(1300);
          H::gotoxy(138,20); H::setcolor(7); for(int i = 0; i < sizeof(birthDateTemp) + 16; i++) cout << " ";
          strcpy(birthDateTemp, "");
          goto INPUTBIRTHDATE;
        }
        // END //---------------------------------------------------------------------------------------------------------------
        
        // CHECK AGE //----------------------------------------------------------------------------------------------------------
        if(DNN::DateAndTimes::calculateAge(birthDateTemp) < 18) // IF AGE UNDER 18
        {
          H::gotoxy(138+sizeof(birthDateTemp),20); H::setcolor(6); cout << " THE AGE MUST BE 18 AND ABOVE !";
          H::delay(1300);
          H::gotoxy(138,20); H::setcolor(7);  for(int i = 0; i < sizeof(birthDateTemp) + 32; i++) cout << " ";
          strcpy(birthDateTemp, "");
          goto INPUTBIRTHDATE;
        }

        if(DNN::DateAndTimes::calculateAge(birthDateTemp) > 70) // IF AGE ABOVE 70
        {
          H::gotoxy(138+sizeof(birthDateTemp),20); H::setcolor(6); cout << " THE AGE MUST BE 70 AND BELOW !";
          H::delay(1300);
          H::gotoxy(138,20); H::setcolor(7); for(int i = 0; i < sizeof(birthDateTemp) + 32; i++)  cout << " ";
          strcpy(birthDateTemp, "");
          goto INPUTBIRTHDATE;
        }
        // END //---------------------------------------------------------------------------------------------------------------

        for(int i = 0; i < 50; i++)
        {
          H::HLine(108,18,i,7,178); H::delay(10);
        }
        
        H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";
        
        strcpy(firstNameTemp, vc[i].getFirstName());     strcpy(lastNameTemp, vc[i].getLastName());       strcpy(genderTemp, vc[i].getGender());
        strcpy(phoneNumberTemp, vc[i].getPhoneNumber()); strcpy(emailTemp, vc[i].getEmail());         strcpy(positionTemp, vc[i].getPosition());
        strcpy(userNameTemp, vc[i].getUsername());       strcpy(passwordTemp, vc[i].getPassword());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());
        
        vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
        vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);
        
        DNN::File<Account>::write("Account.dnn", &vc);

        found = true;
        
        break;
        }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    }
}

///////////////////////////////////////////
//////////// UPDATE POSITION //////////////
///////////////////////////////////////////

void DNN::User::Staff::ManageUser::Update::UpdatePosition(int accountID)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    bool found = false; int d = 1; char press;

    const auto text = [](int x, int y)
    {
      H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
      H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
      H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
      H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
    };  

    if(!vc.empty())
    {
      for(int i = 0; i < vc.size(); i++)
      {
        if(vc[i].getAccountNumber() == accountID)
        {
          char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
          char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];
          
          H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);

          for(int i = 184; i >= 88; i--)
          {
              H::VLine(i,1,49,7,178); 
              
              for(int j = 1; j <= 49; j++)
              {
                H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
              }
              
              H::delay(10);
          }
          
          H::delay(100); text(119,2);  

          for(int i = 0; i <= 9; i++)
          {
            H::drawBoxSingleLineWithBG(106,10,80,i,3);
          }     
          
          H::delay(100); text(119,2);    
          
          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,12,i,7,178); H::delay(10);
          }

          H::setcursor(true, 1);
          H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID               : " << vc[i].getAccountNumber();
          H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW POSTION        : ";
          
          do
          {
            if(d == 1)
            {
              H::gotoxy(137,16); H::setcolor(7); cout << "STAFF   ";
            }
            
            if(d == 2)
            {
              H::gotoxy(137,16); H::setcolor(7); cout << "ADMIN ";
            }

            press = getch();

            switch(press)
            {
              case KEY_ARROW_UP: d--; 
              if(d < 1)
              { 
              d = 2; 
              }
              break;
              
              case KEY_ARROW_DOWN: d++; 
              if(d > 2)
              {
              d = 1; 
              } 
              break;
            }

          }while(press != KEY_ENTER);

          if(d == 1)
          {
            strcpy(positionTemp, "Staff");
          }
          
          if(d == 2)
          {
            strcpy(positionTemp, "Admin");
          } 
          
          H::setcursor(false, 0);

          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,18,i,7,178); H::delay(10);
          }
          
          H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";
          
          strcpy(firstNameTemp, vc[i].getFirstName());     strcpy(lastNameTemp, vc[i].getLastName());       strcpy(birthDateTemp, vc[i].getBirthDate());
          strcpy(phoneNumberTemp, vc[i].getPhoneNumber()); strcpy(emailTemp, vc[i].getEmail());         strcpy(genderTemp, vc[i].getGender());
          strcpy(userNameTemp, vc[i].getUsername());       strcpy(passwordTemp, vc[i].getPassword());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());
          
          vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
          vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);
          
          DNN::File<Account>::write("Account.dnn", &vc);

          found = true;
          
          break;
         }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    } 
}

/////////////////////////////////////////
////// UPDATE PHONE NUMBER /////////////
///////////////////////////////////////

void DNN::User::Staff::ManageUser::Update::UpdatePhoneNumber(int accountID)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    bool found = false;

    const auto text = [](int x, int y)
    {
      H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
      H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
      H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
      H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
    };  

    if(!vc.empty())
    {
      for(int i = 0; i < vc.size(); i++)
      {
        if(vc[i].getAccountNumber() == accountID)
        {
          char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
          char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];
          
          H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);

          for(int i = 184; i >= 88; i--)
          {
              H::VLine(i,1,49,7,178); 
              
              for(int j = 1; j <= 49; j++)
              {
                H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
              }
              
              H::delay(10);
          }
          
          H::delay(100); text(119,2);  

          for(int i = 0; i <= 9; i++)
          {
            H::drawBoxSingleLineWithBG(106,10,80,i,3);
          }     
          
          H::delay(100); text(119,2);    
          
          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,12,i,7,178); H::delay(10);
          }
          
          H::setcursor(true, 1);
          H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID                    : " << vc[i].getAccountNumber();
          H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW PHONE NUMBER        : "; DNN::input::input4Tel(phoneNumberTemp, sizeof(phoneNumberTemp));
          H::setcursor(false, 0);

          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,18,i,7,178); H::delay(10);
          }
          
          H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";

          strcpy(firstNameTemp, vc[i].getFirstName());     strcpy(lastNameTemp, vc[i].getLastName());       strcpy(birthDateTemp, vc[i].getBirthDate());
          strcpy(emailTemp, vc[i].getEmail());             strcpy(genderTemp, vc[i].getGender());         strcpy(positionTemp, vc[i].getPosition());
          strcpy(userNameTemp, vc[i].getUsername());       strcpy(passwordTemp, vc[i].getPassword());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());
          
          vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
          vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);
          
          DNN::File<Account>::write("Account.dnn", &vc);

          found = true;
          
          break;
         }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    }
}

//////////////////////////////////////////////
//////// UPDATE EMAIL METHOD    /////////////
/////////////////////////////////////////////
void DNN::User::Staff::ManageUser::Update::UpdateEmail(int accountID)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    bool found = false;

    const auto text = [](int x, int y)
    {
      H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
      H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
      H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
      H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
    };  

    if(!vc.empty())
    {
      for(int i = 0; i < vc.size(); i++)
      {
        if(vc[i].getAccountNumber() == accountID)
        {
          char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
          char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];
          
          H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);

          for(int i = 184; i >= 88; i--)
          {
              H::VLine(i,1,49,7,178); 
              
              for(int j = 1; j <= 49; j++)
              {
                H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
              }
              
              H::delay(10);
          }
          
          H::delay(100); text(119,2);  

          for(int i = 0; i <= 9; i++)
          {
            H::drawBoxSingleLineWithBG(106,10,80,i,3);
          }     
          
          H::delay(100); text(119,2);    
          
          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,12,i,7,178); H::delay(10);
          }
          INPUTEMAILAGAIN:
          H::setcursor(true, 1);
          H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID                : " << vc[i].getAccountNumber();
          H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW EMAIL           : "; DNN::input::inputMail(emailTemp,sizeof(emailTemp));
          H::setcursor(false, 0);

          if(DNN::DLIB::isValidEmail(emailTemp) == false)
          {
            H::gotoxy(139,16); H::setcolor(4); cout << " INVALID EMAIL !";
            H::delay(1300);
            H::gotoxy(139,16); H::setcolor(7); for(int i = 0; i < sizeof(emailTemp)+18; i++) cout << " ";
            strcpy(emailTemp, "");
            goto INPUTEMAILAGAIN;
          }

          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,18,i,7,178); H::delay(10);
          }
          
          H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";
          
          strcpy(firstNameTemp, vc[i].getFirstName());     strcpy(lastNameTemp, vc[i].getLastName());       strcpy(birthDateTemp, vc[i].getBirthDate());
          strcpy(phoneNumberTemp, vc[i].getPhoneNumber()); strcpy(genderTemp, vc[i].getGender());         strcpy(positionTemp, vc[i].getPosition());
          strcpy(userNameTemp, vc[i].getUsername());       strcpy(passwordTemp, vc[i].getPassword());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());
          
          vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
          vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);
          
          DNN::File<Account>::write("Account.dnn", &vc);

          found = true;
          
          break;
         }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    }
}

//////////////////////////////////////////////
////////// UPDATE GENDER METHOD   ////////////
//////////////////////////////////////////////
void DNN::User::Staff::ManageUser::Update::UpdateGender(int accountID)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    bool found = false; int d = 1; char press;

    const auto text = [](int x, int y)
    {
      H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
      H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
      H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
      H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
    };  

    if(!vc.empty())
    {
      for(int i = 0; i < vc.size(); i++)
      {
        if(vc[i].getAccountNumber() == accountID)
        {
          char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
          char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];
          
          H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700); H::setcursor(false, 0);

          for(int i = 184; i >= 88; i--)
          {
              H::VLine(i,1,49,7,178); 
              
              for(int j = 1; j <= 49; j++)
              {
                H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
              }
              
              H::delay(10);
          }
          
          H::delay(100); text(119,2);  

          for(int i = 0; i <= 9; i++)
          {
            H::drawBoxSingleLineWithBG(106,10,80,i,3);
          }     
          
          H::delay(100); text(119,2);    
          
          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,12,i,7,178); H::delay(10);
          }

          H::setcursor(true, 1);
          H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID               : " << vc[i].getAccountNumber();
          H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW GENDER         : ";

          do
          {
            if(d == 1)
            {
              H::gotoxy(137,16); H::setcolor(7); cout << "Male   ";
            }
            
            if(d == 2)
            {
              H::gotoxy(137,16); H::setcolor(7); cout << "Female ";
            }

            press = getch();

            switch(press)
            {
              case KEY_ARROW_UP: d--; 
              if(d < 1)
              { 
              d = 2; 
              }
              break;
              
              case KEY_ARROW_DOWN: d++; 
              if(d > 2)
              {
              d = 1; 
              } 
              break;
            }

          }while(press != KEY_ENTER);

          if(d == 1)
          {
            strcpy(genderTemp, "Male");
          }
          
          if(d == 2)
          {
            strcpy(genderTemp, "Female");
          } 

          H::setcursor(false, 0);

          for(int i = 0; i < 50; i++)
          {
            H::HLine(108,18,i,7,178); H::delay(10);
          }
          
          H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
          H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";
          
          strcpy(firstNameTemp, vc[i].getFirstName());     strcpy(lastNameTemp, vc[i].getLastName());       strcpy(birthDateTemp, vc[i].getBirthDate());
          strcpy(phoneNumberTemp, vc[i].getPhoneNumber()); strcpy(emailTemp, vc[i].getEmail());         strcpy(positionTemp, vc[i].getPosition());
          strcpy(userNameTemp, vc[i].getUsername());       strcpy(passwordTemp, vc[i].getPassword());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());
          
          vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
          vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);
          
          DNN::File<Account>::write("Account.dnn", &vc);

          found = true;
          
          break;
         }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    } 
}

/////////////////////////////////////
///////// UPDATE PASSWORD //////////
///////////////////////////////////

void DNN::User::Staff::ManageUser::Update::UpdatePassword(int accountID)
{
  vector<Account> vc = DNN::File<Account>::read("Account.dnn");
  bool found = false;

  const auto text = [](int x, int y)
  {
    H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
    H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
    H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
    H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
  };  

  if(!vc.empty())
  {
    for(int i = 0; i < vc.size(); i++)
    {
      if(vc[i].getAccountNumber() == accountID)
      {
        char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
        char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];
        
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);

        for(int i = 184; i >= 88; i--)
        {
            H::VLine(i,1,49,7,178); 
            
            for(int j = 1; j <= 49; j++)
            {
              H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
            }
            
            H::delay(10);
        }
        
        H::delay(100); text(119,2);  

        for(int i = 0; i <= 9; i++)
        {
          H::drawBoxSingleLineWithBG(106,10,80,i,3);
        }     
        
        H::delay(100); text(119,2);    
        
        for(int i = 0; i < 50; i++)
        {
          H::HLine(108,12,i,7,178); H::delay(10);
        }

        H::setcursor(true, 1);
        H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID                           : " << vc[i].getAccountNumber();
        H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW ACCOUNT PASSWORD           : "; DNN::input::inputAll(passwordTemp,sizeof(passwordTemp));
        H::setcursor(false, 1);

        for(int i = 0; i < 50; i++)
        {
          H::HLine(108,18,i,7,178); H::delay(10);
        }
        
        H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";
        
        strcpy(firstNameTemp, vc[i].getFirstName());     strcpy(lastNameTemp, vc[i].getLastName());       strcpy(birthDateTemp, vc[i].getBirthDate());
        strcpy(phoneNumberTemp, vc[i].getPhoneNumber()); strcpy(genderTemp, vc[i].getGender());         strcpy(positionTemp, vc[i].getPosition());
        strcpy(userNameTemp, vc[i].getUsername());       strcpy(emailTemp, vc[i].getEmail());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());
        
        vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
        vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);
        
        DNN::File<Account>::write("Account.dnn", &vc);
        
        found =  true;

        break;
        }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    }
}

/////////////////////////////////////////////////
//////////////// UPDATE USERNAME ///////////////
///////////////////////////////////////////////

void DNN::User::Staff::ManageUser::Update::UpdateUsername(int accountID)
{
  vector<Account> vc = DNN::File<Account>::read("Account.dnn");
  bool found = false;

  const auto text = [](int x, int y)
  {
    H::gotoxy(x,y);   H::setcolor(7); cout << R"(    _____________   ________  ___  _____________  ___  ___ )";
    H::gotoxy(x,y+1); H::setcolor(3); cout << R"(   / __/_  __/ _ | / __/ __/ / _ \/ __/ ___/ __ \/ _ \/ _ \)";
    H::gotoxy(x,y+2); H::setcolor(7); cout << R"(  _\ \  / / / __ |/ _// _/  / , _/ _// /__/ /_/ / , _/ // /)";
    H::gotoxy(x,y+3); H::setcolor(3); cout << R"( /___/ /_/ /_/ |_/_/ /_/   /_/|_/___/\___/\____/_/|_/____/ )";
  };  

  if(!vc.empty())
  {
    for(int i = 0; i < vc.size(); i++)
    {
      if(vc[i].getAccountNumber() == accountID)
      {
        char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], phoneNumberTemp[12], emailTemp[25], positionTemp[15];
        char userNameTemp[20], passwordTemp[20], CreateAndTemp[20];
        
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(2); cout << " ACCOUNT ID FOUND !"; H::delay(700);

        for(int i = 184; i >= 88; i--)
        {
          H::VLine(i,1,49,7,178); 
          
          for(int j = 1; j <= 49; j++)
          {
            H::gotoxy(i+1,j); H::setcolor(7); cout << " ";
          }
          
          H::delay(10);
        }
        
        H::delay(100); text(119,2);  

        for(int i = 0; i <= 9; i++)
        {
          H::drawBoxSingleLineWithBG(106,10,80,i,3);
        }     
        
        H::delay(100); text(119,2);    
        
        for(int i = 0; i < 50; i++)
        {
          H::HLine(108,12,i,7,178); H::delay(10);
        }
        
        // STORING OLD DATA IN TEMPORARY VARIABLE
        char oldUserName[20]; strcpy(oldUserName, vc[i].getUsername());

        INPUTUSERNAMEAGAIN:
        H::setcursor(true, 1);
        H::gotoxy(108,14); H::setcolor(7); cout << "\4 ACCOUNT ID                           : " << vc[i].getAccountNumber();
        H::gotoxy(108,16); H::setcolor(7); cout << "\4 ENTER NEW ACCOUNT USERNAME           : "; DNN::input::inputLetter(userNameTemp,sizeof(userNameTemp));
        H::setcursor(false, 0);

        for(auto& i : vc)
        {
          if(strcmp(userNameTemp, i.getUsername()) == 0 && strcmp(userNameTemp, oldUserName) != 0)
          {
            H::gotoxy(150+sizeof(userNameTemp),30);
            H::setcolor(7); cout << " THIS USERNAME"; H::setcolor(4); cout << " ALREADY EXISTS !";
            
            H::delay(1300);
            H::gotoxy(150,30); H::setcolor(7); for(int i = 0; i < sizeof(userNameTemp)+35; i++) cout << " ";
            strcpy(userNameTemp, "");
            goto INPUTUSERNAMEAGAIN;
          }

          else if(strcmp(userNameTemp, oldUserName) == 0)
          {
            break;
          }  
        }

        for(int i = 0; i < 50; i++)
        {
          H::HLine(108,18,i,7,178); H::delay(10);
        }
        
        H::gotoxy(108,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " UPDATE RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(2); cout << " ACCOUNT UPDATED SUCCESSFULLY !";
        
        strcpy(firstNameTemp, vc[i].getFirstName());     strcpy(lastNameTemp, vc[i].getLastName());       strcpy(birthDateTemp, vc[i].getBirthDate());
        strcpy(phoneNumberTemp, vc[i].getPhoneNumber()); strcpy(genderTemp, vc[i].getGender());         strcpy(positionTemp, vc[i].getPosition());
        strcpy(passwordTemp, vc[i].getPassword()); strcpy(emailTemp, vc[i].getEmail());   strcpy(CreateAndTemp, vc[i].getCreateDateAndTime());
        
        vc[i].setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
        vc[i].setAccount(accountID, userNameTemp, passwordTemp, CreateAndTemp);
        
        DNN::File<Account>::write("Account.dnn", &vc);
        
        found = true;

        break;
        }
      }

      if(!found)
      {
        H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
        H::setcolor(4); cout << " Account ID NOT FOUND !";
      } 

    }

    else
    {
      H::gotoxy(102,16); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    }
}

//////////////////////////////////////////////////////////
//////////////// SORT ///////////////////////////////////
////////////////////////////////////////////////////////

void DNN::User::Staff::ManageUser::Sort::SortByAccountNumber(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return a.getAccountNumber() < b.getAccountNumber();});
      }
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return a.getAccountNumber() > b.getAccountNumber();});
      }
      
      DNN::File<Account>::write("Account.dnn", &vc);
    }
    
    else
    {
     H::gotoxy(102,18); cout << "["; H::setcolor(4); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA !";
    } 
}

void DNN::User::Staff::ManageUser::Sort::SortByFirstName(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getFirstName(), b.getFirstName()) < 0;});
      }
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getFirstName(), b.getFirstName()) > 0;});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }
}

void DNN::User::Staff::ManageUser::Sort::SortByLastName(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getLastName(), b.getLastName()) < 0;});
      }
      
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getLastName(), b.getLastName()) > 0;});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }
}

void DNN::User::Staff::ManageUser::Sort::SortByPosition(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getPosition(), b.getPosition()) < 0;});
      }
      
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getPosition(), b.getPosition()) > 0;});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }
}


void DNN::User::Staff::ManageUser::Sort::SortByBirthDate(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getBirthDate(), b.getBirthDate()) < 0;});
      }
      
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getBirthDate(), b.getBirthDate()) > 0;});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }
}

void DNN::User::Staff::ManageUser::Sort::SortByGender(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getGender(), b.getGender()) < 0;});
      }
      
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getGender(), b.getGender()) > 0;});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }
}

void DNN::User::Staff::ManageUser::Sort::SortByPhoneNumber(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getPhoneNumber(), b.getPhoneNumber()) < 0;});
      }
      
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getPhoneNumber(), b.getPhoneNumber()) > 0;});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }
}

void DNN::User::Staff::ManageUser::Sort::SortByEmail(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getEmail(), b.getEmail()) < 0;});
      }
      
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getEmail(), b.getEmail()) > 0;});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }
}

void DNN::User::Staff::ManageUser::Sort::SortByUsername(string mode)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(mode == "asc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getUsername(), b.getUsername()) < 0;});
      }
      
      else if(mode == "desc")
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return strcmp(a.getUsername(), b.getUsername()) > 0;});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }
}

void DNN::User::Staff::ManageUser::Sort::SortByApprovalStatus(bool approved)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
    if(!vc.empty())
    {
      if(approved == true)
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return a.getAdminApproval() > b.getAdminApproval();});
      }
      
      else if(approved == false)
      {
        sort(vc.begin(), vc.end(), [](Account a, Account b){return a.getAdminApproval() < b.getAdminApproval();});
      }

      DNN::File<Account>::write("Account.dnn", &vc);
    }

}

//////////////////////////////////////////////////////////////////////////////
///////////////////////////// DELETE ACCOUNT /////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
void DNN::User::Staff::ManageUser::Delete(int accountID)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    bool flag = false;

    if(!vc.empty())
    {
        for(int i = 0; i < vc.size(); i++)
        {
            if(vc[i].getAccountNumber() == accountID)
            {
                vc.erase(vc.begin() + i);
                DNN::File<Account>::write("Account.dnn", &vc);
                flag = true;
                break;
            }
        }

        if(flag == false)
        {
            H::gotoxy(100,30); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]";
            H::setcolor(7); cout << " ACCOUNT ID"; H::setcolor(4); cout << " NOT FOUND !";
        }

        if(flag)
        {
            H::gotoxy(81,30); H::setcolor(248); cout << "["; H::setcolor(6); cout << " DELETE STATUS "; H::setcolor(7); cout << "]";
            H::setcolor(7); cout << " THIS ACCOUNT ID HAS BEEN "; H::setcolor(2); cout << "DELETED "; H::setcolor(7); cout << "!";
        }

    }

    else 
    {
      H::gotoxy(100,30); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARING "; H::setcolor(7); cout << "]"; 
      H::setcolor(4); cout << " NO ACCOUNT DATA !";
    }
}


#endif 