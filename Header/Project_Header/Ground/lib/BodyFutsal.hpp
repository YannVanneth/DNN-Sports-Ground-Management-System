#ifndef _BODY_FUTSAL_H
#define _BODY_FUTSAL_H

#include "../Ground.hpp"



DNN::Ground::Fusal::Fusal(int number_ground, const char* ground_status, const char* TeamA_Shift1, const char* TeamB_Shift1, const char* TeamA_Shift2, const char* TeamB_Shift2, const char* TeamA_Shift3, const char* TeamB_Shift3, double Price){

    this->number_ground = number_ground;
    strcpy(this->ground_status,ground_status);
    strcpy(this->TeamA_Shift1,TeamA_Shift1);
    strcpy(this->TeamB_Shift1,TeamB_Shift1);
    strcpy(this->TeamA_Shift2,TeamA_Shift2);
    strcpy(this->TeamB_Shift2,TeamB_Shift2);
    strcpy(this->TeamA_Shift3,TeamA_Shift3);
    strcpy(this->TeamB_Shift3,TeamB_Shift3);
    this->Price = Price;
}
void DNN::Ground::Fusal::SetNumber(int number_ground){this->number_ground = number_ground;}
int DNN::Ground::Fusal::GetNumber() const {return this->number_ground;}
double DNN::Ground::Fusal::GetPrice(){return Price;}
const char* DNN::Ground::Fusal::GetStatus() const {return ground_status;}
const char* DNN::Ground::Fusal::GetDate() const {return date;}

void DNN::Ground::Fusal::SetTeamA_Shift1(const char *TeamA_Shift1){strcpy(this->TeamA_Shift1,TeamA_Shift1);}
void DNN::Ground::Fusal::SetTeamB_Shift1(const char *TeamB_Shift1){strcpy(this->TeamB_Shift1,TeamB_Shift1);}
void DNN::Ground::Fusal::SetTeamA_Shift2(const char *TeamA_Shift2){strcpy(this->TeamA_Shift2,TeamA_Shift2);}
void DNN::Ground::Fusal::SetTeamB_Shift2(const char *TeamB_Shift2){strcpy(this->TeamB_Shift2,TeamB_Shift2);}
void DNN::Ground::Fusal::SetTeamA_Shift3(const char *TeamA_Shift3){strcpy(this->TeamA_Shift3,TeamA_Shift3);}
void DNN::Ground::Fusal::SetTeamB_Shift3(const char *TeamB_Shift3){strcpy(this->TeamB_Shift3,TeamB_Shift3);}

const char* DNN::Ground::Fusal::GetTeamA_Shift1() const {return TeamA_Shift1;}
const char* DNN::Ground::Fusal::GetTeamB_Shift1() const {return TeamB_Shift1;}
const char* DNN::Ground::Fusal::GetTeamA_Shift2() const {return TeamA_Shift2;}
const char* DNN::Ground::Fusal::GetTeamB_Shift2() const {return TeamB_Shift2;}
const char* DNN::Ground::Fusal::GetTeamA_Shift3() const {return TeamA_Shift3;}
const char* DNN::Ground::Fusal::GetTeamB_Shift3() const {return TeamB_Shift3;}

/////////////////////////////////////////////////////////////
////////// VOLLEYBALL ////////////////////////////////////////
/////////////////////////////////////////////////////////////

DNN::Ground::Volleyball::Volleyball(int number_ground, const char* ground_status, const char* TeamA_Shift1, const char* TeamB_Shift1, const char* TeamA_Shift2, const char* TeamB_Shift2, const char* TeamA_Shift3, const char* TeamB_Shift3, double Price){

    this->number_ground = number_ground;
    strcpy(this->ground_status,ground_status);
    strcpy(this->TeamA_Shift1,TeamA_Shift1);
    strcpy(this->TeamB_Shift1,TeamB_Shift1);
    strcpy(this->TeamA_Shift2,TeamA_Shift2);
    strcpy(this->TeamB_Shift2,TeamB_Shift2);
    strcpy(this->TeamA_Shift3,TeamA_Shift3);
    strcpy(this->TeamB_Shift3,TeamB_Shift3);
    this->Price = Price;
}

int DNN::Ground::Volleyball::GetVolleyballNumber() const {return this->number_ground;}
void DNN::Ground::Volleyball::SetVolleyballNumber(int number_ground){this->number_ground = number_ground;}
double DNN::Ground::Volleyball::GetPrice(){return Price;}
const char* DNN::Ground::Volleyball::GetStatus() const {return ground_status;}
const char* DNN::Ground::Volleyball::GetDate() const {return date;}

