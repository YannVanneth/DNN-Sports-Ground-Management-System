#ifndef VECTOROFVOLLEYBALL_H
#define VECTOROFVOLLEYBALL_H

#include "../Ground.hpp"
#include "design/DesignConsole.hpp"


////////////////////////////// VOLLEYBALL // VOLLEYBALL // VOLLEYBALL // VOLLEYBALL //////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/////////////////////////  SEARCH  ////////// SEARCH //////////////////////////
///////////////////////////////////////////////////////////////////////////////
vector<DNN::Ground::Volleyball> DNN::Ground::Volleyball::Search::_SearchByNumber(vector<Volleyball> &vc, int number)
{
    bool Isfound = false;

    for (int i = 0; i < vc.size(); i++)
    {
        if (vc[i].number_ground == number)
        {
            H::clearBox(105,14,80,25,7);
            vc[i].DisplaySearch(120,14);
            Isfound = true;
        }
    }

    if(!Isfound)
    {
        H::gotoxy(25,38); H::setcolor(7); cout << "GROUND NUMBER " << number; H::setcolor(4); cout << " NOT FOUND!";
    }
    if(Isfound)
    {
        H::gotoxy(25,38); H::setcolor(7); cout << "GROUND NUMBER " << number; H::setcolor(2); cout << " FOUND!";
    }
    H::setcursor(0,0);
    H::gotoxy(65,45);
        H::setcolor(7);cout << "PRESS [ ";
        H::setcolor(5); cout << "ESC";
        H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
        H::setcolor(5);cout << " ENTER";
        H::setcolor(7); cout << " ] TO SEARCH MORE.";

    return vc;
}
vector<DNN::Ground::Volleyball> DNN::Ground::Volleyball::Search::_SearchByStatus(vector<Volleyball> &vc, const char* status)
{
    bool Isfound = false; int m=0;
    H::clearBox(10,14,170,28,7);


    for (int i = 0; i < vc.size(); i++)
    {
        if (strcmp(vc[i].ground_status, status) == 0)
        {

            m++;
            H::setcolor(2); H::gotoxy(10,14);
            DNN::Ground::DataMember::Header();
            H::setcolor(3); H::gotoxy(10,15+m); vc[i].Display();
            Isfound = true;
        }
    }
    H::setcursor(0,0);
    if(!Isfound)
    {
        DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
        H::gotoxy(25,38);  H::setcolor(7); cout << "GROUND STATUS " << status; H::setcolor(4); cout << " NOT FOUND!";
    }
    if(Isfound)
    {
        H::gotoxy(10,45); H::setcolor(7); cout << "GROUND STATUS " << status; H::setcolor(2); cout << " FOUND!";
    }
    H::setcursor(0,0);
    H::gotoxy(65,45);
        H::setcolor(7);cout << " PRESS [ ";
        H::setcolor(5); cout << "ESC";
        H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
        H::setcolor(5);cout << " ENTER";
        H::setcolor(7); cout << " ] TO SEARCH MORE.";
    return vc;
}
vector<DNN::Ground::Volleyball> DNN::Ground::Volleyball::Search::_SearchByPrice(vector<Volleyball> &vc, double _Price, double _price2)
{
    bool Isfound = false; int m=0;
    H::clearBox(10,14,170,28,7);
    for (int i = 0; i < vc.size(); i++)
    {
        if (vc[i].Price >= _Price && vc[i].Price <= _price2)
        {
            m++;
            H::setcolor(2); H::gotoxy(10,14);
            DNN::Ground::DataMember::Header();
            H::setcolor(3); H::gotoxy(10,15+m); vc[i].Display();
            Isfound = true;
        }
    }
    if(!Isfound)
    {
        DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
        H::gotoxy(25,38); H::setcolor(4); cout << "GROUND PRICE BETWEEN  : "; H::setcolor(7); cout << _Price; H::setcolor(4); cout << " TO "; H::setcolor(7); cout << _price2; H::setcolor(4); cout << " $ NOT FOUND!";
    }
    if(Isfound)
    {
        H::gotoxy(10,45); H::setcolor(2); cout << "GROUND PRICE BETWEEN  : "; H::setcolor(7); cout << _Price; H::setcolor(2); cout << " TO "; H::setcolor(7); cout << _price2; H::setcolor(2); cout << " $ FOUND!";
    }
    H::setcursor(0,0);
    H::gotoxy(65,45);
        H::setcolor(7);cout << " PRESS [ ";
        H::setcolor(5); cout << "ESC";
        H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
        H::setcolor(5);cout << " ENTER";
        H::setcolor(7); cout << " ] TO SEARCH MORE.";

    return vc;
}
//////////////////////////////////////////////////
//////// UPDATE   /////////// UPDATE /////////////
//////////////////////////////////////////////////
vector<DNN::Ground::Volleyball> DNN::Ground::Volleyball::Update::_Status(vector<DNN::Ground::Volleyball> &vc, int code)
{
    bool Isfound = false;
    for (int i = 0; i < vc.size(); i++)
    {
        if(vc[i].number_ground == code)
        {
            H::gotoxy(65,45);
            H::setcolor(7);cout << " PRESS [";
            H::setcolor(5); cout << " ARROW KEY ";
            H::setcolor(7);cout << " ] TO UPDATE DATA. PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO UPDATE MORE.";

            H::clearBox(105,14,80,25,7);
            vc[i].DisplaySearch(120,14);

            H::gotoxy(25,34); H::setcolor(7); cout << "CHOOSE NEW GROUND STATUS   : ";
            H::setcolor(5); vc[i].InputStatus(55,34);

            H::clearBox(105,14,80,25,7);
            vc[i].DisplaySearch(120,14);
            Isfound = true;
        }
    }
    H::setcursor(0,0);
    if(!Isfound)
    {
        H::gotoxy(25,38); H::setcolor(4); cout << "GROUND NUMBER WITH NUMBER "; H::setcolor(5); cout << code; H::setcolor(4); cout << " NOT FOUND!";
    }
    if(Isfound)
    {
         H::gotoxy(25,38); H::setcolor(2); cout << "DATA UPDATED WITH NUMBER "; H::setcolor(5); cout << code; H::setcolor(2); cout << " SUCESSFULLY!";
    }
    H::gotoxy(65,45);
        H::setcolor(7);cout << " PRESS [ ";
        H::setcolor(5); cout << "ESC";
        H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
        H::setcolor(5);cout << " ENTER";
        H::setcolor(7); cout << " ] TO UPDATE MORE.";
    return vc;
}

