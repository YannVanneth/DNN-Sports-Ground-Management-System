#ifndef __LOGIN_CONSOLE_HPP__
#define __LOGIN_CONSOLE_HPP__

#include "../../../../DNN_Header/DNN.hpp"

namespace DNN::Design
{
    class User
    {
       public:
        class Auth
        {
            public:
                static void Loading(int x, int y);
                static void Home(int x, int y);
                static void Login(int x, int y);
                static void ForgotPassword(int x, int y);
                static void Register(int x, int y);
        };

        class MainMenu
        {
            public:
                static void Home(int x, int y,const char* pos);
        };

        class Staff
        {
            public:
                static void Home(int x, int y);
                static void AccountSetting(int x, int y);
                static void Approval(int x, int y);
                static void Insert(int x, int y);
                static void Display(int x, int y);
                static void Update(int x, int y);
                static void Delete(int x, int y);
                static void Search(int x, int y);
                static void sort(int x, int y);
        };

    };
}

// THE DEFINITIONS //-----------------------------------------------------------------------------------------//
void DNN::Design::User::Auth::Home(int x, int y)
{
    H::setcursor(false, 0);

    const auto box = [](int x, int y) -> void
    {
        H::drawBoxDoubleLineWithBG(x, y, 1, 1, 247);
    };

    const auto DNN = [](int x, int y) -> void
    {                                                 
        H::gotoxy(x,y);    H::setcolor(7); cout << R"( DDDDDDDDDDDDD         )";    
        H::gotoxy(x,y+1);  H::setcolor(7); cout << R"( D::::::::::::DDD      )";    
        H::gotoxy(x,y+2);  H::setcolor(7); cout << R"( D:::::::::::::::DD    )";    
        H::gotoxy(x,y+3);  H::setcolor(7); cout << R"( DDD:::::DDDDD:::::D   )";    
        H::gotoxy(x,y+4);  H::setcolor(7); cout << R"(   D:::::D    D:::::D  )";    
        H::gotoxy(x,y+5);  H::setcolor(7); cout << R"(   D:::::D     D:::::D )";    
        H::gotoxy(x,y+6);  H::setcolor(7); cout << R"(   D:::::D     D:::::D )";    
        H::gotoxy(x,y+7);  H::setcolor(7); cout << R"(   D:::::D     D:::::D )";    
        H::gotoxy(x,y+8);  H::setcolor(7); cout << R"(   D:::::D     D:::::D )";    
        H::gotoxy(x,y+9);  H::setcolor(7); cout << R"(   D:::::D     D:::::D )";    
        H::gotoxy(x,y+10); H::setcolor(7); cout << R"(   D:::::D     D:::::D )";    
        H::gotoxy(x,y+11); H::setcolor(7); cout << R"(   D:::::D    D:::::D  )";    
        H::gotoxy(x,y+12); H::setcolor(7); cout << R"( DDD:::::DDDDD:::::D   )";    
        H::gotoxy(x,y+13); H::setcolor(7); cout << R"( D:::::::::::::::DD    )";    
        H::gotoxy(x,y+14); H::setcolor(7); cout << R"( D::::::::::::DDD      )";    
        H::gotoxy(x,y+15); H::setcolor(7); cout << R"( DDDDDDDDDDDDD         )";    

        H::gotoxy(x+27,y);    H::setcolor(9); cout << R"( NNNNNNNN        NNNNNNNN  )";   
        H::gotoxy(x+27,y+1);  H::setcolor(9); cout << R"( N:::::::N       N::::::N  )";   
        H::gotoxy(x+27,y+2);  H::setcolor(9); cout << R"( N::::::::N      N::::::N  )";   
        H::gotoxy(x+27,y+3);  H::setcolor(9); cout << R"( N:::::::::N     N::::::N  )";   
        H::gotoxy(x+27,y+4);  H::setcolor(9); cout << R"( N::::::::::N    N::::::N  )";   
        H::gotoxy(x+27,y+5);  H::setcolor(9); cout << R"( N:::::::::::N   N::::::N  )";   
        H::gotoxy(x+27,y+6);  H::setcolor(9); cout << R"( N:::::::N::::N  N::::::N  )";   
        H::gotoxy(x+27,y+7);  H::setcolor(9); cout << R"( N::::::N N::::N N::::::N  )";   
        H::gotoxy(x+27,y+8);  H::setcolor(9); cout << R"( N::::::N  N::::N:::::::N  )";   
        H::gotoxy(x+27,y+9);  H::setcolor(9); cout << R"( N::::::N   N:::::::::::N  )";   
        H::gotoxy(x+27,y+10); H::setcolor(9); cout << R"( N::::::N    N::::::::::N  )";   
        H::gotoxy(x+27,y+11); H::setcolor(9); cout << R"( N::::::N     N:::::::::N  )";   
        H::gotoxy(x+27,y+12); H::setcolor(9); cout << R"( N::::::N      N::::::::N  )";   
        H::gotoxy(x+27,y+13); H::setcolor(9); cout << R"( N::::::N       N:::::::N  )";   
        H::gotoxy(x+27,y+14); H::setcolor(9); cout << R"( N::::::N        N::::::N  )";   
        H::gotoxy(x+27,y+15); H::setcolor(9); cout << R"( NNNNNNNN         NNNNNNN  )";  

        H::gotoxy(x+55,y);    H::setcolor(7); cout << R"( NNNNNNNN        NNNNNNNN  )";   
        H::gotoxy(x+55,y+1);  H::setcolor(7); cout << R"( N:::::::N       N::::::N  )";   
        H::gotoxy(x+55,y+2);  H::setcolor(7); cout << R"( N::::::::N      N::::::N  )";   
        H::gotoxy(x+55,y+3);  H::setcolor(7); cout << R"( N:::::::::N     N::::::N  )";   
        H::gotoxy(x+55,y+4);  H::setcolor(7); cout << R"( N::::::::::N    N::::::N  )";   
        H::gotoxy(x+55,y+5);  H::setcolor(7); cout << R"( N:::::::::::N   N::::::N  )";   
        H::gotoxy(x+55,y+6);  H::setcolor(7); cout << R"( N:::::::N::::N  N::::::N  )";   
        H::gotoxy(x+55,y+7);  H::setcolor(7); cout << R"( N::::::N N::::N N::::::N  )";   
        H::gotoxy(x+55,y+8);  H::setcolor(7); cout << R"( N::::::N  N::::N:::::::N  )";   
        H::gotoxy(x+55,y+9);  H::setcolor(7); cout << R"( N::::::N   N:::::::::::N  )";   
        H::gotoxy(x+55,y+10); H::setcolor(7); cout << R"( N::::::N    N::::::::::N  )";   
        H::gotoxy(x+55,y+11); H::setcolor(7); cout << R"( N::::::N     N:::::::::N  )";   
        H::gotoxy(x+55,y+12); H::setcolor(7); cout << R"( N::::::N      N::::::::N  )";   
        H::gotoxy(x+55,y+13); H::setcolor(7); cout << R"( N::::::N       N:::::::N  )";   
        H::gotoxy(x+55,y+14); H::setcolor(7); cout << R"( N::::::N        N::::::N  )";   
        H::gotoxy(x+55,y+15); H::setcolor(7); cout << R"( NNNNNNNN         NNNNNNN  )";  

        const auto underline = [x,y]() -> void
        {
           H::HLine(x,y+17,81,7,178);
        };

        underline();
    };

    const auto Middle = [x,y]() -> void
    {
       for(int i = 1; i <= 25; i++)
       {
        H::VLine(200/2,y-y+14,i,7,219); H::delay(30);
       }
    };

       const auto wall = [](int x,int y) -> void
       {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(_|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|)";
        H::gotoxy(x,y+1); H::setcolor(7); cout << R"(___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|__)";
        H::gotoxy(x,y+2); H::setcolor(7); cout << R"(_|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|)";
        H::gotoxy(x,y+3); H::setcolor(7); cout << R"(___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|__)";
        H::gotoxy(x,y+4); H::setcolor(7); cout << R"(_|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|)";
       };

    const auto Right = [](int x, int y) -> void
    {
       const auto panel = [x,y]() -> void
       {
          H::drawBoxDoubleLineWithBG(x,y,80,24,248);
       };
    

       const auto cloud = [](int x, int y) -> void
       {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(   __   _   )";
        H::gotoxy(x,y+1); H::setcolor(7); cout << R"( _(  )_( )_ )";
        H::gotoxy(x,y+2); H::setcolor(7); cout << R"((_   _    _))";
        H::gotoxy(x,y+3); H::setcolor(7); cout << R"(  (_) (__)  )";
       };

       const auto welcome = [](int x,int y) -> void
       {
          H::gotoxy(x-10,y+2); H::setcolor(71); cout << R"(                                      )";
          H::gotoxy(x-10,y+3); H::setcolor(71); cout << R"(          W E C O M E                 )";
          H::gotoxy(x-10,y+4); H::setcolor(71); cout << R"(                                      )";
       };
       
       const auto TheClouds = [x,y,cloud]() -> void
       {
         cloud(5,y-9); H::delay(100); cloud(17,y-7); H::delay(100); cloud(55,y-7); H::delay(100); cloud(63,y-10); H::delay(100); cloud(94,y-9);  
         H::delay(100); cloud(107,y-7); H::delay(100); cloud(137,y-10); H::delay(100); cloud(157,y-7);  H::delay(100); cloud(177,y-10);
       };

       const auto building = [](int x, int y) -> void
       {
         H::gotoxy(x,y);    H::setcolor(7); cout << R"(                            o                    )";
         H::gotoxy(x,y+1);  H::setcolor(7); cout << R"(                        _---|         _ _ _ _ _  )";
         H::gotoxy(x,y+2);  H::setcolor(9); cout << R"(                     o   ---|     o   ]-I-I-I-[  )";
         H::gotoxy(x,y+3);  H::setcolor(9); cout << R"(    _ _ _ _ _ _  _---|      | _---|    \ ` ' /   )";
         H::gotoxy(x,y+4);  H::setcolor(7); cout << R"(    ]-I-I-I-I-[   ---|      |  ---|    |.   |    )";
         H::gotoxy(x,y+5);  H::setcolor(7); cout << R"(     \ `   '_/       |     / \    |    | /^\|    )";
         H::gotoxy(x,y+6);  H::setcolor(9); cout << R"(      [*]  __|       ^    / ^ \   ^    | |*||    )";
         H::gotoxy(x,y+7);  H::setcolor(9); cout << R"(      |__   ,|      / \  /    `\ / \   | ===|    )";
         H::gotoxy(x,y+8);  H::setcolor(7); cout << R"(   ___| ___ ,|__   /    /=_=_=_=\   \  |,  _|    )";
         H::gotoxy(x,y+9);  H::setcolor(7); cout << R"(   I_I__I_I__I_I  (====(_________)___|_|____|____)";
         H::gotoxy(x,y+10); H::setcolor(9); cout << R"(   \-\--|-|--/-/  |     I  [ ]__I I_I__|____I_I_|)"; 
         H::gotoxy(x,y+11); H::setcolor(9); cout << R"(    |[]      '|   | []  |`__  . [  \-\--|-|--/-/ )"; 
         H::gotoxy(x,y+12); H::setcolor(7); cout << R"(    |.   | |' |___|_____I___|___I___|---------|  )";
         H::gotoxy(x,y+13); H::setcolor(7); cout << R"(   / \| []   .|_|-|_|-|-|_|-|_|-|_|-| []   [] |  )";
         H::gotoxy(x,y+14); H::setcolor(9); cout << R"(  <===>  |   .|-=-=-=-=-=-=-=-=-=-=-|   |    / \ )"; 
         H::gotoxy(x,y+15); H::setcolor(9); cout << R"(  ] []|`   [] ||.|.|.|.|.|.|.|.|.|.||-      <===>)"; 
         H::gotoxy(x,y+16); H::setcolor(7); cout << R"(  ] []| ` |   |/////////\\\\\\\\\\.||__.  | |[] [)"; 
         H::gotoxy(x,y+17); H::setcolor(7); cout << R"(  <===>     ' ||||| |   |   | ||||.||  []   <===>)";
         H::gotoxy(x,y+18); H::setcolor(9); cout << R"(   \T/  | |-- ||||| | O | O | ||||.|| . |'   \T/ )";
         H::gotoxy(x,y+19); H::setcolor(9); cout << R"(    |      . _||||| |   |   | ||||.|| |     | |  )";
         H::gotoxy(x,y+20); H::setcolor(7); cout << R"( ../|' v . | .|||||/____|____\|||| /|. . | . ./  )";
         H::gotoxy(x,y+21); H::setcolor(7); cout << R"( .|//\............/...........\........../../\\\ )";
       };

        for(int i = x-x+10; i <= x-x+109; i++)
        {
         welcome(i,y); H::delay(15);
        }  

        TheClouds(); H::delay(80);
        building(x+38,y+9);
       
    };

    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
    };

    WindowFrame(x,y);

    Right(x+109,y+12); H::delay(60);

    wall(x,y-y+45); wall(x+70,y-y+45); wall(x+129,y-y+45); H::HLine(x-x, y-y+44, 200, 7, 178);
    H::delay(30);

    Middle(); H::delay(30);
    // box(x+2, y);
    DNN(x+8, y+21);
    
    const auto Login = [x,y]()
    {
        H::gotoxy(x+99,y+26); H::setcolor(121); cout << R"(                               )";
        H::gotoxy(x+99,y+27); H::setcolor(121); cout << R"(          L O G I N            )";
        H::gotoxy(x+99,y+28); H::setcolor(121); cout << R"(                               )";
    };

    const auto Register = [x,y]()
    {
        H::gotoxy(x+99,y+31); H::setcolor(121); cout << R"(                               )";
        H::gotoxy(x+99,y+32); H::setcolor(121); cout << R"(       R E G I S T E R         )";
        H::gotoxy(x+99,y+33); H::setcolor(121); cout << R"(                               )";
    };

    
    H::gotoxy(x+4,y+41); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
    cout << " PRESS ARROW KEYS"; H::setcolor(6); cout << " LEFT"; H::setcolor(7); cout << ","; H::setcolor(6); cout << " RIGHT"; 
    H::setcolor(7); cout << ",";  H::setcolor(6); cout << " UP"; H::setcolor(7); cout << " AND "; H::setcolor(6); cout << "DOWN "; 
    H::setcolor(7); cout << "TO NAVIGATE. PRESS"; H::setcolor(6); cout << " ENTER KEY"; H::setcolor(7); cout << " TO SELECT THE OPTIONS.";

    H::delay(30); Login(); H::delay(30); Register(); 

}
void DNN::Design::User::Auth::Loading(int x, int y)
{
    H::setcursor(false, 0);

    //    DNN::Design::User::Auth::Home(8, 15);
    const auto DNN = [](int x, int y) -> void
    {
      H::gotoxy(x, y);   H::setcolor(7); cout << R"(  ____  _   _ _   _   ____  ____   ___  ____ _____ ____     ____ ____   ___  _   _ _   _ ____   )";
      H::gotoxy(x, y+1); H::setcolor(9); cout << R"( |  _ \| \ | | \ | | / ___||  _ \ / _ \|  _ \_   _/ ___|   / ___|  _ \ / _ \| | | | \ | |  _ \  )";
      H::gotoxy(x, y+2); H::setcolor(3); cout << R"( | | | |  \| |  \| | \___ \| |_) | | | | |_) || | \___ \  | |  _| |_) | | | | | | |  \| | | | | )";
      H::gotoxy(x, y+3); H::setcolor(9); cout << R"( | |_| | |\  | |\  |  ___) |  __/| |_| |  _ < | |  ___) | | |_| |  _ <| |_| | |_| | |\  | |_| | )";
      H::gotoxy(x, y+4); H::setcolor(7); cout << R"( |____/|_| \_|_| \_| |____/|_|    \___/|_| \_\|_| |____/   \____|_| \_\\___/ \___/|_| \_|____/  )";
      H::gotoxy(x, y+5); H::setcolor(7); cout << R"(                                                                                                )";
    };

    const auto ANT = [](int x, int y) -> void
    {
      H::gotoxy(x,y-1);    H::setcolor(7); cout << R"(                                                                                    )";      
      H::gotoxy(x, y);     H::setcolor(7); cout << R"(           _   _ _______   _______ _____            _____ _   _ _____ _   _  _____  )";
      H::gotoxy(x, y+1);   H::setcolor(9); cout << R"(     /\   | \ | |__   __| |__   __|  __ \     /\   |_   _| \ | |_   _| \ | |/ ____| )";
      H::gotoxy(x, y+2);   H::setcolor(3); cout << R"(    /  \  |  \| |  | |       | |  | |__) |   /  \    | | |  \| | | | |  \| | |  __  )";
      H::gotoxy(x, y+3);   H::setcolor(9); cout << R"(   / /\ \ | . ` |  | |       | |  |  _  /   / /\ \   | | | . ` | | | | . ` | | |_ | )";
      H::gotoxy(x, y+4);   H::setcolor(3); cout << R"(  / ____ \| |\  |  | |       | |  | | \ \  / ____ \ _| |_| |\  |_| |_| |\  | |__| | )";
      H::gotoxy(x, y+5);   H::setcolor(7); cout << R"( /_/    \_\_| \_|  |_|       |_|  |_|  \_\/_/    \_\_____|_| \_|_____|_| \_|\_____| )";
      H::gotoxy(x,y+6);    H::setcolor(7); cout << R"(                                                                                    )";
    };

    const auto Bright = [](int x, int y) -> void
    {
        H::gotoxy(x,y);      H::setcolor(7); cout << R"(                                         ^^                         )";
        H::gotoxy(x,y+1);    H::setcolor(7); cout << R"(    ^^      ..                                       ..             )";
        H::gotoxy(x,y+2);    H::setcolor(7); cout << R"(            []                                       []             )";
        H::gotoxy(x,y+3);    H::setcolor(7); cout << R"(          .:[]:_          ^^                       ,:[]:.           )";
        H::gotoxy(x,y+4);    H::setcolor(7); cout << R"(        .: :[]: :-.                             ,-: :[]: :.         )";
        H::gotoxy(x,y+5);    H::setcolor(7); cout << R"(      .: : :[]: : :`._                       ,.': : :[]: : :.       )";
        H::gotoxy(x,y+6);    H::setcolor(7); cout << R"(    .: : : :[]: : : : :-._               _,-: : : : :[]: : : :.     )";
        H::gotoxy(x,y+7);    H::setcolor(7); cout << R"(_..: : : : :[]: : : : : : :-._________.-: : : : : : :[]: : : : :-._ )";
        H::gotoxy(x,y+8);    H::setcolor(7); cout << R"(_:_:_:_:_:_:[]:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:_:[]:_:_:_:_:_:_ )";
        H::gotoxy(x,y+9);    H::setcolor(7); cout << R"(!!!!!!!!!!!![]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![]!!!!!!!!!!!!!)";
        H::gotoxy(x,y+10);   H::setcolor(7); cout << R"(^^^^^^^^^^^^[]^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^[]^^^^^^^^^^^^^)";
        H::gotoxy(x,y+11);   H::setcolor(7); cout << R"(            []                                       []             )";
        H::gotoxy(x,y+12);   H::setcolor(7); cout << R"(            []                                       []             )";
        H::gotoxy(x,y+13);   H::setcolor(7); cout << R"(            []                                       []             )";
        H::gotoxy(x,y+14);   H::setcolor(9); cout << R"( ~~^-~^_~^~/  \~^-~^~_~^-~_^~-^~_^~~-^~_~^~-~_~-^~_^/  \~^-~_~^-~~- )";
        H::gotoxy(x,y+15);   H::setcolor(9); cout << R"(~ _~~- ~^-^~-^~~- ^~_^-^~~_ -~^_ -~_-~~^- _~~_~-^_ ~^-^~~-_^-~ ~^__ )";
        H::gotoxy(x,y+16);   H::setcolor(9); cout << R"(~ ^-~ ^- _~~_-  ~~ _ ~  ^~  - ~~^ _ -  ^~-  ~ _  ~~^  - ~_   - ~^_~ )";
        H::gotoxy(x,y+17);   H::setcolor(9); cout << R"(~ ^-~-  ^_  ~^ -  ^~ _ - ~^~ _   _~^~-  _ ~~^ - _ ~ - _ ~~^ -~ ^- ^-)";
        H::gotoxy(x,y+18);   H::setcolor(9); cout << R"( ~~^-~^_~^~/  \~^-~^~_~^-~_^~-^~_^~~-^~_~^~-~_~-^~_^/  \~^-~_~^-~~- )";
        H::gotoxy(x,y+19);   H::setcolor(9); cout << R"(~ _~~- ~^-^~-^~~- ^~_^-^~~_ -~^_ -~_-~~^- _~~_~-^_ ~^-^~~-_^-~ ~^__ )";
        H::gotoxy(x,y+20);   H::setcolor(9); cout << R"(~ ^-~ ^- _~~_-  ~~ _ ~  ^~  - ~~^ _ -  ^~-  ~ _  ~~^  - ~_   - ~^_~ )";
        H::gotoxy(x,y+21);   H::setcolor(9); cout << R"(~ ^-~-  ^_  ~^ -  ^~ _ - ~^~ _   _~^~-  _ ~~^ - _ ~ - _ ~~^ -~ ^- ^-)";
    };

    const auto Airplane = [](int x, int y) -> void
    {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(            _        )";
        H::gotoxy(x,y+1); H::setcolor(7); cout << R"(          -=\`\      )";
        H::gotoxy(x,y+2); H::setcolor(7); cout << R"(      |\ ____\_\__   )";
        H::gotoxy(x,y+3); H::setcolor(7); cout << R"(    -=\c`""""""" "`) )";
        H::gotoxy(x,y+4); H::setcolor(7); cout << R"(       `~~~~~/ /~~`  )";
        H::gotoxy(x,y+5); H::setcolor(7); cout << R"(         -==/ /      )";
        H::gotoxy(x,y+6); H::setcolor(7); cout << R"(           '-'       )";
    };

    // Side Grounds
    H::VLine(x+99, y, 8, 7, 221);
    // H::drawBoxDoubleLineWithBG(x-x+100, y-y, 99, 38, 72);

    Bright(x-7, y+13); Bright(x+59, y+13); Bright(x+124, y+13);



    for(int i=x-x; i<=x; i++)
    {
      DNN(i, y+2); H::delay(60);
    }

    H::delay(60); H::VLine(x+99, y, 8, 7, 221);

    for(int i=y-y; i<=y+1; i++)
    {    
        ANT(x+100, i); H::delay(60);
    }

    for(int i=y+2; i>=y-y+6; i--)
    {
        DNN(x, i); ANT(x+100, i-1);  
        H::VLine(x+99, i-2, 8, 7, 221); 
        H::gotoxy(x+98, i+6); H::setcolor(7); cout << " ";
        H::delay(60);
    }
    
    for(int i=x-x; i<=x+155; i++)
    {
        Airplane(i+15, y); H::delay(20);
    }
    
    H::cls();
}
void DNN::Design::User::Auth::Login(int x, int y)
{
    const auto Line = [](int x, int y) -> void
    {
        H::drawBoxDoubleLineWithBG(x+8, y+4, 1, 8, 196);
    };

    const auto Elephant = [](int x, int y) -> void
    {
     H::gotoxy(x,y);    H::setcolor(7); cout << R"(                           _                  )";
     H::gotoxy(x,y+1);  H::setcolor(7); cout << R"(                         .' `'.__             )";
     H::gotoxy(x,y+2);  H::setcolor(7); cout << R"(                        /      \ `'"-,        )";
     H::gotoxy(x,y+3);  H::setcolor(7); cout << R"(       .-''''--...__..-/ .     |      \       )";
     H::gotoxy(x,y+4);  H::setcolor(7); cout << R"(     .'               ; :'     '.  a   |      )";
     H::gotoxy(x,y+5);  H::setcolor(7); cout << R"(    /                 | :.       \     =\     )";
     H::gotoxy(x,y+6);  H::setcolor(7); cout << R"(   ;                   \':.      /  ,-.__;.-;`)";
     H::gotoxy(x,y+7);  H::setcolor(7); cout << R"(  /|     .              '--._   /-.7`._..-;`  )";
     H::gotoxy(x,y+8);  H::setcolor(7); cout << R"( ; |       '                |`-'      \  =|   )";
     H::gotoxy(x,y+9);  H::setcolor(7); cout << R"( |/\        .   -' /     /  ;         |  =/)";
     H::gotoxy(x,y+10); H::setcolor(7); cout << R"( (( ;.       ,_  .:|     | /     /\   | =|)";
     H::gotoxy(x,y+11); H::setcolor(7); cout << R"(  ) / `\     | `""`;     / |    | /   / =/)";
     H::gotoxy(x,y+12); H::setcolor(7); cout << R"(    | ::|    |      \    \ \    \ `--' =/)";
     H::gotoxy(x,y+13); H::setcolor(7); cout << R"(   /  '/\    /       )    |/     `-...-`)";
     H::gotoxy(x,y+14); H::setcolor(7); cout << R"(  /    | |  `\    /-'    /;)";
     H::gotoxy(x,y+15); H::setcolor(7); cout << R"(  \  ,,/ |    \   D    .'  \)";
     H::gotoxy(x,y+16); H::setcolor(7); cout << R"( s `""`   \  nnh  D_.-'L__nnh)";
    };

    const auto textFrame = [](int x, int y) -> void
    {
        H::HLine(x+20, y-1, 108, 7, 223); H::HLine(x+20, y+8, 108, 7, 223);
        H::VLine(x+23, y-3, 12, 7,219); H::VLine(x+125, y-3, 12, 7,219); 
    };
    
    const auto text = [](int x, int y) -> void
    {
        H::gotoxy(x+25, y);   H::setcolor(7); cout << R"(  ____  _   _ _   _   ____  ____   ___  ____ _____ ____     ____ ____   ___  _   _ _   _ ____   )";
        H::gotoxy(x+25, y+1); H::setcolor(7); cout << R"( |  _ \| \ | | \ | | / ___||  _ \ / _ \|  _ \_   _/ ___|   / ___|  _ \ / _ \| | | | \ | |  _ \  )";
        H::gotoxy(x+25, y+2); H::setcolor(7); cout << R"( | | | |  \| |  \| | \___ \| |_) | | | | |_) || | \___ \  | |  _| |_) | | | | | | |  \| | | | | )";
        H::gotoxy(x+25, y+3); H::setcolor(7); cout << R"( | |_| | |\  | |\  |  ___) |  __/| |_| |  _ < | |  ___) | | |_| |  _ <| |_| | |_| | |\  | |_| | )";
        H::gotoxy(x+25, y+4); H::setcolor(7); cout << R"( |____/|_| \_|_| \_| |____/|_|    \___/|_| \_\|_| |____/   \____|_| \_\\___/ \___/|_| \_|____/  )";
    };

    const auto Box = [](int x, int y) -> void
    {
        H::drawBoxDoubleLineWithBG(x, y, 5, 1, 247);
    };

    const auto TextBox = [](int x, int y) -> void
    {
        // H::HLine(x, y, 80, 0, 223); H::HLine(x, y+3, 80, 0, 220);
        // H::VLine(x, y-1, 4, 0,219); H::VLine(x+80, y-1, 4, 0,219); 
        H::drawBoxDoubleLine(x,y,60,1,7);
        H::gotoxy(x+2, y+1); H::setcolor(9); cout << "USERNAME :";

        H::drawBoxDoubleLine(x,y+4,60,1,7);
        H::gotoxy(x+2, y+5); H::setcolor(9); cout << "PASSWORD :";
    };
    
    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
    };

    WindowFrame(x,y);
    // First Conponents
    Box(x,y); Box(x+6,y+15); Line(x,y); 
    
    text(x+2, y+2); textFrame(x+1, y+1);
    
    // Second Components
    Box(x+20, y+20);  //Line(x+14, y+18); Box(x+26, y+31);

    TextBox(x+45, y+14);

    // Elephant(x+20, y-y+33);
}

