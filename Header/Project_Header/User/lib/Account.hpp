#ifndef _DNN_ACCOUNT_HPP_
#define _DNN_ACCOUNT_HPP_

// LIBRARIES //-----------------------------------------------------------------//
   #include "../../../DNN_Header/DNN.hpp"
   #include "../User.hpp"
   #include "LoginTemp.hpp"
//------------------------------------------------------------------------------//
class user
{
   private:
      char firstName[10];
      char lastName[10];
      char birthDate[11];
      char position[15];
      char gender[10];
      char phoneNumber[12];
      char email[25];

   public:
      user() = default;
      virtual ~user() = default;
   
   public:
      void setUser(const char* firstName, const char* lastName, const char* birthDate,  const char* gender, const char* position, const char* phoneNumber, const char* email);
   
   public:   
      const char* getPosition() const { return position; }
      const char* getEmail() const { return email; }
      const char* getBirthDate() const { return birthDate; }
      const char* getPhoneNumber() const { return phoneNumber; }
      const char* getLastName() const { return lastName; }
      const char* getFirstName() const { return firstName; }
      const char* getGender() const { return gender; }

};

class AccountRecord
{
   protected:
      char Create_DateAndTime[11];
   
   public:
      AccountRecord() = default;
      virtual ~AccountRecord() = default;
   
   public:
      const char* getCreateDateAndTime() const { return Create_DateAndTime; }
};

class Account : public user, public AccountRecord
{
   private:
      int AccountNumber;
      char userName[20];
      char password[20];
   private:   
      bool AdminApproval = false;

   public:
      void setAccount(int accountNumber,const char* userName, const char* password, char* Create_DateAndTime);
      void setAccount(const char* firstName , const char* lastName, const char* birthDate, const char* gender,const char* position,const char* phoneNumber, const char* email);
      void setApproval(bool approval) { AdminApproval = approval; }
      bool checkAdmin(const char* userName, const char* password);
      bool checkAccount(const char* userName, const char* password);
   public:   
      const char* getUsername() const { return userName; }
      const char* getPassword() const { return password; }
      int getAccountNumber() const { return AccountNumber; }
      bool getAdminApproval() const { return AdminApproval; }

   public:
      void Display();
      static void Header();

   public:
      virtual void Register() final;
      virtual bool Login(const char* userName, const char* password)  final;
};

//////////////////////////////////////////////////////////////////////////////////////////
//                        USER DEFINITION                                              // 
////////////////////////////////////////////////////////////////////////////////////////
void Account::Display()
{
   char AdminApprovalchar[10];
   
   AdminApproval == true ? strcpy(AdminApprovalchar, "Approved") : strcpy(AdminApprovalchar, "Pending");

   H::setcolor(9); cout << left << setw(15) << AccountNumber;
   H::setcolor(2); cout << left << setw(15) << getFirstName();
   H::setcolor(3); cout << left << setw(15) << getLastName();
   H::setcolor(5); cout << left << setw(17) << getBirthDate();
   H::setcolor(9); cout << left << setw(15) << getGender();
   H::setcolor(2); cout << left << setw(17) << getPosition();
   H::setcolor(3); cout << left << setw(22) << getPhoneNumber();
   H::setcolor(5); cout << left << setw(33) << getEmail();
   H::setcolor(9); cout << left << setw(20) << getCreateDateAndTime();

   AdminApproval == true ? H::setcolor(2) : H::setcolor(6); cout << left << AdminApprovalchar;
}

void Account::setAccount(const char* firstName , const char* lastName, const char* birthDate, const char* gender, const char* position,const char* phoneNumber, const char* email)
{
   user::setUser(firstName, lastName, birthDate, gender, position, phoneNumber, email);
}