vector<DNN::Ground::Volleyball> DNN::Ground::Volleyball::Update::_Price(vector<DNN::Ground::Volleyball> &vc, int code)
{
    bool Isfound = false;
    for (int i = 0; i < vc.size(); i++)
    {
        if(vc[i].number_ground == code)
        {
            H::gotoxy(65,45);
            H::setcolor(7);cout << " PRESS [";
            H::setcolor(5); cout << " ARROW KEY ";
            H::setcolor(7);cout << " ] TO UPDATE DATA. PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO UPDATE MORE.";

            H::clearBox(105,14,80,25,7);
            vc[i].DisplaySearch(120,14);

            H::gotoxy(25,34); H::setcolor(7); cout << "ENTER NEW PRICE OF GROUND   : ";
            H::setcolor(5); vc[i].InputPrice(55,34);

            H::clearBox(105,14,80,25,7);
            vc[i].DisplaySearch(120,14);
            Isfound = true;
        }
    }
    H::setcursor(0,0);
    if(!Isfound)
    {
        H::gotoxy(25,38); H::setcolor(4); cout << "GROUND NUMBER WITH NUMBER "; H::setcolor(5); cout << code; H::setcolor(4); cout << " NOT FOUND!";
    }
    if(Isfound)
    {
        H::gotoxy(25,38); H::setcolor(2); cout << "DATA UPDATED WITH NUMBER "; H::setcolor(5); cout << code; H::setcolor(2); cout << " SUCESSFULLY!";

    }
    H::gotoxy(65,45);
        H::setcolor(7);cout << " PRESS [ ";
        H::setcolor(5); cout << "ESC";
        H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
        H::setcolor(5);cout << " ENTER";
        H::setcolor(7); cout << " ] TO UPDATE MORE.";
    return vc;
}
vector<DNN::Ground::Volleyball> DNN::Ground::Volleyball::Update::_date(vector<DNN::Ground::Volleyball> &vc, int code)
{
    bool Isfound = false;
    for (int i = 0; i < vc.size(); i++)
    {
        if(vc[i].number_ground == code)
        {
            H::gotoxy(65,45);
            H::setcolor(7);cout << " PRESS [";
            H::setcolor(5); cout << " ARROW KEY ";
            H::setcolor(7);cout << " ] TO UPDATE DATA. PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO UPDATE MORE.";

            H::clearBox(105,14,80,25,7);
            vc[i].DisplaySearch(120,14);

            H::gotoxy(25,34); H::setcolor(7); cout << "ENTER NEW DATE [ DD-MM-YYYY ] : ";
            H::setcolor(5); vc[i].Inputdate(60,34);

            H::clearBox(105,14,80,25,7);
            vc[i].DisplaySearch(120,14);
            Isfound = true;
        }
    }
    H::setcursor(0,0);
    if(!Isfound)
    {
        H::gotoxy(25,38); H::setcolor(4); cout << "GROUND NUMBER WITH NUMBER "; H::setcolor(5); cout << code; H::setcolor(4); cout << " NOT FOUND!";
    }
    if(Isfound)
    {
        H::gotoxy(25,38); H::setcolor(2); cout << "DATA UPDATED WITH NUMBER "; H::setcolor(5); cout << code; H::setcolor(2); cout << " SUCESSFULLY!";

    }
    H::gotoxy(65,45);
        H::setcolor(7);cout << " PRESS [ ";
        H::setcolor(5); cout << "ESC";
        H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
        H::setcolor(5);cout << " ENTER";
        H::setcolor(7); cout << " ] TO UPDATE MORE.";
    return vc;
}

