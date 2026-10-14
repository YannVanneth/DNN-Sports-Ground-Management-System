#ifndef _FOODANDDRINKS_H_
#define _FOODANDDRINKS_H_

//-----------------------------------------------------------------------------------------------------------------------------------------------//
    #include "../Store.hpp"
    #include "Design/Design.hpp"
//-----------------------------------------------------------------------------------------------------------------------------------------------//

/////////////////////////////////////////////////////
//        DRINKS CLASS DEFINITIONS                //
////////////////////////////////////////////////////

double DNN::Store::Drinks::getTotal() const
{
    return _Price * _Quantity;
}

/////////////////////////////////////////////////////
//               SETTERS METHODS                   //
////////////////////////////////////////////////////

void DNN::Store::Drinks::setCode(int code)
{
    _Code = code;
}

void DNN::Store::Drinks::setName(const char* name)
{
    strcpy(_DrinkName, name);
}

void DNN::Store::Drinks::setQuantity(int Quantity)   
{
    _Quantity = Quantity;
}

void DNN::Store::Drinks::setPrice(float Price)
{
    _Price = Price;
}

void DNN::Store::Drinks::setType(const char* type)
{
    strcpy(_Type, type);
}

/////////////////////////////////////////////////////
//               GETTERS METHODS                   //
////////////////////////////////////////////////////

int DNN::Store::Drinks::getCode() const
{
    return _Code;
}

const char* DNN::Store::Drinks::getName() const
{
    return _DrinkName;
}

int DNN::Store::Drinks::getQuantity() const
{
    return _Quantity;
}

float DNN::Store::Drinks::getPrice() const
{
    return _Price;
}

const char* DNN::Store::Drinks::getType() const
{
    return _Type;
}

/////////////////////////////////////////////////////
//               ARROW METHODS                   //
////////////////////////////////////////////////////