void DNN::Design::User::Auth::Register(int x, int y)
{
    const auto Register = [](int x, int y)
    { 
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(  ______     _______    _______    _     ______    _______    _______    ______   )";
        H::gotoxy(x,y+1); H::setcolor(7); cout << R"( (_____ \   (_______)  (_______)  | |   / _____)  (_______)  (_______)  (_____ \  )";
        H::gotoxy(x,y+2); H::setcolor(9); cout << R"(  _____) )   _____      _   ___   | |  ( (____        _       _____      _____) ) )";
        H::gotoxy(x,y+3); H::setcolor(3); cout << R"( |  __  /   |  ___)    | | (_  |  | |   \____ \      | |     |  ___)    |  __  /  )";
        H::gotoxy(x,y+4); H::setcolor(7); cout << R"( | |  \ \   | |_____   | |___) |  | |   _____) )     | |     | |_____   | |  \ \  )";
        H::gotoxy(x,y+5); H::setcolor(7); cout << R"( |_|   |_|  |_______)   \_____/   |_|  (______/      |_|     |_______)  |_|   |_| )";
    };

    const auto wall = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(_|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_    )";
        H::gotoxy(x,y+1); H::setcolor(6); cout << R"( |       |       |       |       |       |       |       |       |     )";
        H::gotoxy(x,y+2); H::setcolor(9); cout << R"(    _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_)";
        H::gotoxy(x,y+3); H::setcolor(3); cout << R"(     |       |       |       |       |       |       |       |       | )";
        H::gotoxy(x,y+4); H::setcolor(6); cout << R"(_|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_    )";
        H::gotoxy(x,y+5); H::setcolor(7); cout << R"( |       |       |       |       |       |       |       |       |     )";
    };

    const auto singlewall = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(_|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_    )";
    };
    
    const auto HLine = [](int x,int y)
    {
      H::HLine(x, y, 100, 9, 177);
    };

    const auto VLine = [](int x, int y)
    {
      H::VLine(x, y, 17, 103, 177);
    };

    const auto TextBox = [](int x, int y)
    {
        // H::drawBoxDoubleLine(x,y,60,1,7);
        H::gotoxy(x+2, y);   H::setcolor(71); cout << "  ACCOUNT ID    ";
        H::gotoxy(x+2, y+2);   H::setcolor(71); cout << "  FIRST NAME    ";
        H::gotoxy(x+2, y+4);   H::setcolor(71); cout << "  LAST  NAME    ";
        H::gotoxy(x+2, y+6);   H::setcolor(71); cout << "  BIRTH DATE    ";
        H::gotoxy(x+2, y+8);   H::setcolor(71); cout << "  GENDER        ";
        H::gotoxy(x+46, y+8);  H::setcolor(71); cout << "    POSITION    ";
        H::gotoxy(x+2, y+10);   H::setcolor(71); cout << "  PHONE NUMBER  ";
        H::gotoxy(x+2, y+12);  H::setcolor(71); cout << "  EMAIL         ";
        
        H::gotoxy(x+24, y);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+2);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+4);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+6);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+8);  H::setcolor(252); for (int i = 0; i < 20; i++) cout << " ";
        H::gotoxy(x+64,y+8);  H::setcolor(252); for (int i = 0; i < 30; i++) cout << " ";
        H::gotoxy(x+24,y+10);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+12); H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
    };

    const auto Box = [TextBox, HLine, VLine](int x,int y)
    {
      TextBox(x+2,y+4);
      HLine(x,y+1); HLine(x,y+19); VLine(x+1,y+1); VLine(x+100,y+1);
    };

    const auto soccerboard = [](int x, int y)
    {
        H::gotoxy(x,y);    H::setcolor(9); cout << R"( _____       .-"'""""''-.                                                    )";
        H::gotoxy(x,y+1);  H::setcolor(7); cout << R"(      |__,-'"      _.,/  ;                                                   )";
        H::gotoxy(x,y+2);  H::setcolor(9); cout << R"(      }         ,-'   |  ;                                                   )"; 
        H::gotoxy(x,y+3);  H::setcolor(7); cout << R"(      |         ;    /" ,'                                                   )";
        H::gotoxy(x,y+4);  H::setcolor(9); cout << R"(      {          '..;,./_       o                                            )";
        H::gotoxy(x,y+5);  H::setcolor(7); cout << R"(      |-.,_            ;";     "|\                  ANT x DNN                )";
        H::gotoxy(x,y+6);  H::setcolor(9); cout << R"( """""     '-.,__.------'______/)_____________________________________       )";
        H::gotoxy(x,y+7);  H::setcolor(7); cout << R"(             /                '..' ()    /                           /       )";
        H::gotoxy(x,y+8);  H::setcolor(9); cout << R"(            /________   o               /    . \     o     _________/        )";
        H::gotoxy(x,y+9);  H::setcolor(7); cout << R"(         /|/o ____   / /|"             /    (|==;o        /  o___/|\         )";
        H::gotoxy(x,y+10); H::setcolor(9); cout << R"(        /_|/"'   /  /-, )\       _.--"/"-,   ' "     _.--/  ~|\ / |_\        )";
        H::gotoxy(x,y+11); H::setcolor(7); cout << R"( ______/_//)   /  /   :'..'     /    /    :  "/-    /   /  / (\/_/__/____/""|)";
        H::gotoxy(x,y+12); H::setcolor(9); cout << R"( """""/|"'..' /  /   /         (    /    /   /)    (   /  / '..|\""/"""""""" )";
        H::gotoxy(x,y+13); H::setcolor(7); cout << R"(     /_|     /  /.-'      o    `._ /_.-'           `. /  /     |_\/          )";
        H::gotoxy(x,y+14); H::setcolor(9); cout << R"(      /-----'  /         /|"     /         / .       /  `-----/              )";
        H::gotoxy(x,y+15); H::setcolor(7); cout << R"(     /--------'          /)     /       o;==|)    __`--------/               )";
        H::gotoxy(x,y+16); H::setcolor(9); cout << R"(    /                   '..'   /          " '    '..'       /                )";
        H::gotoxy(x,y+17); H::setcolor(7); cout << R"(   /__________________________/____________________________/                 )";
    };

    const auto basketball = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(            -|               )";
        H::gotoxy(x,y+1); H::setcolor(3); cout << R"(        -' |                 )";
        H::gotoxy(x,y+2); H::setcolor(7); cout << R"(      -'   | __().           )";
        H::gotoxy(x,y+3); H::setcolor(3); cout << R"( ==wkm=====|'\/   `.O__      )";
        H::gotoxy(x,y+4); H::setcolor(7); cout << R"(                     \ `,    )";
        H::gotoxy(x,y+5); H::setcolor(3); cout << R"(                    _-^.     )";
        H::gotoxy(x,y+6); H::setcolor(7); cout << R"(                    `.  `---,)";
        H::gotoxy(x,y+7); H::setcolor(3); cout << R"(                      :      )";
        H::gotoxy(x,y+8); H::setcolor(7); cout << R"(_____________________________)";
        H::gotoxy(x,y+9); H::setcolor(3); cout << R"(///\\\///\\\///\\\///\\\///\\)";
    };

    const auto volleyball = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(9); cout << R"(             o _  d|             )";
        H::gotoxy(x,y+1); H::setcolor(7); cout << R"(            _/) 'd$|             )";
        H::gotoxy(x,y+2); H::setcolor(9); cout << R"(            _/| d$p|             )";
        H::gotoxy(x,y+3); H::setcolor(7); cout << R"(              'd$p |  o          )";
        H::gotoxy(x,y+4); H::setcolor(9); cout << R"(     _o/`_____|$p__|_`|\________ )";
        H::gotoxy(x,y+5); H::setcolor(7); cout << R"(    / |       |p     / \       / )";
        H::gotoxy(x,y+6); H::setcolor(9); cout << R"(   / / \      |        o/`@   /  )";
        H::gotoxy(x,y+7); H::setcolor(7); cout << R"(  /           |      `-|     /   )";
        H::gotoxy(x,y+8); H::setcolor(9); cout << R"( /____________|_______/_\___/    )";
    };

    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
    };

    WindowFrame(x,y);
    wall(x,y-y); wall(x+73,y-y); wall(x+128,y-y); H::HLine(x-x,y-y+6,200,7,178);
    soccerboard(x,y+17); H::delay(100);
    basketball(x,y+4); H::delay(100);
    volleyball(x+40,y+6); H::delay(100);
    Register(x+96,y+4); H::delay(100);
    Box(x+88,y+13); H::delay(100);
    singlewall(x,y-y+49); singlewall(x+73,y-y+49); singlewall(x+128,y-y+49); H::HLine(x-x,y-y+48,200,7,178);
}

