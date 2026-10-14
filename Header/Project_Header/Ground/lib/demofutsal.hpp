#ifndef DEMOFUTSAL_H
#define DEMOFUTSAL_H

#include "../Ground.hpp"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
namespace DNN::Ground
{
    class Demofutsal
    {

        public:
            static void Status(int a,int b);

            static int AutoGroundNumber();
            static void InsertFutsal(DNN::Ground::Fusal &futsal);
            static void DisplayFutsal(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateAll(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateStatus(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateTeamAShift1(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateTeamBShift1(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateTeamAShift2(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateTeamBShift2(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateTeamAShift3(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateTeamBShift3(vector<DNN::Ground::Fusal> &futsal);
            static void UpdatePrice(vector<DNN::Ground::Fusal> &futsal);
            static void UpdateDate(vector<DNN::Ground::Fusal> &futsal);

            static void SearchNumber(vector<DNN::Ground::Fusal> &futsal);
            static void SearchStatus(vector<DNN::Ground::Fusal> &futsal);
            static void SearchPrice(vector<DNN::Ground::Fusal> &futsal);

            static void SortNumberASC(vector<DNN::Ground::Fusal> &futsal);
            static void SortNumberDESC(vector<DNN::Ground::Fusal> &futsal);
            static void SortStatusASC(vector<DNN::Ground::Fusal> &futsal);
            static void SortStatusDESC(vector<DNN::Ground::Fusal> &futsal);
            static void SortPriceASC(vector<DNN::Ground::Fusal> &futsal);
            static void SortPriceDESC(vector<DNN::Ground::Fusal> &futsal);
            static void SortDateASC(vector<DNN::Ground::Fusal> &futsal);
            static void SortDateDESC(vector<DNN::Ground::Fusal> &futsal);

            static void DeleteFutsal(vector<DNN::Ground::Fusal> &futsal);


        public:
            static void RunFutsal();
            static void MenuFutsalUpdate();
            static void MenuFutsalSearch();
            static void MenuFutsalSort();
            static void SearchMenuFutsal();



    };
    class Demovolleyball
    {
        public:
            static int AutoVolleyballNumber();
            static void InsertVolleyball(DNN::Ground::Volleyball &volleyball);
            static void DisplayVolleyball(vector<DNN::Ground::Volleyball> &volleyball);

            static void SearchNumber(vector<DNN::Ground::Volleyball> &volleyball);
            static void SearchStatus(vector<DNN::Ground::Volleyball> &volleyball);
            static void SearchPrice(vector<DNN::Ground::Volleyball> &volleyball);

            static void UpdateAll(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdateStatus(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdateTeamAShift1(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdateTeamBShift1(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdateTeamAShift2(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdateTeamBShift2(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdateTeamAShift3(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdateTeamBShift3(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdatePrice(vector<DNN::Ground::Volleyball> &volleyball);
            static void UpdateDate(vector<DNN::Ground::Volleyball> &volleyball);

            static void SortNumberASC(vector<DNN::Ground::Volleyball> &volleyball);
            static void SortNumberDESC(vector<DNN::Ground::Volleyball> &volleyball);
            static void SortStatusASC(vector<DNN::Ground::Volleyball> &volleyball);
            static void SortStatusDESC(vector<DNN::Ground::Volleyball> &volleyball);
            static void SortPriceASC(vector<DNN::Ground::Volleyball> &volleyball);
            static void SortPriceDESC(vector<DNN::Ground::Volleyball> &volleyball);
            static void SortDateASC(vector<DNN::Ground::Volleyball> &volleyball);
            static void SortDateDESC(vector<DNN::Ground::Volleyball> &volleyball);

            static void DeleteVolleyball(vector<DNN::Ground::Volleyball> &volleyball);


        public:
            static void RunVolleyball();
            static void MenuVolleyballUpdate();
            static void MenuVolleyballSearch();
            static void MenuVolleyballSort();
    };
    class DemoBasketball
    {
        public:
            static int AutoBasketBallNumber();
            static void InsertBasketball(DNN::Ground::Basketball &basket);
            static void DisplayBasketball(vector<DNN::Ground::Basketball> &basket);

            static void SearchNumber(vector<DNN::Ground::Basketball> &basket);
            static void SearchStatus(vector<DNN::Ground::Basketball> &basket);
            static void SearchPrice(vector<DNN::Ground::Basketball> &basket);

            static void UpdateAll(vector<DNN::Ground::Basketball> &basket);
            static void UpdateStatus(vector<DNN::Ground::Basketball> &basket);
            static void UpdateTeamAShift1(vector<DNN::Ground::Basketball> &basket);
            static void UpdateTeamBShift1(vector<DNN::Ground::Basketball> &basket);
            static void UpdateTeamAShift2(vector<DNN::Ground::Basketball> &basket);
            static void UpdateTeamBShift2(vector<DNN::Ground::Basketball> &basket);
            static void UpdateTeamAShift3(vector<DNN::Ground::Basketball> &basket);
            static void UpdateTeamBShift3(vector<DNN::Ground::Basketball> &basket);
            static void UpdatePrice(vector<DNN::Ground::Basketball> &basket);
            static void UpdateDate(vector<DNN::Ground::Basketball> &basket);

            static void SortNumberASC(vector<DNN::Ground::Basketball> &basket);
            static void SortNumberDESC(vector<DNN::Ground::Basketball> &basket);
            static void SortStatusASC(vector<DNN::Ground::Basketball> &basket);
            static void SortStatusDESC(vector<DNN::Ground::Basketball> &basket);
            static void SortPriceASC(vector<DNN::Ground::Basketball> &basket);
            static void SortPriceDESC(vector<DNN::Ground::Basketball> &basket);
            static void SortDateASC(vector<DNN::Ground::Basketball> &basket);
            static void SortDateDESC(vector<DNN::Ground::Basketball> &basket);

            static void DeleteBasketball(vector<DNN::Ground::Basketball> &basket);
            static void InvoiceTeamA_Shift1(vector<DNN::Ground::Basketball> &basket);


        public:
            static void RunBasketball();
            static void MenuBasketballUpdate();
            static void MenuBasketballSearch();
            static void MenuBasketballSort();
    };
    class DemoDNNSportGround
    {
        public:

            static void RunProgram();
            static void AboutUs();
            static void AboutYannVanneth();
            static void AboutOeunDavid();
    };
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////// RUN PROGRAM /////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::DemoDNNSportGround::RunProgram()
{
    // system("MODE CON COLS=200 LINES=50");
    // H::setFont(16, 700, L"Consolas", true);

    H::setcursor(0,0);
    char press,option;
    int x=1;
    again:
    DNN::Design::Ground::DesignBasketball::_DNNSPORTGROUND(5,2,7,3);
	DNN::Design::Ground::DesignBasketball::_MenuGround(35,22);
    do
    {
        DNN::Design::Ground::DesignBasketball::_TextFutal(143,10,0);
    	DNN::Design::Ground::DesignBasketball::_TextVolleyball(143,20,0);
    	DNN::Design::Ground::DesignBasketball::_TextBasket(143,30,0);

        H::drawBoxDoubleLineWithBG(43, 25, 40, 1, 135);
        H::drawBoxDoubleLineWithBG(43, 30, 40, 1, 135);
        H::drawBoxDoubleLineWithBG(43, 35, 40, 1, 135);
        H::drawBoxDoubleLineWithBG(43, 40, 40, 1, 135);

        H::setcolor(135); H::gotoxy(53,26); cout << " F U T S A L L ";
        H::setcolor(135); H::gotoxy(53,31); cout << " V O L L E Y B A L L ";
        H::setcolor(135); H::gotoxy(53,36); cout << " B A S K E T B A L L ";
        H::setcolor(135); H::gotoxy(55,41); cout << " B A C K";

        if( x==1 )
        {
            DNN::Design::Ground::DesignBasketball::_TextFutal(143,10,7);
            H::drawBoxDoubleLineWithBG(43, 25, 40, 1, 7);
            H::setcolor(7); H::gotoxy(53,26); cout << " F U T S A L L <=";
        }

        if( x==2 )
        {
            DNN::Design::Ground::DesignBasketball::_TextVolleyball(143,20,7);
            H::drawBoxDoubleLineWithBG(43, 30, 40, 1, 7);
            H::setcolor(7); H::gotoxy(53,31); cout << " V O L L E Y B A L L <=";
        }

        if( x==3 )
        {
            DNN::Design::Ground::DesignBasketball::_TextBasket(143,30,7);
            H::drawBoxDoubleLineWithBG(43, 35, 40, 1, 7);
            H::setcolor(7); H::gotoxy(53,36); cout << " B A S K E T B A L L <=";
        }

        if( x==4 )
        {
            DNN::Design::Ground::DesignBasketball::_TextFutal(143,10,0);
            DNN::Design::Ground::DesignBasketball::_TextVolleyball(143,20,0);
            DNN::Design::Ground::DesignBasketball::_TextBasket(143,30,0);
            H::drawBoxDoubleLineWithBG(43, 40, 40, 1, 7);
            H::setcolor(7); H::gotoxy(55,41); cout << " B A C K <=";
        }

        DNN::Design::Ground::DesignFutsal::RunTime(157,2);
        press = getch();
        switch(press)
        {
            case KEY_ARROW_LEFT:
            { //left
                x--;
                if(x<1) x=4; break;
            }
            case KEY_ARROW_RIGHT:
            {//right
                x++;
                if(x>4) x=1; break;
            }
            case KEY_ARROW_UP:
            {//up
                x--;
                if(x<1) x=4; break;
            }

            case KEY_ARROW_DOWN:
            {//down
                x++;
                if(x>4) x=1; break;
            }
        }
    }while(press != 13);

    switch(x)
    {
        case 1:
        {
            input:
            system("cls");
            H::setcolor(1);
            Demofutsal::RunFutsal();
            back:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto input;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }

            else
            {
                H::gotoxy(143,42); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(70,40,30,1,47);
                goto back;
            }
            break;
        }

        case 2:
        {
            seach:
            system("cls");
            H::setcolor(1);
            Demovolleyball::RunVolleyball();
            backs:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto seach;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }

            else
            {
                H::gotoxy(143,42); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(70,40,30,1,47);
                goto backs;
            }
            break;
        }
        case 3:
        {
            system("cls");
            H::setcolor(1);

            delet:
            DemoBasketball::RunBasketball();
            backd:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto delet;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }

            else
            {
                H::gotoxy(143,42); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(30,37,35,1,1);
                goto backd;
            }
            break;
        }
        case 4:
        {
            system("cls");
            H::setcolor(1);

            Account account; vector<LoginTemp> lt = DNN::File<LoginTemp>::read("temp.dnn");
            if(account.checkAdmin(lt[0].getUsername(),lt[0].getPassword())){DNN::User::MainMenu::Admin();}
            else{ DNN::User::MainMenu::Staff();}

            break;
        }
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////// FUTSAL //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demofutsal::RunFutsal()
{
    system("MODE CON COLS=200 LINES=50");
    H::setFont(16, 700, L"Consolas", true);
    DNN::Ground::Fusal futsal;
    vector<DNN::Ground::Fusal>vec;
    H::setcursor(0,0);
    char press,option;
    int x=1;
    again:
    DNN::Design::Ground::DesignFutsal::_FutsalHomeScreen(15,2,3);
    DNN::Design::Ground::DesignFutsal::_TextFutsalMenu(15,2);
    do{
        H::drawBoxDoubleLineWithBG(20,15,30,1,135);
        H::gotoxy(27,16); cout << " I N S E R T ";
        H::drawBoxDoubleLineWithBG(50,22,30,1,135);
        H::gotoxy(57,23); cout << " S E A R C H ";
        H::drawBoxDoubleLineWithBG(60,29,30,1,135);
        H::gotoxy(67,30); cout << " D E L E T E ";
        H::drawBoxDoubleLineWithBG(110,29,30,1,135);
        H::gotoxy(119,30); cout << " D I S P L A Y ";
        H::drawBoxDoubleLineWithBG(120,22,30,1,135);
        H::gotoxy(127,23); cout << " U P D A T E ";
        H::drawBoxDoubleLineWithBG(150,15,30,1,135);
        H::gotoxy(157,16); cout << " B A C K ";
        H::drawBoxDoubleLineWithBG(85,13,30,1,135);
        H::gotoxy(94,14); cout << " S O R T ";
        H::gotoxy(70,42); H::setcolor(7); cout<< " USE [ "; H::setcolor(5); cout << "ARROW KEYS"; H::setcolor(7); cout << " ] "; H::setcolor(7); cout << "TO MOVE OPTION AND [ "; H::setcolor(5); cout << "ENTER"; H::setcolor(7); cout << " ] TO SELECT";
        if( x==1 )
        {
            H::drawBoxDoubleLineWithBG(20,15,30,1,7);
            H::gotoxy(27,16); cout << " I N S E R T ";
        }
        if( x==2 )
        {
            H::drawBoxDoubleLineWithBG(50,22,30,1,7);
            H::gotoxy(57,23); cout << " S E A R C H ";
        }
        if( x==3 )
        {
            H::drawBoxDoubleLineWithBG(60,29,30,1,7);
            H::gotoxy(67,30); cout << " D E L E T E ";
        }
        if( x==4 )
        {
            H::drawBoxDoubleLineWithBG(110,29,30,1,7);
            H::gotoxy(119,30); cout << " D I S P L A Y ";
        }
        if( x==5 )
        {
            H::drawBoxDoubleLineWithBG(120,22,30,1,7);
            H::gotoxy(127,23); cout << " U P D A T E ";
        }
        if( x==6 )
        {
            H::drawBoxDoubleLineWithBG(150,15,30,1,7);
            H::gotoxy(157,16); cout << " B A C K ";
        }
        if( x==7 )
        {
            H::drawBoxDoubleLineWithBG(85,13,30,1,7);
            H::gotoxy(94,14); cout << " S O R T ";
        }
        DNN::Design::Ground::DesignFutsal::RunTime(160,2);
        press = getch();
        switch(press)
        {
            case 75:
            { //left
                x--;
                if(x<1) x=7; break;
            }
            case 77:
            {//right
                x++;
                if(x>7) x=1; break;
            }
            case 72:
            {//up
                x--;
                if(x<1) x=7; break;
            }

            case 80:
            {//down
                x++;
                if(x>7) x=1; break;
            }
        }
    }while(press != 13);

    switch(x)
    {
        case 1:
        {
            input:
            system("cls");
            H::setcolor(1);
            InsertFutsal(futsal);
            back:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto input;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(70,40); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(70,40,30,1,4);
                goto back;
            }
            break;
        }

        case 2:
        {
            seach:
            system("cls");
            H::setcolor(1);
            SearchMenuFutsal();
            backs:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto seach;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(70,40); H::setcolor(35);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(70,40,30,1,47);
                goto backs;
            }
            break;
        }
        case 3:
        {
            system("cls");
            H::setcolor(1);

            delet:
            DeleteFutsal(vec);
            backd:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto delet;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(30,37); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(30,37,35,1,1);
                goto backd;
            }
            break;
        }
        case 4:
        {
            Display:
            system("cls");
            H::setcolor(1);
            DisplayFutsal(vec);
            backdisplay:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto Display;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backdisplay;
            }
            break;
        }
        case 5:
        {
            update:
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);
            MenuFutsalUpdate();
            backupdate:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto update;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backupdate;
            }
            break;
        }
        case 6:
        {
            H::clearBox(0,0,200,50,1);
            DemoDNNSportGround::RunProgram();
            break;
        }
        case 7:
        {
            sort:
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);
            MenuFutsalSort();
            backsort:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto sort;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backsort;
            }
            break;
        }
    }
}
void DNN::Ground::Demofutsal::MenuFutsalUpdate()
{
    H::setcursor(0,0);
    DNN::Ground::Fusal futsal;
    vector<DNN::Ground::Fusal>vec;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_MenuNewUpdate(100,2);
    do
    {
        choose:
        H::gotoxy(60,44); H::setcolor(2); cout<<"[ TIPS ] -> "; H::setcolor(7); cout<<"PRESS [ "; H::setcolor(5); cout<<"NUMBER"; H::setcolor(7); cout<<" ] FROM KEYBOARD TO SELECT OPTION. "; H::setcolor(7); cout << "PRESS [ "; H::setcolor(5); cout << "ESC"; H::setcolor(7); cout << " ] TO BACK.";
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                UpdateStatus(vec);
                b:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto b;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                UpdateDate(vec);
                c:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto c;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                UpdatePrice(vec);
                d:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto d;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunFutsal();
                break;
            }
            default:
            {
                H::gotoxy(60,44); H::setcolor(2); cout <<"[ ALERTS ] ->"; H::setcolor(4); cout << "INVALID CHOICE, PLEASE TRY AGAIN!                                                                   ";
                H::delay(1000);
                goto choose;
                break;
            }
        }
    }while(option != 27);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demofutsal::MenuFutsalSort()
{
    H::setcursor(0,0);
    DNN::Ground::Fusal futsal;
    vector<DNN::Ground::Fusal>vec;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_MenuSort(5,4);
    DNN::Design::Ground::DesignFutsal::_TextSortData(40,8);
    do
    {
        choose:
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                SortNumberASC(vec);
                h:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto h;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                SortNumberDESC(vec);
                g:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto g;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                SortPriceASC(vec);
                f:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto f;
                }
                break;
            }
            case '4':
            {
                tma1:
                H::clearBox(0,0,200,200,7);
                SortPriceDESC(vec);
                e:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma1;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto e;
                }
                break;
            }
            case '5':
            {
                tmb1:
                H::clearBox(0,0,200,200,7);
                SortDateASC(vec);
                d:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tmb1;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto d;
                }
                break;
            }
            case '6':
            {
                tma2:
                H::clearBox(0,0,200,200,7);
                SortDateDESC(vec);
                c:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma2;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto c;
                }
                break;
            }
            case '7':
            {
                tmb2:
                H::clearBox(0,0,200,200,7);
                SortStatusASC(vec);
                b:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tmb2;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto b;
                }
                break;
            }
            case '8':
            {
                tma3:
                H::clearBox(0,0,200,200,7);
                SortStatusDESC(vec);
                a:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma3;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto a;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunFutsal();
                break;
            }
        }
    }while(option != 27);
}
void DNN::Ground::Demofutsal::SearchMenuFutsal()
{
    H::setcursor(0,0);
    DNN::Ground::Fusal futsal;
    vector<DNN::Ground::Fusal>vec;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_SearchMenu(15,15);
	DNN::Design::Ground::DesignFutsal::_TextSearchMenu(35,2);
    do
    {
        choose:
        H::gotoxy(60,40); H::setcolor(5); cout << " [ TIPS ] -> "; H::setcolor(7); cout << " PRESS [ "; H::setcolor(5); cout << " NUMBER "; H::setcolor(7); cout << " ] FROM KEYBOARD TO SELECT OPTION. "; H::setcolor(7); cout << "PRESS [ "; H::setcolor(5); cout << "ESC"; H::setcolor(7); cout << " ] TO BACK. ";
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                SearchPrice(vec);
                h:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto h;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                SearchNumber(vec);
                g:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto g;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                SearchStatus(vec);
                f:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto f;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunFutsal();
                break;
            }
            default:
            {
                H::gotoxy(35,40); H::setcolor(5); cout <<"[ ALERTS ] ->"; H::setcolor(4); cout << " INVALID CHOICE, PLEASE TRY AGAIN!                                                                   ";
                H::delay(1000);   H::clearBox(30,40,47,1,1);
                goto choose;
                break;
            }
        }
    }while(option != 27);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////// VOLLEYBALL //////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Ground::Demovolleyball::RunVolleyball()
{
    system("MODE CON COLS=200 LINES=50");
    H::setFont(16, 700, L"Consolas", true);
    DNN::Ground::Volleyball volleyball;
    vector<DNN::Ground::Volleyball>vec;
    H::setcursor(0,0);
    char press,option;
    int x=1;
    again:
    DNN::Design::Ground::DesignFutsal::_FutsalHomeScreen(15,2,3);
    DNN::Design::Ground::DesignVolleyball::_TextMenu(20,2,7,3);
    do{
        H::drawBoxDoubleLineWithBG(20,15,30,1,135);
        H::gotoxy(27,16); cout << " I N S E R T ";
        H::drawBoxDoubleLineWithBG(50,22,30,1,135);
        H::gotoxy(57,23); cout << " S E A R C H ";
        H::drawBoxDoubleLineWithBG(60,29,30,1,135);
        H::gotoxy(67,30); cout << " D E L E T E ";
        H::drawBoxDoubleLineWithBG(110,29,30,1,135);
        H::gotoxy(119,30); cout << " D I S P L A Y ";
        H::drawBoxDoubleLineWithBG(120,22,30,1,135);
        H::gotoxy(127,23); cout << " U P D A T E ";
        H::drawBoxDoubleLineWithBG(150,15,30,1,135);
        H::gotoxy(157,16); cout << " B A C K ";
        H::drawBoxDoubleLineWithBG(85,13,30,1,135);
        H::gotoxy(94,14); cout << " S O R T ";
        H::gotoxy(70,42); H::setcolor(7); cout<< " USE [ "; H::setcolor(5); cout << "ARROW KEYS"; H::setcolor(7); cout << " ] "; H::setcolor(7); cout << "TO MOVE OPTION AND [ "; H::setcolor(5); cout << "ENTER"; H::setcolor(7); cout << " ] TO SELECT";
        if( x==1 )
        {
            H::drawBoxDoubleLineWithBG(20,15,30,1,7);
            H::gotoxy(27,16); cout << " I N S E R T ";
        }
        if( x==2 )
        {
            H::drawBoxDoubleLineWithBG(50,22,30,1,7);
            H::gotoxy(57,23); cout << " S E A R C H ";
        }
        if( x==3 )
        {
            H::drawBoxDoubleLineWithBG(60,29,30,1,7);
            H::gotoxy(67,30); cout << " D E L E T E ";
        }
        if( x==4 )
        {
            H::drawBoxDoubleLineWithBG(110,29,30,1,7);
            H::gotoxy(119,30); cout << " D I S P L A Y ";
        }
        if( x==5 )
        {
            H::drawBoxDoubleLineWithBG(120,22,30,1,7);
            H::gotoxy(127,23); cout << " U P D A T E ";
        }
        if( x==6 )
        {
            H::drawBoxDoubleLineWithBG(150,15,30,1,7);
            H::gotoxy(157,16); cout << " B A C K ";
        }
        if( x==7 )
        {
            H::drawBoxDoubleLineWithBG(85,13,30,1,7);
            H::gotoxy(94,14); cout << " S O R T ";
        }
        DNN::Design::Ground::DesignFutsal::RunTime(160,2);
        press = getch();
        switch(press)
        {
            case 75:
            { //left
                x--;
                if(x<1) x=7; break;
            }
            case 77:
            {//right
                x++;
                if(x>7) x=1; break;
            }
            case 72:
            {//up
                x--;
                if(x<1) x=7; break;
            }

            case 80:
            {//down
                x++;
                if(x>7) x=1; break;
            }
        }
    }while(press != 13);

    switch(x)
    {
        case 1:
        {
            input:
            system("cls");
            H::setcolor(1);
            InsertVolleyball(volleyball);
            back:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto input;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,35); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,35,30,1,4);
                goto back;
            }
            break;
        }

        case 2:
        {
            seach:
            system("cls");
            H::setcolor(1);
            MenuVolleyballSearch();
            backs:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto seach;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(70,40); H::setcolor(35);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(70,40,30,1,47);
                goto backs;
            }
            break;
        }
        case 3:
        {
            system("cls");
            H::setcolor(1);

            delet:
            DeleteVolleyball(vec);
            backd:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto delet;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(30,37); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(30,37,35,1,1);
                goto backd;
            }
            break;
        }
        case 4:
        {
            Display:
            system("cls");
            H::setcolor(1);
            DisplayVolleyball(vec);
            backdisplay:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto Display;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backdisplay;
            }
            break;
        }
        case 5:
        {
            update:
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);
            MenuVolleyballUpdate();
            backupdate:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto update;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backupdate;
            }
            break;
        }
        case 6:
        {
            H::clearBox(0,0,200,50,1);
            DemoDNNSportGround::RunProgram();
            break;
        }
        case 7:
        {
            sort:
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);
            MenuVolleyballSort();
            backsort:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto sort;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backsort;
            }
            break;
        }
    }
}
void DNN::Ground::Demovolleyball::MenuVolleyballSort()
{
    H::setcursor(0,0);
    vector<DNN::Ground::Volleyball>vec;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_MenuSort(5,4);
    DNN::Design::Ground::DesignVolleyball::_TextSortItem(40,8,3,7);
    do
    {
        choose:
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                SortNumberASC(vec);
                h:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto h;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                SortNumberDESC(vec);
                g:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto g;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                SortPriceASC(vec);
                f:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto f;
                }
                break;
            }
            case '4':
            {
                tma1:
                H::clearBox(0,0,200,200,7);
                SortPriceDESC(vec);
                e:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma1;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto e;
                }
                break;
            }
            case '5':
            {
                tmb1:
                H::clearBox(0,0,200,200,7);
                SortDateASC(vec);
                d:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tmb1;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto d;
                }
                break;
            }
            case '6':
            {
                tma2:
                H::clearBox(0,0,200,200,7);
                SortDateDESC(vec);
                c:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma2;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto c;
                }
                break;
            }
            case '7':
            {
                tmb2:
                H::clearBox(0,0,200,200,7);
                SortStatusASC(vec);
                b:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tmb2;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto b;
                }
                break;
            }
            case '8':
            {
                tma3:
                H::clearBox(0,0,200,200,7);
                SortStatusDESC(vec);
                a:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma3;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto a;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunVolleyball();
                break;
            }
        }
    }while(option != 27);
}
void DNN::Ground::Demovolleyball::MenuVolleyballSearch()
{
    H::setcursor(0,0);
    DNN::Ground::Volleyball volleyball;
    vector<DNN::Ground::Volleyball>vec;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_SearchMenu(15,15);
	DNN::Design::Ground::DesignVolleyball::_Textseachvolleyball(24,3,7,3);
    do
    {
        choose:
        H::gotoxy(60,40); H::setcolor(5); cout << " [ TIPS ] -> "; H::setcolor(7); cout << " PRESS [ "; H::setcolor(5); cout << " NUMBER "; H::setcolor(7); cout << " ] FROM KEYBOARD TO SELECT OPTION. "; H::setcolor(7); cout << "PRESS [ "; H::setcolor(5); cout << "ESC"; H::setcolor(7); cout << " ] TO BACK. ";
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                SearchPrice(vec);
                h:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto h;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                SearchNumber(vec);
                g:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto g;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                SearchStatus(vec);
                f:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto f;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunVolleyball();
                break;
            }
            default:
            {
                H::gotoxy(35,40); H::setcolor(5); cout <<"[ ALERTS ] ->"; H::setcolor(4); cout << " INVALID CHOICE, PLEASE TRY AGAIN!                                                                   ";
                H::delay(1000);   H::clearBox(30,40,47,1,1);
                goto choose;
                break;
            }
        }
    }while(option != 27);
}
void DNN::Ground::Demovolleyball::MenuVolleyballUpdate()
{
    H::setcursor(0,0);
    vector<DNN::Ground::Volleyball>vec;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_MenuNewUpdate(100,2);
    do
    {
        choose:
        H::gotoxy(60,44); H::setcolor(2); cout<<"[ TIPS ] -> "; H::setcolor(7); cout<<"PRESS [ "; H::setcolor(5); cout<<"NUMBER"; H::setcolor(7); cout<<" ] FROM KEYBOARD TO SELECT OPTION. "; H::setcolor(7); cout << "PRESS [ "; H::setcolor(5); cout << "ESC"; H::setcolor(7); cout << " ] TO BACK.";
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                UpdateStatus(vec);
                b:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto b;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                UpdateDate(vec);
                c:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto c;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                UpdatePrice(vec);
                d:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto d;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunVolleyball();
                break;
            }
            default:
            {
                H::gotoxy(60,44); H::setcolor(2); cout <<"[ ALERTS ] ->"; H::setcolor(4); cout << "INVALID CHOICE, PLEASE TRY AGAIN!                                                                   ";
                H::delay(1000);
                goto choose;
                break;
            }
        }
    }while(option != 27);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////// BASKETBALL //////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::DemoBasketball::MenuBasketballSearch()
{
    H::setcursor(0,0);
    vector<DNN::Ground::Basketball>vbk;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_SearchMenu(15,15);
	DNN::Design::Ground::DesignBasketball::_TextSearchBasketball(20,3,7,3);
    do
    {
        choose:
        H::gotoxy(60,40); H::setcolor(5); cout << " [ TIPS ] -> "; H::setcolor(7); cout << " PRESS [ "; H::setcolor(5); cout << " NUMBER "; H::setcolor(7); cout << " ] FROM KEYBOARD TO SELECT OPTION. "; H::setcolor(7); cout << "PRESS [ "; H::setcolor(5); cout << "ESC"; H::setcolor(7); cout << " ] TO BACK. ";
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                SearchPrice(vbk);
                h:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto h;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                SearchNumber(vbk);
                g:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto g;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                SearchStatus(vbk);
                f:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto f;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunBasketball();
                break;
            }
            default:
            {
                H::gotoxy(35,40); H::setcolor(5); cout <<"[ ALERTS ] ->"; H::setcolor(4); cout << " INVALID CHOICE, PLEASE TRY AGAIN!                                                                   ";
                H::delay(1000);   H::clearBox(30,40,47,1,1);
                goto choose;
                break;
            }
        }
    }while(option != 27);
}