void user::setUser(const char* firstName, const char* lastName, const char* birthDate,  const char* gender,const char* position, const char* phoneNumber, const char* email)
{
   strcpy(this->firstName, firstName); strcpy(this->lastName, lastName); strcpy(this->birthDate, birthDate);
   strcpy(this->position, position); strcpy(this->phoneNumber, phoneNumber); strcpy(this->email, email);
   strcpy(this->gender, gender);
}

void Account::setAccount(int accountNumber,const char* userName, const char* password, char* Create_DateAndTime)
{
   strcpy(this->userName, userName); strcpy(this->password, password); this->AccountNumber = accountNumber; 
   strcpy(this->Create_DateAndTime, Create_DateAndTime);
}

void Account::Header()
  {
    H::setcolor(9); cout << left << setw(15) << "ACCOUNT ID";
    H::setcolor(2); cout << left << setw(15) << "FIRST NAME";
    H::setcolor(3); cout << left << setw(15) << "LAST NAME";
    H::setcolor(5); cout << left << setw(17) << "BIRTH DATE";
    H::setcolor(9); cout << left << setw(15) << "GENDER";
    H::setcolor(2); cout << left << setw(17) << "POSITION";
    H::setcolor(3); cout << left << setw(22) << "PHONE NUMBER";
    H::setcolor(5); cout << left << setw(33) << "EMAIL";
    H::setcolor(9); cout << left << setw(20) << "CREATED DATE";
    H::setcolor(7); cout << left << setw(15) << "APPROVAL STATUS";
  };

