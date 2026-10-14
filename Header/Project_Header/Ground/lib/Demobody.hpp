#ifndef DEMOBODY_H
#define DEMOBODY_H

#include "demofutsal.hpp"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// INSERT FUTSAL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demofutsal::InsertFutsal(DNN::Ground::Fusal &futsal)
{
    int number;
    DNN::Design::Ground::DesignFutsal::FutsalInput();
    H::drawBoxDoubleLineWithBG(40,12,50,20,79);
    H::delay(100);
    H::drawBoxDoubleLineWithBG(115,12,50,20,79);
    H::setcolor(79); H::gotoxy(42,14); cout<<"Enter Number of Ground : ";
    number = Demofutsal::AutoGroundNumber();
    futsal.SetNumber(number);
    futsal.InputAll();
    H::setcursor(0,0);
    H::gotoxy(108,35);H::setcolor(47); cout << " PRESS [ ";
                H::setcolor(38); cout << "ESC";
                H::setcolor(47);cout << " ] TO BACK AND PRESS [ ";
                H::setcolor(38);cout << "ENTER";
                H::setcolor(47); cout << " ] TO INPUT MORE.";
    H::setcolor(1);
    DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", futsal);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// DISPLAY FUTSAL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demofutsal::DisplayFutsal(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
	for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignFutsal::TextOutput(55,i);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    H::setcolor(79); H::gotoxy(10,10);
    DNN::Ground::DataMember::Header();
    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE VOLLEYBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }else
    {
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

int DNN::Ground::Demofutsal::AutoGroundNumber()
{
    int GroundID = 0;

    vector<DNN::Ground::Fusal> futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");

    for(int i = 0; i < futsal.size(); i++)
    {
        if(futsal[i].GetNumber() > GroundID)
        {
            GroundID = futsal[i].GetNumber();
        }
    }

    GroundID++;

    cout << GroundID;

    return GroundID;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// UPDATE FUTSAL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::Demofutsal::UpdateStatus(vector<DNN::Ground::Fusal> &futsal)
{
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Fusal> vFutsal;
    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);
    if(futsal.empty())
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
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND : "; H::setcolor(2); H::inputNumber(code,4);
        vFutsal = DNN::Ground::Fusal::Update::_Status(futsal,atoi(code));
        DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vFutsal);
    }
}
void DNN::Ground::Demofutsal::UpdatePrice(vector<DNN::Ground::Fusal> &futsal)
{
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Fusal> vFutsal;
    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);
    if(futsal.empty())
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
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND : "; H::setcolor(2); H::inputNumber(code,4);
        vFutsal = DNN::Ground::Fusal::Update::_Price(futsal,atoi(code));
        DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vFutsal);
    }
}
void DNN::Ground::Demofutsal::UpdateDate(vector<DNN::Ground::Fusal> &futsal)
{
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Fusal> vFutsal;
    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);
    if(futsal.empty())
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
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND : "; H::setcolor(2); H::inputNumber(code,4);
        vFutsal = DNN::Ground::Fusal::Update::_date(futsal,atoi(code));
        DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &vFutsal);
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// SEARCH FUTSAL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::Demofutsal::SearchNumber(vector<DNN::Ground::Fusal> &futsal)
{
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Fusal> vFutsal;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
    if(futsal.empty())
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
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND  "; H::setcolor(2); H::inputNumber(code,4);
        vFutsal = DNN::Ground::Fusal::Search::_SearchByNumber(futsal,atoi(code));
    }
}
void DNN::Ground::Demofutsal::SearchStatus(vector<DNN::Ground::Fusal> &futsal)
{
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    char code[10]; char ground_status[10];
    vector <DNN::Ground::Fusal> vFutsal;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
    if(futsal.empty())
    {
        H::setcursor(0,0);
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
        H::gotoxy(25,34); cout << " CHOOSE STATUS OF GROUND  ";
        H::setcolor(2);

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

        vFutsal = DNN::Ground::Fusal::Search::_SearchByStatus(futsal,ground_status);
        // DNN::File<DNN::Ground::Fusal>::write("Futsal.bin", &vFutsal);
    }
}
void DNN::Ground::Demofutsal::SearchPrice(vector<DNN::Ground::Fusal> &futsal)
{
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    char price[10],price2[10];
	H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Fusal> vFutsal;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
    if(futsal.empty())
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
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER PRICE OF GROUND BETWEEN : "; H::setcolor(2);H::inputNumber(price,5); cout << " TO "; H::inputNumber(price2,5);
        vFutsal = DNN::Ground::Fusal::Search::_SearchByPrice(futsal,atof(price),atof(price2));
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// SORT FUTSAL ///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::Demofutsal::SortNumberASC(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
        system("cls");
        DNN::Design::Ground::DesignFutsal::TextSortNumber(65,i);
        H::delay(50);
    }
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    sort(futsal.begin(), futsal.end(), [](DNN::Ground::Fusal a, DNN::Ground::Fusal b) { return a.GetNumber() < b.GetNumber(); });

    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE FUTSAL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demofutsal::SortNumberDESC(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
        system("cls");
        DNN::Design::Ground::DesignFutsal::TextSortNumber(65,i);
        H::delay(50);
    }
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    sort(futsal.begin(), futsal.end(), [](DNN::Ground::Fusal a, DNN::Ground::Fusal b) { return a.GetNumber() > b.GetNumber(); });

    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE FUTSAL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demofutsal::SortPriceASC(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
        system("cls");
        DNN::Design::Ground::DesignFutsal::TextOutput(55,i);
        H::delay(50);
    }
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    sort(futsal.begin(), futsal.end(), [](DNN::Ground::Fusal a, DNN::Ground::Fusal b) { return a.GetPrice() < b.GetPrice(); });

    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE FUTSAL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demofutsal::SortPriceDESC(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
        system("cls");
        DNN::Design::Ground::DesignFutsal::TextOutput(55,i);
        H::delay(50);
    }
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    sort(futsal.begin(), futsal.end(), [](DNN::Ground::Fusal a, DNN::Ground::Fusal b) { return a.GetPrice() > b.GetPrice(); });

    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE FUTSAL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