void DNN::Ground::DemoBasketball::MenuBasketballSort()
{
    H::setcursor(0,0);
    vector<DNN::Ground::Basketball>vbk;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_MenuSort(5,4);
    DNN::Design::Ground::DesignVolleyball::_TextSortItem(40,8,3,7);
    do
    {
        choose:
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                SortNumberASC(vbk);
                h:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto h;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                SortNumberDESC(vbk);
                g:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto g;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                SortPriceASC(vbk);
                f:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto f;
                }
                break;
            }
            case '4':
            {
                tma1:
                H::clearBox(0,0,200,200,7);
                SortPriceDESC(vbk);
                e:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma1;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto e;
                }
                break;
            }
            case '5':
            {
                tmb1:
                H::clearBox(0,0,200,200,7);
                SortDateASC(vbk);
                d:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tmb1;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto d;
                }
                break;
            }
            case '6':
            {
                tma2:
                H::clearBox(0,0,200,200,7);
                SortDateDESC(vbk);
                c:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma2;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto c;
                }
                break;
            }
            case '7':
            {
                tmb2:
                H::clearBox(0,0,200,200,7);
                SortStatusASC(vbk);
                b:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tmb2;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto b;
                }
                break;
            }
            case '8':
            {
                tma3:
                H::clearBox(0,0,200,200,7);
                SortStatusDESC(vbk);
                a:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto tma3;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto a;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunBasketball();
                break;
            }
        }
    }while(option != 27);
}

