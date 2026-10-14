#ifndef _GROUND_H
#define _GROUND_H

#include "..\..\DNN_Header\DNN.hpp"
// #include <vector>

/////////////////////////////////////////////////////////////
namespace DNN::Ground
{

    class DataMember
    {

    protected:
        int number_ground;
        char ground_status[10]; ////// close or open
        char TeamA_Shift1[10];
        char TeamB_Shift1[10];
        char TeamA_Shift2[10];
        char TeamB_Shift2[10];
        char TeamA_Shift3[10];
        char TeamB_Shift3[10];
        double Price;
        char date[12];

    public:
        DataMember() {}
        void InputAll();
        void InputStatus(int a,int b);
        void InputTeamAShift1(int a,int b);
        void InputTeamBShift1(int a,int b);
        void InputTeamAShift2(int a,int b);
        void InputTeamBShift2(int a,int b);
        void InputTeamAShift3(int a,int b);
        void InputTeamBShift3(int a,int b);
        void InputPrice(int a,int b);
        void Inputdate(int a,int b);
        void NewUpdateAll();
        static void Header();
        void Display();
        void DisplaySearch(int a,int b);
        void DisplayStatus(int a,int b);
        static void HeaderStatus(int a, int b);
    };

    class Fusal : public DataMember
    {

    public:
        Fusal(){};
        Fusal(int number_ground, const char *ground_status, const char *TeamA_Shift1, const char *TeamB_Shift1, const char *TeamA_Shift2, const char *TeamB_Shift2, const char *TeamA_Shift3, const char *TeamB_Shift3, double Price);
        int GetNumber() const;
        void SetNumber(int number_ground);

        void SetTeamA_Shift1(const char *TeamA_Shift1);
        void SetTeamB_Shift1(const char *TeamB_Shift1);
        void SetTeamA_Shift2(const char *TeamA_Shift2);
        void SetTeamB_Shift2(const char *TeamB_Shift2);
        void SetTeamA_Shift3(const char *TeamA_Shift3);
        void SetTeamB_Shift3(const char *TeamB_Shift3);

        const char* GetTeamA_Shift1() const;
        const char* GetTeamB_Shift1() const;
        const char* GetTeamA_Shift2() const;
        const char* GetTeamB_Shift2() const;
        const char* GetTeamA_Shift3() const;
        const char* GetTeamB_Shift3() const;

        double GetPrice();
        const char *GetStatus() const;
        const char *GetDate() const;

        class Search
        {
            public:
                static vector<DNN::Ground::Fusal> _SearchByNumber(vector<Fusal> &vc, int number_ground);
                static vector<DNN::Ground::Fusal> _SearchByStatus(vector<Fusal> &vc, const char *status);
                static vector<DNN::Ground::Fusal> _SearchByPrice(vector<Fusal> &vc, double _Price, double _price2);
        };