void DNN::Design::User::MainMenu::Home(int x, int y, const char* pos)
{    
    const auto text = [](int x, int y) -> void
    {
        H::gotoxy(x, y);   H::setcolor(7); cout << R"(  ____  _   _ _   _   ____  ____   ___  ____ _____ ____     ____ ____   ___  _   _ _   _ ____   )";
        H::gotoxy(x, y+1); H::setcolor(7); cout << R"( |  _ \| \ | | \ | | / ___||  _ \ / _ \|  _ \_   _/ ___|   / ___|  _ \ / _ \| | | | \ | |  _ \  )";
        H::gotoxy(x, y+2); H::setcolor(7); cout << R"( | | | |  \| |  \| | \___ \| |_) | | | | |_) || | \___ \  | |  _| |_) | | | | | | |  \| | | | | )";
        H::gotoxy(x, y+3); H::setcolor(7); cout << R"( | |_| | |\  | |\  |  ___) |  __/| |_| |  _ < | |  ___) | | |_| |  _ <| |_| | |_| | |\  | |_| | )";
        H::gotoxy(x, y+4); H::setcolor(7); cout << R"( |____/|_| \_|_| \_| |____/|_|    \___/|_| \_\|_| |____/   \____|_| \_\\___/ \___/|_| \_|____/  )";
        H::HLine(x, y+6, 97, 9, 219);
    };  
    
    const auto menuButton = [pos](int x, int y) -> void
        {

           if(pos == "STAFF")
           {
            H::drawBoxSingleLine(x, y, 30, 25, 6);
            
            H::gotoxy(x+1,y); 
           
            for(int i=0; i<28; i++)
            {
             if(i == 0) H::setcolor(247); 
           
             else if(i == 27) H::setcolor(247);
           
             else H::setcolor(71);
           
             cout << " ";
            } 
            H::gotoxy(x+13,y); H::setcolor(71); cout << "MENU";
            H::drawBoxSingleLineWithBG(x+2, y+2, 26, 1, 136);
            H::gotoxy(x+3,y+3);  H::setcolor(135); cout << "          STORE          ";
            H::drawBoxSingleLineWithBG(x+2, y+6, 26, 1, 136);
            H::gotoxy(x+3,y+7);  H::setcolor(135); cout << "         GROUND         ";
            H::drawBoxSingleLineWithBG(x+2, y+10, 26, 1, 136);
            H::gotoxy(x+3,y+11);  H::setcolor(135); cout << "    BOOKING / INVOICE    ";
            H::drawBoxSingleLineWithBG(x+2, y+14, 26, 1, 136);
            H::gotoxy(x+3,y+15);  H::setcolor(135); cout << "        ABOUT US        ";
            H::drawBoxSingleLineWithBG(x+2, y+18, 26, 1, 136);
            H::gotoxy(x+3,y+19);  H::setcolor(135); cout << "    ACCOUNT SETTINGS    ";
            H::drawBoxSingleLineWithBG(x+2, y+22, 11, 1, 136);
            H::gotoxy(x+3,y+23);  H::setcolor(135); cout << " LOGOUT ";
            H::drawBoxSingleLineWithBG(x+17, y+22, 11, 1, 136);
            H::gotoxy(x+19,y+23);  H::setcolor(135); cout << " EXIT ";
            
            H::gotoxy(x+13,y+26); H::setcolor(7); for(int i=0; i<3; i++) cout << char(254);
           }

           if(pos == "ADMIN")
           {
            H::drawBoxSingleLine(x, y, 30, 25, 6);

            H::gotoxy(x+1,y); 
           
            for(int i=0; i<28; i++)
            {
             if(i == 0) H::setcolor(247); 
           
             else if(i == 27) H::setcolor(247);
           
             else H::setcolor(71);
           
             cout << " ";
            }
            H::gotoxy(x+13,y); H::setcolor(71); cout << "MENU";
            H::drawBoxSingleLineWithBG(x+2, y+2, 26, 1, 136);
            H::gotoxy(x+3,y+3);  H::setcolor(135); cout << "          STAFF          ";
            H::drawBoxSingleLineWithBG(x+2, y+6, 26, 1, 136);
            H::gotoxy(x+3,y+7);  H::setcolor(135); cout << "          STORE          ";
            H::drawBoxSingleLineWithBG(x+2, y+10, 26, 1, 136);
            H::gotoxy(x+3,y+11);  H::setcolor(135); cout << "         GROUND         ";
            H::drawBoxSingleLineWithBG(x+2, y+14, 26, 1, 136);
            H::gotoxy(x+3,y+15);  H::setcolor(135); cout << "        ABOUT US        ";
            H::drawBoxSingleLineWithBG(x+2, y+18, 26, 1, 136);
            H::gotoxy(x+3,y+19);  H::setcolor(135); cout << "    ACCOUNT SETTINGS    ";
            H::drawBoxSingleLineWithBG(x+2, y+22, 11, 1, 136);
            H::gotoxy(x+3,y+23);  H::setcolor(135); cout << " LOGOUT ";
            H::drawBoxSingleLineWithBG(x+17, y+22, 11, 1, 136);
            H::gotoxy(x+19,y+23);  H::setcolor(135); cout << " EXIT ";
            
            H::gotoxy(x+13,y+26); H::setcolor(7); for(int i=0; i<3; i++) cout << char(254);
           }  
        };

    const auto frame = [](int x, int y) -> void
    {
      H::drawBoxSingleLine(x, y, 91, 36, 1);
    };

    const auto tree = [](int x, int y) -> void
    {
        H::gotoxy(x,y);    H::setcolor(2); cout << R"(         # #### ####         )";
        H::gotoxy(x,y+1);  H::setcolor(2); cout << R"(       ### \/#|### |/####    )";
        H::gotoxy(x,y+2);  H::setcolor(2); cout << R"(      ##\/#/ \||/##/_/##/_#  )";
        H::gotoxy(x,y+3);  H::setcolor(2); cout << R"(    ###  \/###|/ \/ # ###    )";
        H::gotoxy(x,y+4);  H::setcolor(2); cout << R"(  ##_\_#\_\## | #/###_/_#### )";
        H::gotoxy(x,y+5);  H::setcolor(2); cout << R"( ## #### # \ #| /  #### ##/##)";
        H::gotoxy(x,y+6);  H::setcolor(2); cout << R"(  __#_--###`  |{,###---###-~ )";
        H::gotoxy(x,y+7);  H::setcolor(8); cout << R"(            \ }{             )";
        H::gotoxy(x,y+8);  H::setcolor(8); cout << R"(             }}{             )";
        H::gotoxy(x,y+9);  H::setcolor(8); cout << R"(             }}{             )";
        H::gotoxy(x,y+10); H::setcolor(8); cout << R"(             {{}             )";
        H::gotoxy(x,y+11); H::setcolor(8); cout << R"(       , -=-~{ .-^- _        )";
        // H::gotoxy(x,y+12); H::setcolor(7); cout << R"(             `}              )";
        // H::gotoxy(x,y+13); H::setcolor(8); cout << R"(              {              )";
    };

    const auto CambodiaFlag = [](int x,int y)
    {
        H::setFont(14,600,L"Consolas",true);
        H::setcolor(9); H::gotoxy(x,y);     cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(9); H::gotoxy(x,y+1);   cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(9); H::gotoxy(x,y+2);   cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(9); H::gotoxy(x,y+3);   cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(9); H::gotoxy(x,y+4);   cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(4); H::gotoxy(x,y+5);   cout << R"(###########################################################################################)";
        H::setcolor(4); H::gotoxy(x,y+6);   cout << R"(#############################################)"; H::setcolor(7); cout << R"(**)"; H::setcolor(4); cout << R"(############################################)";
        H::setcolor(4); H::gotoxy(x,y+7);   cout << R"(############################################)"; H::setcolor(7); cout << R"(*==*)"; H::setcolor(4); cout << R"(###########################################)";
        H::setcolor(4); H::gotoxy(x,y+8);   cout << R"(############################################)"; H::setcolor(7); cout << R"(===-)"; H::setcolor(4); cout << R"(###########################################)";
        H::setcolor(4); H::gotoxy(x,y+9);   cout << R"(#################################)"; H::setcolor(7); cout << R"(=-)"; H::setcolor(4); cout << R"(########)"; H::setcolor(7); cout << R"(+=::=+)"; H::setcolor(4); cout << R"(########)"; H::setcolor(7); cout << R"(-=*)"; H::setcolor(4); cout << R"(###############################)";
        H::setcolor(4); H::gotoxy(x,y+10);  cout << R"(################################)"; H::setcolor(7); cout << R"(*==+)"; H::setcolor(4); cout << R"(#######)"; H::setcolor(7); cout << R"(+-::-+)"; H::setcolor(4); cout << R"(#######)"; H::setcolor(7); cout << R"(+==*)"; H::setcolor(4); cout << R"(###############################)";
        H::setcolor(4); H::gotoxy(x,y+11);  cout << R"(###############################)"; H::setcolor(7); cout << R"(*=---+)"; H::setcolor(4); cout << R"(#####)"; H::setcolor(7); cout << R"(+--::--+)";H::setcolor(4); cout << R"(#####)"; H::setcolor(7); cout << R"(+---=*)"; H::setcolor(4); cout << R"(##############################)";
        H::setcolor(4); H::gotoxy(x,y+12);  cout << R"(#############################)"; H::setcolor(7); cout << R"(*=:::-:-=++++---::---++++=-:-:::=*)"; H::setcolor(4); cout << R"(############################)";
        H::setcolor(4); H::gotoxy(x,y+13);  cout << R"(#############################)"; H::setcolor(7); cout << R"(*===::-+=-::===-..-===::-=+-::===*)"; H::setcolor(4); cout << R"(############################)";
        H::setcolor(4); H::gotoxy(x,y+14);  cout << R"(##############################)"; H::setcolor(7); cout << R"(*:-::-:-:-:-::::::::-:-:-:-::-:*)"; H::setcolor(4); cout << R"(#############################)";
        H::setcolor(4); H::gotoxy(x,y+15);  cout << R"(##############################)"; H::setcolor(7); cout << R"(*:=::-=---:-:::::::--:-----::=:*)"; H::setcolor(4); cout << R"(#############################)";
        H::setcolor(4); H::gotoxy(x,y+16);  cout << R"(#############################)"; H::setcolor(7); cout << R"(+-.-::-::....:::--:::....::-:--.-=)"; H::setcolor(4); cout << R"(############################)";
        H::setcolor(4); H::gotoxy(x,y+17);  cout << R"(############################)"; H::setcolor(7); cout << R"(+:::--:=::::::::----::::::::----:::+)"; H::setcolor(4); cout << R"(###########################)";
        H::setcolor(4); H::gotoxy(x,y+18);  cout << R"(###########################)"; H::setcolor(7); cout << R"(+::::---=::::::::----::::::::=---::::+)"; H::setcolor(4); cout << R"(##########################)";
        H::setcolor(4); H::gotoxy(x,y+19);  cout << R"(#########################)"; H::setcolor(7); cout << R"(*=.....::::........:--:........::-:.....=*)"; H::setcolor(4); cout << R"(########################)";
        H::setcolor(4); H::gotoxy(x,y+20);  cout << R"(#########################)"; H::setcolor(7); cout << R"(=::::::-===::::::::-==-::::::::===-::::::=)"; H::setcolor(4); cout << R"(########################)";
        H::setcolor(4); H::gotoxy(x,y+21);  cout << R"(###########################################################################################)";
        H::setcolor(9); H::gotoxy(x,y+22);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(9); H::gotoxy(x,y+23);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(9); H::gotoxy(x,y+24);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(9); H::gotoxy(x,y+25);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
        H::setcolor(9); H::gotoxy(x,y+26);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
    };

    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
    };
    
    WindowFrame(x,y);
    text(x+4,y+2); menuButton(x+33,y+11); 
    frame(x+102,y); tree(x,y+32); tree(x+65,y+32);

    CambodiaFlag(x+102,y+6);

    H::gotoxy(x+94,y+40); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
    cout << " PRESS ARROW KEYS"; H::setcolor(6); cout << " LEFT"; H::setcolor(7); cout << ","; H::setcolor(6); cout << " RIGHT"; 
    H::setcolor(7); cout << ",";  H::setcolor(6); cout << " UP"; H::setcolor(7); cout << " AND "; H::setcolor(6); cout << "DOWN "; 
    H::setcolor(7); cout << "TO NAVIGATE. "; cout << "PRESS"; H::setcolor(6); cout << " ENTER KEY"; H::setcolor(7); cout << " TO SELECT THE OPTIONS.";
}