///////////////////////////////////////////////////////////////////////////////
/////////////////////////  SORT   ////////// SORT /////////////////////////////
///////////////////////////////////////////////////////////////////////////////

vector<DNN::Ground::Volleyball>& DNN::Ground::Volleyball::Sort::_SortByNumber(vector<DNN::Ground::Volleyball> &vc, const char * mode )
{
    if(strcmp(mode, "asc") == 0)
    {
        sort(vc.begin(),vc.end(),[](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b){return a.number_ground < b.number_ground;});
        return vc;
    }
    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(),vc.end(),[](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b){return a.number_ground > b.number_ground;});
        return vc;
    }
    return vc;
}
vector<DNN::Ground::Volleyball>& DNN::Ground::Volleyball::Sort::_SortByStatus(vector<DNN::Ground::Volleyball> &vc, const char * mode)
{
    if(strcmp(mode, "asc") == 0)
    {
        sort(vc.begin(),vc.end(),[](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b){return strcmp(a.GetStatus(), b.GetStatus()) < 0;});
        return vc;
    }
    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(),vc.end(),[](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b){return strcmp(a.GetStatus(), b.GetStatus()) > 0;});
        return vc;
    }
    return vc;
}
vector<DNN::Ground::Volleyball>& DNN::Ground::Volleyball::Sort::_SortByPrice(vector<DNN::Ground::Volleyball> &vc, const char * mode)
{
    if(strcmp(mode, "asc") == 0)
    {
        sort(vc.begin(),vc.end(),[](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b){return a.Price < b.Price;});
        return vc;
    }
    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(),vc.end(),[](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b){return a.Price > b.Price;});
        return vc;
    }
    return vc;
}
vector<DNN::Ground::Volleyball>& DNN::Ground::Volleyball::Sort::_SortByDate(vector<DNN::Ground::Volleyball> &vc, const char * mode)
{
    if(strcmp(mode, "asc") == 0)
    {
        sort(vc.begin(),vc.end(),[](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b){return strcmp(a.GetDate(), b.GetDate()) < 0;});
        return vc;
    }
    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(),vc.end(),[](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b){return strcmp(a.GetDate(), b.GetDate()) > 0;});
        return vc;
    }
    return vc;
}

///////////////////////////////////// TENNIS // TENNIS // TENNIS // TENNIS // TENNIS // TENNIS /////////////////////////////////////
#endif