        class Update
        {
            public:
                static vector<DNN::Ground::Fusal> _Status(vector<DNN::Ground::Fusal> &vc, int code);
                static vector<DNN::Ground::Fusal> _Price(vector<Fusal> &vc, int code);
                static vector<DNN::Ground::Fusal> _date(vector<Fusal> &vc, int code);
        };
        class Sort{
            public:
                static vector<DNN::Ground::Fusal>& _SortByNumber(vector<Fusal> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Fusal>& _SortByPrice(vector<Fusal> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Fusal>& _SortByStatus(vector<Fusal> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Fusal>& _SortByDate(vector<Fusal> &vc, const char * mode = "asc");
        };
    };

    class Volleyball: public DataMember
    {
        public:
        Volleyball(){};
        Volleyball(int number_ground, const char *ground_status, const char *TeamA_Shift1, const char *TeamB_Shift1, const char *TeamA_Shift2, const char *TeamB_Shift2, const char *TeamA_Shift3, const char *TeamB_Shift3, double Price);
        int GetVolleyballNumber() const;
        void SetVolleyballNumber(int number_ground);
        double GetPrice();
        const char *GetStatus() const;
        const char *GetDate() const;

        void SetTeamA_Shift1(const char *TeamA_Shift1);
        void SetTeamB_Shift1(const char *TeamB_Shift1);
        void SetTeamA_Shift2(const char *TeamA_Shift2);
        void SetTeamB_Shift2(const char *TeamB_Shift2);
        void SetTeamA_Shift3(const char *TeamA_Shift3);
        void SetTeamB_Shift3(const char *TeamB_Shift3);

        const char* GetTeamA_Shift1() const;
        const char* GetTeamB_Shift1() const;
        const char* GetTeamA_Shift2() const;
        const char* GetTeamB_Shift2() const;
        const char* GetTeamA_Shift3() const;
        const char* GetTeamB_Shift3() const;

        class Search
        {
            public:
                static vector<DNN::Ground::Volleyball> _SearchByNumber(vector<Volleyball> &vc, int number_ground);
                static vector<DNN::Ground::Volleyball> _SearchByStatus(vector<Volleyball> &vc, const char *status);
                static vector<DNN::Ground::Volleyball> _SearchByPrice(vector<Volleyball> &vc, double _Price, double _price2);
        };

        class Update
        {
            public:
                static vector<DNN::Ground::Volleyball> _Status(vector<DNN::Ground::Volleyball> &vc, int code);
                static vector<DNN::Ground::Volleyball> _Price(vector<Volleyball> &vc, int code);
                static vector<DNN::Ground::Volleyball> _date(vector<Volleyball> &vc, int code);
        };
        class Sort{
            public:
                static vector<DNN::Ground::Volleyball>& _SortByNumber(vector<Volleyball> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Volleyball>& _SortByPrice(vector<Volleyball> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Volleyball>& _SortByStatus(vector<Volleyball> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Volleyball>& _SortByDate(vector<Volleyball> &vc, const char * mode = "asc");
        };
    };

    class Basketball: public DataMember
    {
        public:
        Basketball(){};
        Basketball(int number_ground, const char *ground_status, const char *TeamA_Shift1, const char *TeamB_Shift1, const char *TeamA_Shift2, const char *TeamB_Shift2, const char *TeamA_Shift3, const char *TeamB_Shift3, double Price);

        void DisplayInvoiceSh1();
        void DisplayInvoiceSh2();
        void DisplayInvoiceSh3();

        int GetNumber() const;
        double GetPrice();
        const char *GetStatus() const;
        const char *GetDate() const;

        void SetNumber(int number_ground);
        void SetTeamA_Shift1(const char *TeamA_Shift1);
        void SetTeamB_Shift1(const char *TeamB_Shift1);
        void SetTeamA_Shift2(const char *TeamA_Shift2);
        void SetTeamB_Shift2(const char *TeamB_Shift2);
        void SetTeamA_Shift3(const char *TeamA_Shift3);
        void SetTeamB_Shift3(const char *TeamB_Shift3);

        const char* GetTeamA_Shift1() const;
        const char* GetTeamB_Shift1() const;
        const char* GetTeamA_Shift2() const;
        const char* GetTeamB_Shift2() const;
        const char* GetTeamA_Shift3() const;
        const char* GetTeamB_Shift3() const;

        class Search
        {
            public:
                static vector<DNN::Ground::Basketball> _SearchByNumber(vector<Basketball> &vc, int number_ground);
                static vector<DNN::Ground::Basketball> _SearchByStatus(vector<Basketball> &vc, const char *status);
                static vector<DNN::Ground::Basketball> _SearchByPrice(vector<Basketball> &vc, double _Price, double _price2);
        };

        class Update
        {
            public:
                static vector<DNN::Ground::Basketball> _Status(vector<DNN::Ground::Basketball> &vc, int code);
                static vector<DNN::Ground::Basketball> _Price(vector<Basketball> &vc, int code);
                static vector<DNN::Ground::Basketball> _date(vector<Basketball> &vc, int code);
        };
        class Sort{
            public:
                static vector<DNN::Ground::Basketball>& _SortByNumber(vector<Basketball> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Basketball>& _SortByPrice(vector<Basketball> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Basketball>& _SortByStatus(vector<Basketball> &vc, const char * mode = "asc");
                static vector<DNN::Ground::Basketball>& _SortByDate(vector<Basketball> &vc, const char * mode = "asc");
        };
    };

}
/////////////////////////////////////////////////////////////
#include "lib/BodyFutsal.hpp"
#include "lib/classinsert.hpp"
#include "lib/vectoroffutsal.hpp"
#include "lib/vectorofvolleyball.hpp"
#include "lib/demofutsal.hpp"
#include "lib/design/DesignConsole.hpp"
//////////////////////////////////////////////////////////////

#endif