void DNN::Design::User::Staff::Home(int x, int y)
{
    const auto Staff = [](int x, int y) -> void
    {
        H::gotoxy(x,y);   H::setcolor(9); cout << R"(   _____ _______       ______ ______ )";
        H::gotoxy(x,y+1); H::setcolor(3); cout << R"(  / ____|__   __|/\   |  ____|  ____|)";
        H::gotoxy(x,y+2); H::setcolor(9); cout << R"( | (___    | |  /  \  | |__  | |__   )";
        H::gotoxy(x,y+3); H::setcolor(3); cout << R"(  \___ \   | | / /\ \ |  __| |  __|  )";
        H::gotoxy(x,y+4); H::setcolor(9); cout << R"(  ____) |  | |/ ____ \| |    | |     )";
        H::gotoxy(x,y+5); H::setcolor(3); cout << R"( |_____/   |_/_/    \_\_|    |_|     )";  
        H::HLine(x, y+7, 110, 7, 178);                                                                                                                                                                                                    
    };

    const auto management = [](int x, int y) -> void
    {
        H::gotoxy(x,y);   H::setcolor(9); cout << R"(  __  __          _   _          _____ ______ __  __ ______ _   _ _______  )";
        H::gotoxy(x,y+1); H::setcolor(3); cout << R"( |  \/  |   /\   | \ | |   /\   / ____|  ____|  \/  |  ____| \ | |__   __| )";
        H::gotoxy(x,y+2); H::setcolor(9); cout << R"( | \  / |  /  \  |  \| |  /  \ | |  __| |__  | \  / | |__  |  \| |  | |    )";
        H::gotoxy(x,y+3); H::setcolor(3); cout << R"( | |\/| | / /\ \ | . ` | / /\ \| | |_ |  __| | |\/| |  __| | . ` |  | |    )";
        H::gotoxy(x,y+4); H::setcolor(9); cout << R"( | |  | |/ ____ \| |\  |/ ____ \ |__| | |____| |  | | |____| |\  |  | |    )";
        H::gotoxy(x,y+5); H::setcolor(3); cout << R"( |_|  |_/_/    \_\_| \_/_/    \_\_____|______|_|  |_|______|_| \_|  |_|    )";                                                             
    };


    const auto star = [](int x, int y) -> void
    {
        H::gotoxy(x,y); H::setcolor(7); cout << R"(  *    .  *       .             *)";
        H::gotoxy(x,y+1); H::setcolor(7); cout << R"(                         *)";
        H::gotoxy(x,y+2); H::setcolor(7); cout << R"( *   .        *       .       .       *)";
        H::gotoxy(x,y+3); H::setcolor(7); cout << R"(   .     *)";
        H::gotoxy(x,y+4); H::setcolor(7); cout << R"(           .     .  *        *)";
        H::gotoxy(x,y+5); H::setcolor(7); cout << R"(       .                .        .)";
        H::gotoxy(x,y+6); H::setcolor(7); cout << R"(.  *           *                     *)";
        H::gotoxy(x,y+7); H::setcolor(7); cout << R"(                             .)";
        H::gotoxy(x,y+8); H::setcolor(7); cout << R"(         *          .   *)";
    };
    
    const auto person = [](int x, int y) -> void
    {
    
     H::gotoxy(x,y);    H::setcolor(7); cout << R"(                        _______________________)";
     H::gotoxy(x,y+1);  H::setcolor(7); cout << R"(                      //   __..--~~~~--..__    \\)";
     H::gotoxy(x,y+2);  H::setcolor(9); cout << R"(                     ||___/  |  |   |  |   \ __/ |)";
     H::gotoxy(x,y+3);  H::setcolor(9); cout << R"(                     ||  /   ___________    \    |)";
     H::gotoxy(x,y+4);  H::setcolor(7); cout << R"(                     ||_/   /.......... \    |   |)";
     H::gotoxy(x,y+5);  H::setcolor(7); cout << R"(                     | |   /..........   \   |   |)";
     H::gotoxy(x,y+6);  H::setcolor(9); cout << R"(_____________________| |  /...........    \  |   |____________________)";
     H::gotoxy(x,y+7);  H::setcolor(9); cout << R"( ;   . . .   .       |_| |...........      | |   | .''."...  ... .  . )";
     H::gotoxy(x,y+8);  H::setcolor(7); cout << R"(___   ..~.         _.' | |..........       | |   |         . ~        )";
     H::gotoxy(x,y+9);  H::setcolor(7); cout << R"( .      '     .   / \_.| |..........       | |   |\ ~.   ._..---._    )";
     H::gotoxy(x,y+10); H::setcolor(9); cout << R"(                 |. /| \ \............     / /   |/ .    /\      /\   )";
     H::gotoxy(x,y+11); H::setcolor(9); cout << R"(   '""" ... ~~~  | \|| _\ \............   / /-.__|      // ~-._./ -\  )";
     H::gotoxy(x,y+12); H::setcolor(7); cout << R"( ..~             |  |_.~\\ \_____________/ /// '.|     /__       __.\ )";
     H::gotoxy(x,y+13); H::setcolor(7); cout << R"( ___   ..~.      |_.~   .\\_______________//   _ ~-.  ~~~~..  ~~~~~.  )";
     H::gotoxy(x,y+14); H::setcolor(9); cout << R"(                .~ -.     \__.---.________/   ______\.                )";
     H::gotoxy(x,y+15); H::setcolor(9); cout << R"(.''."...  ... ./\        _|      |---|  = |__ \__\===\   '""" ... ~~~ )";
     H::gotoxy(x,y+16); H::setcolor(7); cout << R"(              /  '.  .  |_|=     |---|    | _| \======\ ___   ..~.    )";
     H::gotoxy(x,y+17); H::setcolor(7); cout << R"(  ..~        / .   \      |=     |___|    ||       __. \              )";
     H::gotoxy(x,y+18); H::setcolor(9); cout << R"(            /           _ |_______________|   _.        \             )";
     H::gotoxy(x,y+19); H::setcolor(9); cout << R"(.''."...  ./                /   \___    ~~  \            \  '" ..   ~~)";
     H::gotoxy(x,y+20); H::setcolor(7); cout << R"(          /          '' /   \      /         \           /\           )";
     H::gotoxy(x,y+21); H::setcolor(7); cout << R"(___   .  /     -- .   /'   __\____/       ____\___.'   --  \ ___   ..~)";
     H::gotoxy(x,y+22); H::setcolor(9); cout << R"(        /            /    / \\ --  _____//          ~ - .   \)";
     H::gotoxy(x,y+23); H::setcolor(9); cout << R"( ..--  /_..-       ./.   /  _/   _|___  \\       .     -   _/))";
     H::gotoxy(x,y+24); H::setcolor(7); cout << R"(      /   ___     ./|__  / _/   (_____ / \\  .          \ ~ /   .)";
     H::gotoxy(x,y+25); H::setcolor(7); cout << R"(  .  /___////_   /  |   / _/    (_____ \  \\       _./ ..__/)";
     H::gotoxy(x,y+26); H::setcolor(9); cout << R"(    /___/__/_ \ /  _|  /__/ _-- (_____  \:_\\_____________/      ._)";
     H::gotoxy(x,y+27); H::setcolor(9); cout << R"(_  /         \ /_.' | /  /       (_________/ ~~-|)";
     H::gotoxy(x,y+28); H::setcolor(7); cout << R"(  /           //   _|/  /-              .    __ |..~. _____ -.. '  ")";
     H::gotoxy(x,y+29); H::setcolor(7); cout << R"(..\==========/'   \_/ _/  __      ___..     /  \|)";
     H::gotoxy(x,y+30); H::setcolor(9); cout << R"(    / _____  \'.______/___....------......__\__/|)";
     H::gotoxy(x,y+31); H::setcolor(9); cout << R"('  |          \     |\__________________|__|___/|  ~~~~~..   - ~  ')";
     H::gotoxy(x,y+32); H::setcolor(7); cout << R"( ~ |        _  \   /~      \     \ --  /         \)";
     H::gotoxy(x,y+33); H::setcolor(7); cout << R"(   | | | | | \_|  |   \     \ ~      //           |)";
     H::gotoxy(x,y+34); H::setcolor(9); cout << R"(_. |_| | | | .    |-----..   \       /  /-      __|..~. _____ -.. '  ")";
     H::gotoxy(x,y+35); H::setcolor(9); cout << R"(     |_|_|_|   _. |       \_  \\ _ ./          ___|)";
     H::gotoxy(x,y+36); H::setcolor(7); cout << R"( ~~~  ..   - ~  ' |         \__\___/__...------   |  ~~~~~..   - ~  ')";
     H::drawBoxSingleLine(x, y-2, 69, 37, 9);
    };

    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
    };

    WindowFrame(x,y);
    star(x-x,y-y); star(x-x+35,y-y); star(x-x+70,y-y); star(x-x+105,y-y); star(x-x+140,y-y); star(x-x+160,y-y);
    Staff(x+4,y+2); management(x+44, y+2);
    person(x-x+120,y-y+12);

    // MESSAGE 
    H::gotoxy(x+7,y+46); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
    cout << " PRESS ARROW KEYS"; H::setcolor(6); cout << " LEFT"; H::setcolor(7); cout << ","; H::setcolor(6); cout << " RIGHT"; 
    H::setcolor(7); cout << ",";  H::setcolor(6); cout << " UP"; H::setcolor(7); cout << " AND"; H::setcolor(6); cout << " DOWN"; 
    H::setcolor(7); cout << " TO NAVIGATE"; H::setcolor(7); cout << " AND PRESS";  H::setcolor(6); cout << " ENTER KEY";
    H::setcolor(7); cout << " TO SELECT THE OPTIONS.";
}