void DNN::Ground::DemoBasketball::MenuBasketballUpdate()
{
    H::setcursor(0,0);
    vector<DNN::Ground::Basketball>vbk;
    char option; char press;
    again:
    H::clearBox(0,0,200,200,7);
    H::setcursor(0,0);
    DNN::Design::Ground::DesignFutsal::_MenuNewUpdate(100,2);
    do
    {
        choose:
        H::gotoxy(60,44); H::setcolor(2); cout<<"[ TIPS ] -> "; H::setcolor(7); cout<<"PRESS [ "; H::setcolor(5); cout<<"NUMBER"; H::setcolor(7); cout<<" ] FROM KEYBOARD TO SELECT OPTION. "; H::setcolor(7); cout << "PRESS [ "; H::setcolor(5); cout << "ESC"; H::setcolor(7); cout << " ] TO BACK.";
        option = getch();
        switch(option)
        {
            case '1':
            {
                backstatus:
                H::clearBox(0,0,200,200,7);
                UpdateStatus(vbk);
                b:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backstatus;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto b;
                }
                break;
            }
            case '2':
            {
                backdate:
                H::clearBox(0,0,200,200,7);
                UpdateDate(vbk);
                c:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backdate;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto c;
                }
                break;
            }
            case '3':
            {
                backprice:
                H::clearBox(0,0,200,200,7);
                UpdatePrice(vbk);
                d:
                press = getch();
                if( press == 13 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto backprice;
                }
                else if( press == 27 )
                {
                    system("cls");
                    H::setcolor(1);
                    goto again;
                }
                else{
                    goto d;
                }
                break;
            }
            case 27:
            {
                H::clearBox(0,0,200,200,7);
                H::setcolor(1);
                RunBasketball();
                break;
            }
            default:
            {
                H::gotoxy(60,44); H::setcolor(2); cout <<"[ ALERTS ] ->"; H::setcolor(4); cout << "INVALID CHOICE, PLEASE TRY AGAIN!                                                                   ";
                H::delay(1000);
                goto choose;
                break;
            }
        }
    }while(option != 27);
}

