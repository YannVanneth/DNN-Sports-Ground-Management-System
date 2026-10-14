#ifndef FILEFOODANDDRINK_H
#define FILEFOODANDDRINK_H

#include "../Store.hpp"
#include "Design/Design.hpp"

/////////////////////////////////////////////////////////////////////////
//        CLASS DEFINITIONS FOR FILE FOOD AND DRINKS                 //
/////////////////////////////////////////////////////////////////////////
namespace DNN::Store
{
    class DemoFoodAndDrink
    {
        public:

            static int AutoNumberDrink();

            static void AddDrink(DNN::Store::Drinks &drinks);

            static void ViewDrink(vector<DNN::Store::Drinks> &vc);

            static void SearchByNumber(vector<DNN::Store::Drinks> &vc);
            static void SearchByName(vector<DNN::Store::Drinks> &vc);
            static void SearchByType(vector<DNN::Store::Drinks> &vc);
            static void SearchByQuantity(vector<DNN::Store::Drinks> &vc);
            static void SearchByPrice(vector<DNN::Store::Drinks> &vc);

            static void UpdateAll(vector<DNN::Store::Drinks> &vc);
            static void UpdateName(vector<DNN::Store::Drinks> &vc);
            static void UpdateType(vector<DNN::Store::Drinks> &vc);
            static void UpdateQuantity(vector<DNN::Store::Drinks> &vc);
            static void UpdatePrice(vector<DNN::Store::Drinks> &vc);
            static void ImportStock(vector<DNN::Store::Drinks> &vc);

            static void Delete(vector<DNN::Store::Drinks> &vc);

            static void SortBynameAsc(vector<DNN::Store::Drinks> &vc);
            static void SortBynameDesc(vector<DNN::Store::Drinks> &vc);
            static void SortBytypeAsc(vector<DNN::Store::Drinks> &vc);
            static void SortBytypeDesc(vector<DNN::Store::Drinks> &vc);
            static void SortBypriceAsc(vector<DNN::Store::Drinks> &vc);
            static void SortBypriceDesc(vector<DNN::Store::Drinks> &vc);

        public:

            static void RunDrink();
            static void RunSearch();
            static void RunUpdate();
            static void RunSort();
    };
}
/////////////////////////////////////////////////////////////////////////
//                  MENU FOR DRINK                                    ///
/////////////////////////////////////////////////////////////////////////