void DNN::Design::User::Staff::Insert(int x, int y)
{
    const auto Staff = [](int x, int y)
    { 
        H::gotoxy(x,y);   H::setcolor(9); cout << R"(  _ _______  ______ _______ ______ _______     ______ _______ _______ _______ _______  )";
        H::gotoxy(x,y+1); H::setcolor(3); cout << R"( | (_______)/ _____|_______|_____ (_______)   / _____|_______|_______|_______|_______) )";
        H::gotoxy(x,y+2); H::setcolor(9); cout << R"( | |_     _( (____  _____   _____) )  _      ( (____     _    _______ _____   _____    )";
        H::gotoxy(x,y+3); H::setcolor(3); cout << R"( | | |   | |\____ \|  ___) |  __  /  | |      \____ \   | |  |  ___  |  ___) |  ___)   )";
        H::gotoxy(x,y+4); H::setcolor(9); cout << R"( | | |   | |_____) ) |_____| |  \ \  | |      _____) )  | |  | |   | | |     | |       )";
        H::gotoxy(x,y+5); H::setcolor(3); cout << R"( |_|_|   |_(______/|_______)_|   |_| |_|     (______/   |_|  |_|   |_|_|     |_|       )";
                                                                                     
    };
    
    const auto wall = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(_|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_    )";
        H::gotoxy(x,y+1); H::setcolor(6); cout << R"( |       |       |       |       |       |       |       |       |     )";
        H::gotoxy(x,y+2); H::setcolor(9); cout << R"(    _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_)";
        H::gotoxy(x,y+3); H::setcolor(3); cout << R"(     |       |       |       |       |       |       |       |       | )";
        H::gotoxy(x,y+4); H::setcolor(6); cout << R"(_|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_    )";
        H::gotoxy(x,y+5); H::setcolor(7); cout << R"( |       |       |       |       |       |       |       |       |     )";
    };

    const auto singlewall = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(_|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_     _|_    )";
    };
    
    const auto HLine = [](int x,int y)
    {
      H::HLine(x, y, 100, 9, 177);
    };

    const auto VLine = [](int x, int y)
    {
      H::VLine(x, y, 17, 103, 177);
    };

    const auto TextBox = [](int x, int y)
    {
        // H::drawBoxDoubleLine(x,y,60,1,7);
        H::gotoxy(x+2, y);   H::setcolor(71); cout << "  ACCOUNT ID    ";
        H::gotoxy(x+2, y+2);   H::setcolor(71); cout << "  FIRST NAME    ";
        H::gotoxy(x+2, y+4);   H::setcolor(71); cout << "  LAST  NAME    ";
        H::gotoxy(x+2, y+6);   H::setcolor(71); cout << "  BIRTH DATE    ";
        H::gotoxy(x+2, y+8);   H::setcolor(71); cout << "  GENDER        ";
        H::gotoxy(x+46, y+8);  H::setcolor(71); cout << "    POSITION    ";
        H::gotoxy(x+2, y+10);   H::setcolor(71); cout << "  PHONE NUMBER  ";
        H::gotoxy(x+2, y+12);  H::setcolor(71); cout << "  EMAIL         ";
        
        H::gotoxy(x+24, y);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+2);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+4);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+6);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+8);  H::setcolor(252); for (int i = 0; i < 20; i++) cout << " ";
        H::gotoxy(x+64,y+8);  H::setcolor(252); for (int i = 0; i < 30; i++) cout << " ";
        H::gotoxy(x+24,y+10);  H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
        H::gotoxy(x+24,y+12); H::setcolor(252); for (int i = 0; i < 70; i++) cout << " ";
    };

    const auto Box = [TextBox, HLine, VLine](int x,int y)
    {
      TextBox(x+2,y+4);
      HLine(x,y+1); HLine(x,y+19); VLine(x+1,y+1); VLine(x+100,y+1);
    };

    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
    };

    const auto soccerboard = [](int x, int y)
    {
        H::gotoxy(x,y);    H::setcolor(9); cout << R"( _____       .-"'""""''-.                                                    )";
        H::gotoxy(x,y+1);  H::setcolor(7); cout << R"(      |__,-'"      _.,/  ;                                                   )";
        H::gotoxy(x,y+2);  H::setcolor(9); cout << R"(      }         ,-'   |  ;                                                   )"; 
        H::gotoxy(x,y+3);  H::setcolor(7); cout << R"(      |         ;    /" ,'                                                   )";
        H::gotoxy(x,y+4);  H::setcolor(9); cout << R"(      {          '..;,./_       o                                            )";
        H::gotoxy(x,y+5);  H::setcolor(7); cout << R"(      |-.,_            ;";     "|\                  ANT x DNN                )";
        H::gotoxy(x,y+6);  H::setcolor(9); cout << R"( """""     '-.,__.------'______/)_____________________________________       )";
        H::gotoxy(x,y+7);  H::setcolor(7); cout << R"(             /                '..' ()    /                           /       )";
        H::gotoxy(x,y+8);  H::setcolor(9); cout << R"(            /________   o               /    . \     o     _________/        )";
        H::gotoxy(x,y+9);  H::setcolor(7); cout << R"(         /|/o ____   / /|"             /    (|==;o        /  o___/|\         )";
        H::gotoxy(x,y+10); H::setcolor(9); cout << R"(        /_|/"'   /  /-, )\       _.--"/"-,   ' "     _.--/  ~|\ / |_\        )";
        H::gotoxy(x,y+11); H::setcolor(7); cout << R"( ______/_//)   /  /   :'..'     /    /    :  "/-    /   /  / (\/_/__/____/""|)";
        H::gotoxy(x,y+12); H::setcolor(9); cout << R"( """""/|"'..' /  /   /         (    /    /   /)    (   /  / '..|\""/"""""""" )";
        H::gotoxy(x,y+13); H::setcolor(7); cout << R"(     /_|     /  /.-'      o    `._ /_.-'           `. /  /     |_\/          )";
        H::gotoxy(x,y+14); H::setcolor(9); cout << R"(      /-----'  /         /|"     /         / .       /  `-----/              )";
        H::gotoxy(x,y+15); H::setcolor(7); cout << R"(     /--------'          /)     /       o;==|)    __`--------/               )";
        H::gotoxy(x,y+16); H::setcolor(9); cout << R"(    /                   '..'   /          " '    '..'       /                )";
        H::gotoxy(x,y+17); H::setcolor(7); cout << R"(   /__________________________/____________________________/                 )";
    };

    const auto basketball = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(            -|               )";
        H::gotoxy(x,y+1); H::setcolor(3); cout << R"(        -' |                 )";
        H::gotoxy(x,y+2); H::setcolor(7); cout << R"(      -'   | __().           )";
        H::gotoxy(x,y+3); H::setcolor(3); cout << R"( ==wkm=====|'\/   `.O__      )";
        H::gotoxy(x,y+4); H::setcolor(7); cout << R"(                     \ `,    )";
        H::gotoxy(x,y+5); H::setcolor(3); cout << R"(                    _-^.     )";
        H::gotoxy(x,y+6); H::setcolor(7); cout << R"(                    `.  `---,)";
        H::gotoxy(x,y+7); H::setcolor(3); cout << R"(                      :      )";
        H::gotoxy(x,y+8); H::setcolor(7); cout << R"(_____________________________)";
        H::gotoxy(x,y+9); H::setcolor(3); cout << R"(///\\\///\\\///\\\///\\\///\\)";
    };

    const auto volleyball = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(9); cout << R"(             o _  d|             )";
        H::gotoxy(x,y+1); H::setcolor(7); cout << R"(            _/) 'd$|             )";
        H::gotoxy(x,y+2); H::setcolor(9); cout << R"(            _/| d$p|             )";
        H::gotoxy(x,y+3); H::setcolor(7); cout << R"(              'd$p |  o          )";
        H::gotoxy(x,y+4); H::setcolor(9); cout << R"(     _o/`_____|$p__|_`|\________ )";
        H::gotoxy(x,y+5); H::setcolor(7); cout << R"(    / |       |p     / \       / )";
        H::gotoxy(x,y+6); H::setcolor(9); cout << R"(   / / \      |        o/`@   /  )";
        H::gotoxy(x,y+7); H::setcolor(7); cout << R"(  /           |      `-|     /   )";
        H::gotoxy(x,y+8); H::setcolor(9); cout << R"( /____________|_______/_\___/    )";
    };

    WindowFrame(x,y);
    wall(x,y-y); wall(x+73,y-y); wall(x+128,y-y); H::HLine(x-x,y-y+6,200,7,178);
    soccerboard(x,y+17); H::delay(100);
    basketball(x,y+4); H::delay(100);
    volleyball(x+40,y+6); H::delay(100);
    Staff(x+96,y+4); H::delay(100);
    Box(x+88,y+13); H::delay(100);
    singlewall(x,y-y+49); singlewall(x+73,y-y+49); singlewall(x+128,y-y+49); H::HLine(x-x,y-y+48,200,7,178);
}

