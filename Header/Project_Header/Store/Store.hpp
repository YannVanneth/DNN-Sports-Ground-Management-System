#ifndef __STORE_H__
#define __STORE_H__

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

 
    // User Define Header   
    #include "../../DNN_Header/DNN.hpp"

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

namespace DNN
{
  namespace Store
  {
    class Drinks
    {
       protected:
            int _Code;
            char _DrinkName[20];
            char _Type[10];
            int _Quantity;
            float _Price;

        public:
            // Constructor
            Drinks();

            // Setter
            void setCode(int code);
            void setName(const char* name);
            void setType(const char* type);
            void setQuantity(int Quantity);
            void setPrice(float Price);

            // Getter
            int getCode() const;
            const char* getName() const;
            const char* getType() const;
            int getQuantity() const;
            float getPrice() const;

            // Normal methods
            void Insert();
            void Display();
            void UpdateAll();
            double getTotal() const;
            void Arrow_Type(int a,int b);
            static void Header();
            class Update
            {
                public:

                    static vector<Drinks> All(vector<Drinks> &vc, int code); // Update All
                    static vector<Drinks> Name(vector<Drinks> &vc, int code); // Update Drinks Name
                    static vector<Drinks> Type(vector<Drinks> &vc, int code); // Update Drinks Type
                    static vector<Drinks> Quantity(vector<Drinks> &vc, int code); // Update Drinks Quantity
                    static vector<Drinks> Price(vector<Drinks> &vc, int code); // Update Drinks Price
                    static vector<Drinks> Import(vector<Drinks> &vc, int code);
            };
            
            class Search
            {
                public:
                
                    static vector<Drinks> ByCode(vector<Drinks> &vc, int code);
                    static vector<Drinks> ByName(vector<Drinks> &vc, const char* name);
                    static vector<Drinks> ByType(vector<Drinks> &vc, const char* type);
                    static vector<Drinks> ByQuantity(vector<Drinks> &vc, int Quantity);
                    static vector<Drinks> ByPrice(vector<Drinks> &vc, float Price);
            };

            class Sort
            {
                public:
                   static vector<Drinks> ByCode(vector<Drinks> &vc, const char* mode);
                   static vector<Drinks> ByName(vector<Drinks> &vc, const char* mode);
                   static vector<Drinks> ByPrice(vector<Drinks> &vc, const char* mode);
                   static vector<Drinks> ByQuantity(vector<Drinks> &vc, const char* mode);
                   static vector<Drinks> ByType(vector<Drinks> &vc, const char* mode);
            };
    };
  }
}

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN
    
    // Method Definition Header
    // #include "Staff.hpp"
    #include "lib/FoodAndDrinks.hpp"
    #include "lib/FileFoodAndDrink.hpp"
    #include "lib/design/Design.hpp"

// DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN // DNN

#endif // end of Header File Store.h