void DNN::Store::DemoFoodAndDrink::RunDrink()
{
    H::setcursor(0,0);
    DNN::Store::Drinks  drink;
    vector<DNN::Store::Drinks>vec;
    char press,option;
    int x=1;
    again:
    DNN::Design::Store::Menu(3,1);
    do
    {
        H::drawBoxDoubleLineWithBG(17,15,32,1,135);  //insert
        H::gotoxy(20,16); H::setcolor(135); cout << "ADD PRODUCT";

        H::drawBoxDoubleLineWithBG(17,19,32,1,135);  //display
        H::gotoxy(20,20); H::setcolor(135); cout << "DISPLAY PRODUCT";

        H::drawBoxDoubleLineWithBG(17,23,32,1,135);  //search
        H::gotoxy(20,24); H::setcolor(135); cout << "SEARCH PRODUCT";

        H::drawBoxDoubleLineWithBG(17,27,32,1,135);  //update
        H::gotoxy(20,28); H::setcolor(135); cout << "UPDATE PRODUCT";

        H::drawBoxDoubleLineWithBG(17,31,32,1,135);  //delete
        H::gotoxy(20,32); H::setcolor(135); cout << "DELETE PRODUCT";

        H::drawBoxDoubleLineWithBG(17,35,32,1,135);  //sort
        H::gotoxy(20,36); H::setcolor(135); cout << "SORT PRODUCT";

        H::drawBoxDoubleLineWithBG(17,39,32,1,135);  //back
        H::gotoxy(20,40); H::setcolor(135); cout << "EXIT MENU";  

        H::gotoxy(90,46); H::setcolor(7); cout<< " USE [ "; H::setcolor(5); cout << "ARROW KEYS"; H::setcolor(7); cout << " ] "; H::setcolor(7); cout << "TO MOVE OPTION AND PRE5 [ "; H::setcolor(5); cout << "ENTER"; H::setcolor(7); cout << " ] TO SELECT";
       
       
        if( x==1 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,15,32,1,7);  //inser3
            DNN::Design::Store::PicForInsert(93,16);

            DNN::Design::Store::TextInsert(68,5);
            H::gotoxy(20,16); H::setcolor(7); cout << "=> ADD PRODUCT <=";
        }
        if( x==2 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,19,32,1,7);  //display
            DNN::Design::Store::PicForDisplay(88,19,2);
            DNN::Design::Store::PicForDisplay(118,19,3);
			DNN::Design::Store::PicForDisplay(148,19,1);

            DNN::Design::Store::TextDisplay(68,5);
            H::gotoxy(20,20); H::setcolor(7); cout << "=> DISPLAY PRODUCT <=";
        }
        if( x==3 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,23,32,1,7);  //search
            DNN::Design::Store::PicForSearch(103,16);

            DNN::Design::Store::TextSearch(68,5);
            H::gotoxy(20,24); H::setcolor(7); cout << "=> SEARCH PRODUCT <=";
        }
        if( x==4 )
        {
            H::clearBox(65,5,123,10,7);
            DNN::Design::Store::PicForUpdate(103,16);

            DNN::Design::Store::TextUpdate(68,5);
            H::drawBoxDoubleLineWithBG(17,27,32,1,7);  //update
            H::gotoxy(20,28); H::setcolor(7); cout << "=> UPDATE PRODUCT <=";
        }
        if( x==5 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,31,32,1,7);  //delete
            DNN::Design::Store::PicForDelete(93,21);

            DNN::Design::Store::TextDelete(68,5);
            H::gotoxy(20,32); H::setcolor(7); cout << "=> DELETE PRODUCT <=";
        }
        if( x==6 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,35,32,1,7);  //sort
            DNN::Design::Store::PicForSort(103,15);

            DNN::Design::Store::TextSort(68,5);
            H::gotoxy(20,36); H::setcolor(7); cout << "=> SORT PRODUCT <=";
        }
        if( x==7 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,39,32,1,7);  //back
            DNN::Design::Store::PicForBack(103,14);
            
            DNN::Design::Store::TextBack(75,5);
            H::gotoxy(20,40); H::setcolor(7); cout << "=> EXIT MENU <=";
        }
        // DNN::Design::Ground::DesignFutsal::RunTime(160,2);
        press = getch();
        H::clearBox(65,13,123,30,7);
        
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
            H::setcolor(1);

            DemoFoodAndDrink::AddDrink(drink);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto back;
            }
            break;
        }

        case 2:
        {
            seach:
            H::setcolor(1);
            
            ViewDrink(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backs;
            }
            break;
        }
        case 3:
        {
            H::setcolor(1);
            delet:

            RunSearch();

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(20,46,35,1,1);
                goto backd;
            }
            break;
        }
        case 4:
        {
            Display:

            H::setcolor(1);

            RunUpdate();

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backdisplay;
            }
            break;
        }
        case 5:
        {
            update:
            H::setcolor(1);
            Delete(vec);
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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backupdate;
            }
            break;
        }
        case 6:
        {
            sort:

            H::setcolor(1);

            RunSort();

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backsort;
            }
            break;
        }
        case 7:
        {
            a:
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);

            Account account; vector<LoginTemp> lt = DNN::File<LoginTemp>::read("temp.dnn");
            if(account.checkAdmin(lt[0].getUsername(),lt[0].getPassword())){DNN::User::MainMenu::Admin();
            }

            else{ 

                DNN::User::MainMenu::Staff();
            }

            break;
        }
    }
}
void DNN::Store::DemoFoodAndDrink::RunSearch()
{
    H::setcursor(0,0);
    vector<DNN::Store::Drinks>vec;
    char press,option;
    int x=1;
    again:
    DNN::Design::Store::Menu(3,1);
    DNN::Design::Store::PicSearch(90,16);
    do
    {
        H::drawBoxDoubleLineWithBG(17,15,32,1,135);  //number
        H::gotoxy(20,16); H::setcolor(135); cout << "SEARCH BY NUMBER";

        H::drawBoxDoubleLineWithBG(17,19,32,1,135);  //name
        H::gotoxy(20,20); H::setcolor(135); cout << "SEARCH BY NAME";

        H::drawBoxDoubleLineWithBG(17,23,32,1,135);  //type
        H::gotoxy(20,24); H::setcolor(135); cout << "SEARCH BY TYPE";

        H::drawBoxDoubleLineWithBG(17,27,32,1,135);  //price
        H::gotoxy(20,28); H::setcolor(135); cout << "SEARCH BY PRICE";

        H::drawBoxDoubleLineWithBG(17,31,32,1,135);  //qty
        H::gotoxy(20,32); H::setcolor(135); cout << "SEARCH BY QUANTITY";

        H::drawBoxDoubleLineWithBG(17,35,32,1,135);  //exit
        H::gotoxy(20,36); H::setcolor(135); cout << "EXIT MENU";

        H::clearBox(17,39,32,1,1); 

        H::gotoxy(90,46); H::setcolor(7); cout<< " USE [ "; H::setcolor(5); cout << "ARROW KEYS"; H::setcolor(7); cout << " ] "; H::setcolor(7); cout << "TO MOVE OPTION AND PRE5 [ "; H::setcolor(5); cout << "ENTER"; H::setcolor(7); cout << " ] TO SELECT";
       
       
        if( x==1 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,15,32,1,7);  //number

            DNN::Design::Store::TextSearchBynumber(68,5);
            H::gotoxy(20,16); H::setcolor(7); cout << "=> SEARCH BY NUMBER <=";
        }
        if( x==2 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,19,32,1,7);  //name

            DNN::Design::Store::TextsearchByName(68,5);
            H::gotoxy(20,20); H::setcolor(7); cout << "=> SEARCH BY NAME <=";
        }
        if( x==3 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,23,32,1,7);  //type
            // DNN::Design::Store::PicForSearch(103,16);

            DNN::Design::Store::TextSearchByType(68,5);
            H::gotoxy(20,24); H::setcolor(7); cout << "=> SEARCH BY TYPE <=";
        }
        if( x==4 )
        {
            H::clearBox(65,5,123,10,7);
            // DNN::Design::Store::PicForUpdate(103,16);

            DNN::Design::Store::TextSearchByPrice(68,5);
            H::drawBoxDoubleLineWithBG(17,27,32,1,7);  //price
            H::gotoxy(20,28); H::setcolor(7); cout << "=> SEARCH BY PRICE <=";
        }
        if( x==5 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,31,32,1,7);  //qty
            // DNN::Design::Store::PicForDelete(93,21);

            DNN::Design::Store::TextSearchByQTY(68,5);
            H::gotoxy(20,32); H::setcolor(7); cout << "=> SEARCH BY QUANTITY <=";
        }
        if( x==6 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,35,32,1,7); //Exit

            DNN::Design::Store::TextBack(75,5);
            H::gotoxy(20,36); H::setcolor(7); cout << "=> EXIT MENU <=";
        }
        
        press = getch();
        // H::clearBox(65,13,123,30,7);
        
        switch(press)
        {
            case 75:
            { //left
                x--;
                if(x<1) x=6; break;
            }
            case 77:
            {//right
                x++;
                if(x>6) x=1; break;
            }
            case 72:
            {//up
                x--;
                if(x<1) x=6; break;
            }

            case 80:
            {//down
                x++;
                if(x>6) x=1; break;
            }  
        }
    }while(press != 13);

    switch(x)
    {
        case 1:
        {
            input:
            H::setcolor(1);

            SearchByNumber(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto back;
            }
            break;
        }

        case 2:
        {
            seach:
            H::setcolor(1);
            
            SearchByName(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backs;
            }
            break;
        }
        case 3:
        {
            H::setcolor(1);
            delet:

            SearchByType(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backd;
            }
            break;
        }
        case 4:
        {
            Display:
            H::setcolor(1);
            SearchByPrice(vec);
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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backdisplay;
            }
            break;
        }
        case 5:
        {
            update:
            H::setcolor(1);
            SearchByQuantity(vec);
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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backupdate;
            }
            break;
        }
        case 6:
        {
            H::clearBox(0,0,200,50,1);
            RunDrink();
            break;
        }
    }
}