void DNN::Ground::DemoBasketball::RunBasketball()
{
    system("MODE CON COLS=200 LINES=50");
    H::setFont(16, 700, L"Consolas", true);
    DNN::Ground::Basketball basket;
    vector<DNN::Ground::Basketball>vbk;
    H::setcursor(0,0);
    char press,option;
    int x=1;
    again:
    DNN::Design::Ground::DesignFutsal::_FutsalHomeScreen(15,2,3);
    DNN::Design::Ground::DesignBasketball::_TextBasketball(20,2,7,3);
    do{
        H::drawBoxDoubleLineWithBG(20,15,30,1,135);
        H::gotoxy(27,16); cout << " I N S E R T ";
        H::drawBoxDoubleLineWithBG(50,22,30,1,135);
        H::gotoxy(57,23); cout << " S E A R C H ";
        H::drawBoxDoubleLineWithBG(60,29,30,1,135);
        H::gotoxy(67,30); cout << " D E L E T E ";
        H::drawBoxDoubleLineWithBG(110,29,30,1,135);
        H::gotoxy(119,30); cout << " D I S P L A Y ";
        H::drawBoxDoubleLineWithBG(120,22,30,1,135);
        H::gotoxy(127,23); cout << " U P D A T E ";
        H::drawBoxDoubleLineWithBG(150,15,30,1,135);
        H::gotoxy(157,16); cout << " B A C K ";
        H::drawBoxDoubleLineWithBG(85,13,30,1,135);
        H::gotoxy(94,14); cout << " S O R T ";
        H::gotoxy(70,42); H::setcolor(7); cout<< " USE [ "; H::setcolor(5); cout << "ARROW KEYS"; H::setcolor(7); cout << " ] "; H::setcolor(7); cout << "TO MOVE OPTION AND [ "; H::setcolor(5); cout << "ENTER"; H::setcolor(7); cout << " ] TO SELECT";
        if( x==1 )
        {
            H::drawBoxDoubleLineWithBG(20,15,30,1,7);
            H::gotoxy(27,16); cout << " I N S E R T ";
        }
        if( x==2 )
        {
            H::drawBoxDoubleLineWithBG(50,22,30,1,7);
            H::gotoxy(57,23); cout << " S E A R C H ";
        }
        if( x==3 )
        {
            H::drawBoxDoubleLineWithBG(60,29,30,1,7);
            H::gotoxy(67,30); cout << " D E L E T E ";
        }
        if( x==4 )
        {
            H::drawBoxDoubleLineWithBG(110,29,30,1,7);
            H::gotoxy(119,30); cout << " D I S P L A Y ";
        }
        if( x==5 )
        {
            H::drawBoxDoubleLineWithBG(120,22,30,1,7);
            H::gotoxy(127,23); cout << " U P D A T E ";
        }
        if( x==6 )
        {
            H::drawBoxDoubleLineWithBG(150,15,30,1,7);
            H::gotoxy(157,16); cout << " B A C K ";
        }
        if( x==7 )
        {
            H::drawBoxDoubleLineWithBG(85,13,30,1,7);
            H::gotoxy(94,14); cout << " S O R T ";
        }
        DNN::Design::Ground::DesignFutsal::RunTime(160,2);
        press = getch();
        switch(press)
        {
            case 75:
            { //left
                x--;
                if(x<1) x=7; break;
            }
            case 77:
            {//right
                x++;
                if(x>7) x=1; break;
            }
            case 72:
            {//up
                x--;
                if(x<1) x=7; break;
            }

            case 80:
            {//down
                x++;
                if(x>7) x=1; break;
            }
        }
    }while(press != 13);

    switch(x)
    {
        case 1:
        {
            input:
            system("cls");
            H::setcolor(1);
            InsertBasketball(basket);
            back:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto input;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(70,40); H::setcolor(35);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(70,40,30,1,47);
                goto back;
            }
            break;
        }

        case 2:
        {
            seach:
            system("cls");
            H::setcolor(1);
            MenuBasketballSearch();
            backs:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto seach;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(70,40); H::setcolor(35);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(70,40,30,1,47);
                goto backs;
            }
            break;
        }
        case 3:
        {
            system("cls");
            H::setcolor(1);

            delet:
            DeleteBasketball(vbk);
            backd:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto delet;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(30,37); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(30,37,35,1,1);
                goto backd;
            }
            break;
        }
        case 4:
        {
            Display:
            system("cls");
            H::setcolor(1);
            DisplayBasketball(vbk);
            backdisplay:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto Display;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backdisplay;
            }
            break;
        }
        case 5:
        {
            update:
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);
            MenuBasketballUpdate();
            backupdate:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto update;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backupdate;
            }
            break;
        }
        case 6:
        {
            H::clearBox(0,0,200,50,1);
            DemoDNNSportGround::RunProgram();
            break;
        }
        case 7:
        {
            sort:
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);
            MenuBasketballSort();
            backsort:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto sort;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(60,40); H::setcolor(47);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(60,40,40,1,47);
                goto backsort;
            }
            break;
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////// ABOUT US //////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Ground::DemoDNNSportGround::AboutUs()
{
    H::setcursor(0,0);
    char press,option;
    int x=3;
    again:
    DNN::Design::Ground::DesignAboutus::_DesignAboutUs(2,2,6,3);
    DNN::Design::Ground::DesignAboutus::_TextMessage();
    DNN::Design::Ground::DesignAboutus::_TextAboutus(2,3,6,5);
    do
    {

        H::drawBoxDoubleLineWithBG(7,22,20,3,240);
        H::drawBoxDoubleLineWithBG(40,22,20,3,240);
        H::drawBoxDoubleLineWithBG(72,22,20,3,240);

        H::gotoxy(9,24); H::setcolor(252);  cout << " MR.YANN VANNETH ";
        H::gotoxy(42,24); H::setcolor(252); cout << " MR.OEUN DAVID ";
        H::gotoxy(78,24); H::setcolor(252); cout << " BACK ";

        H::gotoxy(116,36); H::setcolor(252); cout << " [ TIPS ] ";
        H::gotoxy(116,38); H::setcolor(240); cout << " PRESS NUMBER [ "; H::setcolor(252); cout<<" 1 "; H::setcolor(240); cout<<"] TO WEBSITE ANT TRAINING CENTER.";
        H::gotoxy(116,40); H::setcolor(240); cout << " PRESS NUMBER [ "; H::setcolor(252); cout<<" 2 "; H::setcolor(240); cout<<"] TO WEBSITE MINISTRY OF POST AND TELECOMMUNICATION.";
        H::gotoxy(116,42); H::setcolor(240); cout << " PRESS"; H::setcolor(252); cout<<" ARROW KEYS "; H::setcolor(240); cout<<"TO MOVE OPTION. PRESS"; H::setcolor(252); cout<<" ENTER "; H::setcolor(240); cout<<"TO SELECT.";

        if( x==3 )
        {
            H::drawBoxDoubleLineWithBG(7,22,20,3,252);
            H::gotoxy(9,24); H::setcolor(241); cout << " MR.YANN VANNETH";
        }
        if( x==4 )
        {
            H::drawBoxDoubleLineWithBG(40,22,20,3,252);
            H::gotoxy(42,24); H::setcolor(241); cout << " MR.OEUN DAVID";
        }
        if( x==5 )
        {
            H::drawBoxDoubleLineWithBG(72,22,20,3,252);
            H::gotoxy(78,24); H::setcolor(241); cout << " BACK ";
        }

        press = getch();
        switch(press)
        {
            case 75:
            { //left
                x--;
                if(x<3) x=5; break;
            }
            case 77:
            {//right
                x++;
                if(x>5) x=3; break;
            }
            case 72:
            {//up
                x--;
                if(x<3) x=5; break;
            }

            case 80:
            {//down
                x++;
                if(x>5) x=3; break;
            }
            case '1':
            {
                system("start http://training.antkh.com/");
                break;
            }
            case '2':
            {
                system("start https://mptc.gov.kh/en/");
                break;
            }
        }
    }while(press != 13);

    switch(x)
    {

        case 3:
        {
            H::clearBox(0,0,200,200,7);
            AboutYannVanneth();
            break;
        }
        case 4:
        {
            H::clearBox(0,0,200,200,7);
            AboutOeunDavid();
            break;
        }
        case 5:
        {
            H::clearBox(0,0,200,200,7);

            Account account; vector<LoginTemp> lt = DNN::File<LoginTemp>::read("temp.dnn");
            if(account.checkAdmin(lt[0].getUsername(),lt[0].getPassword())){DNN::User::MainMenu::Admin();}
            else{ DNN::User::MainMenu::Staff();}

            break;
        }
    }
}

