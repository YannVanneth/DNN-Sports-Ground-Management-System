#ifndef __DNN_BOOKINGCLASS_H__
#define __DNN_BOOKINGCLASS_H__

#include "../Booking.hpp"
#include "../../Invoice/invoice.hpp"

////////////////////////////////////////////
///////////// CLASS DEFINITION /////////////
///////////////////////////////////////////

//////////////////////////////////////////
/////// BOOKING PROGRAM RUN /////////////
////////////////////////////////////////

void DNN::Ground::Booking::Program::Run()
{
    char press; int y = 1;
    
    again:
    H::clearBox(0,0,200,50,7);
    
    DNN::Design::Booking::Home(1,1);
    
    H::gotoxy(8,41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
    cout << " PRESS ARROW KEYS"; H::setcolor(6); cout << " LEFT"; H::setcolor(7); cout << ","; H::setcolor(6); cout << " RIGHT"; 
    H::setcolor(7); cout << ",";  H::setcolor(6); cout << " UP"; H::setcolor(7); cout << " AND"; H::setcolor(6); cout << " DOWN"; 
    H::setcolor(7); cout << " TO NAVIGATE.";
    H::gotoxy(8,43); H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << " ENTER KEY"; H::setcolor(7); cout << " TO SELECT THE OPTIONS.";

    do
    {
        H::drawBoxDoubleLineWithBG(1+9+10,1+17+2,30,1,55); H::gotoxy(1+14+10,1+18+2); H::setcolor(55); cout << "ADD / CANCEL BOOKING";
        H::drawBoxDoubleLineWithBG(1+9+10,1+21+2,30,1,55); H::gotoxy(1+14+10,1+22+2); H::setcolor(55); cout << "   INSERT INVOICES  ";
        H::drawBoxDoubleLineWithBG(1+9+10,1+25+2,30,1,55); H::gotoxy(1+14+10,1+26+2); H::setcolor(55); cout << "   VIEW INVOICES    ";
        H::drawBoxDoubleLineWithBG(1+9+10,1+29+2,30,1,55); H::gotoxy(1+14+10,1+30+2); H::setcolor(55); cout << "    SEARCH INVOICE  ";
        H::drawBoxDoubleLineWithBG(1+9+10,1+33+2,30,1,55); H::gotoxy(1+14+10,1+34+2); H::setcolor(55); cout << " BACK TO MAIN MENU  ";

        if(y == 1) 
        {
           H::drawBoxDoubleLineWithBG(1+9+10,1+17+2,30,1, 135); H::gotoxy(1+14+10,1+18+2); H::setcolor(135); cout << "ADD / CANCEL BOOKING"; 
        }

        if(y == 2)
        {
            H::drawBoxDoubleLineWithBG(1+9+10,1+21+2,30,1, 135); H::gotoxy(1+14+10,1+22+2); H::setcolor(135); cout << "   INSERT INVOICES  ";
        }

        if(y == 3)
        {
            H::drawBoxDoubleLineWithBG(1+9+10,1+25+2,30,1, 135); H::gotoxy(1+14+10,1+26+2); H::setcolor(135); cout << "   VIEW INVOICES    ";
        }

        if(y == 4)
        {
            H::drawBoxDoubleLineWithBG(1+9+10,1+29+2,30,1,135); H::gotoxy(1+14+10,1+30+2); H::setcolor(135); cout << "    SEARCH INVOICE  ";
        }

        if(y == 5)
        {
           H::drawBoxDoubleLineWithBG(1+9+10,1+33+2,30,1,135); H::gotoxy(1+14+10,1+34+2); H::setcolor(135); cout << " BACK TO MAIN MENU  "; 
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

            case KEY_ARROW_LEFT: y--;
            {
                if(y < 1) y = 5;
            }
            break;

            case KEY_ARROW_RIGHT: y++;
            {
                if(y > 5) y = 1;
            }
            break;
        }
    } while (press != KEY_ENTER);

    if(y == 1) 
    {
        for(int i = 1+9+10; i > 1+9; i--)
        {
            H::drawBoxDoubleLineWithBG(i,1+17+2,30,1,55); H::gotoxy(i+5,1+18+2); H::setcolor(55); cout << "ADD / CANCEL BOOKING";
            for(int j = 0; j < 3; j++)
            {
                H::gotoxy(i+31,1+17+2+j); H::setcolor(7); cout << " "; 
            }
            H::delay(10);

            H::drawBoxDoubleLineWithBG(i,1+21+2,30,1,55); H::gotoxy(i+5,1+22+2); H::setcolor(55); cout << "   INSERT INVOICES  ";
            for(int j = 0; j < 3; j++) 
            {
                H::gotoxy(i+31,1+21+2+j); H::setcolor(7); cout << " ";
            } 
            H::delay(10);
            
            H::drawBoxDoubleLineWithBG(i,1+25+2,30,1,55); H::gotoxy(i+5,1+26+2); H::setcolor(55); cout << "   VIEW INVOICES    ";
            for(int j = 0; j < 3; j++) 
            {
                H::gotoxy(i+31,1+25+2+j); H::setcolor(7); cout << " "; 
            }
            H::delay(10);
            
            H::drawBoxDoubleLineWithBG(i,1+29+2,30,1,55); H::gotoxy(i+5,1+30+2); H::setcolor(55); cout << "    SEARCH INVOICE  ";
            for(int j = 0; j < 3; j++)
            {
               H::gotoxy(i+31,1+29+2+j); H::setcolor(7); cout << " "; 
            } 
            H::delay(10);

            H::drawBoxDoubleLineWithBG(i,1+33+2,30,1,55); H::gotoxy(i+5,1+34+2); H::setcolor(55); cout << " BACK TO MAIN MENU  ";
            for(int j = 0; j < 3; j++)
            {
               H::gotoxy(i+31,1+33+2+j); H::setcolor(7); cout << " "; 
            } 
            H::delay(10);
            
        }

        // READING DATA FROM FILE //

        vector<DNN::Ground::Fusal> fusal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
        vector<DNN::Ground::Basketball> basketball = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
        vector<DNN::Ground::Volleyball> volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");

        for(int i = 0; i < 20; i++)
        {
            H::drawBoxSingleLineWithBG(1+9+10+30,1+17+2,i,1,6); H::delay(30);
        }
        
        H::gotoxy(8,41); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";
        H::gotoxy(8,43); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";

        H::gotoxy(8,41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
        cout << " PRESS ARROW KEYS"; H::setcolor(6); cout << " LEFT"; H::setcolor(7); cout << ","; H::setcolor(6); cout << " RIGHT"; 
        H::setcolor(7); cout << ",";  H::setcolor(6); cout << " UP"; H::setcolor(7); cout << " AND"; H::setcolor(6); cout << " DOWN"; 
        H::setcolor(7); cout << " TO SELECT THE OPTIONS."; 
        H::gotoxy(8,43); H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ENTER KEY"; H::setcolor(7); cout << " TO SELECT OR PRESS";
        H::setcolor(6); cout << " ESC"; H::setcolor(7); cout << " TO BACK.";

        int d = 1;
        do
        {
           if(d == 1)
           {
            H::setcolor(7); H::gotoxy(1+9+10+30+2,1+17+2+1); cout << "     FUSAL       ";
           }
           if(d == 2)
           { 
            H::setcolor(7); H::gotoxy(1+9+10+30+2,1+17+2+1); cout << "   BASKETBALL    ";
           }
           if(d == 3)
           {
            H::setcolor(7); H::gotoxy(1+9+10+30+2,1+17+2+1); cout << "   VOLLEYBALL    ";
           }

           press = getch();

           switch(press)
           {
               case KEY_ARROW_UP: d--;
               {
                   if( d < 1) d = 3;
               }
               break;

               case KEY_ARROW_DOWN: d++;
               {
                   if(d > 3) d = 1;
               }
               break;

               case KEY_ESC: goto again; break;
           }
           
        }while(press != KEY_ENTER);

        if(d == 1) // Futsal
        {
           if(fusal.empty()) 
           {
             H::gotoxy(8,41); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";
             H::gotoxy(8,43); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";

             H::gotoxy(8,41);
             H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
             H::setcolor(4); cout << " NO FUTSAL DATA FOUND !";
             H::gotoxy(8,43); H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE.";

             getch(); goto again;
           }

           for(int i = 1+9+10+150; i > 6; i--)
           {
                H::VLine(i,1+15+1,27,7,178); 

                for(int j = 0; j < 28; j++)
                {
                    H::gotoxy(i,1+15+1+j); H::setcolor(7); cout << " ";
                }

                H::delay(10);
           }

           for(int j = 0; j < 28; j++)
           {
             H::gotoxy(6,1+15+1+j); H::setcolor(7); cout << " ";
           }
           
           SelectAgain2:
           DNN::Ground::Fusal::DataMember d;

           vector<DNN::Ground::Fusal> vc = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");

           H::gotoxy(10,1+15+1); d.Header();

           for(int i = 0; i < vc.size(); i++)
           {
             H::gotoxy(10,1+15+3+i); vc[i].Display();
           }

           H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

           H::gotoxy(30,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
           H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << ", ";
           H::setcolor(6); cout << "DOWN"; H::setcolor(7); cout << ", "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << ", "; H::setcolor(6); cout << "RIGHT"; 
           H::setcolor(7); cout << " TO NAVIGATE."; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO SELECT THE GROUND THAT YOU WANT TO BOOKING. PRESS "; 
           H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK.";

           int h = 1;

           do
           {
                H::setcolor(7);H::gotoxy(10,1+15+1); d.Header();

                if(h == 1)
                {
                   H::setcolor(6); H::gotoxy(60,1+15+1); cout <<"TEAM A [ 3-5 ]";
                }

                if(h == 2)
                {
                   H::setcolor(6); H::gotoxy(80,1+15+1); cout <<"TEAM B [ 3-5 ]";
                }

                if(h == 3)
                {
                   H::setcolor(6); H::gotoxy(100,1+15+1); cout <<"TEAM A [ 5-7 ]";
                }

                if(h == 4)
                {
                   H::setcolor(6); H::gotoxy(120,1+15+1); cout <<"TEAM B [ 5-7 ]";
                }

                if(h == 5)
                {
                   H::setcolor(6); H::gotoxy(140,1+15+1); cout <<"TEAM A [ 7-9 ]";
                }

                if(h == 6)
                {
                   H::setcolor(6); H::gotoxy(160,1+15+1); cout <<"TEAM B [ 7-9 ]";
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: h--;
                    {
                        if(h < 1) h = 6;
                    }
                    break;

                    case KEY_ARROW_DOWN: h++;
                    {
                        if(h > 6) h = 1;
                    }
                    break;

                    case KEY_ARROW_LEFT: h--;
                    {
                        if(h < 1) h = 6;
                    }
                    break;

                    case KEY_ARROW_RIGHT: h++;
                    {
                        if(h > 6) h = 1;
                    }
                    break;

                    case KEY_ESC: DNN::Ground::Booking::Program::Run(); break;
                }
           }while(press != KEY_ENTER);

           if(h == 1) // Team A Shift 3-5
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              
              b.resize(1500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(60,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(60,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamA_Shift1(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(60,1+15+3+i); cout << vc[i].GetTeamA_Shift1();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift1("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamA_Shift1());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e].setTime_Shift("3-5"); b[e].setType("Futsal");
                  b[e].setTeamA(teamA); b[e].setBookingDate(date); b[e].setGroundNo(e+1);
                  
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift1("NOTYET");
                  b[e].setTeamA("NOTYET"); strcpy(b[e].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(39,47); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    H::gotoxy(60,47); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,47); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain2;
                }
            }

            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vc);

           }

           if(h == 2) // Team B Shift 3-5
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn"); 
              b.resize(1500);

              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(80,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(80,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamB_Shift1(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(80,1+15+3+i); cout << vc[i].GetTeamB_Shift1();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamB_Shift1("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamB_Shift1());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e].setTime_Shift("3-5"); b[e].setType("Futsal");
                  b[e].setTeamB(teamA); b[e].setBookingDate(date); b[e].setGroundNo(e+1);
                  b[e].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[i].SetTeamB_Shift1("NOTYET");
                  b[e].setTeamB("NOTYET"); strcpy(b[e].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain2;
                }
            }

            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vc);
        }

           if(h == 3) // Team A Shift 5-7
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              b.resize(1500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(100,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(100,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamA_Shift2(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(100,1+15+3+i); cout << vc[i].GetTeamA_Shift2();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift2("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamA_Shift2());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+50].setTime_Shift("5-7"); b[e+50].setType("Futsal");
                  b[e+50].setTeamA(teamA); b[e+50].setBookingDate(date); b[e+50].setGroundNo(e+1);
                  b[e+50].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift2("NOTYET");
                  b[e+50].setTeamA("NOTYET"); strcpy(b[e+50].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,47); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,47); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,47); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain2;
                }
            }
            
            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vc);

           }    

           if(h == 4) // Team B Shift 5-7
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              b.resize(1500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(120,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(120,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamB_Shift2(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(120,1+15+3+i); cout << vc[i].GetTeamB_Shift2();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamB_Shift2("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamB_Shift2());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+50].setTime_Shift("5-7"); b[e+50].setType("Futsal");
                  b[e+50].setTeamB(teamA); b[e+50].setBookingDate(date); b[e+50].setGroundNo(e+1);
                  b[e+50].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamB_Shift2("NOTYET");
                  b[e+50].setTeamB("NOTYET"); strcpy(b[e+50].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain2;
                }
            }
            
            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vc);

           }    
           
           if(h == 5) // Team A Shift 7-9
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              b.resize(1500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(140,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(140,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamA_Shift3(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(140,1+15+3+i); cout << vc[i].GetTeamA_Shift3();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift3("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamA_Shift3());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+100].setTime_Shift("7-9"); b[e+100].setType("Futsal");
                  b[e+100].setTeamA(teamA); b[e+100].setBookingDate(date); b[e+100].setGroundNo(e+1);
                  b[e+100].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift3("NOTYET");
                  b[e+100].setTeamA("NOTYET"); strcpy(b[e+100].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain2;
                }
            }
            
            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vc);

           }    

           if(h == 6) // Team B Shift 7-9
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              b.resize(1500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(160,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(160,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamB_Shift3(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(160,1+15+3+i); cout << vc[i].GetTeamB_Shift3();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamB_Shift3("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamB_Shift3());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+100].setTime_Shift("7-9"); b[e+100].setType("Futsal");
                  b[e+100].setTeamB(teamA); b[e+100].setBookingDate(date); b[e+100].setGroundNo(e+1);
                  b[e+100].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e+100].SetTeamB_Shift3("NOTYET");
                  b[e+100].setTeamB("NOTYET"); strcpy(b[e].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain2;
                }
            }
            
            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vc);

        } 
    
          
           H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

           H::gotoxy(30,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
           H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO ADD MORE BOOKING/CANCEL GROUND. ";
           H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK TO MAIN MENU.";

           tdel1:
           press = getch();
          
           if(press == KEY_ESC)
           {
            goto again;
           }

           if(press == KEY_ENTER)
           { 
            goto SelectAgain2;
           }

           else 
           {
            goto tdel1;
           }
    }
    
        if(d == 2) // BASKETBALL
        {
           if(basketball.empty()) 
           {
             H::gotoxy(8,41); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";
             H::gotoxy(8,43); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";

             H::gotoxy(8,41);
             H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
             H::setcolor(4); cout << " NO BASKETBALL DATA FOUND !";
             
             H::gotoxy(8,43);
             H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE.";
             getch(); goto again;
           }

           for(int i = 1+9+10+150; i > 6; i--)
           {
            H::VLine(i,1+15+1,27,7,178); 
            for(int j = 0; j < 28; j++)
            {
                H::gotoxy(i,1+15+1+j); H::setcolor(7); cout << " ";
            }
            H::delay(10);
           }
            for(int j = 0; j < 28; j++)
            {
                H::gotoxy(6,1+15+1+j); H::setcolor(7); cout << " ";
            }
           
           DNN::Ground::Basketball::DataMember d;
           
           SelectAgain1:
           vector<DNN::Ground::Basketball> vc = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");

           H::gotoxy(10,1+15+1); d.Header();

           for(int i = 0; i < vc.size(); i++)
           {
             H::gotoxy(10,1+15+3+i); vc[i].Display();
           }

           H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

           H::gotoxy(30,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
           H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << ", ";
           H::setcolor(6); cout << "DOWN"; H::setcolor(7); cout << ", "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << ", "; H::setcolor(6); cout << "RIGHT"; 
           H::setcolor(7); cout << " TO NAVIGATE. "; H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO SELECT THE GROUND THAT YOU WANT TO BOOKING. PRESS "; 
           H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK.";

           int h = 1;

           do
           {
                H::setcolor(7);H::gotoxy(10,1+15+1); d.Header();

                if(h == 1)
                {
                   H::setcolor(6); H::gotoxy(60,1+15+1); cout <<"TEAM A [ 3-5 ]";
                }

                if(h == 2)
                {
                   H::setcolor(6); H::gotoxy(80,1+15+1); cout <<"TEAM B [ 3-5 ]";
                }

                if(h == 3)
                {
                   H::setcolor(6); H::gotoxy(100,1+15+1); cout <<"TEAM A [ 5-7 ]";
                }

                if(h == 4)
                {
                   H::setcolor(6); H::gotoxy(120,1+15+1); cout <<"TEAM B [ 5-7 ]";
                }

                if(h == 5)
                {
                   H::setcolor(6); H::gotoxy(140,1+15+1); cout <<"TEAM A [ 7-9 ]";
                }

                if(h == 6)
                {
                   H::setcolor(6); H::gotoxy(160,1+15+1); cout <<"TEAM B [ 7-9 ]";
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: h--;
                    {
                        if(h < 1) h = 6;
                    }
                    break;

                    case KEY_ARROW_DOWN: h++;
                    {
                        if(h > 6) h = 1;
                    }
                    break;

                    case KEY_ARROW_LEFT: h--;
                    {
                        if(h < 1) h = 6;
                    }
                    break;

                    case KEY_ARROW_RIGHT: h++;
                    {
                        if(h > 6) h = 1;
                    }
                    break;

                    case KEY_ESC: DNN::Ground::Booking::Program::Run(); break;

                }
           }while(press != KEY_ENTER);

           if(h == 1) // Team A Shift 3-5
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              
              b.resize(1500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(60,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(60,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamA_Shift1(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(60,1+15+3+i); cout << vc[i].GetTeamA_Shift1();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift1("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamA_Shift1());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+150].setTime_Shift("3-5"); b[e+150].setType("Basketball");
                  b[e+150].setTeamA(teamA); b[e+150].setBookingDate(date); b[e+150].setGroundNo(e+201);
                  b[e+150].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift1("NOTYET");
                  b[e + 150].setTeamA("NOTYET"); strcpy(b[e + 150].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain1;
                }
            }

            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vc);

           }

           if(h == 2) // Team B Shift 3-5
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn"); 
              b.resize(1500);

              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";
              
              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(80,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(80,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamB_Shift1(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(80,1+15+3+i); cout << vc[i].GetTeamB_Shift1();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamB_Shift1("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamB_Shift1());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+150].setTime_Shift("3-5"); b[e+150].setType("Basketball");
                  b[e+150].setTeamB(teamA); b[e+150].setBookingDate(date); b[e+150].setGroundNo(e+201);
                  b[e+150].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[i].SetTeamB_Shift1("NOTYET");
                  b[e + 150].setTeamB("NOTYET"); strcpy(b[e + 150].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain1;
                }
            }

            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vc);
        }

           if(h == 3) // Team A Shift 5-7
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              b.resize(1500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(100,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(100,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        H::gotoxy(100,1+15+3+i); cout << vc[i].GetTeamA_Shift2();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift2("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamA_Shift2());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+200].setTime_Shift("5-7"); b[e+200].setType("Basketball");
                  b[e+200].setTeamA(teamA); b[e+200].setBookingDate(date); b[e+200].setGroundNo(e+201);
                  b[e+200].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift2("NOTYET");
                  b[e + 200].setTeamA("NOTYET"); strcpy(b[e + 200].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain1;
                }
            }
            
            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vc);

           }    

            if(h == 4) // Team B Shift 5-7
            {
                vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
                b.resize(1500);
                
                int e = 0; int f = 0;

                H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

                H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
                H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
                H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

                do
                {
                    for(int i = 0; i < vc.size(); i++)
                    {
                        if(e == i && f == 0)
                        {
                            H::setcolor(6); H::gotoxy(120,1+15+3+i); cout << "BOOKED"; 
                        }

                        else if(e == i && f == 1)
                        {
                            H::setcolor(6); H::gotoxy(120,1+15+3+i); cout << "NOTYET";
                        }

                        else 
                        {
                            strcmp(vc[i].GetTeamB_Shift2(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                            H::gotoxy(120,1+15+3+i); cout << vc[i].GetTeamB_Shift2();
                        }
                    }

                    press = getch();

                    switch(press)
                    {
                        case KEY_ARROW_UP: e--;
                        {
                            if(e < 0) e = vc.size();
                        }
                        break;

                        case KEY_ARROW_DOWN: e++;
                        {
                            if(e > vc.size() - 1) e = 0;
                        }
                        break;

                        case KEY_ARROW_LEFT: f--;
                        {
                            if(f < 0) f = 1;
                        }
                        break;

                        case KEY_ARROW_RIGHT: f++;
                        {
                            if(f > 1) f = 0;
                        }
                        break;
                    }
                }while(press != KEY_ENTER);

                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamB_Shift2("BOOKED");

                    char teamA[10];

                    strcpy(teamA, vc[e].GetTeamB_Shift2());

                    char date[12]; 
                    strcpy(date, DNN::DateAndTimes::getCurrentDate());
                    b[e+200].setTime_Shift("5-7"); b[e+200].setType("Basketball");
                    b[e+200].setTeamB(teamA); b[e+200].setBookingDate(date); b[e+200].setGroundNo(e+201);
                    b[e+200].setPrice(vc[e].GetPrice());
                    }

                    if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                        vc[e].SetTeamB_Shift2("NOTYET");
                        b[e + 200].setTeamB("NOTYET"); strcpy(b[e + 200].timeShift, "NOTYET");
                    }

                    if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                    {

                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                        H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                        H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                        getch();
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                        goto SelectAgain1;
                    }
                }
                
                DNN::File<Booking>::write("Booking.dnn", &b);

                DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vc);

            }    
            
            if(h == 5) // Team A Shift 7-9
            {
                vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
                b.resize(1500);
                
                int e = 0; int f = 0;

                H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

                H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
                H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
                H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

                do
                {
                    for(int i = 0; i < vc.size(); i++)
                    {
                        if(e == i && f == 0)
                        {
                            H::setcolor(6); H::gotoxy(140,1+15+3+i); cout << "BOOKED"; 
                        }

                        else if(e == i && f == 1)
                        {
                            H::setcolor(6); H::gotoxy(140,1+15+3+i); cout << "NOTYET";
                        }

                        else 
                        {
                            strcmp(vc[i].GetTeamA_Shift3(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                            H::gotoxy(140,1+15+3+i); cout << vc[i].GetTeamA_Shift3();
                        }
                    }

                    press = getch();

                    switch(press)
                    {
                        case KEY_ARROW_UP: e--;
                        {
                            if(e < 0) e = vc.size();
                        }
                        break;

                        case KEY_ARROW_DOWN: e++;
                        {
                            if(e > vc.size() - 1) e = 0;
                        }
                        break;

                        case KEY_ARROW_LEFT: f--;
                        {
                            if(f < 0) f = 1;
                        }
                        break;

                        case KEY_ARROW_RIGHT: f++;
                        {
                            if(f > 1) f = 0;
                        }
                        break;
                    }
                }while(press != KEY_ENTER);

                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamA_Shift3("BOOKED");

                    char teamA[10];

                    strcpy(teamA, vc[e].GetTeamA_Shift3());

                    char date[12]; 
                    strcpy(date, DNN::DateAndTimes::getCurrentDate());
                    b[e+250].setTime_Shift("7-9"); b[e+250].setType("Basketball");
                    b[e+250].setTeamA(teamA); b[e+250].setBookingDate(date); b[e+250].setGroundNo(e+201);
                    b[e+250].setPrice(vc[e].GetPrice());
                    }

                    if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamA_Shift3("NOTYET");
                    b[e + 250].setTeamA("NOTYET"); strcpy(b[e + 250].timeShift, "NOTYET");
                    }

                    if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                    {
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                        H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                        H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                        getch();
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                        goto SelectAgain1;
                    }
                }
                
                DNN::File<Booking>::write("Booking.dnn", &b);

                DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vc);

            }    

            if(h == 6) // Team B Shift 7-9
            {
                vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
                b.resize(1500);
                
                int e = 0; int f = 0;

                H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

                H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
                H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
                H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";
                do
                {
                    for(int i = 0; i < vc.size(); i++)
                    {
                        if(e == i && f == 0)
                        {
                            H::setcolor(6); H::gotoxy(160,1+15+3+i); cout << "BOOKED"; 
                        }

                        else if(e == i && f == 1)
                        {
                            H::setcolor(6); H::gotoxy(160,1+15+3+i); cout << "NOTYET";
                        }

                        else 
                        {
                            strcmp(vc[i].GetTeamB_Shift3(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                            H::gotoxy(160,1+15+3+i); cout << vc[i].GetTeamB_Shift3();
                        }
                    }

                    press = getch();

                    switch(press)
                    {
                        case KEY_ARROW_UP: e--;
                        {
                            if(e < 0) e = vc.size();
                        }
                        break;

                        case KEY_ARROW_DOWN: e++;
                        {
                            if(e > vc.size() - 1) e = 0;
                        }
                        break;

                        case KEY_ARROW_LEFT: f--;
                        {
                            if(f < 0) f = 1;
                        }
                        break;

                        case KEY_ARROW_RIGHT: f++;
                        {
                            if(f > 1) f = 0;
                        }
                        break;
                    }
                }while(press != KEY_ENTER);

                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamB_Shift3("BOOKED");

                    char teamA[10];

                    strcpy(teamA, vc[e].GetTeamB_Shift3());

                    char date[12]; 
                    strcpy(date, DNN::DateAndTimes::getCurrentDate());
                    b[e+250].setTime_Shift("7-9"); b[e+250].setType("Basketball");
                    b[e+250].setTeamA(teamA); b[e+250].setBookingDate(date); b[e+250].setGroundNo(e+201);
                    b[e+250].setPrice(vc[e].GetPrice());
                    
                    }

                    if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamB_Shift3("NOTYET");
                    b[e + 250].setTeamB("NOTYET"); strcpy(b[e + 250].timeShift, "NOTYET");
                    }

                    if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                    {
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                        H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                        H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                        getch();
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                        goto SelectAgain1;
                    }
                }
                
                DNN::File<Booking>::write("Booking.dnn", &b);

                DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vc);

            } 
        
           H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

           H::gotoxy(30,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
           H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO ADD MORE BOOKING/CANCEL GROUND. ";
           H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK TO MAIN MENU.";

           tdel2:
           press = getch();
          
           if(press == KEY_ESC)
           {
            goto again;
           }

           if(press == KEY_ENTER)
           { 
            goto SelectAgain1;
           }

           else 
           {
            goto tdel2;
           }
        }

        if(d == 3) // VOLLEYBALL
        {
           if(volleyball.empty()) 
           {
             H::gotoxy(8,41); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";
             H::gotoxy(8,43); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";

             H::gotoxy(8,41);
             H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
             H::setcolor(4); cout << " NO VOLLEYBALL DATA FOUND !";
             H::gotoxy(8,43);
             H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE.";
             getch(); goto again;
           }

           for(int i = 1+9+10+150; i > 6; i--)
           {
            H::VLine(i,1+15+1,27,7,178); 
            for(int j = 0; j < 28; j++)
            {
                H::gotoxy(i,1+15+1+j); H::setcolor(7); cout << " ";
            }
            H::delay(10);
           }
            for(int j = 0; j < 28; j++)
            {
                H::gotoxy(6,1+15+1+j); H::setcolor(7); cout << " ";
            }
           
           DNN::Ground::Volleyball::DataMember d;

           SelectAgain:
           vector<DNN::Ground::Volleyball> vc = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");

           H::gotoxy(10,1+15+1); d.Header();

           for(int i = 0; i < vc.size(); i++)
           {
             H::gotoxy(10,1+15+3+i); vc[i].Display();
           }
           
           H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

           H::gotoxy(30,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
           H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << ", ";
           H::setcolor(6); cout << "DOWN"; H::setcolor(7); cout << ", "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << ", "; H::setcolor(6); cout << "RIGHT"; 
           H::setcolor(7); cout << " TO NAVIGATE."; H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO SELECT THE GROUND THAT YOU WANT TO BOOKING. PRESS "; 
           H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK.";
           
           int h = 1;

           do
           {
                H::setcolor(7);H::gotoxy(10,1+15+1); d.Header();

                if(h == 1)
                {
                   H::setcolor(9); H::gotoxy(60,1+15+1); cout <<"TEAM A [ 3-5 ]";
                }

                if(h == 2)
                {
                   H::setcolor(9); H::gotoxy(80,1+15+1); cout <<"TEAM B [ 3-5 ]";
                }

                if(h == 3)
                {
                   H::setcolor(9); H::gotoxy(100,1+15+1); cout <<"TEAM A [ 5-7 ]";
                }

                if(h == 4)
                {
                   H::setcolor(9); H::gotoxy(120,1+15+1); cout <<"TEAM B [ 5-7 ]";
                }

                if(h == 5)
                {
                   H::setcolor(9); H::gotoxy(140,1+15+1); cout <<"TEAM A [ 7-9 ]";
                }

                if(h == 6)
                {
                   H::setcolor(9); H::gotoxy(160,1+15+1); cout <<"TEAM B [ 7-9 ]";
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: h--;
                    {
                        if(h < 1) h = 6;
                    }
                    break;

                    case KEY_ARROW_DOWN: h++;
                    {
                        if(h > 6) h = 1;
                    }
                    break;

                    case KEY_ARROW_LEFT: h--;
                    {
                        if(h < 1) h = 6;
                    }
                    break;

                    case KEY_ARROW_RIGHT: h++;
                    {
                        if(h > 6) h = 1;
                    }
                    break;

                    case KEY_ESC: DNN::Ground::Booking::Program::Run(); break;
                }
           }while(press != KEY_ENTER);

           if(h == 1) // Team A Shift 3-5
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              
              b.resize(1000 + 500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";
              
              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(60,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(60,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamA_Shift1(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(60,1+15+3+i); cout << vc[i].GetTeamA_Shift1();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift1("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamA_Shift1());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+300].setTime_Shift("3-5"); b[e+300].setType("Volleyball");
                  b[e+300].setTeamA(teamA); b[e+300].setBookingDate(date); b[e+300].setGroundNo(e+101);
                  b[e+300].setPrice(vc[e].GetPrice());
                  
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift1("NOTYET");
                  b[e + 300].setTeamA("NOTYET"); strcpy(b[e + 300].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain;
                }
            }

            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vc);

           }

           if(h == 2) // Team B Shift 3-5
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn"); 
              b.resize(1000 + 500);

              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(6); H::gotoxy(80,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(6); H::gotoxy(80,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamB_Shift1(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(80,1+15+3+i); cout << vc[i].GetTeamB_Shift1();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamB_Shift1("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamB_Shift1());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+300].setTime_Shift("3-5"); b[e+300].setType("Volleyball");
                  b[e+300].setTeamB(teamA); b[e+300].setBookingDate(date); b[e+300].setGroundNo(e+101);
                  b[e+300].setPrice(vc[e].GetPrice());
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[i].SetTeamB_Shift1("NOTYET");
                  b[e + 300].setTeamB("NOTYET"); strcpy(b[e + 300].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain;
                }
            }
            
            vector <Booking> theb = DNN::File<Booking>::read("Booking.dnn");

            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vc);
        }

           if(h == 3) // Team A Shift 5-7
           {
              vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
              b.resize(1000 + 500);
              
              int e = 0; int f = 0;

              H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

              H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
              H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
              H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

              do
              {
                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0)
                    {
                        H::setcolor(2); H::gotoxy(100,1+15+3+i); cout << "BOOKED"; 
                    }

                    else if(e == i && f == 1)
                    {
                        H::setcolor(4); H::gotoxy(100,1+15+3+i); cout << "NOTYET";
                    }

                    else 
                    {
                        strcmp(vc[i].GetTeamA_Shift2(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                        H::gotoxy(100,1+15+3+i); cout << vc[i].GetTeamA_Shift2();
                    }
                }

                press = getch();

                switch(press)
                {
                    case KEY_ARROW_UP: e--;
                    {
                        if(e < 0) e = vc.size();
                    }
                    break;

                    case KEY_ARROW_DOWN: e++;
                    {
                        if(e > vc.size() - 1) e = 0;
                    }
                    break;

                    case KEY_ARROW_LEFT: f--;
                    {
                        if(f < 0) f = 1;
                    }
                    break;

                    case KEY_ARROW_RIGHT: f++;
                    {
                        if(f > 1) f = 0;
                    }
                    break;
                }
            }while(press != KEY_ENTER);

            for(int i = 0; i < vc.size(); i++)
            {
                if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift2("BOOKED");

                  char teamA[10];

                  strcpy(teamA, vc[e].GetTeamA_Shift2());

                  char date[12]; 
                  strcpy(date, DNN::DateAndTimes::getCurrentDate());
                  b[e+350].setTime_Shift("5-7"); b[e+350].setType("Volleyball");
                  b[e+350].setTeamA(teamA); b[e+350].setBookingDate(date); b[e+350].setGroundNo(e+101);
                  b[e+350].setPrice(vc[e].GetPrice());
                  
                }

                if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                {
                  vc[e].SetTeamA_Shift2("NOTYET");
                  b[e + 350].setTeamA("NOTYET"); strcpy(b[e + 350].timeShift, "NOTYET");
                }

                if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                {
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                    H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                    H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                    getch();
                    H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                    goto SelectAgain;
                }
            }
            
            DNN::File<Booking>::write("Booking.dnn", &b);

            DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vc);

           }    

            if(h == 4) // Team B Shift 5-7
            {
                vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
                b.resize(1000 + 500);
                
                int e = 0; int f = 0;

                H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

                H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
                H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
                H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

                do
                {
                    for(int i = 0; i < vc.size(); i++)
                    {
                        if(e == i && f == 0)
                        {
                            H::setcolor(6); H::gotoxy(120,1+15+3+i); cout << "BOOKED"; 
                        }

                        else if(e == i && f == 1)
                        {
                            H::setcolor(6); H::gotoxy(120,1+15+3+i); cout << "NOTYET";
                        }

                        else 
                        {
                            strcmp(vc[i].GetTeamB_Shift2(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                            H::gotoxy(120,1+15+3+i); cout << vc[i].GetTeamB_Shift2();
                        }
                    }

                    press = getch();

                    switch(press)
                    {
                        case KEY_ARROW_UP: e--;
                        {
                            if(e < 0) e = vc.size();
                        }
                        break;

                        case KEY_ARROW_DOWN: e++;
                        {
                            if(e > vc.size() - 1) e = 0;
                        }
                        break;

                        case KEY_ARROW_LEFT: f--;
                        {
                            if(f < 0) f = 1;
                        }
                        break;

                        case KEY_ARROW_RIGHT: f++;
                        {
                            if(f > 1) f = 0;
                        }
                        break;
                    }
                }while(press != KEY_ENTER);

                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                        vc[e].SetTeamB_Shift2("BOOKED");

                        char teamA[10];

                        strcpy(teamA, vc[e].GetTeamB_Shift2());

                        char date[12]; 
                        strcpy(date, DNN::DateAndTimes::getCurrentDate());
                        b[e+350].setTime_Shift("5-7"); b[e+350].setType("Volleyball");
                        b[e+350].setTeamB(teamA); b[e+350].setBookingDate(date); b[e+350].setGroundNo(e+101);
                        b[e+350].setPrice(vc[e].GetPrice());
                    }

                    if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                        vc[e].SetTeamB_Shift2("NOTYET");
                        b[e + 350].setTeamB("NOTYET"); strcpy(b[e + 350].timeShift, "NOTYET");
                    }

                    if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                    {
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                        H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                        H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                        getch();
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                        goto SelectAgain;
                    }
                }
                
                DNN::File<Booking>::write("Booking.dnn", &b);

                DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vc);

            }    
            
            if(h == 5) // Team A Shift 7-9
            {
                vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
                b.resize(1000 + 500);
                
                int e = 0; int f = 0;

                H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

                H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
                H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
                H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

                do
                {
                    for(int i = 0; i < vc.size(); i++)
                    {
                        if(e == i && f == 0)
                        {
                            H::setcolor(6); H::gotoxy(140,1+15+3+i); cout << "BOOKED"; 
                        }

                        else if(e == i && f == 1)
                        {
                            H::setcolor(6); H::gotoxy(140,1+15+3+i); cout << "NOTYET";
                        }

                        else 
                        {
                            strcmp(vc[i].GetTeamA_Shift3(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                            H::gotoxy(140,1+15+3+i); cout << vc[i].GetTeamA_Shift3();
                        }
                    }

                    press = getch();

                    switch(press)
                    {
                        case KEY_ARROW_UP: e--;
                        {
                            if(e < 0) e = vc.size();
                        }
                        break;

                        case KEY_ARROW_DOWN: e++;
                        {
                            if(e > vc.size() - 1) e = 0;
                        }
                        break;

                        case KEY_ARROW_LEFT: f--;
                        {
                            if(f < 0) f = 1;
                        }
                        break;

                        case KEY_ARROW_RIGHT: f++;
                        {
                            if(f > 1) f = 0;
                        }
                        break;
                    }
                }while(press != KEY_ENTER);

                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamA_Shift3("BOOKED");

                    char teamA[10];

                    strcpy(teamA, vc[e].GetTeamA_Shift3());

                    char date[12]; 
                    strcpy(date, DNN::DateAndTimes::getCurrentDate());
                    b[e+400].setTime_Shift("7-9"); b[e+400].setType("Volleyball");
                    b[e+400].setTeamA(teamA); b[e+400].setBookingDate(date); b[e+400].setGroundNo(e+101);
                    b[e+400].setPrice(vc[e].GetPrice());
                      
                    }

                    if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamA_Shift3("NOTYET");
                    b[e + 400].setTeamA("NOTYET"); strcpy(b[e + 400].timeShift, "NOTYET");
                    }

                    if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                    {
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                        H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                        H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                        getch();
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                        goto SelectAgain;
                    }
                }
                
                DNN::File<Booking>::write("Booking.dnn", &b);

                DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vc);

            }    

            if(h == 6) // Team B Shift 7-9
            {
                vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
                b.resize(1000 + 500);
                
                int e = 0; int f = 0;

                H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

                H::gotoxy(50,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
                H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
                H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE THE GROUND STATUS.";

                do
                {
                    for(int i = 0; i < vc.size(); i++)
                    {
                        if(e == i && f == 0)
                        {
                            H::setcolor(6); H::gotoxy(160,1+15+3+i); cout << "BOOKED"; 
                        }

                        else if(e == i && f == 1)
                        {
                            H::setcolor(6); H::gotoxy(160,1+15+3+i); cout << "NOTYET";
                        }

                        else 
                        {
                            strcmp(vc[i].GetTeamB_Shift3(), "BOOKED") == 0 ? H::setcolor(2) : H::setcolor(4);
                            H::gotoxy(160,1+15+3+i); cout << vc[i].GetTeamB_Shift3();
                        }
                    }

                    press = getch();

                    switch(press)
                    {
                        case KEY_ARROW_UP: e--;
                        {
                            if(e < 0) e = vc.size();
                        }
                        break;

                        case KEY_ARROW_DOWN: e++;
                        {
                            if(e > vc.size() - 1) e = 0;
                        }
                        break;

                        case KEY_ARROW_LEFT: f--;
                        {
                            if(f < 0) f = 1;
                        }
                        break;

                        case KEY_ARROW_RIGHT: f++;
                        {
                            if(f > 1) f = 0;
                        }
                        break;
                    }
                }while(press != KEY_ENTER);

                for(int i = 0; i < vc.size(); i++)
                {
                    if(e == i && f == 0 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamB_Shift3("BOOKED");

                    char teamA[10];

                    strcpy(teamA, vc[e].GetTeamB_Shift3());

                    char date[12]; 
                    strcpy(date, DNN::DateAndTimes::getCurrentDate());
                    b[e+400].setTime_Shift("7-9"); b[e+400].setType("Volleyball");
                    b[e+400].setTeamB(teamA); b[e+400].setBookingDate(date); b[e+400].setGroundNo(e+101);
                    
                    }

                    if(e == i && f == 1 && (strcmp(vc[e].GetStatus(), "OPEN") == 0))
                    {
                    vc[e].SetTeamB_Shift3("NOTYET");
                    b[e + 400].setTeamB("NOTYET"); strcpy(b[e + 400].timeShift, "NOTYET");
                    }

                    if(e == i && (f == 0 || f == 1) && (strcmp(vc[e].GetStatus(), "CLOSED") == 0))
                    {
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 160; i++) cout << " ";

                        H::gotoxy(60,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
                        H::setcolor(7); cout << " THIS GROUND NUMBER CURRENTLY IS "; H::setcolor(4); cout << "CLOSED"; H::setcolor(7); cout << ". PLEASE SELECT ANOTHER GROUND NUMBER. ";

                        getch();
                        H::gotoxy(40,48); H::setcolor(7); for(int i = 0; i < 140; i++); cout << " ";

                        goto SelectAgain;
                    }
                }
                
                DNN::File<Booking>::write("Booking.dnn", &b);

                DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vc);

            } 
           
           
           H::gotoxy(30,48); H::setcolor(7); for(int i = 0; i < 165; i++) cout << " ";

           H::gotoxy(30,48); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
           H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO ADD MORE BOOKING/CANCEL GROUND. ";
           H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK TO MAIN MENU.";
           
           tdel:
           press = getch();
          
           if(press == KEY_ESC)
           {
            goto again;
           }

           if(press == KEY_ENTER)
           { 
            goto SelectAgain;
           }

           else 
           {
            goto tdel;
           }

        }

        goto again;
    }

    if(y == 3)
    {
        vector<DNN::Invoice::Invoice_Record> vc = DNN::File<DNN::Invoice::Invoice_Record>::read("Invoice.dnn");

        if(vc.empty())
        {
            H::gotoxy(8,41); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";
            H::gotoxy(8,43); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";

            H::gotoxy(18,41);
            H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
            H::setcolor(4); cout << " NO INVOICE DATA FOUND !";
            H::gotoxy(18,43); H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE."; getch();
            
            goto again;
        }

        DNN::Invoice::Invoice_Record::DisplayInvoice();

        goto again;
    }

    if(y == 2)
    {
    vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");

    if(b.empty())
    {
        H::gotoxy(8,41); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";
        H::gotoxy(8,43); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";

        H::gotoxy(18,41);
        H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
        H::setcolor(4); cout << " NO BOOKING DATA FOUND !";
        H::gotoxy(18,43); H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE."; getch();
        
        goto again;
    }

    DNN::Ground::Booking::Program::DisplayBooking();

    H::drawBoxSingleLine(120,16,60,3,7);
    H::drawBoxSingleLine(122,17,56,1,6);
    
    againSimple:
    H::gotoxy(122,22); H::setcolor(7); for(int i = 0; i < 68; i++) cout << " ";
    H::gotoxy(122,24); H::setcolor(7); for(int i = 0; i < 68; i++) cout << " ";
    H::gotoxy(169,18); H::setcolor(7); cout << "       ";
    H::gotoxy(126,18); H::setcolor(7); cout << "TO MAKE A PAYMENT PLEASE ENTER GROUND NO. : ";
    
    H::setcursor(true, 1);
    char gno[10]; H::inputNumber(gno,6);
    H::setcursor(false, 0);

    bool found = false; bool confirm = false;

    for(int i = 0; i < b.size(); i++)
    {
        if(b[i].getGroundNo() == atoi(gno))
        {
        found = true;

        if(strcmp(b[i].getTeamA(),"BOOKED") == 0)
        {
            if(strcmp(b[i].getTeamB(), "BOOKED") == 0)
            {
            confirm = true; 
            break;
            }
        }
        
        }
    }
    
    if(!found || atoi(gno) == 0)
    {
        H::gotoxy(122,22); H::setcolor(7); cout << "["; H::setcolor(4); cout << " WARNING "; H::setcolor(7); cout << "]"; 
        H::setcolor(7); cout << " INVALID GROUND NO. !";

        H::gotoxy(122,24); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; 
        H::setcolor(7); cout << " PRESS KEY "; H::setcolor(6); cout << "ESC"; H::setcolor(7); cout << " TO BACK OR "; 
        H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO RE-ENTER AGAIN.";
        d:
        press = getch();

        if(press == KEY_ENTER)
        {
            H::gotoxy(122,29-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,27-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,22); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,24); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            goto againSimple;
        }

        else if(press == KEY_ESC)
        {
            goto again;
        }

        else goto d;
    }

    if(!confirm && found)
    {
        H::gotoxy(122,22); H::setcolor(7); cout << "["; H::setcolor(4); cout << " WARNING "; H::setcolor(7); cout << "]"; 
        H::setcolor(7); cout << " THIS GROUND IS NOT CONFIRMED BOOKING YET !";

        H::gotoxy(122,27-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";

        H::gotoxy(122,27-1); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
        H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO RE-ENTER AGAIN."; 
        H::gotoxy(122,29-1);
        H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK TO MAIN MENU. ";
        
        d1:
        press = getch();

        if(press == KEY_ENTER)
        {
            H::gotoxy(122,29-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,27-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,22); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,24); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            goto againSimple;
        }

        else if(press == KEY_ESC)
        {
            goto again;
        }

        else goto d1;

    }

    H::gotoxy(122,22); H::setcolor(7); cout << "["; H::setcolor(6); cout << " SEARCH RESULT "; H::setcolor(7); cout << "]"; 
    H::setcolor(2); cout << " FOUND ! ";

    H::gotoxy(122,27-1); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
    H::setcolor(7); cout << " PRESS ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << " AND "; 
    H::setcolor(6); cout << "DOWN"; H::setcolor(7); cout << " TO NAVIGATE. "; 
    H::gotoxy(122,29-1); H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO SELECT THE TIME SHIFT. ";
    
    int AD = 1; char timeShift[10];

    H::gotoxy(122,24); H::setcolor(7); cout << "TIME SHIFT : ";
    do
    {
        if(AD == 1)
        {
            H::gotoxy(136,24); H::setcolor(9); cout << "3-5";
        }

        if(AD == 2)
        {
            H::gotoxy(136,24); H::setcolor(9); cout << "5-7";
        }

        if(AD == 3)
        {
            H::gotoxy(136,24); H::setcolor(9); cout << "7-9";
        }

        press = getch();

        switch(press)
        {
            case KEY_ARROW_UP: AD--;
            {
                if(AD < 1)
                {
                    AD = 3;
                }
            }
            break;

            case KEY_ARROW_DOWN: AD++;
            {
                if(AD > 3)
                {
                    AD = 1;
                }
            }
            break;
        }
    }while(press != KEY_ENTER);

    if(AD == 1)
    {
        strcpy(timeShift,"3-5");
    }

    if(AD == 2)
    {
        strcpy(timeShift,"5-7");
    }

    if(AD == 3)
    {
        strcpy(timeShift,"7-9");
    }

    int index = 0; bool last = false;

    for(int i = 0; i < b.size(); i++)
    {
        if(b[i].getGroundNo() == atoi(gno))
        {
            if(strcmp(b[i].getTime_Shift(),timeShift) == 0 )   
            {
                if(strcmp(b[i].getTeamA(), "BOOKED") == 0)
                {
                    if(strcmp(b[i].getTeamB(), "BOOKED") == 0)
                    {
                        index = i; last = true;
                        break;
                    }
                }
            }
        }
    }

    if(!last)
    {
        same:
        H::gotoxy(122,22); H::setcolor(7); cout << "["; H::setcolor(4); cout << " WARNING "; H::setcolor(7); cout << "]"; 
        H::setcolor(7); cout << " THIS TIME SHIFT IS NOT CONFIRMED BOOKING YET !";
        
        H::gotoxy(122,27-1); H::setcolor(7); for(int i = 0; i < 68; i++) cout << " ";

        H::gotoxy(122,27-1); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
        H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO RE-ENTER AGAIN."; 
        H::setcolor(6); cout << " | "; H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK TO MAIN MENU. ";
        
        press = getch();

        if(press == KEY_ENTER)
        {
            H::gotoxy(122,29-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,27-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,22); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,24); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            goto againSimple;
        }

        else if(press == KEY_ESC)
        {
            H::gotoxy(122,29-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,27-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,22); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,24); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            goto again;
        }

        else 
        {
            H::gotoxy(122,29-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,27-1); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,22); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            H::gotoxy(122,24); H::setcolor(7); for(int i = 0; i < 70; i++) cout << " ";
            goto same;
        }
    }

    DNN::Invoice::Invoice_Record::RunInvoice(index);
    goto again;

  }

    if(y == 5)
    {
        H::clearBox(0,0,200,50,7);

        Account account; vector<LoginTemp> lt = DNN::File<LoginTemp>::read("temp.dnn");
        if(account.checkAdmin(lt[0].getUsername(),lt[0].getPassword())){DNN::User::MainMenu::Admin();}
        else{ DNN::User::MainMenu::Staff();}
    }  

    if(y == 4)
    {
        vector<DNN::Invoice::Invoice_Record> invoice = DNN::File<DNN::Invoice::Invoice_Record>::read("Invoice.dnn");

        if(invoice.empty())
        {
            H::gotoxy(8,41); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";
            H::gotoxy(8,43); H::setcolor(7); for(int i = 0; i < 74; i++) cout << " ";

            H::gotoxy(18,41);
            H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]";
            H::setcolor(4); cout << " NO INVOICE DATA FOUND !";
            H::gotoxy(18,43); H::setcolor(7); cout << "PRESS"; H::setcolor(6); cout << " ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE."; getch();
            
            goto again;
        }

        H::clearBox(0,0,200,50,7);

        H::drawBoxSingleLine(1,1,198,47,5);
        
        int a = 15, b = 5;
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( _____                                                _____ )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"(( ___ )                                              ( ___ ))";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|   | )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |   |                                                |   | )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |   |   ___ _   ___     _____ ___ ____ _____ ____    |   | )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |   |  |_ _| \ | \ \   / / _ \_ _/ ___| ____/ ___|   |   | )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |   |   | ||  \| |\ \ / / | | | | |   |  _| \___ \   |   | )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |   |   | || |\  | \ V /| |_| | | |___| |___ ___) |  |   | )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |   |  |___|_| \_|  \_/  \___/___\____|_____|____/   |   | )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |   |                                                |   | )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"( |___|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|___| )";
        H::gotoxy(a,b++); H::setcolor(7); cout << R"((_____)                                              (_____))";
        
        for(int i = 0; i < 60; i++)
        {
          H::drawBoxDoubleLineWithBG(13,19,i,1,6); H::delay(30);

        }

        char SearchID[10];
        Searchagain:

        H::gotoxy(43,20); H::setcolor(7); for(int i = 0; i < 65; i++) cout << " ";
        H::gotoxy(13,24); H::setcolor(7); for(int i = 0; i < 65; i++) cout << " ";
        H::gotoxy(13,26); H::setcolor(7); for(int i = 0; i < 65; i++) cout << " ";

        H::gotoxy(14,20); H::setcolor(7); cout << "ENTER INVOICE ID TO SEARCH : "; 
        H::setcursor(true,1); H::inputNumber(SearchID,6); H::setcursor(false,1);

        DNN::Invoice::Invoice_Record::SearchInvoice(atoi(SearchID));
        
        H::gotoxy(13,26); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "] ";
        H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO SEACH AGAIN !";
        H::gotoxy(13,28); H::setcolor(7); cout << "PRESS "; H::setcolor(6); cout << "ESC KEY"; H::setcolor(7); cout << " TO BACK.";
        
        fail:
        press = getch();

        if(press == KEY_ENTER)
        {

            goto Searchagain;
        }

        if(press == KEY_ESC || press == KEY_BACKSPACE)
        {
           DNN::Ground::Booking::Program::Run();
        }

        else 
        {
            goto fail;
        }
    }
}
///////////////////////////////////////////////////
//////////////// TEAM MATCHING /////////////////////
///////////////////////////////////////////////////

void DNN::Ground::Booking::Program::DisplayBooking()
{
    vector<Booking> b = DNN::File<Booking>::read("Booking.dnn");
    int line = 0;

    sort(b.begin(), b.end(), [](Booking a, Booking b){return a.getGroundNo() < b.getGroundNo();});

    for(int i = 1+9+10+150; i >= 6; i--)
    {
        H::VLine(i,1+15+1,27,7,178); 

        for(int j = 0; j < 28; j++)
        {
            H::gotoxy(i,1+15+1+j); H::setcolor(7); cout << " ";
        }
        
        H::delay(10);
    }
    
    for(int j = 0; j < 28; j++)
    {
        H::gotoxy(5,1+15+1+j); H::setcolor(7); cout << " ";
    }

    H::setcolor(7);

    for(int i = 0; i < b.size(); i++)
    {
        if(b[i].getGroundNo() > 0)
        {
            if(strcmp(b[i].getTeamA(),"BOOKED") == 0 || strcmp(b[i].getTeamB(),"BOOKED") == 0)
            {
                H::gotoxy(10,16); Booking::Header();
                H::gotoxy(10,18+line); H::setcolor(7); b[i].displayBooking();
                line++;
            }
        }
    }

}

#endif 