void DNN::Store::DemoFoodAndDrink::RunUpdate()
{
    H::setcursor(0,0);
    DNN::Store::Drinks  drink;
    vector<DNN::Store::Drinks>vec;
    char press,option;
    int x=1;
    again:
    DNN::Design::Store::Menu(3,1);
    DNN::Design::Store::PicForMenuUpdate(100,16);
    do
    {
        H::drawBoxDoubleLineWithBG(17,15,32,1,135);  //insert
        H::gotoxy(20,16); H::setcolor(135); cout << "IMPORT STOCK";

        H::drawBoxDoubleLineWithBG(17,19,32,1,135);  //display
        H::gotoxy(20,20); H::setcolor(135); cout << "UPDATE ALL";

        H::drawBoxDoubleLineWithBG(17,23,32,1,135);  //search
        H::gotoxy(20,24); H::setcolor(135); cout << "UPDATE NAME OF PRODUCT";

        H::drawBoxDoubleLineWithBG(17,27,32,1,135);  //update
        H::gotoxy(20,28); H::setcolor(135); cout << "UPDATE TYPE OF PRODUCT";

        H::drawBoxDoubleLineWithBG(17,31,32,1,135);  //delete
        H::gotoxy(20,32); H::setcolor(135); cout << "UPDATE QTY OF PRODUCT";

        H::drawBoxDoubleLineWithBG(17,35,32,1,135);  //sort
        H::gotoxy(20,36); H::setcolor(135); cout << "UPDATE PRICE OF PRODUCT";  

        H::drawBoxDoubleLineWithBG(17,39,32,1,135);  //back
        H::gotoxy(20,40); H::setcolor(135); cout << "EXIT MENU";  

        H::gotoxy(90,46); H::setcolor(7); cout<< " USE [ "; H::setcolor(5); cout << "ARROW KEYS"; H::setcolor(7); cout << " ] "; H::setcolor(7); cout << "TO MOVE OPTION AND PRE5 [ "; H::setcolor(5); cout << "ENTER"; H::setcolor(7); cout << " ] TO SELECT";
       
       
        if( x==1 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,15,32,1,7);  //inser3

            DNN::Design::Store::TextImportStock(68,5);
            H::gotoxy(20,16); H::setcolor(7); cout << "=> IMPORT STOCK <=";
        }
        if( x==2 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,19,32,1,7);  //display

            DNN::Design::Store::TextUpdateProduct(68,5);
            H::gotoxy(20,20); H::setcolor(7); cout << "=> UPDATE ALL <=";
        }
        if( x==3 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,23,32,1,7);  //search

            DNN::Design::Store::TextUpdateName(68,5);
            H::gotoxy(20,24); H::setcolor(7); cout << "=> UPDATE NAME OF PRODUCT <=";
        }
        if( x==4 )
        {
            H::clearBox(65,5,123,10,7);

            DNN::Design::Store::TextUpdateType(68,5);
            H::drawBoxDoubleLineWithBG(17,27,32,1,7);  //update
            H::gotoxy(20,28); H::setcolor(7); cout << "=> UPDATE TYPE OF PRODUCT <=";
        }
        if( x==5 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,31,32,1,7);  //delete

            DNN::Design::Store::TextUpdateQTY(68,5);
            H::gotoxy(20,32); H::setcolor(7); cout << "=> UPDATE QTY OF PRODUCT <=";
        }
        if( x==6 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,35,32,1,7);  //sort

            DNN::Design::Store::TextUpdatePrice(68,5);
            H::gotoxy(19,36); H::setcolor(7); cout << "=> UPDATE PRICE OF PRODUCT <=";
        }
        if( x==7 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,39,32,1,7);  //back
            
            DNN::Design::Store::TextBack(75,5);
            H::gotoxy(20,40); H::setcolor(7); cout << "=> EXIT MENU <=";
        }
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
            H::setcolor(1);

            ImportStock(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto back;
            }
            break;
        }

        case 2:
        {
            seach:
            H::setcolor(1);
            
            UpdateAll(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backs;
            }
            break;
        }
        case 3:
        {
            H::setcolor(1);
            delet:

            UpdateName(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(20,46,35,1,1);
                goto backd;
            }
            break;
        }
        case 4:
        {
            Display:
            H::setcolor(1);

            UpdateType(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backdisplay;
            }
            break;
        }
        case 5:
        {
            update:
            H::setcolor(1);
            UpdateQuantity(vec);
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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backupdate;
            }
            break;
        }
        case 6:
        {
            price:
            H::setcolor(1);
            UpdatePrice(vec);
            backprice:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto price;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backprice;
            }
            break;
        }
        case 7:
        {
            sort:
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);
            RunDrink();
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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backsort;
            }
            break;
        }
    }
}