void Account::Register()
{
    int accountIDTemp;
    char firstNameTemp[10], lastNameTemp[10], birthDateTemp[11], genderTemp[10], positionTemp[15], phoneNumberTemp[12], emailTemp[25];
    char userNameTemp[20], passwordTemp[20], passwordTempp[20], Create_DateAndTimeTemp[11];
    int x = 1; char press;

    vector<Account> vc = DNN::File<Account>::read("Account.dnn");
    
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
    
    ENTERAGAIN: H::setcursor(true, 1);

    accountIDTemp = accountID();
    
    H::gotoxy(117,24); H::setcolor(249); cout << accountIDTemp;
    
    H::setcursor(false, 0);
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WELCOME TO THE ACCOUNT REGISTRATION FORM "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " PLEASE FILL IN THE FIELDS ABOVE. THANKS \3";
    H::setcursor(true, 0);

    H::gotoxy(117,26); H::setcolor(249); DNN::input::inputLetter(firstNameTemp,sizeof(firstNameTemp)); 
    H::gotoxy(117,28); H::setcolor(249); DNN::input::inputLetter(lastNameTemp,sizeof(lastNameTemp));
    
    EnterDateAgain:
    H::gotoxy(116,30); H::setcolor(249); for(int i = 0; i < 60; i++) cout << " ";
    H::setcursor(false, 0);
    H::clearBox(90,42,96,3,7);
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : DATE FORMAT : DD/MM/YYYY "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " EXAMPLE: 01/01/2000";
    
    H::setcursor(true, 1);
    H::gotoxy(117,30); H::setcolor(249); DNN::input::inputDate(birthDateTemp);
    H::setcursor(false, 0);

    if(DNN::DateAndTimes::checkvalidDate(birthDateTemp) == false)
    {
      H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 60; i++) cout << " ";
      H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
      H::setcolor(4); cout << " INVALID DATE."; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
      H::setcolor(7); cout << " TO TRY AGAIN !"; strcpy(birthDateTemp, ""); getch();
      goto EnterDateAgain;
    }

    if(DNN::DateAndTimes::calculateAge(birthDateTemp) < 18)
    {
      H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 60; i++) cout << " ";
      H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
      H::setcolor(7); cout << " THE STAFFS MUST BE AT LEAST"; H::setcolor(6); cout << " 18 YEARS OLDS."; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
      H::setcolor(7); cout << " TO TRY AGAIN !"; strcpy(birthDateTemp, ""); getch();
      goto EnterDateAgain; 
    }

    if(DNN::DateAndTimes::calculateAge(birthDateTemp) > 70)
    {
      H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 60; i++) cout << " ";
      H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
      H::setcolor(7); cout << " THE STAFFS MUST NOT EXCEED"; H::setcolor(6); cout << " 70 YEARS OLDS"; H::setcolor(7); cout << " OF AGE."; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
      H::setcolor(7); cout << " TO TRY AGAIN !"; strcpy(birthDateTemp, ""); getch();
      goto EnterDateAgain; 
    }

    H::clearBox(90,42,92,3,7);
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " PRESS ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << " AND "; H::setcolor(6); cout << "DOWN"; 
    H::setcolor(7); cout << " TO CHOOSE YOUR GENDER";
    
    H::setcursor(true, 1);
    do
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

    H::gotoxy(157,32); H::setcolor(249); cout << "STAFF "; strcpy(positionTemp, "Staff");

    H::setcursor(false, 0);
    H::clearBox(90,42,92,3,7);
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : PHONE NUMBER FORMAT : 01XXXXXXXX "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " EXAMPLE: 0969930997";
    
    H::setcursor(true, 1);
    H::gotoxy(117,34); H::setcolor(249); DNN::input::inputNumber(phoneNumberTemp,sizeof(phoneNumberTemp));

   inputMailAgain:
    H::gotoxy(116,36); H::setcolor(249); for(int i = 0; i < 60; i++) cout << " ";
    H::setcursor(false, 0);
    H::clearBox(90,42,92,3,7);
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS : EMAIL FORMAT : username@example.com "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " EXAMPLE: yannvanneth.27@gmail.com";

    H::setcursor(true, 1);
    H::gotoxy(117,36); H::setcolor(249); DNN::input::inputMail(emailTemp, sizeof(emailTemp));
    H::setcursor(false, 1);

    if(DNN::DLIB::isValidEmail(emailTemp) == false)
    {
      H::gotoxy(90,42); H::setcolor(7); for(int i = 0; i < 81; i++) cout << " ";
      H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
      H::setcolor(4); cout << " INVALID EMAIL ADDRESS "; H::setcolor(7); cout << "!"; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; 
      H::setcolor(7); cout << " TO TRY AGAIN !"; strcpy(emailTemp, ""); getch();
      goto inputMailAgain;
    }

    H::delay(100); H::clearBox(93,24,92,12,7); H::clearBox(90,42,92,3,7);
    
    H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
    H::setcolor(7); cout << " PLEASE CHECK YOUR INFORMATION AGAIN !!";
    H::gotoxy(90,44); H::setcolor(7); cout << "IF CORRECT PRESS ["; H::setcolor(6); cout << " ENTER "; H::setcolor(7); cout << "] , IF NOT PRESS [";
    H::setcolor(6); cout << " BACKSPACE "; H::setcolor(7); cout << "] TO RE-ENTER YOUR INFORMATION.";  
    
    // set data
    this->setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
    this->setAccount(accountIDTemp, userNameTemp, passwordTemp, Create_DateAndTimeTemp);
   // strcpy(userName, "Admin"); strcpy(password, "Admin");
    H::gotoxy(93, 24);   H::setcolor(151); cout << "  ACCOUNT ID    "; H::gotoxy(112, 24); H::setcolor(7); cout << this->getAccountNumber();
    H::gotoxy(93, 26);   H::setcolor(151); cout << "  FIRST NAME    "; H::gotoxy(112, 26); H::setcolor(7); cout << this->getFirstName();
    H::gotoxy(93, 28);   H::setcolor(151); cout << "  LAST  NAME    "; H::gotoxy(112, 28); H::setcolor(7); cout << this->getLastName();
    H::gotoxy(93, 30);   H::setcolor(151); cout << "  BIRTH DATE    "; H::gotoxy(112, 30); H::setcolor(7); cout << this->getBirthDate();
    H::gotoxy(93, 32);   H::setcolor(151); cout << "  GENDER        "; H::gotoxy(112, 32); H::setcolor(7); cout << this->getGender();
    H::gotoxy(135, 32);  H::setcolor(151); cout << "    POSITION    "; H::gotoxy(155, 32); H::setcolor(7); cout << this->getPosition();
    H::gotoxy(93, 34);   H::setcolor(151); cout << "  PHONE NUMBER  "; H::gotoxy(112, 34); H::setcolor(7); cout << this->getPhoneNumber();
    H::gotoxy(93, 36);   H::setcolor(151); cout << "  EMAIL         "; H::gotoxy(112, 36); H::setcolor(7); cout << this->getEmail();

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
      
      H::gotoxy(115, 24);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " "; H::gotoxy(117, 24); H::setcolor(249); cout << this->getAccountNumber();
      H::gotoxy(115, 26);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
      H::gotoxy(115, 28);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
      H::gotoxy(115, 30);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
      
      FILLAGAIN2:
      H::setcursor(true, 0);
      H::gotoxy(117,26); H::setcolor(249); DNN::input::inputLetter(userNameTemp,sizeof(userNameTemp)); 
      H::setcursor(false, 0);

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
      
      H::setcursor(true, 1);
      H::gotoxy(117,28); H::setcolor(249); DNN::input::inputAll(passwordTemp,sizeof(passwordTemp)); 
      H::setcursor(false, 1);

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

      H::setcursor(false, 1);
      H::delay(100); H::clearBox(90,42,80,3,7);
      
      H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
      H::setcolor(7); cout << " RE-PASSWORD SHOULD BE SAME AS PASSWORD THAT YOU ENTERED PREVIOUSLY.";

      H::setcursor(true, 1); 
      H::gotoxy(117,30); H::setcolor(249); DNN::input::inputAll(passwordTempp,sizeof(passwordTempp));
      
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
      
      // set data
      this->setUser(firstNameTemp, lastNameTemp, birthDateTemp, genderTemp, positionTemp, phoneNumberTemp, emailTemp);
      this->setAccount(accountIDTemp, userNameTemp, passwordTemp, Create_DateAndTimeTemp);

      H::gotoxy(93, 24);   H::setcolor(151); cout << "  ACCOUNT ID    "; H::gotoxy(112, 24); H::setcolor(7); cout << this->getAccountNumber();
      H::gotoxy(93, 26);   H::setcolor(151); cout << "  FIRST NAME    "; H::gotoxy(112, 26); H::setcolor(7); cout << this->getFirstName();
      H::gotoxy(93, 28);   H::setcolor(151); cout << "  LAST  NAME    "; H::gotoxy(112, 28); H::setcolor(7); cout << this->getLastName();
      H::gotoxy(93, 30);   H::setcolor(151); cout << "  BIRTH DATE    "; H::gotoxy(112, 30); H::setcolor(7); cout << this->getBirthDate();
      H::gotoxy(93, 32);   H::setcolor(151); cout << "  GENDER        "; H::gotoxy(112, 32); H::setcolor(7); cout << this->getGender();
      H::gotoxy(135, 32);  H::setcolor(151); cout << "    POSITION    "; H::gotoxy(155, 32); H::setcolor(7); cout << this->getPosition();
      H::gotoxy(93, 34);   H::setcolor(151); cout << "  PHONE NUMBER  "; H::gotoxy(112, 34); H::setcolor(7); cout << this->getPhoneNumber();
      H::gotoxy(93, 36);   H::setcolor(151); cout << "  EMAIL         "; H::gotoxy(112, 36); H::setcolor(7); cout << this->getEmail();
      
      H::gotoxy(135, 26);   H::setcolor(151); cout << "  USERNAME         "; H::gotoxy(155, 26); H::setcolor(7); cout << this->getUsername();
      H::gotoxy(135, 28);   H::setcolor(151); cout << "  PASSWORD         "; H::gotoxy(155, 28); H::setcolor(7); cout << this->getPassword();
      
      if(press == KEY_ENTER)
      {
        H::clearBox(90,42,92,3,7);
        H::gotoxy(90,42); H::setcolor(7); cout << "["; H::setcolor(6); cout << " ACCOUNT STATUS "; H::setcolor(7); cout << "]"; 
        H::setcolor(2); cout << " REGISTERED SUCCESSFULLY !";
        H::gotoxy(90,44); H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << "ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE.."; 

        strcpy(Create_DateAndTimeTemp, DNN::DateAndTimes::getCurrentDate());
      
        this->setAccount(accountIDTemp, userNameTemp, passwordTemp, Create_DateAndTimeTemp);
        this->setApproval(false);
        
        DNN::File<Account>::write("Account.dnn", *this);
      }

      else if(press == KEY_BACKSPACE)
      {
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
        strcpy(firstNameTemp, ""); strcpy(lastNameTemp, ""); strcpy(birthDateTemp, "");
        strcpy(positionTemp, ""); strcpy(phoneNumberTemp, ""); strcpy(emailTemp, "");
        strcpy(genderTemp, ""); strcpy(Create_DateAndTimeTemp, "");

        H::setcursor(false, 0);
        H::clearBox(93,24,92,12,7); H::clearBox(90,42,92,3,7); DNN::Design::User::Auth::Register(1, 7); 
        
        goto ENTERAGAIN;
    }
}

