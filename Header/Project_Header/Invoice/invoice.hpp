#ifndef _DNN_INVOICE_HPP_
#define _DNN_INVOICE_HPP_

#include "../../DNN_Header/DNN.hpp"
#include "Design/Invoice.hpp"

class Item
{
   private:
       char productName[20];
       int quantity;
       float price;

   public:
       Item() = default;
       ~Item() = default;
       void setProductName(const char* productName);
       void setQuantity(int quantity);
       void setPrice(float price);
   public: 
       const char* getProductName() const { return productName; }
       int getQuantity() const { return quantity; }
       float getPrice() const { return price; }
};

namespace DNN
{
   namespace Invoice
   {
   	
   class Invoice_Record
   {
	        private:
	            int InvoiceID;
	            char PaymentDate[12];
	        private:
	            double TotalAmountPaid;
              float GroundPrice;
          private:
              int GroundNo;
              char Team[20];
              char Type[15];
              char timeShift[10]; 
          protected:
              Item TeamItems[15];
              int size;

	        public:
              Invoice_Record() = default;
              ~Invoice_Record() = default;
	        public:
              void setTeamItems(Item team[]);
              void setSize(int size);
              void setGroundNo(int number);
	            void setInvoiceID(int index);
              void setGroundPrice(float price);
	            void setPaymentDate(const char* PaymentDate);
	            void setTotalAmountPaid(double TotalAmountPaid);
              void setTeam(const char* Team);
              void setType(const char* Type);
              void setTimeShift(const char* timeShift);
	        
	        public:
              int getGroundNo() const { return GroundNo; }
	            int getInvoiceID() const { return InvoiceID; }
              float getGroundPrice() const { return GroundPrice; }
	            const char* getPaymentDate() const { return PaymentDate; }
	            double getTotalAmountPaid() const { return TotalAmountPaid; }
              const char* getTeam() const { return Team; }
              const char* getType() const { return Type; }
              const char* getTimeShift() const { return timeShift; }
              int getSize() const { return size; }
              Item getTeamItems(int index) const;
	
	        public:
              static int GenerateInvoiceID();
	            static void RunInvoice(int groundNo);
	            static void AddInvoice(vector<Item> &teamA, vector<Item> &teamB, int index);
	            static void DisplayInvoice();
	            static void SearchInvoice(int invoiceID);
	   };
   }
}

////////////////////////////////////////////////////
//             THE SETTER METHODS                 //
///////////////////////////////////////////////////
void DNN::Invoice::Invoice_Record::setGroundNo(int number)
{
   this->GroundNo = number;
}

void DNN::Invoice::Invoice_Record::setGroundPrice(float price)
{
   this->GroundPrice = price;
}

void DNN::Invoice::Invoice_Record::setInvoiceID(int InvoiceID)
{
   this->InvoiceID = InvoiceID;
}

void DNN::Invoice::Invoice_Record::setPaymentDate(const char* PaymentDate)
{
   strcpy(this->PaymentDate, PaymentDate);
}

void DNN::Invoice::Invoice_Record::setTeam(const char* Team)
{
   strcpy(this->Team, Team);
}

void DNN::Invoice::Invoice_Record::setType(const char* Type)
{
   strcpy(this->Type, Type);
}

void DNN::Invoice::Invoice_Record::setTimeShift(const char* timeShift)
{
   strcpy(this->timeShift, timeShift);
}

void DNN::Invoice::Invoice_Record::setTotalAmountPaid(double TotalAmountPaid)
{
   this->TotalAmountPaid = TotalAmountPaid;
}

void DNN::Invoice::Invoice_Record::setTeamItems(Item team[])
{
   for(int i = 0; i < 15; i++)
   {
      this->TeamItems[i] = team[i];
   }
}

void DNN::Invoice::Invoice_Record::setSize(int size)
{
   this->size = size;
}

void Item::setProductName(const char* productName)
{
   strcpy(this->productName, productName);
}

void Item::setQuantity(int quantity)
{
   this->quantity = quantity;
}

void Item::setPrice(float price)
{
   this->price = price;
}

Item DNN::Invoice::Invoice_Record::getTeamItems(int index) const
{
  if(index >= 0 && index < 15)
  {
    return TeamItems[index]; 
  } 
  
  else
  { 
    throw out_of_range("Index out of range"); 
  } 
}
int DNN::Invoice::Invoice_Record::GenerateInvoiceID()
{
   vector<DNN::Invoice::Invoice_Record> vc = DNN::File<DNN::Invoice::Invoice_Record>::read("Invoice.dnn");

   int id = 3000;

   for(int i = 0; i < vc.size(); i++)
   {
      if(vc[i].getInvoiceID() > id)
      {
         id = vc[i].getInvoiceID();
      }
   }
 
   return ++id;

}
///////////////////////////////////////////////////////////////////
//////////  RUN INVOICE RECORD  ///////////////////////////////////
///////////////////////////////////////////////////////////////////