void DNN::Store::DemoFoodAndDrink::RunSort()
{
    H::setcursor(0,0);
    DNN::Store::Drinks  drink;
    vector<DNN::Store::Drinks>vec;
    char press,option;
    int x=1;
    again:
    DNN::Design::Store::Menu(3,1);
    DNN::Design::Store::PicForSortdata(100,20);
    do
    {
        H::drawBoxDoubleLineWithBG(17,15,32,1,135);  //insert
        H::gotoxy(20,16); H::setcolor(135); cout << "SORT NAME [ A - Z ]";

        H::drawBoxDoubleLineWithBG(17,19,32,1,135);  //display
        H::gotoxy(20,20); H::setcolor(135); cout << "SORT NAME [ Z - A ]";

        H::drawBoxDoubleLineWithBG(17,23,32,1,135);  //search
        H::gotoxy(20,24); H::setcolor(135); cout << "SORT TYPE [ A - Z ]";

        H::drawBoxDoubleLineWithBG(17,27,32,1,135);  //update
        H::gotoxy(20,28); H::setcolor(135); cout << "SORT TYPE [ Z - A ]";

        H::drawBoxDoubleLineWithBG(17,31,32,1,135);  //delete
        H::gotoxy(20,32); H::setcolor(135); cout << "SORT PRICE [LOW - HIGH]";

        H::drawBoxDoubleLineWithBG(17,35,32,1,135);  //sort
        H::gotoxy(20,36); H::setcolor(135); cout << "SORT PRICE [HIGH - LOW]";

        H::drawBoxDoubleLineWithBG(17,39,32,1,135);  //back
        H::gotoxy(20,40); H::setcolor(135); cout << "EXIT MENU";  

        H::gotoxy(90,46); H::setcolor(7); cout<< " USE [ "; H::setcolor(5); cout << "ARROW KEYS"; H::setcolor(7); cout << " ] "; H::setcolor(7); cout << "TO MOVE OPTION AND PRE5 [ "; H::setcolor(5); cout << "ENTER"; H::setcolor(7); cout << " ] TO SELECT";
       
       
        if( x==1 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,15,32,1,7);  //inser3

            DNN::Design::Store::TextSortByName(68,5);
            H::gotoxy(20,16); H::setcolor(7); cout << "=> SORT NAME [ A - Z ] <=";
        }
        if( x==2 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,19,32,1,7);  //display

            DNN::Design::Store::TextSortByName(68,5);
            H::gotoxy(20,20); H::setcolor(7); cout << "=> SORT NAME [ Z - A ] <=";
        }
        if( x==3 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,23,32,1,7);  //search

            DNN::Design::Store::TextSortByType(68,5);
            H::gotoxy(20,24); H::setcolor(7); cout << "=> SORT TYPE [ A - Z ] <=";
        }
        if( x==4 )
        {
            H::clearBox(65,5,123,10,7);

            DNN::Design::Store::TextSortByType(68,5);
            H::drawBoxDoubleLineWithBG(17,27,32,1,7);  //update
            H::gotoxy(20,28); H::setcolor(7); cout << "=> SORT TYPE [ Z - A ] <=";
        }
        if( x==5 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,31,32,1,7); 

            DNN::Design::Store::TextSortByPrice(68,5);
            H::gotoxy(20,32); H::setcolor(7); cout << "=> SORT PRICE [LOW - HIGH] <=";
        }
        if( x==6 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,35,32,1,7);  //sort

            DNN::Design::Store::TextSortByPrice(68,5);
            H::gotoxy(20,36); H::setcolor(7); cout << "=> SORT PRICE [HIGH - LOW] <=";
        }
        if( x==7 )
        {
            H::clearBox(65,5,123,10,7);
            H::drawBoxDoubleLineWithBG(17,39,32,1,7);  //back
            
            DNN::Design::Store::TextBack(75,5);
            H::gotoxy(20,40); H::setcolor(7); cout << "=> EXIT MENU <=";
        }
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
            H::setcolor(1);

            SortBynameAsc(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto back;
            }
            break;
        }

        case 2:
        {
            seach:
            H::setcolor(1);
            
            SortBynameDesc(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backs;
            }
            break;
        }
        case 3:
        {
            H::setcolor(1);
            delet:

            SortBytypeAsc(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN";
                H::delay(1000);
                H::clearBox(20,46,35,1,1);
                goto backd;
            }
            break;
        }
        case 4:
        {
            Display:

            H::setcolor(1);

            SortBytypeDesc(vec);

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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backdisplay;
            }
            break;
        }
        case 5:
        {
            update:
            H::setcolor(1);
            SortBypriceAsc(vec);
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
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto backupdate;
            }
            break;
        }
        case 6:
        {
            a:
            H::setcolor(1);
            SortBypriceDesc(vec);
            b:
            H::setcursor(0,0);
            option = getch();
            if( option == 13 )
            {
                goto a;
            }
            if( option == 27 )
            {
                system("cls");
                H::setcolor(1);
                goto again;
            }
            else{
                H::gotoxy(20,46); H::setcolor(4);cout<<"INVALID KEY ! PLEASE TRY AGAIN!";
                H::delay(1000);
                H::clearBox(20,46,30,1,1);
                goto b;
            }
            break;
        }
        case 7:
        {
            H::clearBox(0,0,200,50,1);
            H::setcolor(1);
            RunDrink();
            break;
        }
    }
}
/////////////////////////////////////////////////////////////////////////
//        BODY FOR CLASS FILE FOOD AND DRINKS                        ////
/////////////////////////////////////////////////////////////////////////