bool Account::checkAdmin(const char* userName, const char* password)
{
   vector<Account> vc = DNN::File<Account>::read("Account.dnn");
   bool isAdmin = false, found = false;

   if(strcmp(userName, "SuperUser") == 0 && strcmp(password, "SuperUser") == 0)
   {
      return isAdmin = true;
   }
   
   else
   {
      for(int i = 0; i < vc.size(); i++)
      {
         if(strcmp(vc[i].getUsername(), userName) == 0 && strcmp(vc[i].getPassword(), password) == 0)
         {
            if(strcmp(vc[i].getPosition(),"admin") == 0 || strcmp(vc[i].getPosition(),"Admin") == 0)
            {
               isAdmin = true;               
            }

            else
            {
               isAdmin = false;  
            }
         }  
      }
   }
   
   return isAdmin;
}

bool Account::checkAccount(const char* userName, const char* password)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");

    bool isAdmin = false, IsCorrected = false, Isusername = false, IsPassword = false;
    int index = 0;
    H::setcursor(false, 0);

    if(strcmp(userName, "SuperUser") == 0 && strcmp(password, "SuperUser") == 0 && IsPassword == false && Isusername == false && IsCorrected == false)
    {
      isAdmin = true; IsCorrected = true; Isusername = true; IsPassword = true;
    }

    if(!vc.empty() && IsCorrected == false && IsPassword == false && Isusername == false)
    {
        for(int i = 0; i < vc.size(); i++)
        {            
            if(strcmp(vc[i].getUsername(), userName) == 0 && IsPassword == false && IsCorrected == false)
            {
               Isusername = true;

               if(strcmp(vc[i].getPassword(), password) == 0)
               {
                  IsPassword = true; IsCorrected = true;
               
                  if(strcmp(vc[i].getPosition(),"admin") == 0 || strcmp(vc[i].getPosition(),"Admin") == 0)
                  {
                     index = i;
                     isAdmin = true;               
                  }

                  else
                  {
                     index = i; 
                     isAdmin = false;  
                  }
               }

               else 
               {
                  IsPassword = false; IsCorrected = false;
               }
            }

            else if(strcmp(vc[i].userName, userName) != 0 && IsPassword == true && IsCorrected == false)
            {
               Isusername = false; 
               
               if(strcmp(vc[i].password, password) == 0)
               {
                 IsPassword = true; IsCorrected = false;
               }

               else 
               {
                 IsPassword = false; IsCorrected = false;
               }
            }
        }
    }
   
   return IsCorrected;
}
bool Account::Login(const char* userName, const char* password)
{
    vector<Account> vc = DNN::File<Account>::read("Account.dnn");

    bool isAdmin = false, IsCorrected = false, Isusername = false, IsPassword = false;
    int index = 0; H::setcursor(false, 0);

    if(strcmp(userName, "SuperUser") == 0 && strcmp(password, "SuperUser") == 0 && IsPassword == false && Isusername == false && IsCorrected == false)
    {
      isAdmin = true; IsCorrected = true; Isusername = true; IsPassword = true;
    }

    if(!vc.empty() && IsCorrected == false && IsPassword == false && Isusername == false)
    {
        for(int i = 0; i < vc.size(); i++)
        {            
            if(strcmp(vc[i].getUsername(), userName) == 0 && IsPassword == false && IsCorrected == false)
            {
               Isusername = true;

               if(strcmp(vc[i].getPassword(), password) == 0)
               {
                  IsPassword = true; IsCorrected = true;
               
                  if(strcmp(vc[i].getPosition(),"admin") == 0 || strcmp(vc[i].getPosition(),"Admin") == 0)
                  {
                     index = i;
                     isAdmin = true;               
                  }

                  else
                  {
                     index = i; 
                     isAdmin = false;  
                  }
               }

               else 
               {
                  IsPassword = false; IsCorrected = false;
               }
            }
            else if(strcmp(vc[i].userName, userName) != 0 && IsPassword == true && IsCorrected == false)
            {
               Isusername = false; 
               
               if(strcmp(vc[i].password, password) == 0)
               {
                 IsPassword = true; IsCorrected = false;
               }

               else 
               {
                 IsPassword = false; IsCorrected = false;
               }
            }
        }
 
    if(IsCorrected == true && Isusername == true && IsPassword == true)
    {
      H::gotoxy(73,32); H::setcolor(2); cout << " LOGIN SUCCESSFULLY"; H::delay(1000);
    }
    
    else if(Isusername == true && IsPassword == false)
    {
      H::gotoxy(73,32); H::setcolor(7); cout << "["; H::setcolor(6); cout << "WARNING"; 
      H::setcolor(7); cout << "]"; H::setcolor(4); cout << " INCORRECT PASSWORD !!"; H::delay(1000);
    }

    else if(Isusername == false && IsPassword == true)
    {
      H::gotoxy(73,32); H::setcolor(7); cout << "["; H::setcolor(6); cout << "WARNING"; 
      H::setcolor(7); cout << "]"; H::setcolor(4); cout << " INCORRECT USERNAME !!"; H::delay(1000);
    }

    else if(Isusername == false && IsPassword == false)
    {
      H::gotoxy(73,32); H::setcolor(7); cout << "["; H::setcolor(6); cout << "WARNING"; 
      H::setcolor(7); cout << "]"; H::setcolor(4); cout << " INCORRECT USERNAME AND PASSWORD !!"; H::delay(1000);
    }

   }
   
   if(vc.empty() && IsCorrected == true && Isusername == true && IsPassword == true)
   {
     H::gotoxy(73,32); H::setcolor(2); cout << " LOGIN SUCCESSFULLY"; H::delay(1000);
   }

   else if(vc.empty()&& IsCorrected == false && IsPassword == false && Isusername == false)
   {
     H::gotoxy(73,32); H::setcolor(7); cout << "["; H::setcolor(6); cout << "ALERT"; 
     H::setcolor(7); cout << "]"; H::setcolor(4); cout << " NO ACCOUNT DATA"; H::delay(1000);
   }

// SAVE LOGIN TEMP DATA //////////////////////////////////////

   vector<LoginTemp> lt ;
   
   lt.resize(1); lt[0].setIndex(index); lt[0].setUsername(userName); lt[0].setPassword(password);
   
   DNN::File<LoginTemp>::write("temp.dnn", &lt);

/////////////////////////////////////////////////////////////

   return IsCorrected;
}

#endif