#ifndef _DNN_INVOICE_DESIGN_HPP_
#define _DNN_INVOICE_DESIGN_HPP_

#include "../../../DNN_Header/DNN.hpp"

namespace DNN::Design
{
    class Invoice
    {
        public:
           static void InvoiceDesign();
           static void DrinksDisplay();
    };
}

///////////////////////////////////////////////////////////////////////////////
void DNN::Design::Invoice::DrinksDisplay()
{
    H::gotoxy(20,18);
    cout << left << fixed << setprecision(2);
    H::setcolor(3); cout << setw(20) << "CODE";
    H::setcolor(5); cout << setw(25) << "NAME";
    H::setcolor(6); cout << setw(20) << "TYPE";
    H::setcolor(9); cout << setw(20) << "QUANTITY";
    H::setcolor(2); cout << setw(15) << "PRICE";

    //// Data Frame 

    H::drawBoxDoubleLine(8,16,121,26,7);

    // Cart Frame
    H::drawBoxDoubleLine(133,16,59,26,3);
}

void DNN::Design::Invoice::InvoiceDesign()
{
   const auto Invoicetext = [](int x, int y, int color)
   {
    H::gotoxy(x,y++); H::setcolor(7); cout << R"(  _____ _   ___      ______ _____ _____ ______  )";
    H::gotoxy(x,y++); H::setcolor(color); cout << R"( |_   _| \ | \ \    / / __ \_   _/ ____|  ____| )";
    H::gotoxy(x,y++); H::setcolor(color); cout << R"(   | | |  \| |\ \  / / |  | || || |    | |__    )";
    H::gotoxy(x,y++); H::setcolor(color); cout << R"(   | | | . ` | \ \/ /| |  | || || |    |  __|   )";
    H::gotoxy(x,y++); H::setcolor(color); cout << R"(  _| |_| |\  |  \  / | |__| || || |____| |____  )";
    H::gotoxy(x,y++); H::setcolor(7); cout << R"( |_____|_| \_|   \/   \____/_____\_____|______| )";
   };

   const auto DNNlogo = [](int x, int y, int color )
   {                  
    H::gotoxy(x,y++); H::setcolor(7); cout << R"( ___  _  _ _  _ )";
    H::gotoxy(x,y++); H::setcolor(color); cout << R"(|   \| \| | \| |)";
    H::gotoxy(x,y++); H::setcolor(color); cout << R"(| |) | .` | .` |)";
    H::gotoxy(x,y++); H::setcolor(7); cout << R"(|___/|_|\_|_|\_|)";
   };

   // Team A invoice 
   
   // Invoice Frame
   H::drawBoxDoubleLine(8,2-1,80,44,3);
   Invoicetext(10,4-1,4); DNNlogo(67,5-1,4);
   
   // underline 
   H::HLine(8,12-1,80,8,196);

   // data header
   H::gotoxy(10,14-1); H::setcolor(7); cout << "TEAM A";
   H::gotoxy(10,16-1); H::setcolor(7); cout << "INVOICE ID   : ";
   H::gotoxy(10,18-1); H::setcolor(7); cout << "INVOICE DATE : ";

   H::gotoxy(60,14-1); H::setcolor(7); cout << "GROUND NO.   : ";
   H::gotoxy(60,16-1); H::setcolor(7); cout << "SPORTS TYPE  : ";
   H::gotoxy(60,18-1); H::setcolor(7); cout << "TIME SHIFT   : ";

   H::HLine(10,20-1,74,6,196);

   // bottom 
   H::HLine(8,43-1,80,8,196);
   
   // Address data
   H::gotoxy(10,45-1); H::setcolor(7); cout << "ABA : 003 546 617 | 003 721 791";
   H::gotoxy(10,46-1); H::setcolor(7); cout << "ADDRESS : #42 St 606, Khan Tuol Kouk, Phnom Penh";
   
   // TOtal Frame 
   H::HLine(10,38-1,74,6,196);
   H::gotoxy(45,40-1); H::setcolor(7); cout << "TOTAL AMOUNT (USD)  : ";
   H::gotoxy(45,41-1); H::setcolor(7); cout << "             (Riel) : ";
   
   // Team B invoice
   
   // Invoice Frame
   H::drawBoxDoubleLine(113,2-1,80,44,4);
   Invoicetext(115,4-1,3); DNNlogo(172,5,3);

   // underline
   H::HLine(113,12-1,80,8,196);

   // data header
   H::gotoxy(115,14-1); H::setcolor(7); cout << "TEAM B";
   H::gotoxy(115,16-1); H::setcolor(7); cout << "INVOICE ID   : ";
   H::gotoxy(115,18-1); H::setcolor(7); cout << "INVOICE DATE : ";

   H::gotoxy(165,14-1); H::setcolor(7); cout << "GROUND NO.   : ";
   H::gotoxy(165,16-1); H::setcolor(7); cout << "SPORTS TYPE  : ";
   H::gotoxy(165,18-1); H::setcolor(7); cout << "TIME SHIFT   : ";

   H::HLine(115,20-1,74,6,196);

   // bottom
   H::HLine(113,43-1,80,8,196);
   
   // Address data
   H::gotoxy(115,45-1); H::setcolor(7); cout << "ABA : 003 546 617 | 003 721 791";
   H::gotoxy(115,46-1); H::setcolor(7); cout << "ADDRESS : #42 St 606, Khan Tuol Kouk, Phnom Penh";
   // TOtal Frame 
   H::HLine(113,38-1,74,6,196);
   H::gotoxy(150,40-1); H::setcolor(7); cout << "TOTAL AMOUNT (USD)  : ";
   H::gotoxy(150,41-1); H::setcolor(7); cout << "             (Riel) : ";

}

#endif