void DNN::Ground::Demofutsal::SortDateASC(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
        system("cls");
        DNN::Design::Ground::DesignFutsal::TextOutput(55,i);
        H::delay(50);
    }
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    sort(futsal.begin(), futsal.end(), [](DNN::Ground::Fusal a, DNN::Ground::Fusal b) {return strcmp(a.GetDate(), b.GetDate()) < 0;});

    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE FUTSAL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::Demofutsal::SortDateDESC(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
        system("cls");
        DNN::Design::Ground::DesignFutsal::TextOutput(55,i);
        H::delay(50);
    }
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    sort(futsal.begin(), futsal.end(), [](DNN::Ground::Fusal a, DNN::Ground::Fusal b) { return strcmp(a.GetDate(), b.GetDate()) > 0;});

    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE FUTSAL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::Demofutsal::SortStatusASC(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
        system("cls");
        DNN::Design::Ground::DesignFutsal::TextOutput(55,i);
        H::delay(50);
    }
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    sort(futsal.begin(), futsal.end(), [](DNN::Ground::Fusal a, DNN::Ground::Fusal b) { return strcmp(a.GetStatus(), b.GetStatus()) < 0; });

    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE FUTSAL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::Demofutsal::SortStatusDESC(vector<DNN::Ground::Fusal> &futsal)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
        system("cls");
        DNN::Design::Ground::DesignFutsal::TextOutput(55,i);
        H::delay(50);
    }
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    sort(futsal.begin(), futsal.end(), [](DNN::Ground::Fusal a, DNN::Ground::Fusal b) { return strcmp(a.GetStatus(), b.GetStatus()) > 0; });

    if(futsal.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE FUTSAL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < futsal.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            futsal[i].Display();
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
void DNN::Ground::Demofutsal::DeleteFutsal(vector<DNN::Ground::Fusal> &futsal)
{
    futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
    // vector <DNN::Ground::Fusal> vFutsal;
    DNN::Design::Ground::DesignFutsal::DesignDelete(5,3,3);
    DNN::Design::Ground::DesignFutsal::_TextDeleteFutsal(35,6);
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
    if(futsal.empty())
    {
        H::gotoxy(25,35); H::setcolor(2); cout << "[ ALERT ] "; H::setcolor(4); cout << " FILE IS EMPTY" << endl;
        return;
    }else
    {
        H::setcursor(1,1);
        H::gotoxy(48,19); H::setcolor(159); H::inputNumber(code,4);
        for( int i=0 ; i<futsal.size() ; i++ )
        {
            if(futsal[i].GetNumber() == atoi(code))
            {
                futsal.erase(futsal.begin() + i);
                DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &futsal);
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////// BASKETBALL // BASKETBALL // BASKETBALL // BASKETBALL ////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// AUTO BASKETBALL NUMBER ////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int DNN::Ground::DemoBasketball::AutoBasketBallNumber()
{
    int GroundID = 200;

    vector<DNN::Ground::Basketball> basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");

    for(int i = 0; i < basket.size(); i++)
    {
        if(basket[i].GetNumber() > GroundID)
        {
            GroundID = basket[i].GetNumber();
        }
    }

    GroundID++;

    cout << GroundID;

    return GroundID;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////// INSERT BASKETBALL //////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::DemoBasketball::InsertBasketball(DNN::Ground::Basketball &basket)
{
    int number;
	DNN::Design::Ground::DesignVolleyball::_TextInput(10,1,7,3);
    DNN::Design::Ground::DesignBasketball::DesignInput(10,8,180,3);
    H::drawBoxDoubleLineWithBG(40,12,50,20,79);
    H::delay(100);
    H::drawBoxDoubleLineWithBG(115,12,50,20,79);
    H::setcolor(79); H::gotoxy(42,14); cout<<"Enter Number of Ground : ";
    number = DemoBasketball::AutoBasketBallNumber();
    basket.SetNumber(number);
    basket.InputAll();
    H::setcursor(0,0);
    H::gotoxy(108,35);H::setcolor(47); cout << " PRESS [ ";
                H::setcolor(38); cout << "ESC";
                H::setcolor(47);cout << " ] TO BACK AND PRESS [ ";
                H::setcolor(38);cout << "ENTER";
                H::setcolor(47); cout << " ] TO INPUT MORE.";
    H::setcolor(1);
    DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", basket);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// DISPLAY BASKETBALL //////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::DemoBasketball::DisplayBasketball(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
	for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignBasketball::DesignOutput();
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    H::setcolor(79); H::gotoxy(10,10);
    DNN::Ground::DataMember::Header();
    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }else
    {
        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,14+i); H::setcolor(7);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// SEARCH BASKETBALL ///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::DemoBasketball::SearchNumber(vector<DNN::Ground::Basketball> &basket)
{
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Basketball> vBasket;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);
    if(basket.empty())
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
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND  "; H::setcolor(2); H::inputNumber(code,4);
        vBasket = DNN::Ground::Basketball::Search::_SearchByNumber(basket,atoi(code));
    }
}
void DNN::Ground::DemoBasketball::SearchStatus(vector<DNN::Ground::Basketball> &basket)
{
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");

    char code[10]; char ground_status[10];
    vector <DNN::Ground::Basketball> vBasket;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);

    if(basket.empty())
    {
        H::gotoxy(25,38); H::setcolor(7); cout << "[ ALERT ]"; H::setcolor(4); cout << " FILE IS EMPTY!" << endl;
        H::gotoxy(65,45);
            H::setcolor(7);cout << "PRESS [ ";
            H::setcolor(5); cout << "ESC";
            H::setcolor(7);cout << " ] TO BACK AND PRESS [ ";
            H::setcolor(5);cout << " ENTER";
            H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }

    else
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

        vBasket = DNN::Ground::Basketball::Search::_SearchByStatus(basket,ground_status);
        // DNN::File<DNN::Ground::Fusal>::write("Futsal.bin", &vFutsal);
    }
}
void DNN::Ground::DemoBasketball::SearchPrice(vector<DNN::Ground::Basketball> &basket)
{
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    char price[10],price2[10];
	H::setcolor(1); cout<<" ";

    vector <DNN::Ground::Basketball> vBasket;
    DNN::Design::Ground::DesignFutsal::_DesignSearch(5,2);

    if(basket.empty())
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
    }

    else
    {
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER PRICE OF GROUND  "; cout << " BETWEEN ";  H::setcolor(2); H::inputNumber(price,4);  H::setcolor(7);  cout << " TO ";  H::setcolor(2);  H::inputNumber(price2,4);
        vBasket = DNN::Ground::Basketball::Search::_SearchByPrice(basket,atof(price),atof(price2));
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// UPDATE BASKETBALL ///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::DemoBasketball::UpdateStatus(vector<DNN::Ground::Basketball> &basket)
{
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");

    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Basketball> vBasket;

    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);

    if(basket.empty())
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
    }

    else
    {
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND   : "; H::setcolor(2); H::inputNumber(code,5);
        vBasket = DNN::Ground::Basketball::Update::_Status(basket,atoi(code));
        DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vBasket);
    }
}
void DNN::Ground::DemoBasketball::UpdatePrice(vector<DNN::Ground::Basketball> &basket)
{
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Basketball> vBasket;
    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);

    if(basket.empty())
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
    }

    else
    {
        H::setcursor(1,1);
        H::gotoxy(25,34); H::setcolor(7); cout << " ENTER NUMBER OF GROUND : "; H::setcolor(2); H::inputNumber(code,5);
        vBasket = DNN::Ground::Basketball::Update::_Price(basket,atoi(code));
        DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vBasket);
    }
}
void DNN::Ground::DemoBasketball::UpdateDate(vector<DNN::Ground::Basketball> &basket)
{
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Ground::Basketball> vBasket;
    DNN::Design::Ground::DesignFutsal::_NewUpdate(5,2);
    if(basket.empty())
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
        vBasket = DNN::Ground::Basketball::Update::_date(basket,atoi(code));
        DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &vBasket);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// SORT BASKETBALL /////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::DemoBasketball::SortNumberASC(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}

    DNN::Design::Ground::DesignFutsal::DesignOutput();
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    sort(basket.begin(), basket.end(), [](DNN::Ground::Basketball a, DNN::Ground::Basketball b) { return a.GetNumber() < b.GetNumber(); });

    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();

        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::DemoBasketball::SortNumberDESC(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}

    DNN::Design::Ground::DesignFutsal::DesignOutput();
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    sort(basket.begin(), basket.end(), [](DNN::Ground::Basketball a, DNN::Ground::Basketball b) { return a.GetNumber() > b.GetNumber(); });

    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::DemoBasketball::SortPriceASC(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    sort(basket.begin(), basket.end(), [](DNN::Ground::Basketball a, DNN::Ground::Basketball b) { return a.GetPrice() < b.GetPrice(); });

    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::DemoBasketball::SortPriceDESC(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    sort(basket.begin(), basket.end(), [](DNN::Ground::Basketball a, DNN::Ground::Basketball b) { return a.GetPrice() > b.GetPrice(); });

    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::DemoBasketball::SortDateASC(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    sort(basket.begin(), basket.end(), [](DNN::Ground::Basketball a, DNN::Ground::Basketball b) {return strcmp(a.GetDate(), b.GetDate()) < 0;});
    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else{

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::DemoBasketball::SortDateDESC(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();

    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");

    sort(basket.begin(), basket.end(), [](DNN::Ground::Basketball a, DNN::Ground::Basketball b) {return strcmp(a.GetDate(), b.GetDate()) > 0;});

    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();

        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }

    H::setcolor(1);
}

void DNN::Ground::DemoBasketball::SortStatusASC(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    sort(basket.begin(), basket.end(), [](DNN::Ground::Basketball a, DNN::Ground::Basketball b) { return strcmp(a.GetStatus(), b.GetStatus()) < 0; });

    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

void DNN::Ground::DemoBasketball::SortStatusDESC(vector<DNN::Ground::Basketball> &basket)
{
    H::setcursor(0,0);
    for(int i=15; i>=0; i--){
		system("cls");
		DNN::Design::Ground::DesignBasketball::_TextBasketballItem(50,i,7,3);
		H::delay(50);
	}
    DNN::Design::Ground::DesignFutsal::DesignOutput();
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    sort(basket.begin(), basket.end(), [](DNN::Ground::Basketball a, DNN::Ground::Basketball b) { return strcmp(a.GetStatus(), b.GetStatus()) > 0; });

    if(basket.empty())
    {
            H::gotoxy(48,45); H::setcolor(70); cout << "[ ALERT ] "; H::setcolor(79); cout << "FILE BASKETBALL IS EMPTY! "; H::setcolor(79);cout << " => PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU!";
    }

    else
    {

        H::setcolor(79); H::gotoxy(10,10);
        DNN::Ground::DataMember::Header();
        for (int i = 0; i < basket.size(); i++)
        {
            H::gotoxy(10,13+i); H::setcolor(47);
            basket[i].Display();
            H::gotoxy(48,45);
            H::setcolor(79);cout << "------------------------------------ PRESS [ ";
            H::setcolor(70); cout << "ESC KEY";
            H::setcolor(79);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// DELETE BASKETBALL ///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::DemoBasketball::DeleteBasketball(vector<DNN::Ground::Basketball> &basket)
{
    basket = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
    DNN::Design::Ground::DesignFutsal::DesignDelete(5,3,3);
    DNN::Design::Ground::DesignBasketball::_TextDeleteBasketball(15,6,3,7);
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

    if(basket.empty())
    {
        H::gotoxy(25,35); H::setcolor(2); cout << "[ ALERT ] "; H::setcolor(4); cout << " FILE IS EMPTY" << endl;
        return;
    }

    else
    {
        H::setcursor(1,1);
        H::gotoxy(48,19); H::setcolor(159); H::inputNumber(code,5);

        for( int i=0 ; i<basket.size() ; i++ )
        {
            if(basket[i].GetNumber() == atoi(code))
            {
                basket.erase(basket.begin() + i);
                DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &basket);
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