#ifndef _CLASSINSERT_H_
#define _CLASSINSERT_H_


#include "../Ground.hpp"
#include "design/DesignConsole.hpp"
#include "demofutsal.hpp"


void DNN::Ground::DataMember::DisplaySearch(int a,int b)
{
    H::setcursor(0,0);
    H::setcolor(3); H::gotoxy(a,b+=2); cout << "NUMBER         :          "; H::setcolor(2); cout << number_ground;
    
    H::setcolor(3); H::gotoxy(a,b+=2); cout << "STATUS         :          ";
    strcmp(ground_status,"OPEN") == 0 ? H::setcolor(2) : H::setcolor(4);     cout << ground_status;

    H::setcolor(3); H::gotoxy(a,b+=2); cout << "DATE           :          "; H::setcolor(2); cout << date;

    H::setcolor(3); H::gotoxy(a,b+=2); cout << "TEAM A [3-5]   :          ";                 
    strcmp(TeamA_Shift1,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    cout << TeamA_Shift1;

    H::setcolor(3); H::gotoxy(a,b+=2); cout << "TEAM B [3-5]   :          ";                 
    strcmp(TeamB_Shift1,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    cout << TeamB_Shift1;

    H::setcolor(3); H::gotoxy(a,b+=2); cout << "TEAM A [5-7]   :          ";                 
    strcmp(TeamA_Shift2,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    cout << TeamA_Shift2;

    H::setcolor(3); H::gotoxy(a,b+=2); cout << "TEAM B [5-7]   :          ";                 
    strcmp(TeamB_Shift2,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    cout << TeamB_Shift2;

    H::setcolor(3); H::gotoxy(a,b+=2); cout << "TEAM A [7-9]   :          ";                 
    strcmp(TeamA_Shift3,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    cout << TeamA_Shift3;

    H::setcolor(3); H::gotoxy(a,b+=2); cout << "TEAM B [7-9]   :          ";                 
    strcmp(TeamB_Shift3,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    cout << TeamB_Shift3;

    H::setcolor(3); H::gotoxy(a,b+=2); cout << "PRICE          :          "; H::setcolor(2); cout << "$ "; H::setcolor(3); cout << Price;
}

void DNN::Ground::DataMember::HeaderStatus(int a,int b)
{
    H::setcursor(0,0);
    H::gotoxy(a,b+=2); cout << "NUMBER      : ";
    H::gotoxy(a,b+=2); cout << "STATUS      : ";
    H::gotoxy(a,b+=2); cout << "DATE        : ";
    H::gotoxy(a,b+=2); cout << "TEAM A [3-5]: ";
    H::gotoxy(a,b+=2); cout << "TEAM B [3-5]: ";
    H::gotoxy(a,b+=2); cout << "TEAM A [5-7]: ";
    H::gotoxy(a,b+=2); cout << "TEAM B [5-7]: ";
    H::gotoxy(a,b+=2); cout << "TEAM A [7-9]: ";
    H::gotoxy(a,b+=2); cout << "TEAM B [7-9]: ";
    H::gotoxy(a,b+=2); cout << "PRICE       : ";
    
}

void DNN::Ground::DataMember::DisplayStatus(int a,int b)
{
    H::setcursor(0,0);
     H::setcolor(2); cout << number_ground;
    
    
    strcmp(ground_status,"OPEN") == 0 ? H::setcolor(2) : H::setcolor(4);     
    H::gotoxy(a,b+=2); cout << ground_status << " , ";

    H::gotoxy(a,b+=2); H::setcolor(2); cout << date << " , ";
                     
    strcmp(TeamA_Shift1,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    
    H::gotoxy(a,b+=2); cout << TeamA_Shift1 << " , ";
                     
    strcmp(TeamB_Shift1,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    
    H::gotoxy(a,b+=2); cout << TeamB_Shift1 << " , ";
                     
    strcmp(TeamA_Shift2,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    
    H::gotoxy(a,b+=2); cout << TeamA_Shift2 << " , ";
              
    strcmp(TeamB_Shift2,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    
    H::gotoxy(a,b+=2); cout << TeamB_Shift2 << " , ";
                     
    strcmp(TeamA_Shift3,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    
    H::gotoxy(a,b+=2); cout << TeamA_Shift3 << " , ";
                     
    strcmp(TeamB_Shift3,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);                    
    H::gotoxy(a,b+=2); cout << TeamB_Shift3 << " , ";

    H::gotoxy(a,b+=2); H::setcolor(2); cout << Price << " , ";
}

void DNN::Ground::DataMember::InputAll(){

    H::setcursor(1,1);
    H::gotoxy(117,32); 
                H::setcolor(72);cout << " PRESS ["; 
                H::setcolor(73); cout << " KEYBOARD "; 
                H::setcolor(72);cout << " ] TO INPUT DATA. ";
    H::delay(100);
    H::setcolor(79);
    H::gotoxy(117,14); cout<<"ENTER GROUND STATUS : ";
    H::gotoxy(42,18);  cout<<"TEAM A SHIFT 3-5 : ";
    H::gotoxy(117,18); cout<<"TEAM B SHIFT 3-5 : ";
    H::gotoxy(42,23);  cout<<"TEAM A SHIFT 5-7 : ";
    H::gotoxy(117,23); cout<<"TEAM B SHIFT 5-7 : ";
    H::gotoxy(42,28);  cout<<"TEAM A SHIFT 7-9 : ";
    H::gotoxy(117,28); cout<<"TEAM B SHIFT 7-9 : ";
    H::gotoxy(42,32);  cout<<"ENTER PRICE [ 2 H ] [ $ ] : ";
    // H::gotoxy(117,32); cout<<"ENTER DATE [ DD/MM/YYYY ] : ";

    ////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////// STATUS //////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    char g_status; int y=1;
    do
    {
        H::setcolor(75);
        H::gotoxy(140,14); cout<<"CLOSED";

        if(y==1)
        {
            H::setcolor(74);
            H::gotoxy(140,14);cout<<"CLOSED";
        }
        if(y==2)
        {
            H::setcolor(75);
            H::gotoxy(140,14);cout<<"OPEN  ";
        }

        g_status = getch();

        switch(g_status)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }

            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   


        }

    }while(g_status != 13);

    if(y==1) strcpy(ground_status,"CLOSED");
    if(y==2) strcpy(ground_status,"OPEN");

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// TEAM A SHIFT 1 /////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
    
    H::setcolor(73);

    H::gotoxy(67,18);  cout<<"NOTYET";          //// ----------TEAM A SHIFT 1---------------- ////
    H::gotoxy(140,18); cout<<"NOTYET";          //// ----------TEAM B SHIFT 2-----------------////
    H::gotoxy(67,23);  cout<<"NOTYET";          //// ----------TEAM A SHIFT 2---------------- ////      
    H::gotoxy(140,23); cout<<"NOTYET";          //// ----------TEAM B SHIFT 2---------------- ////
    H::gotoxy(67,28);  cout<<"NOTYET";          //// ----------TEAM A SHIFT 3---------------- ////
    H::gotoxy(140,28); cout<<"NOTYET";          //// ----------TEAM B SHIFT 3---------------- ////

    strcpy(TeamA_Shift1,"NOTYET");              //// ----------TEAM A SHIFT 1---------------- ////
    strcpy(TeamB_Shift1,"NOTYET");              //// ----------TEAM B SHIFT 1---------------- ////
    strcpy(TeamA_Shift2,"NOTYET");              //// ----------TEAM A SHIFT 2---------------- ////
    strcpy(TeamB_Shift2,"NOTYET");              //// ----------TEAM B SHIFT 2---------------- ////
    strcpy(TeamA_Shift3,"NOTYET");              //// ----------TEAM A SHIFT 3---------------- ////
    strcpy(TeamB_Shift3,"NOTYET");              //// ----------TEAM B SHIFT 3---------------- ////
    
    //char date[13];

    
    strcpy(date,DNN::DateAndTimes::getCurrentDate()); 
    

    char c_price[10];
    
    H::setcursor(1,1); H::setcolor(75);
    H::gotoxy(70,32);  H::inputNumber(c_price,5);
    Price = atof(c_price);
}


void DNN::Ground::DataMember::InputStatus(int a,int b)
{
    char g_status; int y=1;
    do
    {
        H::gotoxy(a,b); cout << "CLOSED";
        if(y==1)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout << "CLOSED";
        }
        if(y==2)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout << "OPEN  ";
        }
        g_status = getch();
        switch(g_status)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }

            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_status != 13);
    if(y==1) strcpy(ground_status,"CLOSED");
    if(y==2) strcpy(ground_status,"OPEN");
}

void DNN::Ground::DataMember::InputTeamAShift1(int a,int b)
{
    char g_SHIFT1A;  int x=1,y=1;
    do
    {
        H::gotoxy(a,b); cout << "NOTYET"; 
        if(y==1)
        {
            H::gotoxy(a,b);  cout << "NOTYET";
        }
        if(y==2)
        {
            H::gotoxy(a,b);  cout << "BOOKED ";
        }
        g_SHIFT1A = getch();
        switch(g_SHIFT1A)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }
            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT1A != 13);
    if(y==1) strcpy(TeamA_Shift1,"NOTYET");
    if(y==2) strcpy(TeamA_Shift1,"BOOKED");
}

void DNN::Ground::DataMember::InputTeamBShift1(int a,int b)
{
    char g_SHIFT1B; int x=1,y=1;
    do
    {
        H::gotoxy(a,b); cout << "NOTYET";
        if(y==1)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout << "NOTYET";
        }
        if(y==2)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout << "BOOKED ";
        }
        g_SHIFT1B = getch();
        switch(g_SHIFT1B)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }
            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT1B != 13);
    if(y==1) strcpy(TeamB_Shift1,"NOTYET");
    if(y==2) strcpy(TeamB_Shift1,"BOOKED");
}

void DNN::Ground::DataMember::InputTeamAShift2(int a,int b)
{
    char g_SHIFT2A; int x=1,y=1; 
    do
    {
        H::gotoxy(a,b); cout << "NOTYET";
        if(y==1)
        {
            H::setcursor(0,0); 
            H::gotoxy(a,b); cout << "NOTYET";
        }
        if(y==2)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout<<"BOOKED  ";
        }
        g_SHIFT2A = getch();
        switch(g_SHIFT2A)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }
            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT2A != 13);
    if(y==1) strcpy(TeamA_Shift2,"NOTYET");
    if(y==2) strcpy(TeamA_Shift2,"BOOKED");
}