void DNN::Design::User::Staff::Display(int x, int y)
{
  H::setcursor(false,0);
  
  const auto Staff = [](int x, int y)
  {
    H::gotoxy(x,y);   H::setcolor(7); cout << R"(   _____ _______       ______ ______   _____  ______ _____ ____  _____  _____  )";
    H::gotoxy(x,y+1); H::setcolor(5); cout << R"(  / ____|__   __|/\   |  ____|  ____| |  __ \|  ____/ ____/ __ \|  __ \|  __ \ )";
    H::gotoxy(x,y+2); H::setcolor(7); cout << R"( | (___    | |  /  \  | |__  | |__    | |__) | |__ | |   | |  | | |__) | |  | |)";
    H::gotoxy(x,y+3); H::setcolor(5); cout << R"(  \___ \   | | / /\ \ |  __| |  __|   |  _  /|  __|| |   | |  | |  _  /| |  | |)";
    H::gotoxy(x,y+4); H::setcolor(7); cout << R"(  ____) |  | |/ ____ \| |    | |      | | \ \| |___| |___| |__| | | \ \| |__| |)";
    H::gotoxy(x,y+5); H::setcolor(5); cout << R"( |_____/   |_/_/    \_\_|    |_|      |_|  \_\______\_____\____/|_|  \_\_____/ )";
  };

  const auto WindowFrame = [](int x, int y)
  {
    H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
  };

  // Header Conponents
  H::HLine(x,y+4,190,5,219); H::HLine(x,y+5,190,5,219); H::delay(5);

  for(int i = 0; i <= 20; i+=5)
  {
    H::VLine(x+15+i,y+5,1,5,219); H::delay(100);
  }

   Staff(x+60,y-y+2); WindowFrame(x,y);
  // Footer Conponents
  H::HLine(x,y+40,190,5,219); H::HLine(x,y+41,190,5,219);

  for(int i = 0; i <= 20; i+=5)
  {
    H::VLine(x+160+i,y+38,1,5,219); H::delay(100);
  }
//   // Display Panel
  
   H::drawBoxDoubleLine(x+1,y+7,188,30,7);

//   H::gotoxy(x+20,y+5);

}

