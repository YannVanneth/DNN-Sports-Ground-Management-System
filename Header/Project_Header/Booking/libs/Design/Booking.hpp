#ifndef _DESIGN_BOOKING_HPP_
#define _DESIGN_BOOKING_HPP_

#include "../../Booking.hpp"

namespace DNN
{
    namespace Design
    {
        class Booking
        {
           public:
              static void Home(int x, int y);
              static void BookingList(int x, int y);
              static void Search(int x, int y);
              static void Cancel(int x, int y);
        };
    }
}

void DNN::Design::Booking::Home(int x, int y)
{
    const auto WindowFrame = [](int x, int y)
    {
        H::drawBoxSingleLine(x-x+1,y-y,198,48,3);
    };
    
    const auto bookingText = [](int x, int y)
    {
        H::gotoxy(x,y++); H::setcolor(7); cout << R"( ______      ___      ___   ___  ____   _____  ____  _____   ______  )"; 
        H::gotoxy(x,y++); H::setcolor(3); cout << R"(|_   _ \   .'   `.  .'   `.|_  ||_  _| |_   _||_   \|_   _|.' ___  | )"; 
        H::gotoxy(x,y++); H::setcolor(3); cout << R"(  | |_) | /  .-.  \/  .-.  \ | |_/ /     | |    |   \ | | / .'   \_| )"; 
        H::gotoxy(x,y++); H::setcolor(3); cout << R"(  |  __'. | |   | || |   | | |  __'.     | |    | |\ \| | | |   ____ )"; 
        H::gotoxy(x,y++); H::setcolor(3); cout << R"( _| |__) |\  `-'  /\  `-'  /_| |  \ \_  _| |_  _| |_\   |_\ `.___]  |)"; 
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(|_______/  `.___.'  `.___.'|____||____||_____||_____|\____|`._____.' )";                                                              
    };
    const auto DNN = [](int x, int y)
    {
        H::gotoxy(x,y++); H::setcolor(3); cout << R"( ______   ____  _____  ____  _____ )"; 
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(|_   _ `.|_   \|_   _||_   \|_   _|)"; 
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(  | | `. \ |   \ | |    |   \ | |  )"; 
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(  | |  | | | |\ \| |    | |\ \| |  )"; 
        H::gotoxy(x,y++); H::setcolor(7); cout << R"( _| |_.' /_| |_\   |_  _| |_\   |_ )"; 
        H::gotoxy(x,y++); H::setcolor(3); cout << R"(|______.'|_____|\____||_____|\____|)"; 
    };

    const auto office = [](int x, int y)
    {
        // border
        H::drawBoxDoubleLine(x-2,y-2,75,21,3);
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(::::==========:::::::::::::::::::::::::::::::::::::::::::::::::::::::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(:::::::=========::::::.---------------.:::::::::::::::::::::::::::::::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(:::=============::::::| .-----------. |:::::::::::::::::::::::::::::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(::::==========::::::::| | === == == | |:::::::::::::::::::::::::::::::::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(::::==========::::::::| | DNN 27 OO | |:::::::::::::::::::::::::::::::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(:::::::=========='::::| |  BOOKING! | |:::::::::::::::::::::::::::::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(:::===========::::::::| |___________| |::::::((;):::::::::::::::::::::)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(""""============""""""|___________oo__|"")"""";("""""""""""""""""""""")";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(  ==========='           ___)___(___,o  (   .---._)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(     ===========        |___________| 8  \  |TEA|_)    .+-------+.)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(  ===========                     o8o8    ) |___|    .' |_______| `.)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(    =============      __________8___    (          /  /         \  \)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"( |\`==========='/|   .'= --------- --`.   `.       |\ /           \ /|)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"( | "-----------" |  / ooooooooooooo  oo\   _\_     | "-------------" |)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"( |______I_N______| /  oooooooooooo[] ooo\  |=|     |_______OUT_______|)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                  / O O =========  O OO  \ "-"   .-------,)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(                  `""""""""""""""""""""""'      /~~~~~~~/)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(_______________________________________________/_   ~~~/_______________)";
        H::gotoxy(x,y++); H::setcolor(7); cout << R"(.............................................. \/_____/..................)";
    };

    // Internal Frame
    H::drawBoxSingleLine(x+4,y+1,190,44,4);
    
    WindowFrame(x, y); DNN(x+45, y+4); bookingText(x+85, y+4);
    
    // UnderLine 
    H::HLine(x+4,y+13,190,7,178); office(x+90,y+21);

}

#endif