int DNN::Store::DemoFoodAndDrink::AutoNumberDrink()
{
    int Code = 2000;

    vector<DNN::Store::Drinks> drink = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    
    for(int i = 0; i < drink.size(); i++)
    {
        if(drink[i].getCode() > Code)
        {
            Code = drink[i].getCode();
        }
    }

    Code ++;

    cout << Code;

    return Code;
}

///////////////////////////////////////////////////////////////////////////
////                    INSERT DRINKS                                  ////
///////////////////////////////////////////////////////////////////////////

void DNN::Store::DemoFoodAndDrink::AddDrink(DNN::Store::Drinks &drinks)
{
    int number;
    DNN::Design::Store::DesignInsert();
    
    H::gotoxy(90,46); 
        H::setcolor(7); cout << " PRESS [ "; 
        H::setcolor(5); cout << "ARROWS"; 
        H::setcolor(7); cout << " ] TO CHOOSE TYPE AND PRESS [ "; 
        H::setcolor(5); cout << "KEYS"; 
        H::setcolor(7); cout << " ] TO INPUT DATA.       ";

    H::gotoxy(96,19); H::setcolor(252); number = AutoNumberDrink();

    drinks.setCode(number);

    drinks.Insert();

    H::setcursor(0,0);

    H::gotoxy(90,46); 
        H::setcolor(7); cout << " PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << "ENTER"; 
        H::setcolor(7); cout << " ] TO INPUT MORE.           ";

    H::setcolor(1); 

    DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", drinks);
}

///////////////////////////////////////////////////////////////////////////
////                    VIEW DRINKS                                    ////
///////////////////////////////////////////////////////////////////////////