void DNN::Invoice::Invoice_Record::RunInvoice(int index)
{
    char press;
    vector<Item> teamA;
    vector<Item> teamB;
    vector<Item> combinedItems;

    bool TeamA = false;

    restart:
        combinedItems.clear();
        Item items;

        for(int i = 1+9+10+150+23; i > 6; i--)
        {
          H::VLine(i,1+14+1,27,7,178); 
          for(int j = 0; j < 28; j++)
          {
            H::gotoxy(i,1+14+1+j); H::setcolor(7); cout << " ";
          }
          H::delay(10);
        }

        for(int j = 0; j < 28; j++)
        {
          H::gotoxy(6,1+14+1+j); H::setcolor(7); cout << " ";
        }
        
        vector<DNN::Store::Drinks> vc = DNN::File<DNN::Store::Drinks>::read("Drinks.dnn");

    again:
      
      if(vc.empty())
      {
        H::gotoxy(115,26); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; 
        H::setcolor(7); cout << "]"; H::setcolor(7); cout << " NO PRODUCTS FOUND !";
      }

      else
      {
          H::gotoxy(20,45); H::setcolor(7); for(int i = 0; i < 66; i++) cout << " ";
          H::gotoxy(20,45); H::setcolor(7); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; H::setcolor(7); cout << " PRESS THE ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << " AND "; H::setcolor(6); cout << "DOWN"; 
          H::setcolor(7); cout << " TO NAVIGATE, "; H::setcolor(6); cout << "ENTER KEY"; H::setcolor(7); cout << " TO SELECT THE PRODUCT THAT YOU WANT TO ADD TO THE CART.";
          DNN::Design::Invoice::DrinksDisplay();

          if(TeamA == false)
          {
            H::gotoxy(134,18); H::setcolor(7); cout << "<<<<<<< [ TEAM A ] DRINKS CART <<<<<<<";
          }

          if(TeamA == true)
          {
            H::gotoxy(134,18); H::setcolor(7); cout << "<<<<<<< [ TEAM B ] DRINKS CART <<<<<<<";
          }

          H::gotoxy(20,18);
          cout << left << fixed << setprecision(2);
          H::setcolor(3); cout << setw(20) << "CODE";
          H::setcolor(5); cout << setw(25) << "NAME";
          H::setcolor(6); cout << setw(20) << "TYPE";
          H::setcolor(9); cout << setw(20) << "QUANTITY";
          H::setcolor(2); cout << setw(15) << "PRICE";

        int j = 0; int num = 0;
        
        do
        {
          for(int i = 0; i < vc.size(); i++)
          {   
              if(j == i)
              { 
                H::gotoxy(20,20+i); H::setcolor(7); 

                cout << left << fixed << setprecision(2);
                cout << setw(20) << vc[j].getCode();
                cout << setw(25) << vc[j].getName();
                cout << setw(20) << vc[j].getType();

                if(vc[j].getQuantity() == 0)
                {
                  H::setcolor(7); cout << setw(20) << "Out of Stock";
                }
                
                else 
                {
                  H::setcolor(7); cout << setw(4)  << "Pcs "; cout << setw(16) << vc[j].getQuantity();
                }
                
                H::setcolor(7); 
                cout << setw(2); cout << "$ " << vc[j].getPrice();
                num = j;
              }
              else 
              {
                H::gotoxy(20,20+i);

                cout << left << fixed << setprecision(2);
                H::setcolor(3); cout << setw(20) << vc[i].getCode();
                H::setcolor(5); cout << setw(25) << vc[i].getName();
                H::setcolor(6); cout << setw(20) << vc[i].getType();
                
                if(vc[i].getQuantity() == 0)
                {
                  H::setcolor(4); cout << setw(20) << "Out of Stock";
                }
                
                else 
                {
                  H::setcolor(9); cout << setw(4)  << "Pcs "; cout << setw(16) << vc[i].getQuantity();
                }

                H::setcolor(2); cout << setw(2); cout << "$ " << vc[i].getPrice();
              }
            }

            press = getch();

            switch(press)
            {
              case KEY_ARROW_UP: j--;
              {
                if(j < 0)
                {
                  j = vc.size() - 1;
                }
              }
              break;

              case KEY_ARROW_DOWN: j++;
              {
                if(j > vc.size() - 1)
                {
                  j = 0;
                }
              }
              break;

            }
        }while(press != KEY_ENTER);

        if(press == KEY_ENTER)
        {
          if(j == num)
          {
            if(vc[j].getQuantity() == 0)
              {
                H::gotoxy(20,45); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(7); cout << " SORRY, THIS PRODUCT IS OUT OF STOCK !"; cout << " PRESS ANY KEY TO CONTINUE.";
                getch();
                H::gotoxy(20,45); for(int i = 0; i < 140; i++) cout << " ";

                goto again;
              }
          
              H::gotoxy(146,20); H::setcolor(7); cout << "         ";

              H::setcursor(true,1);
              H::gotoxy(134,20); cout << "ENTER QTY : "; char qty[7]; H::inputNumber(qty,7);
              H::setcursor(false,0);

              if(vc[j].getQuantity() < atoi(qty))
              {
                H::gotoxy(20,45); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; H::setcolor(7); cout << " SORRY, THIS PRODUCT IS NOT ENOUGH IN STOCK !"; cout << " PRESS ANY KEY TO CONTINUE.";
                getch();
                H::gotoxy(20,45); for(int i = 0; i < 140; i++) cout << " ";

                goto again;
              }

              else if(atoi(qty) < 1)
              {
                H::gotoxy(20,45); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]"; H::setcolor(7); cout << " PLEASE ENTER A VALID QUANTITY FROM 1 TO " << vc[j].getQuantity() << " ONLY."; cout << " PRESS ANY KEY TO CONTINUE.";
                getch();
                H::gotoxy(20,45); for(int i = 0; i < 140; i++) cout << " ";
                goto again;
              }

              else if(vc[j].getQuantity() >= atoi(qty) && atoi(qty) > 0)
              {
          
              items.setProductName(vc[j].getName());
              items.setQuantity(atoi(qty));
              items.setPrice(vc[j].getPrice());
              
              vc[j].setQuantity(vc[j].getQuantity() - atoi(qty));

              bool found = false;

              for (auto& combinedItem : combinedItems) 
              {
                if (strcmp(combinedItem.getProductName(), items.getProductName()) == 0) 
                {
                  combinedItem.setQuantity(combinedItem.getQuantity() + items.getQuantity());
                  found = true;
                  break;
                }
              }
              
              if (!found) 
              {
                combinedItems.push_back(items);
              }

                for(int i = 0; i < combinedItems.size(); i++)
                {
                    H::gotoxy(134,22); 
                    H::setcolor(7); cout << left << setw(3) << "No.";
                    H::setcolor(7); cout << setw(15) << "Product Name";
                    H::setcolor(6); cout << setw(14) << "Quantity";
                    H::setcolor(5); cout << setw(14) << "Price ($)";
                    H::setcolor(3); cout << setw(1) << "Total";

                    H::gotoxy(134,24+i);  
                    H::setcolor(7); cout << left << setw(3) << i+1;
                    H::setcolor(7); cout << setw(15) << combinedItems[i].getProductName();
                    H::setcolor(6); cout << setw(14) << combinedItems[i].getQuantity();
                    H::setcolor(5); cout << setw(14) << combinedItems[i].getPrice();
                    H::setcolor(3); cout << setw(1) <<  combinedItems[i].getPrice() * combinedItems[i].getQuantity() << "$";
                }
                same:
                
                H::gotoxy(20,45); H::setcolor(7); for(int i = 0; i < 140; i++) cout << " ";
                H::gotoxy(20,45); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
                H::setcolor(7); cout << " PRESS"; H::setcolor(6); cout << " ENTER KEY"; H::setcolor(7); cout << " TO SELECT MORE ITEMS OR PRESS"; 
                H::setcolor(6); cout << " BACKSPACE KEY"; H::setcolor(7); cout << " TO PROCEED.";
                
                for(int i = 0; i < vc.size(); i++)
                {   
                  if(j == i)
                  { 
                    H::gotoxy(20,20+i); H::setcolor(7); 

                    cout << left << fixed << setprecision(2);
                    cout << setw(20) << vc[j].getCode();
                    cout << setw(25) << vc[j].getName();
                    cout << setw(20) << vc[j].getType();

                    if(vc[j].getQuantity() == 0)
                    {
                      H::setcolor(7); cout << setw(20) << "Out of Stock";
                    }
                    
                    else 
                    {
                      H::setcolor(7); cout << setw(4)  << "Pcs "; cout << setw(16) << vc[j].getQuantity();
                    }
                    
                    H::setcolor(7); 
                    cout << setw(2); cout << "$ " << vc[j].getPrice();
                    num = j;
                  }
                  
                  else 
                  {
                    H::gotoxy(20,20+i);

                    cout << left << fixed << setprecision(2);
                    H::setcolor(3); cout << setw(20) << vc[i].getCode();
                    H::setcolor(5); cout << setw(25) << vc[i].getName();
                    H::setcolor(6); cout << setw(20) << vc[i].getType();
                    
                    if(vc[i].getQuantity() == 0)
                    {
                      H::setcolor(4); cout << setw(20) << "Out of Stock";
                    }
                    
                    else 
                    {
                      H::setcolor(9); cout << setw(4)  << "Pcs "; cout << setw(16) << vc[i].getQuantity();
                    }

                    H::setcolor(2); cout << setw(2); cout << "$ " << vc[i].getPrice();
                  }
                }

              stat:
              press = getch();

              
              if( press == KEY_ENTER)
              {
                  if(combinedItems.size() < 15)
                  {
                    goto again;
                  }

                  else 
                  {
                    H::gotoxy(20,45); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "]"; 
                    H::setcolor(7); cout << " SORRY, YOU CAN'T ADD MORE THAN "; H::setcolor(6); cout << "15 ITEMS"; H::setcolor(7); cout << "."; H::setcolor(7); cout << " PRESS ANY KEY TO CONTINUE......";
                    
                    getch();
                    H::gotoxy(20,45); for(int i = 0; i < 140; i++) cout << " ";
                    goto stat;
                  }
                }

                if( press == KEY_BACKSPACE)
                {
                  DNN::File<DNN::Store::Drinks>::write("Drinks.dnn", &vc);

                  if(teamA.empty())
                  {
                    teamA = combinedItems;
                    TeamA = true;
                    goto restart;
                  }

                  teamB = combinedItems;

                  combinedItems.clear();

                  if(!teamB.empty())
                  {
                    if(!teamA.empty() && index > -1)
                    {
                      DNN::Invoice::Invoice_Record::AddInvoice(teamA , teamB, index);
                    }
                  }
                }

                else 
                {
                  goto same;
                }
              }

            }
        }
    }                                  
}