void DNN::Store::Drinks::Arrow_Type(int a,int b)
{
    char A_Type; int y=1;
    do
    {
        H::gotoxy(a,b); 
        cout << "Health";
        if(y==1)
        {
            H::gotoxy(a,b); 
            cout << "Health";
        }

        if(y==2)
        {
            H::gotoxy(a,b); 
            cout << "Energy";
        }

        if( y==3 )
        {
            H::gotoxy(a,b); 
            cout << "Water ";
        }

        if( y==4 )
        {
            H::gotoxy(a,b); 
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

    if(y==1) strcpy(_Type,"Health");
    if(y==2) strcpy(_Type,"Energy");
    if(y==3) strcpy(_Type,"Water");
    if(y==4) strcpy(_Type,"Juice");
}

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN
DNN::Store::Drinks::Drinks()
{
    _Code = 0;
    strcpy(_DrinkName, "Unknown");
    strcpy(_Type, "Unknown");
    _Quantity = 0;
    _Price = 0; 
}

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

void DNN::Store::Drinks::Insert()
{
    
    char DrinkQuantity[7], DrinkPrice[7];
    H::setcolor(241);
    H::gotoxy(76,19);  cout << "Enter Drink Code: "; 
    H::gotoxy(136,19); cout << "Enter Drink Name: "; 
    H::gotoxy(81,29);  cout << "Enter Drink Type: ";
    H::gotoxy(131,29); cout << "Enter Drink Quantity [pcs]: "; 
    H::gotoxy(106,39); cout << "Enter Drink Price [$]: ";    

    H::setcursor(1,1);
    H::setcolor(252);
    H::gotoxy(154,19); H::inputLetter(_DrinkName,21);
                       Arrow_Type(101,29);
    H::gotoxy(160,29); H::inputNumber(DrinkQuantity,5);
    H::gotoxy(130,39); H::inputNumber(DrinkPrice,5);
    
    this->_Price = atof(DrinkPrice); this->_Quantity = atoi(DrinkQuantity);   
}

void DNN::Store::Drinks::UpdateAll()
{
    char DrinkQuantity[7], DrinkPrice[7];

    H::setcursor(1,1);
    H::clearBox(82,22,30,1,1);  H::gotoxy(82,22);  H::setcolor(7); H::inputLetter(_DrinkName,21);   H::gotoxy(82,22);  H::setcolor(2); cout << getName();
    H::clearBox(112,22,20,1,1);                    H::setcolor(7); Arrow_Type(112,22);              H::gotoxy(82,22);  H::setcolor(2); cout << getType();
    H::clearBox(132,22,20,1,1); H::gotoxy(132,22); H::setcolor(7); H::inputNumber(DrinkQuantity,5); H::gotoxy(132,22); H::setcolor(2); cout << getQuantity();
    H::clearBox(152,22,15,1,1); H::gotoxy(152,22); H::setcolor(7); H::inputNumber(DrinkPrice,5);    H::gotoxy(147,22); H::setcolor(2); cout << getPrice();
                                                                                                    H::gotoxy(167,22); H::setcolor(2); cout << getTotal();
    
    this->_Price = atof(DrinkPrice); this->_Quantity = atoi(DrinkQuantity);

}

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

void DNN::Store::Drinks::Display(){

    cout << left << fixed << setprecision(2);
    H::setcolor(4); cout << setw(20) << _Code;
    H::setcolor(2); cout << setw(30) << _DrinkName;
    H::setcolor(3); cout << setw(20) << _Type;
    H::setcolor(5); cout << setw(4)  << "Pcs "; cout << setw(16) << _Quantity;
    H::setcolor(1); cout << setw(2); cout << "$ "; cout << setw(13) << _Price;
    H::setcolor(6); cout << setw(2); cout << "$ "; cout << setw(13) << getTotal();
}

void DNN::Store::Drinks::Header()
{
    cout << left << fixed << setprecision(2);
    H::setcolor(4); cout << setw(20) << "CODE";
    H::setcolor(2); cout << setw(30) << "NAME";
    H::setcolor(3); cout << setw(20) << "TYPE";
    H::setcolor(5); cout << setw(20) << "QUANTITY";
    H::setcolor(1); cout << setw(15) << "PRICE";
    H::setcolor(6); cout << setw(15) << "TOTAL";
}

//////////////////////////////////////////////////////////////////////////////////////////////
/////                        SEARCH DRINKS                                               /////
//////////////////////////////////////////////////////////////////////////////////////////////

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN
vector<DNN::Store::Drinks> DNN::Store::Drinks::Search::ByCode(vector<Drinks> &vc, int code)
{
     
     bool found = false;
    int m=0;
     for(int i = 0; i < vc.size(); i++)
     {
        if(vc[i]._Code == code)
        {
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22+m); vc[i].Display();
            m++;
            found = true;
        }
     }   

     H::gotoxy(90,46); 
        H::setcolor(7); cout << "PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO SEARCH MORE.        ";

     if(!found) 
     {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Code "; H::setcolor(2); cout << code; H::setcolor(4); cout << " Not Found !!"; 
     }

     if(found)
     {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Code "; H::setcolor(3); cout << code; H::setcolor(2); cout << " Found !!   ";
     }
     return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Search::ByName(vector<DNN::Store::Drinks> &vc, const char* name)
{
    bool found = false;
    int m=0;
    for(int i = 0; i < vc.size(); i++)
    {
        if(strcmp(vc[i]._DrinkName, name) == 0)
        {   
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22+m); vc[i].Display();
            m++;
            found = true;
        }
    }

    H::gotoxy(90,46); 
        H::setcolor(7); cout << "PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO SEARCH MORE.        ";

    if(!found) 
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Name "; H::setcolor(2); cout << name; H::setcolor(4); cout << " Not Found !!"; 
    }

    if(found)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Name "; H::setcolor(3); cout << name; H::setcolor(2); cout << " Found !!   ";
    }

    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Search::ByType(vector<DNN::Store::Drinks> &vc, const char* type)
{
    bool found = false;
    int m=0;
    for(int i = 0; i < vc.size(); i++)
    {
        if(strcmp(vc[i]._Type, type) == 0)
        {
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22+m); vc[i].Display();
            m++;
            found = true;
        }
    }

    H::gotoxy(90,46); 
        H::setcolor(7); cout << "PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO SEARCH MORE.        ";

    if(!found) 
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Type "; H::setcolor(2); cout << type; H::setcolor(4); cout << " Not Found !!"; 
    }

    if(found)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Type "; H::setcolor(3); cout << type; H::setcolor(2); cout << " Found !!   ";
    }

    return vc;
}