void DNN::Store::DemoFoodAndDrink::ViewDrink(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");

    if(vc.empty())
    {
            H::gotoxy(90,46); H::setcolor(5); cout << "[ ALERT ] "; H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; H::setcolor(7);cout << " => PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU!";
    }else
    {  
        DNN::Design::Store::DesignDisplay();
        H::gotoxy(62,14); 
        DNN::Store::Drinks::Header();
        H::HLine(60,16,130,7,186);

        for (int i = 0; i < vc.size(); i++)
        {
            H::gotoxy(62,18+i);
            vc[i].Display();
            H::gotoxy(80,46); 
            H::setcolor(7);cout << "------------------------------------ PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
    H::setcolor(1);
}

///////////////////////////////////////////////////////////////////////////
////                    SEARCH DRINKS                                  ////
///////////////////////////////////////////////////////////////////////////

void DNN::Store::DemoFoodAndDrink::SearchByNumber(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char code[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Store::Drinks> vDrink;
    
    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }else
    {
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER CODE OF DRINK : ";
                          H::setcolor(2); H::inputNumber(code,5);
        vDrink = DNN::Store::Drinks::Search::ByCode(vc,atoi(code));
    }
}

void DNN::Store::DemoFoodAndDrink::SearchByName(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char name[25]; H::setcolor(1); cout<<" ";
    vector <DNN::Store::Drinks> vDrink;
    
    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }else
    {
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<52; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER NAME OF DRINK : ";
                          H::setcolor(2); H::inputLetter(name,26);
        vDrink = DNN::Store::Drinks::Search::ByName(vc,name);
    }
}

void DNN::Store::DemoFoodAndDrink::SearchByType(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char name[25]; H::setcolor(1); cout<<" ";
    vector <DNN::Store::Drinks> vDrink;
    
    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }else
    {
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        H::gotoxy(90,46); 
            H::setcolor(7); cout << "USE [ "; 
            H::setcolor(5); cout << "ARROW KEY"; 
            H::setcolor(7); cout << " ] TO CHOOSE TYPE AND PRESS [ "; 
            H::setcolor(5); cout << " ENTER"; 
            H::setcolor(7); cout << " ] TO SELECT.        ";
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER TYPE OF DRINK : ";
        H::setcolor(2); char A_Type; int y=1; char Type[10];
        do
        {
            H::gotoxy(90,15); 
            cout << "Health";
            if(y==1)
            {
                H::gotoxy(90,15); 
                cout << "Health";
            }

            if(y==2)
            {
                H::gotoxy(90,15); 
                cout << "Energy";
            }

            if( y==3 )
            {
                H::gotoxy(90,15); 
                cout << "Water ";
            }

            if( y==4 )
            {
                H::gotoxy(90,15); 
                cout << "Juice ";
            }

            A_Type = getch();
            switch(A_Type)
            {
                case 75:
                { //left
                    y--;
                    if(y<1) y=4; break;
                }
                case 77:
                {//right
                    y++;
                    if(y>4) y=1; break;
                }
                case 72:
                {//up
                    y--;
                    if(y<1) y=4; break;
                }

                case 80:
                {//down
                    y++;
                    if(y>4) y=1; break;
                }   
            }

        }while(A_Type != 13);

        if(y==1) strcpy(Type,"Health");
        if(y==2) strcpy(Type,"Energy");
        if(y==3) strcpy(Type,"Water");
        if(y==4) strcpy(Type,"Juice");

        vDrink = DNN::Store::Drinks::Search::ByType(vc,Type);
    }
}

void DNN::Store::DemoFoodAndDrink::SearchByQuantity(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char qty[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Store::Drinks> vDrink;
    
    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }else
    {
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER QUANTITY OF DRINK : ";
                          H::setcolor(2); H::inputNumber(qty,5);
        vDrink = DNN::Store::Drinks::Search::ByQuantity(vc,atoi(qty));
    }
}

void DNN::Store::DemoFoodAndDrink::SearchByPrice(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char price[10]; H::setcolor(1); cout<<" ";
    vector <DNN::Store::Drinks> vDrink;
    
    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO SEARCH MORE.";
        return;
    }else
    {
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER PRICE OF DRINK : ";
                          H::setcolor(2); H::inputNumber(price,5);
        vDrink = DNN::Store::Drinks::Search::ByPrice(vc,atof(price));
    }
}

/////////////////////////////////////////////////////////////////////////////
/////                    UPDATE FILE DRINKS                           ///////
/////////////////////////////////////////////////////////////////////////////

void DNN::Store::DemoFoodAndDrink::UpdateAll(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char code[10];
    vector <DNN::Store::Drinks> vDrink;

    H::setcolor(1); cout<<" ";

    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER CODE OF DRINK : "; H::setcolor(2); H::inputNumber(code,5);
        vDrink = DNN::Store::Drinks::Update::All(vc,atoi(code));
        DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", &vDrink);
    }
}
void DNN::Store::DemoFoodAndDrink::UpdateName(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char code[10];
    vector <DNN::Store::Drinks> vDrink;

    H::setcolor(1); cout<<" ";

    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER CODE OF DRINK : "; H::setcolor(2); H::inputNumber(code,5);
        vDrink = DNN::Store::Drinks::Update::Name(vc,atoi(code));
        DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", &vDrink);
    }
}