void DNN::Ground::Volleyball::SetTeamA_Shift1(const char *TeamA_Shift1){strcpy(this->TeamA_Shift1,TeamA_Shift1);}
void DNN::Ground::Volleyball::SetTeamB_Shift1(const char *TeamB_Shift1){strcpy(this->TeamB_Shift1,TeamB_Shift1);}
void DNN::Ground::Volleyball::SetTeamA_Shift2(const char *TeamA_Shift2){strcpy(this->TeamA_Shift2,TeamA_Shift2);}
void DNN::Ground::Volleyball::SetTeamB_Shift2(const char *TeamB_Shift2){strcpy(this->TeamB_Shift2,TeamB_Shift2);}
void DNN::Ground::Volleyball::SetTeamA_Shift3(const char *TeamA_Shift3){strcpy(this->TeamA_Shift3,TeamA_Shift3);}
void DNN::Ground::Volleyball::SetTeamB_Shift3(const char *TeamB_Shift3){strcpy(this->TeamB_Shift3,TeamB_Shift3);}

const char* DNN::Ground::Volleyball::GetTeamA_Shift1() const {return TeamA_Shift1;}
const char* DNN::Ground::Volleyball::GetTeamB_Shift1() const {return TeamB_Shift1;}
const char* DNN::Ground::Volleyball::GetTeamA_Shift2() const {return TeamA_Shift2;}
const char* DNN::Ground::Volleyball::GetTeamB_Shift2() const {return TeamB_Shift2;}
const char* DNN::Ground::Volleyball::GetTeamA_Shift3() const {return TeamA_Shift3;}
const char* DNN::Ground::Volleyball::GetTeamB_Shift3() const {return TeamB_Shift3;}

//////////////////////////////////////////////////////////////
////////// BASKETBALL ////////////////////////////////////////
/////////////////////////////////////////////////////////////

DNN::Ground::Basketball::Basketball(int number_ground, const char* ground_status, const char* TeamA_Shift1, const char* TeamB_Shift1, const char* TeamA_Shift2, const char* TeamB_Shift2, const char* TeamA_Shift3, const char* TeamB_Shift3, double Price)
{
    this->number_ground = number_ground;
    strcpy(this->ground_status,ground_status);
    strcpy(this->TeamA_Shift1,TeamA_Shift1);
    strcpy(this->TeamB_Shift1,TeamB_Shift1);
    strcpy(this->TeamA_Shift2,TeamA_Shift2);
    strcpy(this->TeamB_Shift2,TeamB_Shift2);
    strcpy(this->TeamA_Shift3,TeamA_Shift3);    
    strcpy(this->TeamB_Shift3,TeamB_Shift3);
    this->Price = Price;
}

int DNN::Ground::Basketball::GetNumber() const {return this->number_ground;}
void DNN::Ground::Basketball::SetNumber(int number_ground){this->number_ground = number_ground;}
double DNN::Ground::Basketball::GetPrice(){return Price;}
const char* DNN::Ground::Basketball::GetStatus() const {return ground_status;}
const char* DNN::Ground::Basketball::GetDate() const {return date;}

void DNN::Ground::Basketball::SetTeamA_Shift1(const char *TeamA_Shift1){strcpy(this->TeamA_Shift1,TeamA_Shift1);}
void DNN::Ground::Basketball::SetTeamB_Shift1(const char *TeamB_Shift1){strcpy(this->TeamB_Shift1,TeamB_Shift1);}
void DNN::Ground::Basketball::SetTeamA_Shift2(const char *TeamA_Shift2){strcpy(this->TeamA_Shift2,TeamA_Shift2);}
void DNN::Ground::Basketball::SetTeamB_Shift2(const char *TeamB_Shift2){strcpy(this->TeamB_Shift2,TeamB_Shift2);}
void DNN::Ground::Basketball::SetTeamA_Shift3(const char *TeamA_Shift3){strcpy(this->TeamA_Shift3,TeamA_Shift3);}
void DNN::Ground::Basketball::SetTeamB_Shift3(const char *TeamB_Shift3){strcpy(this->TeamB_Shift3,TeamB_Shift3);}

const char* DNN::Ground::Basketball::GetTeamA_Shift1() const {return TeamA_Shift1;}
const char* DNN::Ground::Basketball::GetTeamB_Shift1() const {return TeamB_Shift1;}
const char* DNN::Ground::Basketball::GetTeamA_Shift2() const {return TeamA_Shift2;}
const char* DNN::Ground::Basketball::GetTeamB_Shift2() const {return TeamB_Shift2;}
const char* DNN::Ground::Basketball::GetTeamA_Shift3() const {return TeamA_Shift3;}
const char* DNN::Ground::Basketball::GetTeamB_Shift3() const {return TeamB_Shift3;}
void DNN::Ground::Basketball::DisplayInvoiceSh1(){
    cout << "Team A Shift 1: " << TeamA_Shift1 << endl;
    cout << "Team B Shift 1: " << TeamB_Shift1 << endl;
}
void DNN::Ground::Basketball::DisplayInvoiceSh2(){
    cout << "Team A Shift 2: " << TeamA_Shift2 << endl;
    cout << "Team B Shift 2: " << TeamB_Shift2 << endl;
}
void DNN::Ground::Basketball::DisplayInvoiceSh3(){
    cout << "Team A Shift 3: " << TeamA_Shift3 << endl;
    cout << "Team B Shift 3: " << TeamB_Shift3 << endl;
}


#endif