void DNN::Ground::DemoDNNSportGround::AboutOeunDavid()
{
    H::setcursor(0,0);
    char press,option;
    int x=3;
    // again:
    DNN::Design::Ground::DesignAboutus::_DesignAboutUs(2,2,6,3);
    DNN::Design::Ground::DesignAboutus::_TextDavid(12,6,3,2);
    DNN::Design::Ground::DesignAboutus::_TextAboutDavid();
    do
    {

        H::drawBoxDoubleLineWithBG(7,22,20,3,240);
        H::drawBoxDoubleLineWithBG(40,22,20,3,240);
        H::drawBoxDoubleLineWithBG(72,22,20,3,240);

        H::gotoxy(9,24); H::setcolor(252);  cout << " ANT WEBSITE ";
        H::gotoxy(42,24); H::setcolor(252); cout << " FACEBOOK";
        H::gotoxy(78,24); H::setcolor(252); cout << " TELEGRAM ";

        H::gotoxy(116,36); H::setcolor(252); cout << " [ TIPS ] ";
        H::gotoxy(116,38); H::setcolor(240); cout << " PRESS [ "; H::setcolor(252); cout<<" ARROW KEYS "; H::setcolor(240); cout<<"] TO MOVE OPTION. PRESS [ "; H::setcolor(252); cout<<" ENTER "; H::setcolor(240); cout<<"] TO SELECT.";
        H::gotoxy(116,40); H::setcolor(240); cout << " PRESS [ "; H::setcolor(252); cout<<" ESC "; H::setcolor(240); cout<<"] TO BACK.";

        if( x==3 )
        {
            H::drawBoxDoubleLineWithBG(7,22,20,3,252);
            H::gotoxy(9,24); H::setcolor(241); cout << " ANT WEBSITE";
        }
        if( x==4 )
        {
            H::drawBoxDoubleLineWithBG(40,22,20,3,252);
            H::gotoxy(42,24); H::setcolor(241); cout << " FACEBOOK";
        }
        if( x==5 )
        {
            H::drawBoxDoubleLineWithBG(72,22,20,3,252);
            H::gotoxy(78,24); H::setcolor(241); cout << " TELEGRAM ";
        }
        again:
        press = getch();
        switch(press)
        {
            case 75:
            { //left
                x--;
                if(x<3) x=5; break;
            }
            case 77:
            {//right
                x++;
                if(x>5) x=3; break;
            }
            case 72:
            {//up
                x--;
                if(x<3) x=5; break;
            }

            case 80:
            {//down
                x++;
                if(x>5) x=3; break;
            }
            case KEY_ESC:
            {
                H::clearBox(0,0,200,200,7);
                AboutUs();
                break;
            }
        }
    }while(press != 13);

    switch(x)
    {

        case 3:
        {
            system("start http://training.antkh.com/students/?s=5003");
            break;
        }
        case 4:
        {
            system("start https://web.facebook.com/mcdavid2u");
            break;
        }
        case 5:
        {
            system("start http://t.me/mcdavidfafa2u");
            break;
        }
    }
    goto again;
}