void DNN::Store::DemoFoodAndDrink::UpdateType(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char code[10];
    vector <DNN::Store::Drinks> vDrink;

    H::setcolor(1); cout<<" ";

    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER CODE OF DRINK : "; H::setcolor(2); H::inputNumber(code,5);
        vDrink = DNN::Store::Drinks::Update::Type(vc,atoi(code));
        DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", &vDrink);
    }
}

void DNN::Store::DemoFoodAndDrink::UpdateQuantity(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char code[10];
    vector <DNN::Store::Drinks> vDrink;

    H::setcolor(1); cout<<" ";

    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER CODE OF DRINK : "; H::setcolor(2); H::inputNumber(code,5);
        vDrink = DNN::Store::Drinks::Update::Quantity(vc,atoi(code));
        DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", &vDrink);
    }
}

void DNN::Store::DemoFoodAndDrink::UpdatePrice(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char code[10];
    vector <DNN::Store::Drinks> vDrink;

    H::setcolor(1); cout<<" ";

    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER CODE OF DRINK : "; H::setcolor(2); H::inputNumber(code,5);
        vDrink = DNN::Store::Drinks::Update::Price(vc,atoi(code));
        DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", &vDrink);
    }
}

void DNN::Store::DemoFoodAndDrink::ImportStock(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char code[10];
    vector <DNN::Store::Drinks> vDrink;

    H::setcolor(1); cout<<" ";

    if(vc.empty())
    {
        H::gotoxy(90,46); 
                    H::setcolor(5); cout << "[ ALERT ] "; 
                    H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; 
                    H::setcolor(7); cout << "PRESS [ "; 
                    H::setcolor(5); cout << "ESC"; 
                    H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
                    H::setcolor(5); cout << " ENTER"; 
                    H::setcolor(7); cout << " ] TO UPDATE MORE.";
        return;
    }else
    {
        
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<40; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }
        
        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER CODE OF DRINK : "; H::setcolor(2); H::inputNumber(code,5);
        vDrink = DNN::Store::Drinks::Update::Import(vc,atoi(code));
        DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", &vDrink);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
////                              DELETE FUNCTION                                      ////
//////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Store::DemoFoodAndDrink::Delete(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    char code[10];
    bool found = false;
    H::gotoxy(80,46); 
    H::setcolor(7);cout << " PRESS NUMBER ["; 
    H::setcolor(5); cout << " KEYBOARD "; 
    H::setcolor(7);cout << " ] TO DELETE DATA. PRESS [ "; 
    H::setcolor(5); cout << "ESC"; 
    H::setcolor(7);cout << " ] TO BACK AND PRESS [ "; 
    H::setcolor(5);cout << " ENTER"; 
    H::setcolor(7); cout << " ] TO DELETE MORE.";
    if(vc.empty())
    {
        H::clearBox(80,46,102,1,1);
        H::gotoxy(90,46); H::setcolor(5); cout << "[ ALERT ] "; H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; H::setcolor(7);cout << " => PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU!";
        return;
    }
    
    else
    {
        DNN::Design::Store::DesignDisplay();
        for( int i=0; i<45; i++){
            H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
            H::delay(30);
        }

        for( int i=0 ; i<vc.size() ; i++ )
        {
            H::setcursor(0,0);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22+i); vc[i].Display();
        }
        

        H::setcursor(1,1);
        H::gotoxy(67,15); H::setcolor(3); cout << " ENTER CODE OF DRINK TO DELETE : "; H::setcolor(2); H::inputNumber(code,5);
        H::setcursor(0,0);
        
        for( int i=0 ; i<vc.size() ; i++ )
        {
            H::clearBox(62,22,125,vc.size(),1);
            if(vc[i].getCode() == atoi(code))
            {
                vc.erase(vc.begin() + i);
                DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", &vc);
                found = true;
                break;
            }
        }
        H::setcursor(0,0);
        if(found == false)
        {
            H::gotoxy(120,15); H::setcolor(3); cout << "[ ALERT ] "; H::setcolor(4); cout << " DATA NOT FOUND" << endl;
        }
        if(found == true)
        {
            for( int i=0 ; i<vc.size() ; i++ )
            {
                H::setcursor(0,0);
                H::HLine(60,18,130,7,186);
                H::gotoxy(62,19); 
                DNN::Store::Drinks::Header();
                H::HLine(60,20,130,7,186);
                H::gotoxy(62,22+i); vc[i].Display();
            }

            H::gotoxy(120,15); H::setcolor(3); cout << "[ SUCCESS ] "; H::setcolor(2); cout << " DATA WAS DELETED" << endl;
        }
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////
/////                             SORT FUNCTION                                          /////
/////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Store::DemoFoodAndDrink::SortBynameAsc(vector<DNN::Store::Drinks> &vc)
{

    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b) { return strcmp(a.getName(), b.getName()) < 0; });

    if(vc.empty())
    {
            H::gotoxy(90,46); H::setcolor(5); cout << "[ ALERT ] "; H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; H::setcolor(7);cout << " => PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU!";
    }

    else
    {
        DNN::Design::Store::DesignDisplay();
        H::gotoxy(62,14); 
        DNN::Store::Drinks::Header();
        H::HLine(60,16,130,7,186);
        for (int i = 0; i < vc.size(); i++)
        {
            H::gotoxy(62,18+i);
            vc[i].Display();
            H::gotoxy(80,46); 
            H::setcolor(7);cout << "------------------------------------ PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
}

void DNN::Store::DemoFoodAndDrink::SortBynameDesc(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b) { return strcmp(a.getName(), b.getName()) > 0; });

    if(vc.empty())
    {
            H::gotoxy(90,46); H::setcolor(5); cout << "[ ALERT ] "; H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; H::setcolor(7);cout << " => PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU!";
    }

    else
    {
        DNN::Design::Store::DesignDisplay();
        H::gotoxy(62,14); 
        DNN::Store::Drinks::Header();
        H::HLine(60,16,130,7,186);
        for (int i = 0; i < vc.size(); i++)
        {
            H::gotoxy(62,18+i);
            vc[i].Display();
            H::gotoxy(80,46); 
            H::setcolor(7);cout << "------------------------------------ PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
}

void DNN::Store::DemoFoodAndDrink::SortBypriceAsc(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b) { return a.getPrice() < b.getPrice(); });

    if(vc.empty())
    {
            H::gotoxy(90,46); H::setcolor(5); cout << "[ ALERT ] "; H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; H::setcolor(7);cout << " => PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU!";
    }

    else
    {
        DNN::Design::Store::DesignDisplay();
        H::gotoxy(62,14); 
        DNN::Store::Drinks::Header();
        H::HLine(60,16,130,7,186);
        for (int i = 0; i < vc.size(); i++)
        {
            H::gotoxy(62,18+i);
            vc[i].Display();
            H::gotoxy(80,46); 
            H::setcolor(7);cout << "------------------------------------ PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
}

void DNN::Store::DemoFoodAndDrink::SortBypriceDesc(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b) { return a.getPrice() > b.getPrice(); });

    if(vc.empty())
    {
            H::gotoxy(90,46); H::setcolor(5); cout << "[ ALERT ] "; H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; H::setcolor(7);cout << " => PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU!";
    }

    else
    {
        DNN::Design::Store::DesignDisplay();
        H::gotoxy(62,14); 
        DNN::Store::Drinks::Header();
        H::HLine(60,16,130,7,186);
        for (int i = 0; i < vc.size(); i++)
        {
            H::gotoxy(62,18+i);
            vc[i].Display();
            H::gotoxy(80,46); 
            H::setcolor(7);cout << "------------------------------------ PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
}

void DNN::Store::DemoFoodAndDrink::SortBytypeAsc(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b) { return strcmp(a.getType(), b.getType()) < 0; });

    if(vc.empty())
    {
            H::gotoxy(90,46); H::setcolor(5); cout << "[ ALERT ] "; H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; H::setcolor(7);cout << " => PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU!";
    }

    else
    {
        DNN::Design::Store::DesignDisplay();
        H::gotoxy(62,14); 
        DNN::Store::Drinks::Header();
        H::HLine(60,16,130,7,186);
        for (int i = 0; i < vc.size(); i++)
        {
            H::gotoxy(62,18+i);
            vc[i].Display();
            H::gotoxy(80,46); 
            H::setcolor(7);cout << "------------------------------------ PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
}

void DNN::Store::DemoFoodAndDrink::SortBytypeDesc(vector<DNN::Store::Drinks> &vc)
{
    vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");
    sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b) { return strcmp(a.getType(), b.getType()) > 0; });

    if(vc.empty())
    {
            H::gotoxy(90,46); H::setcolor(5); cout << "[ ALERT ] "; H::setcolor(4); cout << "FILE DRINKS IS EMPTY! "; H::setcolor(7);cout << " => PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU!";
    }

    else
    {
        DNN::Design::Store::DesignDisplay();
        H::gotoxy(62,14); 
        DNN::Store::Drinks::Header();
        H::HLine(60,16,130,7,186);
        for (int i = 0; i < vc.size(); i++)
        {
            H::gotoxy(62,18+i);
            vc[i].Display();
            H::gotoxy(80,46); 
            H::setcolor(7);cout << "------------------------------------ PRESS [ "; 
            H::setcolor(5); cout << "ESC KEY"; 
            H::setcolor(7);cout << " ] TO BACK MENU ------------------------------------";
        }
    }
}

///////////////////////////////////////////////////////////
////                 END OF FILE                       ////
///////////////////////////////////////////////////////////
#endif