void DNN::Design::User::Staff::Search(int x, int y)
{
  H::setcursor(false,0);
  // Header Conponents

  const auto Search = [](int x, int y)
  {
    H::gotoxy(x,y);   H::setcolor(7); cout << R"(   _____ _______       ______ ______    _____ ______          _____ _    _ _____ _   _  _____   _____  ______ _____ ____  _____  _____  )";
    H::gotoxy(x,y+1); H::setcolor(5); cout << R"(  / ____|__   __|/\   |  ____|  ____|  / ____|  ____|   /\   / ____| |  | |_   _| \ | |/ ____| |  __ \|  ____/ ____/ __ \|  __ \|  __ \ )";
    H::gotoxy(x,y+2); H::setcolor(3); cout << R"( | (___    | |  /  \  | |__  | |__    | (___ | |__     /  \ | |    | |__| | | | |  \| | |  __  | |__) | |__ | |   | |  | | |__) | |  | |)";
    H::gotoxy(x,y+3); H::setcolor(7); cout << R"(  \___ \   | | / /\ \ |  __| |  __|    \___ \|  __|   / /\ \| |    |  __  | | | | . ` | | |_ | |  _  /|  __|| |   | |  | |  _  /| |  | |)";
    H::gotoxy(x,y+4); H::setcolor(2); cout << R"(  ____) |  | |/ ____ \| |    | |       ____) | |____ / ____ \ |____| |  | |_| |_| |\  | |__| | | | \ \| |___| |___| |__| | | \ \| |__| |)";
    H::gotoxy(x,y+5); H::setcolor(7); cout << R"( |_____/   |_/_/    \_\_|    |_|      |_____/|______/_/    \_\_____|_|  |_|_____|_| \_|\_____| |_|  \_\______\_____\____/|_|  \_\_____/ )";
  };
//   H::HLine(x,y+4,110,5,219); H::HLine(x,y+5,110,5,219); H::delay(5);

  H::drawBoxDoubleLine(x+110,y+3,79,2,5);
  H::gotoxy(x+112,y+4); H::setcolor(7); cout << "ENTER INVOICE ID TO SEARCH   : ";
  H::gotoxy(x+112,y+5); H::setcolor(6); cout << "[TIPS]"; H::setcolor(7); cout << " INVOICE ID MUST ENTER THE POSTIVE NUMBER ONLY!";

  const auto WindowFrame = [](int x, int y)
  {
    H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
  };

  // Header Conponents
  H::HLine(x,y+4,109,5,219); H::HLine(x,y+5,109,5,219); H::delay(5);

  for(int i = 0; i <= 20; i+=5)
  {
    H::VLine(x+15+i,y+5,1,5,219); H::delay(100);
  }

   Search(x+20,y-y+2); WindowFrame(x,y);
  // Footer Conponents
  H::HLine(x,y+40,190,5,219); H::HLine(x,y+41,190,5,219);

  for(int i = 0; i <= 20; i+=5)
  {
    H::VLine(x+160+i,y+38,1,5,219); H::delay(100);
  }
//   // Display Panel
  
   H::drawBoxDoubleLine(x+1,y+7,188,30,7);

}

void DNN::Design::User::Staff::AccountSetting(int x, int y)
{
    const auto Drawer = [](int x, int y)
    {
        H::drawBoxSingleLine(x,y,50,38,7);
        H::drawBoxSingleLineWithBG(x-2,y+2,54,1,247);

        H::gotoxy(x+1,y+3); H::setcolor(249); cout << "   ACCOUNT SETTING   ";
    };

    const auto panel = [](int x, int y)
    {
        H::drawBoxSingleLine(x,y,128,38,6);

    };

    Drawer(x,y+3); panel(x+60,y+3);
}

void DNN::Design::User::Staff::Approval(int x, int y)
{
    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,5);
    };

    const auto Drawer = [](int x, int y)
    {
        H::drawBoxSingleLine(x,y,50,38,6);
        H::drawBoxSingleLineWithBG(x-2,y+2,54,1,247);

        H::drawBoxSingleLine(x,y+27,50,1,9);
        H::drawBoxSingleLine(x+2,y+31,46,1,4);
        H::drawBoxSingleLine(x+4,y+33,42,1,9);
        H::drawBoxSingleLine(x+6,y+35,38,1,5);
        
        H::gotoxy(x+2,y+31); H::setcolor(7); 
        
        for(int i = 0; i < 23; i++) 
        {
            cout << "<";
        }

        for(int i = 0; i < 23; i++) 
        {
            cout << ">";
        }

        H::gotoxy(x+4,y+33); H::setcolor(7); 
        
        for(int i = 0; i < 21; i++) 
        {
            cout << "<";
        }

        for(int i = 0; i < 21; i++) 
        {
            cout << ">";
        }

        H::gotoxy(x+6,y+35); H::setcolor(7); 
        
        for(int i = 0; i < 19; i++) 
        {
            cout << "<";
        }

        for(int i = 0; i < 19; i++) 
        {
            cout << ">";
        }
        H::gotoxy(x+1,y+28); H::setcolor(7); cout << "["; H::setcolor(6); cout << "TIPS"; H::setcolor(7); cout << "]";
        H::setcolor(7); cout << " PRESS ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << " AND "; 
        H::setcolor(6); cout << "DOWN"; H::setcolor(7); cout << " TO NAVIGATE";
        // H::drawBoxSingleLineWithBG(x,y+31,50,1,72);
        // H::drawBoxSingleLineWithBG(x,y+35,50,1,247);

        H::gotoxy(x+1,y+3); H::setcolor(249); cout << "   THE APPROVAL   ";
    };

    const auto panel = [](int x, int y)
    {
        H::drawBoxSingleLine(x,y,128,3,6);
        H::drawBoxSingleLine(x+2,y+1,124,1,3);
        H::drawBoxSingleLine(x,y+6,128,33,3);

    };

    WindowFrame(x,y);
    Drawer(x,y); panel(x+60,y);
}