void DNN::Ground::DataMember::InputTeamBShift2(int a,int b)
{
    char g_SHIFT2B; int x=1,y=1;
    do
    {
        H::gotoxy(a,b); cout<<"NOTYET";
        if(y==1)
        {
            H::setcursor(0,0); 
            H::gotoxy(a,b);cout<<"NOTYET";
        }
        if(y==2)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout<<"BOOKED    ";
        }
        g_SHIFT2B = getch();
        switch(g_SHIFT2B)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }

            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT2B != 13);
    if(y==1) strcpy(TeamB_Shift2,"NOTYET");
    if(y==2) strcpy(TeamB_Shift2,"BOOKED");
}
void DNN::Ground::DataMember::InputTeamAShift3(int a,int b)
{
    char g_SHIFT3A;  int x=1,y=1; 
    do
    {
        H::gotoxy(a,b); cout << "NOTYET";
        if(y==1)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout << "NOTYET";
        }
        if(y==2)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout << "BOOKED  ";
        }
        g_SHIFT3A = getch();
        switch(g_SHIFT3A)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }
            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT3A != 13);
    if(y==1) strcpy(TeamA_Shift3,"NOTYET");
    if(y==2) strcpy(TeamA_Shift3,"BOOKED");
}

void DNN::Ground::DataMember::InputTeamBShift3(int a,int b)
{
    char g_SHIFT3B;  int x=1,y=1;
    do
    {
        H::setcursor(0,0); 
        H::gotoxy(a,b); cout << "NOTYET";
        if(y==1)
        {
            H::setcursor(0,0); 
            H::gotoxy(a,b); cout << "NOTYET";
        }
        if(y==2)
        {
            H::setcursor(0,0);
            H::gotoxy(a,b); cout << "BOOKED ";
        }
        g_SHIFT3B = getch();
        switch(g_SHIFT3B)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }
            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT3B != 13);
    if(y==1) strcpy(TeamB_Shift3,"NOTYET");
    if(y==2) strcpy(TeamB_Shift3,"BOOKED");
}