///////////////////////////////////////////////////////////////////
//////////  ADD INVOICE RECORD  ///////////////////////////////////
///////////////////////////////////////////////////////////////////

void DNN::Invoice::Invoice_Record::AddInvoice(vector<Item> &teamA, vector<Item> &teamB, int index)
{
  H::clearBox(0,0,200,50,7);
  
  DNN::Design::Invoice::InvoiceDesign();

  vector<DNN::Ground::Booking> booking = DNN::File<DNN::Ground::Booking>::read("Booking.dnn");
  vector<DNN::Invoice::Invoice_Record> invoice = DNN::File<DNN::Invoice::Invoice_Record>::read("Invoice.dnn");

  vector<DNN::Ground::Fusal> futsal = DNN::File<DNN::Ground::Fusal>::read("Futsal.dnn");
  vector<DNN::Ground::Basketball> basketBall = DNN::File<DNN::Ground::Basketball>::read("Basketball.dnn");
  vector<DNN::Ground::Volleyball> volleyBall = DNN::File<DNN::Ground::Volleyball>::read("Volleyball.dnn");

  Invoice_Record *inv = new Invoice_Record;
  Invoice_Record *inv2 = new Invoice_Record;

  H::gotoxy(10,22-1);
  cout << left << setw(8) << "No."

       << setw(18) << "Product Name"
       << setw(15) << "Quantity"
       << setw(17) << "Price ($)"
       << "Total";
  
  // Team A
  int line = 0;
 
  int id = Invoice_Record::GenerateInvoiceID();

  char date[12];
  strcpy(date, DNN::DateAndTimes::getCurrentDate());

  H::gotoxy(25,16-1); H::setcolor(7); cout << id;
  H::gotoxy(25,18-1); H::setcolor(7); cout << date;

  H::gotoxy(76,14-1); cout << booking[index].getGroundNo();
  H::gotoxy(76,16-1); cout << booking[index].getType();
  H::gotoxy(76,18-1); cout << booking[index].getTime_Shift();

  double total = 0;
  
  for(int i = 0; i < teamA.size(); i++)
  {
    H::gotoxy(10,24+line-1); 
    cout << left << setw(8) << i+1 
        << setw(18) << teamA[i].getProductName()
        << setw(15) << teamA[i].getQuantity()
        << setw(1)  << "$" 
        << setw(16) << teamA[i].getPrice()
        << setw(1)  << "$" 
        << teamA[i].getPrice() * teamA[i].getQuantity();
    line++;
    total += teamA[i].getPrice() * teamA[i].getQuantity();
  }

  H::gotoxy(10,24+line-1); 
  cout << left << setw(8) << line+1 
      << setw(18) << booking[index].getType()
      << setw(15) << "1"
      << setw(1)  << "$" 
      << setw(16) << booking[index].getPrice()
      << setw(1)  << "$" 
      << booking[index].getPrice();
  
  total += booking[index].getPrice();

  // Total
  H::gotoxy(68,40-1); cout << total;
  H::gotoxy(68,41-1); cout << total * 4100; 
  
  inv->setInvoiceID(id); inv->setPaymentDate(date); inv->setTotalAmountPaid(total);
  inv->setTeam("TEAM A"); inv->setType(booking[index].getType()); inv->setTimeShift(booking[index].getTime_Shift());
  inv->setGroundNo(booking[index].getGroundNo()); inv->setGroundPrice(booking[index].getPrice());
  inv->setSize(teamA.size());

  Item TeamA[15];

  for(int i = 0; i < teamA.size(); i++)
  {
    TeamA[i] = teamA[i];
  }

  inv->setTeamItems(TeamA);
  
  invoice.push_back(*inv); 

  // Team B
  line = 0; total = 0;
  
  H::gotoxy(115,22-1);
  cout << left << setw(8) << "No."
       << setw(18) << "Product Name"
       << setw(15) << "Quantity"
       << setw(17) << "Price ($)"
       << "Total";

  id++;

  strcpy(date, DNN::DateAndTimes::getCurrentDate());
  
  H::gotoxy(131,16-1); H::setcolor(7); cout << id;
  H::gotoxy(131,18-1); H::setcolor(7); cout << date;

  H::gotoxy(181,14-1); cout << booking[index].getGroundNo();
  H::gotoxy(181,16-1); cout << booking[index].getType();
  H::gotoxy(181,18-1); cout << booking[index].getTime_Shift();

  for(int i = 0; i < teamB.size(); i++)
  {
    
    H::gotoxy(115,24+line-1); 
    cout << left << setw(8) << i+1 
         << setw(18) << teamB[i].getProductName()
         << setw(15) << teamB[i].getQuantity()
         << setw(1)  << "$" 
         << setw(16) << teamB[i].getPrice()
         << setw(1)  << "$" 
         << teamB[i].getPrice() * teamB[i].getQuantity();
    line++;
    total += teamB[i].getPrice() * teamB[i].getQuantity();
  }

  H::gotoxy(115,24+line-1); 
  cout << left << setw(8) << line+1 
       << setw(18) << booking[index].getType()
       << setw(15) << "1"
       << setw(1)  << "$" 
       << setw(16) << booking[index].getPrice()
       << setw(1)  << "$" 
       << booking[index].getPrice();
  
  total += booking[index].getPrice();
  // Total
  H::gotoxy(173,40-1); cout << total;
  H::gotoxy(173,41-1); cout << total * 4100;

  H::gotoxy(81,49-1); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
  H::setcolor(7); cout << " PRESS "; H::setcolor(6); cout << "ANY KEYS"; H::setcolor(7); cout << " TO CONTINUE.";

  inv2->setInvoiceID(id); inv2->setPaymentDate(date); inv2->setTotalAmountPaid(total);
  inv2->setTeam("TEAM B"); inv2->setType(booking[index].getType()); inv2->setTimeShift(booking[index].getTime_Shift());
  inv2->setGroundNo(booking[index].getGroundNo()); inv2->setGroundPrice(booking[index].getPrice()); 
  inv2->setSize(teamB.size());

  Item TeamB[15];
  
  for(int i = 0; i < teamB.size(); i++)
  {
    TeamB[i] = teamB[i];
  }

  inv2->setTeamItems(TeamB);

  invoice.push_back(*inv2);
  DNN::File<DNN::Invoice::Invoice_Record>::write("Invoice.dnn", &invoice);
  delete inv, inv2;

  booking[index].setTeamA("NOTYET");
  booking[index].setTeamB("NOTYET");
  booking[index].setBookingStatus("NOTYET");

  DNN::File<DNN::Ground::Booking>::write("Booking.dnn", &booking);

  if(strcmp(booking[index].getType(), "Futsal") == 0)
  {
    for(int i = 0; i < futsal.size(); i++)
    {
      if(futsal[i].GetNumber() == booking[index].getGroundNo())
      {
          if(strcmp(booking[index].getTime_Shift(),"3-5") == 0)
          {
            futsal[i].SetTeamA_Shift1("NOTYET");
            futsal[i].SetTeamB_Shift1("NOTYET");
            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &futsal);
            break;
          }

          if(strcmp(booking[index].getTime_Shift(),"5-7") == 0)
          {
            futsal[i].SetTeamA_Shift2("NOTYET");
            futsal[i].SetTeamB_Shift2("NOTYET");
            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &futsal);
            break;
          }

          if(strcmp(booking[index].getTime_Shift(),"7-9") == 0)
          {
            futsal[i].SetTeamA_Shift3("NOTYET");
            futsal[i].SetTeamB_Shift3("NOTYET");
            DNN::File<DNN::Ground::Fusal>::write("Futsal.dnn", &futsal);
            break;
          }
      }
    }
  }

  if(strcmp(booking[index].getType(), "Basketball") == 0)
  {
    for(int i = 0; i < basketBall.size(); i++)
    {
      if(basketBall[i].GetNumber() == booking[index].getGroundNo())
      {
          if(strcmp(booking[index].getTime_Shift(),"3-5") == 0)
          {
            basketBall[i].SetTeamA_Shift1("NOTYET");
            basketBall[i].SetTeamB_Shift1("NOTYET");
            DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &basketBall);
            break;
          }

          if(strcmp(booking[index].getTime_Shift(),"5-7") == 0)
          {
            basketBall[i].SetTeamA_Shift2("NOTYET");
            basketBall[i].SetTeamB_Shift2("NOTYET");
            DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &basketBall);
            break;
          }

          if(strcmp(booking[index].getTime_Shift(),"7-9") == 0)
          {
            basketBall[i].SetTeamA_Shift3("NOTYET");
            basketBall[i].SetTeamB_Shift3("NOTYET");
            DNN::File<DNN::Ground::Basketball>::write("Basketball.dnn", &basketBall);
            break;
          }
      }
    }
  }

  if(strcmp(booking[index].getType(), "Volleyball") == 0)
  {
    for(int i = 0; i < volleyBall.size(); i++)
    {
      if(volleyBall[i].GetVolleyballNumber() == booking[index].getGroundNo())
      {
          if(strcmp(booking[index].getTime_Shift(),"3-5") == 0)
          {
            volleyBall[i].SetTeamA_Shift1("NOTYET");
            volleyBall[i].SetTeamB_Shift1("NOTYET");
            DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &volleyBall);
            break;
          }

          if(strcmp(booking[index].getTime_Shift(),"5-7") == 0)
          {
            volleyBall[i].SetTeamA_Shift2("NOTYET");
            volleyBall[i].SetTeamB_Shift2("NOTYET");
            DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &volleyBall);
            break;
          }

          if(strcmp(booking[index].getTime_Shift(),"7-9") == 0)
          {
            volleyBall[i].SetTeamA_Shift3("NOTYET");
            volleyBall[i].SetTeamB_Shift3("NOTYET");
            DNN::File<DNN::Ground::Volleyball>::write("Volleyball.dnn", &volleyBall);
            break;
          }
      }
    }
  }
  
  getch();

  H::clearBox(0,0,200,50,7);
  DNN::Ground::Booking::Program::Run();
}