void DNN::Design::User::Staff::Update(int x, int y)
{
    const auto Drawer = [](int x, int y)
    {
        H::drawBoxSingleLine(x,y,50,5,7);
        H::drawBoxSingleLineWithBG(x-2,y+2,54,1,247);

        H::gotoxy(x+1,y+3); H::setcolor(249); cout << "   <<<<<<<<<<<<<<< THE UPDATE >>>>>>>>>>>>>>   ";
    };
    
    Drawer(x,y-2); //Him(x+80,y-y);
}


void DNN::Design::User::Staff::sort(int x, int y)
{
    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,7);
    };

    const auto Drawer = [](int x, int y)
    {
        H::drawBoxSingleLine(x,y,50,5,7);
        H::drawBoxSingleLineWithBG(x-2,y+2,54,1,247);

        H::gotoxy(x+1,y+3); H::setcolor(249); cout << "   <<<<<<<<<<<<<<< THE SORT >>>>>>>>>>>>>>   ";
    };

    const auto Under  = [](int x, int y)
    {
        H::drawBoxSingleLine(x,y,50,1,6);
    };  

    const auto SORT = [](int x, int y)
    {
        H::gotoxy(x,y);   H::setcolor(7); cout << R"(   _____  ____  _____ _______ _____ _   _  _____      _____       _______       )";
        H::gotoxy(x,y+1); H::setcolor(6); cout << R"(  / ____|/ __ \|  __ \__   __|_   _| \ | |/ ____|    |  __ \   /\|__   __|/\    )";
        H::gotoxy(x,y+2); H::setcolor(7); cout << R"( | (___ | |  | | |__) | | |    | | |  \| | |  __     | |  | | /  \  | |  /  \   )";
        H::gotoxy(x,y+3); H::setcolor(6); cout << R"(  \___ \| |  | |  _  /  | |    | | | . ` | | |_ |    | |  | |/ /\ \ | | / /\ \  )";
        H::gotoxy(x,y+4); H::setcolor(7); cout << R"(  ____) | |__| | | \ \  | |   _| |_| |\  | |__| |    | |__| / ____ \| |/ ____ \ )";
        H::gotoxy(x,y+5); H::setcolor(6); cout << R"( |_____/ \____/|_|  \_\ |_|  |_____|_| \_|\_____|    |_____/_/    \_\_/_/    \_\)";
                                                                    
    };
    
    Under(x+2,y+3);
    Drawer(x,y-2);

    H::gotoxy(x-x+40,y-y+47); H::setcolor(7); cout << "["; H::setcolor(6); cout << " TIPS "; H::setcolor(7); cout << "]";
    H::setcolor(7); cout << " PRESS ARROW KEYS "; H::setcolor(6); cout << "UP"; H::setcolor(7); cout << " , "; 
    H::setcolor(6); cout << "DOWN"; H::setcolor(7); cout << " , "; H::setcolor(6); cout << "LEFT"; H::setcolor(7); cout << " AND ";
    H::setcolor(6); cout << "RIGHT"; H::setcolor(7); cout << " TO NAVIGATE THROUGH THE MENU OR PRESS "; H::setcolor(6); cout << "ESC"; H::setcolor(7); cout << " TO GO BACK TO THE MAIN MENU.";

    WindowFrame(x,y);
}

void DNN::Design::User::Staff::Delete(int x, int y)
{
    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxDoubleLine(x-x+1,y-y,198,48,8);
    };

    WindowFrame(x,y);

	// header
    H::drawBoxDoubleLineWithBG(x,y+1,180,1,183); H::delay(100);
    
    // footer
    H::drawBoxDoubleLineWithBG(x,y+44,180,1,183); H::delay(100);

    // left
    H::drawBoxSingleLineWithBG(x,y+5,4,36,39);
    H::drawBoxSingleLineWithBG(x+7,y+5,4,36,71);
    
    // right
    H::drawBoxSingleLineWithBG(x+176,y+5,4,36,71);
    H::drawBoxSingleLineWithBG(x+169,y+5,4,36,39);
    
    // inside On left
    H::drawBoxSingleLineWithBG(x+15,y+5,30+6,1,23);
    H::drawBoxSingleLineWithBG(x+15,y+9,20+6,1,87);
    H::HLine(x+16,y+6,28+6,201,176);
    H::HLine(x+16,y+10,18+6,201,176);
    
    // inside Bottom left
    H::drawBoxSingleLineWithBG(x+15,y+40,53+6,1,23);
    H::drawBoxSingleLineWithBG(x+15,y+36,20+6,1,87);
    H::HLine(x+16,y+41,51+6,201,176);
    H::HLine(x+16,y+37,18+6,201,176);
    
    // inside ON right
    H::drawBoxSingleLineWithBG(x+95+34,y+5,30+6,1,23);
    H::drawBoxSingleLineWithBG(x+105+34,y+9,20+6,1,87);
    H::HLine(x+96+34,y+6,28+6,201,176);
    H::HLine(x+106+34,y+10,18+6,201,176);
    
    // inside Bottom right
    H::drawBoxSingleLineWithBG(x+105+33-6,y+36,20+13,1,87);
    H::drawBoxSingleLineWithBG(x+72+40-6,y+40,54+5,1,23);
    H::HLine(x+106+33-6,y+37,18+13,201,176);
    H::HLine(x+73+40-6,y+41,52+5,201,176);
    
    H::drawBoxSingleLineWithBG(x+15,y+13,3,20,199);
    H::drawBoxSingleLineWithBG(x+122+40,y+13,3,20,199);
    H::VLine(x+17,y+13,20,7,176);
    H::VLine(x+124+40,y+13,20,7,176);
    
    // middle
    H::VLine(x+57+17,y+3,2,7,219);
    H::VLine(x+84+17+5,y+3,2,7,219);
    H::drawBoxSingleLineWithBG(x+55+17,y+6,35,3,196);

    for(int i = 0 ; i < 6 ; i++)
    {
        H::delay(200);
        H::VLine(x+43+4,y+7,i+1,7,219);
        H::VLine(x+98+35,y+7,i+1,7,219);
    }

    H::drawBoxSingleLineWithBG(x+40,y+14,100,10,247);

    H::gotoxy(x+78,y+8); H::setcolor(199); cout << "<<< DELETE ACCOUNT >>>";

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 52 ; j++)
        {
          H::gotoxy(x+48+j,y+16+i); H::setcolor(199); cout << " ";
        }
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 52 ; j++)
        {
          H::gotoxy(x+48+j+30,y+16+i); H::setcolor(199); cout << " ";
        }
    }

    H::gotoxy(x+48,y+17); H::setcolor(199); cout << "          ENTER YOUR ACCOUNT ID TO DELETE           : ";
    
    H::setcolor(7);
}

void DNN::Design::User::Auth::ForgotPassword(int x, int y)
{
    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxDoubleLineWithBG(x-x+1,y-y,198,48,153);
        H::drawBoxDoubleLine(x-x+1,y-y,198,48,151);
    };

    WindowFrame(x,y);

    const auto spaceShip = [](int x, int y)
    {
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                     _  _     ____________.--.)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                  |\|_|//_.-"" .'    \   /|  |)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                  |.-"""-.|   /       \_/ |  |)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                  \  ||  /| __\_____________ |)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                  _\_||_/_| .-""            ""-.  __)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                .' '.    \//                    ".\/)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                ||   '. >()_      DNN x ANT      |()<)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                ||__.-' |/\ \                    |/\)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                   |   / "|  \__________________/."")";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                  /   //  | / \ "-.__________/  /\)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(               ___|__/_|__|/___\___".______//__/__\)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(              /|\     [____________] \__/         |\)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(             //\ \     |  |=====| |   /\\         |\\)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(            // |\ \    |  |=====| |   | \\        | \\        ____...____....----)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(          .//__| \ \   |  |=====| |   | |\\       |--\\---""""     .            ..)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(_____....-//___|  \_\  |  |=====| |   |_|_\\      |___\\    .                 ...')";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"( .      .//-.__|_______|__|_____|_|_____[__\\_____|__.-\\      .     .    ...::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(        //        //        /          \ `-_\\/         \\          .....:::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(  -... //     .  / /       /____________\    \\       .  \ \     .            .)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(      //   .. .-/_/-.                 .       \\        .-\_\-.                 .)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(     / /      '-----'           .             \ \      '._____.'         .)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(  .-/_/-.         .                          .-\_\-.                          ...)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"( '._____.'                            .     '._____.'                       .....)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(        .                                                             ...... ..)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(    .            .                  .                        .)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(   ...                    .                      .                       .      .)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(        ....     .                       .                    ....)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(   ......        . ..                                 ......')";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(             .......             '...              ....)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                                   ''''''      .              .)";
    };
    // inside box
    H::drawBoxDoubleLineWithBG(x+5,y+2,188,36,7);

    // // btn
    // H::drawBoxSingleLineWithBG(x+12,y+43,30,1,71); H::gotoxy(x+18,y+44); H::setcolor(71); cout << "FORGOT PASSWORD"; 
    // H::drawBoxSingleLineWithBG(x+50,y+43,30,1,135); H::gotoxy(x+56,y+44); H::setcolor(135); cout << "FORGOT USERNAME";
    // H::drawBoxSingleLineWithBG(x+88,y+43,30,1,135); H::gotoxy(x+95,y+44); H::setcolor(135); cout << "BACK TO LOGIN";

    spaceShip(x+50, y+5);

    // message 

    H::gotoxy(x+138,y+42); H::setcolor(151); cout << "["; H::setcolor(150); cout << " TIPS "; H::setcolor(151); cout << "]";
    H::gotoxy(x+138,y+44); H::setcolor(151); cout << "PRESS ARROW KEYS TO NAVIGATE THE BUTTON.";
}
#endif 