vector<DNN::Store::Drinks> DNN::Store::Drinks::Search::ByQuantity(vector<DNN::Store::Drinks> &vc, int quantity)
{
    bool found = false;
    int m=0;
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i]._Quantity == quantity)
        {
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22+m); vc[i].Display();
            m++;
            found = true;
        }
    }

    H::gotoxy(90,46); 
        H::setcolor(7); cout << "PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO SEARCH MORE.        ";

    if(!found) 
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Quantity "; H::setcolor(2); cout << quantity; H::setcolor(4); cout << " Not Found !!"; 
    }

    if(found)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Quantity "; H::setcolor(3); cout << quantity; H::setcolor(2); cout << " Found !!   ";
    }

    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Search::ByPrice(vector<DNN::Store::Drinks> &vc, float price)
{
    bool found = false;
    int m=0;
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i]._Price == price)
        {
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22+m); vc[i].Display();
            m++;
            found = true;
        }
    }

    H::gotoxy(90,46); 
        H::setcolor(7); cout << "PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO SEARCH MORE.        ";

    if(!found) 
    {
    H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Price "; H::setcolor(2); cout << price; H::setcolor(4); cout << " Not Found !!"; 
    }

    if(found)
    {
    H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Price "; H::setcolor(3); cout << price; H::setcolor(2); cout << " Found !!   ";
    }

    return vc;

}

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

vector<DNN::Store::Drinks> DNN::Store::Drinks::Update::All(vector<DNN::Store::Drinks> &vc, int code)
{
    bool Isfound = false;

    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i]._Code == code)
        {
            
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);

            H::gotoxy(62,22); vc[i].Display();
            vc[i].UpdateAll();
            H::setcolor(47); H::gotoxy(62,22); vc[i].Display();
            Isfound = true;

            break;
        }
    }
    H::gotoxy(80,46); 
        H::setcolor(7); cout << " PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO UPDATE MORE.";

    if(!Isfound)
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Code "; H::setcolor(2); cout << code; H::setcolor(4); cout << " Not Found !!"; 
    }
    if(Isfound)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Code "; H::setcolor(3); cout << code; H::setcolor(2); cout << " Updated Successful!!   ";
    }
    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Update::Name(vector<DNN::Store::Drinks> &vc, int code)
{
    char Name[20]; bool Isfound = false;
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i]._Code == code)
        {
            for( int i=0; i<52; i++){
                H::setcursor(0,0);
                H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
                H::delay(30);
            }

            H::setcursor(0,0);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();

            H::setcursor(1,1);
            H::gotoxy(66,15); H::setcolor(3);cout << "Enter New Product Name : "; H::setcolor(2); H::inputLetter(Name,21);
            vc[i].setName(Name);

            H::setcursor(1,1);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();
            Isfound = true;

            break;
        }
    }
    H::gotoxy(80,46); 
        H::setcolor(7); cout << " PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO UPDATE MORE.";

    if(!Isfound)
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Code "; H::setcolor(2); cout << code; H::setcolor(4); cout << " Not Found !!"; 
    }
    if(Isfound)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Code "; H::setcolor(3); cout << code; H::setcolor(2); cout << " Updated Successful!!   ";
    }
    return vc;
}
vector<DNN::Store::Drinks> DNN::Store::Drinks::Update::Quantity(vector<DNN::Store::Drinks> &vc, int code)
{
    char qty[10]; bool Isfound = false;
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i]._Code == code)
        {
            for( int i=0; i<40; i++){
                H::setcursor(0,0);
                H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
                H::delay(30);
            }

            H::setcursor(0,0);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();

            H::setcursor(1,1);
            H::gotoxy(66,15); H::setcolor(3);cout << "Enter New Quantity : "; H::setcolor(2); H::inputNumber(qty,5);
            vc[i].setQuantity(atoi(qty));

            H::setcursor(1,1);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();
            Isfound = true;

            break;
        }
    }
    H::gotoxy(80,46); 
        H::setcolor(7); cout << " PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO UPDATE MORE.";

    if(!Isfound)
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Code "; H::setcolor(2); cout << code; H::setcolor(4); cout << " Not Found !!"; 
    }
    if(Isfound)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Code "; H::setcolor(3); cout << code; H::setcolor(2); cout << " Updated Successful!!   ";
    }
    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Update::Price(vector<DNN::Store::Drinks> &vc, int code)
{
    char price[10]; bool Isfound = false;
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i]._Code == code)
        {
            for( int i=0; i<40; i++){
                H::setcursor(0,0);
                H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
                H::delay(30);
            }

            H::setcursor(0,0);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();

            H::setcursor(1,1);
            H::gotoxy(66,15); H::setcolor(3);cout << "Enter New Product Price : "; H::setcolor(2); H::inputNumber(price,5);
            vc[i].setPrice(atof(price));

            H::setcursor(0,0);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();
            Isfound = true;

            break;
        }
    }
    H::gotoxy(80,46); 
        H::setcolor(7); cout << " PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO UPDATE MORE.";

    if(!Isfound)
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Code "; H::setcolor(2); cout << code; H::setcolor(4); cout << " Not Found !!"; 
    }
    if(Isfound)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Code "; H::setcolor(3); cout << code; H::setcolor(2); cout << " Updated Successful!!   ";
    }
    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Update::Type(vector<DNN::Store::Drinks> &vc, int code)
{
    char Type[20]; bool Isfound = false;
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i]._Code == code)
        {
            for( int i=0; i<40; i++){
                H::setcursor(0,0);
                H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
                H::delay(30);
            }

            H::setcursor(0,0);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();

            H::setcursor(1,1);
            H::gotoxy(66,15); H::setcolor(3);cout << "Enter New Product Type  :  "; 
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

            vc[i].setType(Type);

            H::setcursor(1,1);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();
            Isfound = true;
            break;
        }
    }
    if(!Isfound)
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Code "; H::setcolor(2); cout << code; H::setcolor(4); cout << " Not Found !!"; 
    }
    if(Isfound)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Code "; H::setcolor(3); cout << code; H::setcolor(2); cout << " Updated Successful!!   ";
    }
    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Update::Import(vector<DNN::Store::Drinks> &vc, int code)
{
    char qty[10]; bool Isfound = false;
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i]._Code == code)
        {
            for( int i=0; i<40; i++){
                H::setcursor(0,0);
                H::drawBoxDoubleLineWithBG(65,14,i,1,7);  //search
                H::delay(30);
            }

            H::setcursor(0,0);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();

            H::setcursor(1,1);
            H::gotoxy(66,15); H::setcolor(3);cout << "Enter Product QTY to add : "; H::setcolor(2); H::inputNumber(qty,5);
            vc[i].setQuantity(atof(qty)+vc[i].getQuantity());

            H::setcursor(0,0);
            H::HLine(60,18,130,7,186);
            H::gotoxy(62,19); 
            DNN::Store::Drinks::Header();
            H::HLine(60,20,130,7,186);
            H::gotoxy(62,22); vc[i].Display();
            Isfound = true;

            break;
        }
    }
    H::gotoxy(80,46); 
        H::setcolor(7); cout << " PRESS [ "; 
        H::setcolor(5); cout << "ESC"; 
        H::setcolor(7); cout << " ] TO BACK AND PRESS [ "; 
        H::setcolor(5); cout << " ENTER"; 
        H::setcolor(7); cout << " ] TO UPDATE MORE.";

    if(!Isfound)
    {
        H::gotoxy(120,15); H::setcolor(4); cout << "Drinks Code "; H::setcolor(2); cout << code; H::setcolor(4); cout << " Not Found !!"; 
    }
    if(Isfound)
    {
        H::gotoxy(120,15); H::setcolor(2); cout << "Drinks Code "; H::setcolor(3); cout << code; H::setcolor(2); cout << " Import Successful!!   ";
    }
    return vc;
}