////////////////////////////////////////////////////////
////////// DISPLAY INVOICE RECORD /////////////////////
//////////////////////////////////////////////////////

void DNN::Invoice::Invoice_Record::DisplayInvoice()
{
  H::clearBox(0,0,200,50,7);

  vector<DNN::Invoice::Invoice_Record> vc = DNN::File<DNN::Invoice::Invoice_Record>::read("Invoice.dnn");

  DNN::Design::Invoice::InvoiceDesign();  
  // Team A
  
  char press; int x = 0; int page = 1;
  int line = 0; double total = 0;

  do
  {
      H::cls();  DNN::Design::Invoice::InvoiceDesign(); H::delay(10);

      H::gotoxy(94,45-1); cout << "<< PAGE " << page << " >>";

      H::gotoxy(45,49-1); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
      H::setcolor(7); cout << " PRESS ARROW KEYS "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND "; 
      H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO CHANGE PAGE. PRESS "; H::setcolor(6); cout << " ESC KEY"; 
      H::setcolor(7); cout << " OR "; H::setcolor(6); cout << "BACKSPACE KEY"; H::setcolor(7); cout << " TO BACK TO MAIN MENU.";
      

      H::gotoxy(10,22-1);
      cout << left << setw(8) << "No."
      << setw(18) << "Product Name"
      << setw(15) << "Quantity"
      << setw(17) << "Price ($)"
      << "Total";

      line = 0; total = 0;
      // Team A
      H::gotoxy(25,16-1); H::setcolor(7); cout << vc[x].getInvoiceID();
      H::gotoxy(25,18-1); H::setcolor(7); cout << vc[x].getPaymentDate();
      H::gotoxy(76,14-1); H::setcolor(7); cout << vc[x].getGroundNo();
      H::gotoxy(76,16-1); H::setcolor(7); cout << vc[x].getType();
      H::gotoxy(76,18-1); H::setcolor(7); cout << vc[x].getTimeShift();

      for(int i = 0; i < vc[x].size; i++)
      {
        H::gotoxy(10,24+line-1); 
        cout << left << setw(8) << i+1 
            << setw(18) << vc[x].getTeamItems(i).getProductName()
            << setw(15) << vc[x].getTeamItems(i).getQuantity()
            << setw(1)  << "$" 
            << setw(16) << vc[x].getTeamItems(i).getPrice()
            << setw(1)  << "$" 
            << vc[x].getTeamItems(i).getPrice() * vc[x].getTeamItems(i).getQuantity();
        line++;
        total += vc[x].getTeamItems(i).getPrice() * vc[x].getTeamItems(i).getQuantity();
      }

      H::gotoxy(10,24+line-1); 
      cout << left << setw(8) << line+1 
          << setw(18) << vc[x].getType()
          << setw(15) << "1"
          << setw(1)  << "$" 
          << setw(16) << vc[x].getGroundPrice()
          << setw(1)  << "$" 
          << vc[x].getGroundPrice();

      total += vc[x].getGroundPrice();

      H::gotoxy(68,40-1); cout << total;
      H::gotoxy(68,41-1); cout << total * 4100; 

        // Team B
      line = 0; total = 0;
      H::gotoxy(115,22-1);
      cout << left << setw(8) << "No."
          << setw(18) << "Product Name"
          << setw(15) << "Quantity"
          << setw(17) << "Price ($)"
          << "Total";
      
      H::gotoxy(131,16-1); H::setcolor(7); cout << vc[x+1].getInvoiceID();
      H::gotoxy(131,18-1); H::setcolor(7); cout << vc[x+1].getPaymentDate();

      H::gotoxy(181,14-1); cout << vc[x+1].getGroundNo();
      H::gotoxy(181,16-1); cout << vc[x+1].getType();
      H::gotoxy(181,18-1); cout << vc[x+1].getTimeShift();

      for(int i = 0; i < vc[x+1].size; i++)
      {
        H::gotoxy(115,24+line-1); 
        cout << left << setw(8) << i+1 
            << setw(18) << vc[x+1].getTeamItems(i).getProductName()
            << setw(15) << vc[x+1].getTeamItems(i).getQuantity()
            << setw(1)  << "$" 
            << setw(16) << vc[x+1].getTeamItems(i).getPrice()
            << setw(1)  << "$" 
            << vc[x+1].getTeamItems(i).getPrice() * vc[x+1].getTeamItems(i).getQuantity();
        line++;
        total += vc[x+1].getTeamItems(i).getPrice() * vc[x+1].getTeamItems(i).getQuantity();
      }

      H::gotoxy(115,24+line-1); 
      cout << left << setw(8) << line+1 
          << setw(18) << vc[x+1].getType()
          << setw(15) << "1"
          << setw(1)  << "$" 
          << setw(16) << vc[x+1].getGroundPrice()
          << setw(1)  << "$" 
          << vc[x+1].getGroundPrice();
      
      total += vc[x+1].getGroundPrice();

      // Total
      H::gotoxy(173,40-1); cout << total;
      H::gotoxy(173,41-1); cout << total * 4100;

    press = getch();

    switch(press)
    {
      case KEY_ARROW_LEFT: x-=2; page--;
      {


        if(x < 0)
        {
          x = vc.size()-2;
        }

        if(page < 1)
        {
          page = vc.size()/2;
        }
      }
      break;

      case KEY_ARROW_RIGHT: x+=2; page++;
      {
        if(x > vc.size()-1)
        {
          x = 0;
        }

        if(page > vc.size()/2)
        {
          page = 1;
        }
      }
      break;

      case KEY_ESC: break;
    }
  }while(press != KEY_ESC && press != KEY_BACKSPACE);
}

