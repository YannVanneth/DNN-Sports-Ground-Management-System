#ifndef DEMOBODYVOLLEYBALL_H
#define DEMOBODYVOLLEYBALL_H

#include "demofutsal.hpp"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// INSERT VOLLEYBALL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demovolleyball::InsertVolleyball(DNN::Ground::Volleyball &volleyball)
{
    int number;
    DNN::Design::Ground::DesignVolleyball::DesignInput(7);
	DNN::Design::Ground::DesignVolleyball::_TextInput(10,1,7,3);
    H::drawBoxDoubleLineWithBG(40,12,50,20,79);
    H::delay(100);
    H::drawBoxDoubleLineWithBG(115,12,50,20,79);
    H::setcolor(79); H::gotoxy(42,14); cout<<"Enter Number of Ground : ";
    number = Demovolleyball::AutoVolleyballNumber();
    volleyball.SetVolleyballNumber(number);
    volleyball.InputAll();

    H::setcursor(0,0);
    H::gotoxy(113,35);H::setcolor(7); cout << " PRESS [ ";
                H::setcolor(5); cout << "ESC";
                H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
                H::setcolor(5);cout << "ENTER";
                H::setcolor(7); cout << " ] TO INPUT MORE.";
    H::setcolor(1);
    DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", volleyball);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// DISPLAY VOLLEYBALL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demovolleyball::DisplayVolleyball(vector<DNN::Ground::Volleyball> &volleyball)
{
    H::setcursor(0,0);
	for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextVolleyball(45,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    H::setcolor(79); H::gotoxy(10,10);
    DNN::Ground::DataMember::Header();
    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79); cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79); cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// AUTO NUMBER ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int DNN::Ground::Demovolleyball::AutoVolleyballNumber()
{
    int VolleyballID = 100;

    vector<DNN::Ground::Volleyball> vball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");

    for(int i = 0; i < vball.size(); i++)
    {
        if(vball[i].DNN::Ground::Volleyball::GetVolleyballNumber() > VolleyballID)
        {
            VolleyballID = vball[i].DNN::Ground::Volleyball::GetVolleyballNumber();
        }
    }

    VolleyballID++;

    cout << VolleyballID;

    return VolleyballID;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// SEARCH VOLLEYBALL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::Demovolleyball::SearchNumber(vector<DNN::Ground::Volleyball> &volleyball)
{
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Volleyball> vVolleyball;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
    if(volleyball.empty())
    {
        H::gotoxy(25,38); H::setcolor(7); cout << "[ ALERT ]"; H::setcolor(4); cout << " FILE IS EMPTY!" << endl;
        H::setcursor(0,0);
        H::gotoxy(65,45);
            H::setcolor(7);cout << "PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }else
    {
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND  "; H::setcolor(5); H::inputNumber(code,4);
        vVolleyball = DNN::Ground::Volleyball::Search::_SearchByNumber(volleyball,atoi(code));
    }
}
void DNN::Ground::Demovolleyball::SearchStatus(vector<DNN::Ground::Volleyball> &volleyball)
{
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    char code[10]; char ground_status[10];
	H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Volleyball> vVolleyball;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
    if(volleyball.empty())
    {
        H::gotoxy(25,38); H::setcolor(7); cout << "[ ALERT ]"; H::setcolor(4); cout << " FILE IS EMPTY!" << endl;
        H::gotoxy(65,45);
            H::setcolor(7);cout << "PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }else
    {
        H::gotoxy(65,45);
        H::setcolor(7);cout << " PRESS [";
        H::setcolor(5); cout << " ARROW KEY ";
        H::setcolor(7);cout << " ] TO CHOOSE STATUS.";
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " CHOOSE STATUS OF GROUND  : ";
        H::setcolor(5);

            char g_status; int y=1;
            do
            {
                H::setcursor(1,1);
                H::gotoxy(55,34); cout << "CLOSED";
                if(y==1)
                {
                    H::setcursor(1,1);
                    H::gotoxy(55,34); cout << "CLOSED";
                }
                if(y==2)
                {
                    H::setcursor(1,1);
                    H::gotoxy(55,34); cout << "OPEN  ";
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

        vVolleyball = DNN::Ground::Volleyball::Search::_SearchByStatus(volleyball,ground_status);
    }
}
void DNN::Ground::Demovolleyball::SearchPrice(vector<DNN::Ground::Volleyball> &volleyball)
{
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    char price[10],price2[10];
	H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Volleyball> vVolleyball;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
    if(volleyball.empty())
    {
        H::gotoxy(25,38); H::setcolor(7); cout << "[ ALERT ]"; H::setcolor(4); cout << " FILE IS EMPTY!" << endl;
        H::setcursor(0,0);
        H::gotoxy(65,45);
            H::setcolor(7);cout << "PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }else
    {
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER PRICE OF GROUND  "; cout << " BETWEEN ";  H::setcolor(2); H::inputNumber(price,4);  H::setcolor(7);  cout << " TO ";  H::setcolor(2);  H::inputNumber(price2,4);
        vVolleyball = DNN::Ground::Volleyball::Search::_SearchByPrice(volleyball,atof(price),atof(price2));
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// UPDATE VOLLEYBALL ///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demovolleyball::UpdateStatus(vector<DNN::Ground::Volleyball> &volleyball)
{
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Volleyball> vVolleyball;
    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);
    if(volleyball.empty())
    {

        H::gotoxy(25,38); H::setcolor(4); cout << "[ ALERT ] : FILE IS EMPTY" << endl;
        H::gotoxy(65,45);
            H::setcolor(7);cout << " PRESS [";
            H::setcolor(5); cout << " ARROW KEY ";
            H::setcolor(7);cout << " ] TO UPDATE DATA. PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND : "; H::setcolor(2); H::inputNumber(code,5);
        vVolleyball = DNN::Ground::Volleyball::Update::_Status(volleyball,atoi(code));
        DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vVolleyball);
    }
}
void DNN::Ground::Demovolleyball::UpdatePrice(vector<DNN::Ground::Volleyball> &volleyball)
{
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Volleyball> vVolleyball;
    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);
    if(volleyball.empty())
    {
        H::gotoxy(25,38); H::setcolor(4); cout << "[ ALERT ] : FILE IS EMPTY" << endl;
        H::gotoxy(65,45);
            H::setcolor(7);cout << " PRESS [";
            H::setcolor(5); cout << " ARROW KEY ";
            H::setcolor(7);cout << " ] TO UPDATE DATA. PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND : "; H::setcolor(2); H::inputNumber(code,5);
        vVolleyball = DNN::Ground::Volleyball::Update::_Price(volleyball,atoi(code));
        DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vVolleyball);
    }
}
void DNN::Ground::Demovolleyball::UpdateDate(vector<DNN::Ground::Volleyball> &volleyball)
{
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Volleyball> vVolleyball;
    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);
    if(volleyball.empty())
    {
        H::gotoxy(25,38); H::setcolor(4); cout << "[ ALERT ] : FILE IS EMPTY" << endl;
        H::gotoxy(65,45);
            H::setcolor(7);cout << " PRESS [";
            H::setcolor(5); cout << " ARROW KEY ";
            H::setcolor(7);cout << " ] TO UPDATE DATA. PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND : "; H::setcolor(2); H::inputNumber(code,5);
        vVolleyball = DNN::Ground::Volleyball::Update::_date(volleyball,atoi(code));
        DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &vVolleyball);
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// SORT VOLLEYBALL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::Demovolleyball::SortNumberASC(vector<DNN::Ground::Volleyball> &volleyball)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextSortRecord(48,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    sort(volleyball.begin(), volleyball.end(), [](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b) { return a.GetVolleyballNumber() < b.GetVolleyballNumber(); });

    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demovolleyball::SortNumberDESC(vector<DNN::Ground::Volleyball> &volleyball)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextSortRecord(48,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    sort(volleyball.begin(), volleyball.end(), [](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b) { return a.GetVolleyballNumber() > b.GetVolleyballNumber(); });
    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }
    else{

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demovolleyball::SortPriceASC(vector<DNN::Ground::Volleyball> &volleyball)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextSortRecord(48,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    sort(volleyball.begin(), volleyball.end(), [](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b) { return a.GetPrice() < b.GetPrice(); });
    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }
    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demovolleyball::SortPriceDESC(vector<DNN::Ground::Volleyball> &volleyball)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextSortRecord(48,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    sort(volleyball.begin(), volleyball.end(), [](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b) { return a.GetPrice() > b.GetPrice(); });
    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }
    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demovolleyball::SortDateASC(vector<DNN::Ground::Volleyball> &volleyball)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextSortRecord(48,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    sort(volleyball.begin(), volleyball.end(), [](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b) {return strcmp(a.GetDate(), b.GetDate()) < 0;});
    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }
    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demovolleyball::SortDateDESC(vector<DNN::Ground::Volleyball> &volleyball)
{
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextSortRecord(48,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    sort(volleyball.begin(), volleyball.end(), [](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b) {return strcmp(a.GetDate(), b.GetDate()) > 0;});
    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }
    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demovolleyball::SortStatusASC(vector<DNN::Ground::Volleyball> &volleyball)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextSortRecord(48,i,7,3);
		H::delay(50);
	}

    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    sort(volleyball.begin(), volleyball.end(), [](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b) { return strcmp(a.GetStatus(), b.GetStatus()) < 0; });

    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demovolleyball::SortStatusDESC(vector<DNN::Ground::Volleyball> &volleyball)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignVolleyball::_TextSortRecord(48,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    sort(volleyball.begin(), volleyball.end(), [](DNN::Ground::Volleyball a, DNN::Ground::Volleyball b) { return strcmp(a.GetStatus(), b.GetStatus()) > 0; });

    if(volleyball.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < volleyball.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            volleyball[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// DELETE FUTSAL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demovolleyball::DeleteVolleyball(vector<DNN::Ground::Volleyball> &volleyball)
{
    volleyball = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");
    vector <DNN::Ground::Volleyball> vVolleyball;
    DNN::Design::Ground::DesignFutsal::DesignDelete(5,3,3);
    DNN::Design::Ground::DesignVolleyball::_Textdeletevolleyball(18,6,3,7);
    char code[10];
    bool found = false;
    H::gotoxy(55,41);
    H::setcolor(7);cout << " PRESS NUMBER [";
    H::setcolor(5); cout << " KEYBOARD ";
    H::setcolor(7);cout << " ] TO DELETE DATA. PRESS [ ";
    H::setcolor(5); cout << "ESC";
    H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
    H::setcolor(5);cout << " ENTER";
    H::setcolor(7); cout << " ] TO DELETE MORE.";

    if(volleyball.empty())
    {
        H::gotoxy(25,35); H::setcolor(2); cout << "[ ALERT ] "; H::setcolor(4); cout << " FILE IS EMPTY" << endl;
        return;
    }

    else
    {
        H::setcursor(1,1);
        H::gotoxy(48,19); H::setcolor(159); H::inputNumber(code,5);

        for( int i=0 ; i<volleyball.size() ; i++ )
        {
            if(volleyball[i].GetVolleyballNumber() == atoi(code))
            {
                volleyball.erase(volleyball.begin() + i);
                DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &volleyball);
                found = true;
                break;
            }
        }
        H::setcursor(0,0);
        if(found == false)
        {
            H::gotoxy(25,35); H::setcolor(6); cout << "[ ALERT ] "; H::setcolor(4); cout << " DATA NOT FOUND" << endl;
        }
        if(found == true)
        {
            H::gotoxy(25,35); H::setcolor(6); cout << "[ SUCCESS ] "; H::setcolor(2); cout << " DATA WAS DELETED" << endl;
        }
    }
}
#endif