// Sort 

vector<DNN::Store::Drinks> DNN::Store::Drinks::Sort::ByCode(vector<DNN::Store::Drinks> &vc, const char* mode)
{
    if(strcmp(mode, "asc") == 0)
    { 
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._Code < b._Code;});
    }

    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._Code > b._Code;});
    }

    else cout << "Mode Input is Invalid";

    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Sort::ByName(vector<DNN::Store::Drinks> &vc, const char* mode)
{
    if(strcmp(mode, "asc") == 0)
    { 
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._DrinkName < b._DrinkName;});
    }

    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._DrinkName > b._DrinkName;});
    }

    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Sort::ByType(vector<DNN::Store::Drinks> &vc, const char* mode)
{
    if(strcmp(mode, "asc") == 0)
    { 
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._Type < b._Type;});
    }

    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._Type > b._Type;});
    }

    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Sort::ByPrice(vector<DNN::Store::Drinks> &vc, const char* mode)
{
    if(strcmp(mode, "asc") == 0)
    { 
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._Price < b._Price;});
    }

    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._Price > b._Price;});
    }

    return vc;
}

vector<DNN::Store::Drinks> DNN::Store::Drinks::Sort::ByQuantity(vector<DNN::Store::Drinks> &vc, const char* mode)
{
    if(strcmp(mode, "asc") == 0)
    { 
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._Quantity < b._Quantity;});
    }

    else if(strcmp(mode, "desc") == 0)
    {
        sort(vc.begin(), vc.end(), [](DNN::Store::Drinks a, DNN::Store::Drinks b){ return a._Quantity > b._Quantity;});
    }

    return vc;
}

#endif // end of Header File Drinks.h