void DNN::Ground::DataMember::InputPrice(int a,int b)
{
    char c_price[10];
    H::setcursor(1,1); H::gotoxy(a,b); H::inputNumber(c_price,5);
    Price = atof(c_price);
}
void DNN::Ground::DataMember::Inputdate(int a,int b)
{
    H::setcursor(1,1); 
    H::gotoxy(a,b);
    DNN::input::inputDate(date);
}
void DNN::Ground::DataMember::Display()
{
    H::setcursor(0,0); 
    
    cout<<left<<fixed<<setprecision(2);
    H::setcolor(4); cout<<setw(15)<<number_ground;
    H::setcolor(1); cout<<setw(15)<<date;

    strcmp(ground_status,"OPEN") == 0 ? H::setcolor(2) : H::setcolor(4);
    cout<<setw(20)<<ground_status;

    strcmp(TeamA_Shift1,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
    cout<<setw(20)<<TeamA_Shift1;

    strcmp(TeamB_Shift1,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
    cout<<setw(20)<<TeamB_Shift1;

    strcmp(TeamA_Shift2,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
    cout<<setw(20)<<TeamA_Shift2;
    
    strcmp(TeamB_Shift2,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
    cout<<setw(20)<<TeamB_Shift2;
    
    strcmp(TeamA_Shift3,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
    cout<<setw(20)<<TeamA_Shift3;
    
    strcmp(TeamB_Shift3,"BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
    cout<<setw(20)<<TeamB_Shift3;
    
    H::setcolor(7); cout<<setw(2)<<"$ "; H::setcolor(3); cout <<Price; 
}

void DNN::Ground::DataMember::Header()
{
    H::setcursor(0,0); 
    H::setcolor(2);
    cout<<left<<fixed<<setprecision(2);
    cout << setw(15) <<"NUMBER";
    cout << setw(15) <<"DATE";
    cout << setw(20) <<"STATUS";
    cout << setw(20) <<"TEAM A [ 3-5 ]";
    cout << setw(20) <<"TEAM B [ 3-5 ]";
    cout << setw(20) <<"TEAM A [ 5-7 ]";
    cout << setw(20) <<"TEAM B [ 5-7 ]";
    cout << setw(20) <<"TEAM A [ 7-9 ]";
    cout << setw(20) <<"TEAM B [ 7-9 ]";
    cout << "PRICE";
}
void DNN::Ground::DataMember::NewUpdateAll()
{

    H::setcursor(0,0);

    // H::gotoxy(45,13); cout << number_ground;

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// DATE ///////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    //  H::setcolor(43);H::clearBox(25,14,13,1,47);
    // H::gotoxy(25,14); DNN::input::inputDate(date);

    ////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////// STATUS //////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    H::setcursor(1,1);

    char g_status; int y=1;
    
    do
    {
        H::setcolor(4);
        H::gotoxy(40,14); cout<<"CLOSED";

        if(y==1)
        {
            H::setcolor(4);
            H::gotoxy(40,14);cout<<"CLOSED";
        }
        if(y==2)
        {
            H::setcolor(2);
            H::gotoxy(40,14);cout<<"OPEN  ";
        }

        g_status = getch();

        switch(g_status)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }

            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   


        }

    }while(g_status != 13);

    if(y==1) strcpy(ground_status,"CLOSED");
    if(y==2) strcpy(ground_status,"OPEN");

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// TEAM A SHIFT 1 /////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    char g_SHIFT1A;  
   
    do
    {
        H::setcolor(4);
        H::gotoxy(60,14); cout << "NOTYET";
        if(y==1)
        {
            H::setcolor(4);
            H::gotoxy(60,14); cout << "NOTYET";
        }
        if(y==2)
        {
            H::setcolor(2);
            H::gotoxy(60,14); cout << "BOOKED   ";
        }

        g_SHIFT1A = getch();

        switch(g_SHIFT1A)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2;break;
            }

            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   


        }

    }while(g_SHIFT1A != 13);

    if(y==1) strcpy(TeamA_Shift1,"NOTYET");
    if(y==2) strcpy(TeamA_Shift1,"BOOKED");

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// TEAM B SHIFT 1 /////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    char g_SHIFT1B;
    do
    {
        H::setcolor(4);
        H::gotoxy(80,14); cout<<"NOTYET";
        if(y==1)
        {
            H::setcolor(4);
            H::gotoxy(80,14);cout<<"NOTYET";
        }
        if(y==2)
        {
            H::setcolor(2);
            H::gotoxy(80,14);cout<<"BOOKED    ";
        }
        g_SHIFT1B = getch();
        switch(g_SHIFT1B)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }

            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }

    }while(g_SHIFT1B != 13);
    if(y==1) strcpy(TeamB_Shift1,"NOTYET");
    if(y==2) strcpy(TeamB_Shift1,"BOOKED");

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// TEAM A SHIFT 2 /////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    char g_SHIFT2A; 
    do
    {
        H::setcolor(4);
        H::gotoxy(100,14); cout<<"NOTYET";
        if(y==1)
        {
            H::setcolor(4);
            H::gotoxy(100,14); cout<<"NOTYET";
        }
        if(y==2)
        {
            H::setcolor(2);
            H::gotoxy(100,14);cout<<"BOOKED ";
        }
        g_SHIFT2A = getch();
        switch(g_SHIFT2A)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }

            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT2A != 13);

    if(y==1) strcpy(TeamA_Shift2,"NOTYET");
    if(y==2) strcpy(TeamA_Shift2,"BOOKED");

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// TEAM B SHIFT 2 /////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    char g_SHIFT2B; 
    do
    {
        H::setcolor(4);
        H::gotoxy(120,14); cout<<"NOTYET";
        if(y==1)
        {
            H::setcolor(4);
            H::gotoxy(120,14);cout<<"NOTYET";
        }
        if(y==2)
        {
            H::setcolor(2);
            H::gotoxy(120,14);cout<<"BOOKED ";
        }
        g_SHIFT2B = getch();
        switch(g_SHIFT2B)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }
            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT2B != 13);
    if(y==1) strcpy(TeamB_Shift2,"NOTYET");
    if(y==2) strcpy(TeamB_Shift2,"BOOKED");

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// TEAM A SHIFT 3 /////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////
  
    char g_SHIFT3A; 
    do 
    {
        H::setcolor(4);
        H::gotoxy(140,14); cout<<"NOTYET";
        if(y==1)
        {
            H::setcolor(4);
            H::gotoxy(140,14); cout<<"NOTYET";
        }
        if(y==2)
        {
            H::setcolor(2);
            H::gotoxy(140,14);cout<<"BOOKED  ";
        }
        g_SHIFT3A = getch();
        switch(g_SHIFT3A)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }

            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT3A != 13);
    if(y==1) strcpy(TeamA_Shift3,"NOTYET");
    if(y==2) strcpy(TeamA_Shift3,"BOOKED");

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// TEAM B SHIFT 3 /////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    char g_SHIFT3B;
    do
    {
        H::setcolor(4);
        H::gotoxy(160,14); cout<<"NOTYET";
        if(y==1)
        {
            H::setcolor(4);
            H::gotoxy(160,14); cout<<"NOTYET";
        }
        if(y==2)
        {
            H::setcolor(2);
            H::gotoxy(160,14);cout<<"BOOKED ";
        }

        g_SHIFT3B = getch();

        switch(g_SHIFT3B)
        {
            case 75:
            { //left
                y--;
                if(y<1) y=2; break;
            }
            case 77:
            {//right
                y++;
                if(y>2) y=1; break;
            }
            case 72:
            {//up
                y--;
                if(y<1) y=2; break;
            }
            case 80:
            {//down
                y++;
                if(y>2) y=1; break;
            }   
        }
    }while(g_SHIFT3B != 13);
    if(y==1) strcpy(TeamB_Shift3,"NOTYET");
    if(y==2) strcpy(TeamB_Shift3,"BOOKED");

    ////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////// PRICE //////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////

    char c_price[10];
    H::clearBox(180,14,13,1,1);
    H::setcursor(1,1); H::setcolor(3);
    H::gotoxy(180,14);  H::inputNumber(c_price,5);
    Price = atof(c_price);

}


#endif