void DNN::Ground::DemoDNNSportGround::AboutYannVanneth()
{
    H::setcursor(0,0);
    char press,option;
    int x=3;
    // again:
    DNN::Design::Ground::DesignAboutus::_DesignAboutUs(2,2,6,3);
    DNN::Design::Ground::DesignAboutus::_TextVanneth(5,6,2,3);;
    DNN::Design::Ground::DesignAboutus::_TextAboutVanneth();
    do
    {

        H::drawBoxDoubleLineWithBG(7,22,20,3,240);
        H::drawBoxDoubleLineWithBG(40,22,20,3,240);
        H::drawBoxDoubleLineWithBG(72,22,20,3,240);

        H::gotoxy(9,24); H::setcolor(252);  cout << " ANT WEBSITE ";
        H::gotoxy(42,24); H::setcolor(252); cout << " FACEBOOK";
        H::gotoxy(78,24); H::setcolor(252); cout << " TELEGRAM ";

        H::gotoxy(116,36); H::setcolor(252); cout << " [ TIPS ] ";
        H::gotoxy(116,38); H::setcolor(240); cout << " PRESS [ "; H::setcolor(252); cout<<" ARROW KEYS "; H::setcolor(240); cout<<"] TO MOVE OPTION. PRESS [ "; H::setcolor(252); cout<<" ENTER "; H::setcolor(240); cout<<"] TO SELECT.";
        H::gotoxy(116,40); H::setcolor(240); cout << " PRESS [ "; H::setcolor(252); cout<<" ESC "; H::setcolor(240); cout<<"] TO BACK.";

        if( x==3 )
        {
            H::drawBoxDoubleLineWithBG(7,22,20,3,252);
            H::gotoxy(9,24); H::setcolor(241); cout << " ANT WEBSITE";
        }
        if( x==4 )
        {
            H::drawBoxDoubleLineWithBG(40,22,20,3,252);
            H::gotoxy(42,24); H::setcolor(241); cout << " FACEBOOK";
        }
        if( x==5 )
        {
            H::drawBoxDoubleLineWithBG(72,22,20,3,252);
            H::gotoxy(78,24); H::setcolor(241); cout << " TELEGRAM ";
        }
        again:
        press = getch();
        switch(press)
        {
            case 75:
            { //left
                x--;
                if(x<3) x=5; break;
            }
            case 77:
            {//right
                x++;
                if(x>5) x=3; break;
            }
            case 72:
            {//up
                x--;
                if(x<3) x=5; break;
            }

            case 80:
            {//down
                x++;
                if(x>5) x=3; break;
            }
            case KEY_ESC:
            {
                H::clearBox(0,0,200,200,7);
                AboutUs();
                break;
            }
        }
    }while(press != 13);

    switch(x)
    {

        case 3:
        {
            system("start http://training.antkh.com/students/?s=5215");
            break;
        }
        case 4:
        {
            system("start https://web.facebook.com/yannvanneth");
            break;
        }
        case 5:
        {
            system("start https://t.me/YannVanneth");
            break;
        }
    }
    goto again;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////// INCLUDE BODY HEADER FILE ////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Demobody.hpp"
#include "Demobodyvolleyball.hpp"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif