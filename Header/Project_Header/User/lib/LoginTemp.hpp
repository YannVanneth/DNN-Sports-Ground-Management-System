#ifndef _LOGIN_RECORD_HPP
#define _LOGIN_RECORD_HPP

#include <cstring>

class LoginTemp
{
    private:
        int index;
        char username[20];
        char password[20];
    
    public:
        void setIndex(int index);
        void setUsername(const char* username);
        void setPassword(const char* password);
    
    public:
        int getIndex();
        const char* getUsername() const;
        const char* getPassword() const;
};

void LoginTemp::setIndex(int index)
{
    this->index = index;
}

void LoginTemp::setUsername(const char* username)
{
    strcpy(this->username, username);
}

void LoginTemp::setPassword(const char* password)
{
    strcpy(this->password, password);
}

int LoginTemp::getIndex()
{
    return this->index;
}

const char* LoginTemp::getUsername() const
{
    return this->username;
}

const char* LoginTemp::getPassword() const
{ 
    return this->password;
}


#endif