///////////////////////////////////////////////////////////////////////////////
///////////////// SEARCH INVOICE /////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

void DNN::Invoice::Invoice_Record::SearchInvoice(int InvoiceID)
{
  vector<DNN::Invoice::Invoice_Record> vc = DNN::File<DNN::Invoice::Invoice_Record>::read("Invoice.dnn");
  int line = 0; double total = 0; bool found = false;

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

  if(vc.empty() == false)
  {
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i].getInvoiceID() == InvoiceID)
        {
          line = 0; total = 0; found = true;

          // Invoice Frame
          H::drawBoxDoubleLine(113,2,80,44,4);
          Invoicetext(115,4,3); DNNlogo(172,5,3);

          // underline
          H::HLine(113,12,80,8,196);

          // data header
          H::gotoxy(115,14); H::setcolor(7); 
          (InvoiceID - 3000) % 2 == 1 ? cout << "TEAM A" : cout << "TEAM B";
          
          H::gotoxy(115,16); H::setcolor(7); cout << "INVOICE ID   : ";
          H::gotoxy(115,18); H::setcolor(7); cout << "INVOICE DATE : ";

          H::gotoxy(165,14); H::setcolor(7); cout << "GROUND NO.   : ";
          H::gotoxy(165,16); H::setcolor(7); cout << "SPORTS TYPE  : ";
          H::gotoxy(165,18); H::setcolor(7); cout << "TIME SHIFT   : ";

          H::HLine(115,20,74,6,196);

          // bottom
          H::HLine(113,43,80,8,196);
          
          // Address data
          H::gotoxy(115,45); H::setcolor(7); cout << "ABA : 003 546 617 | 003 721 791";
          H::gotoxy(115,46); H::setcolor(7); cout << "ADDRESS : #42 St 606, Khan Tuol Kouk, Phnom Penh";
          // TOtal Frame 
          H::HLine(113,38,74,6,196);
          H::gotoxy(150,40); H::setcolor(7); cout << "TOTAL AMOUNT (USD)  : ";
          H::gotoxy(150,41); H::setcolor(7); cout << "             (Riel) : ";

          H::gotoxy(115,22);
          cout << left << setw(8) << "No."
              << setw(18) << "Product Name"
              << setw(15) << "Quantity"
              << setw(17) << "Price ($)"
              << "Total";
          
          H::gotoxy(131,16); H::setcolor(7); cout << vc[i].getInvoiceID();
          H::gotoxy(131,18); H::setcolor(7); cout << vc[i].getPaymentDate();

          H::gotoxy(181,14); cout << vc[i].getGroundNo();
          H::gotoxy(181,16); cout << vc[i].getType();
          H::gotoxy(181,18); cout << vc[i].getTimeShift();

          for(int j = 0; j < vc[i].size; j++)
          {
            H::gotoxy(115,24+line); 
            cout << left << setw(8) << i+1 
                << setw(18) << vc[i].getTeamItems(j).getProductName()
                << setw(15) << vc[i].getTeamItems(j).getQuantity()
                << setw(1)  << "$" 
                << setw(16) << vc[i].getTeamItems(j).getPrice()
                << setw(1)  << "$" 
                << vc[i].getTeamItems(j).getPrice() * vc[i].getTeamItems(j).getQuantity();
            line++;
            total += vc[i].getTeamItems(j).getPrice() * vc[i].getTeamItems(j).getQuantity();
          }

          H::gotoxy(115,24+line); 
          cout << left << setw(8) << line+1 
              << setw(18) << vc[i].getType()
              << setw(15) << "1"
              << setw(1)  << "$" 
              << setw(16) << vc[i].getGroundPrice()
              << setw(1)  << "$" 
              << vc[i].getGroundPrice();
          
          total += vc[i].getGroundPrice();

          // Total
          H::gotoxy(173,40); cout << total;
          H::gotoxy(173,41); cout << total * 4100;
          break;
        }
      }
  }

  else 
  {
    H::gotoxy(13,24); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "] "; 
    H::setcolor(4); cout << "NO DATA FOUND!";
  }

  if(found == false) 
  {
    H::gotoxy(13,24); H::setcolor(7); cout << "["; H::setcolor(6); cout << " WARNING "; H::setcolor(7); cout << "] ";
    H::setcolor(7); cout << "INVOICE ID "; H::setcolor(6); cout << InvoiceID; H::setcolor(4); cout << " NOT FOUND!";
  }

}
#endif 