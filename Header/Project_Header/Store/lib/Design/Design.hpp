#ifndef __STORE_DESIGN_H__
#define __STORE_DESIGN_H__

#include "../../../../DNN_Header/DNN.hpp"

namespace DNN::Design
{
        class Store
        {
            public:
                static void Home(int x, int y);
                static void Menu(int a, int b);
                static void PicForInsert(int a, int b);
                static void PicForDisplay(int a, int b, int c);
                static void PicForSearch(int a, int b);
                static void PicForUpdate(int a, int b);
                static void PicForDelete(int a, int b);
                static void PicForSort(int a, int b);
                static void PicForBack(int a, int b);

                static void TextInsert(int a,int b);
                static void TextDisplay(int a,int b);
                static void TextSearch(int a,int b);
                static void TextUpdate(int a,int b);
                static void TextDelete(int a,int b);
                static void TextSort(int a,int b);
                static void TextBack(int a,int b);
                static void PicSearch(int a, int b);

                static void TextSearchBynumber(int a,int b);
                static void TextSearchByPrice(int a,int b);
                static void TextsearchByName(int a,int b);
                static void TextSearchByType(int a,int b);
                static void TextSearchByQTY(int a,int b);

                static void PicForMenuUpdate(int a, int b);

                static void TextImportStock(int a,int b);
                static void TextUpdateProduct(int a,int b);
                static void TextUpdateName(int a,int b);
                static void TextUpdatePrice(int a,int b);
                static void TextUpdateQTY(int a,int b);
                static void TextUpdateType(int a,int b);

                static void PicForSortdata(int a,int b);

                static void TextSortByName(int a,int b);
                static void TextSortByPrice(int a,int b);
                static void TextSortByType(int a,int b);

                static void DesignInsert();
                static void DesignDisplay();
        };
}


// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//void DNN::Design::Store::Jersey::Home(int x, int y)
//{
//   
//}
void DNN::Design::Store::Home(int x, int y)
{
    // // Home's Background 
    // H::drawBoxDoubleLineWithBG(x-x, y-y, 200, 40, 56);  

    // DNN TEXT
    // H::gotoxy(x, y+1); H::setcolor(3); cout << R"( ____  __  _  __  _      ____  _____  ____ _____  ____ )";
    // H::gotoxy(x, y+2); H::setcolor(7); cout << R"(| _) \|  \| ||  \| |    (_ (_`|_   _|/ () \| () )| ===|)";
    // H::gotoxy(x, y+3); H::setcolor(7); cout << R"(|____/|_|\__||_|\__|   .__)__)  |_|  \____/|_|\_\|____|)";

    
                                                                                                                                 
    H::gotoxy(x, y+1); H::setcolor(3); cout << R"(      _____  _____   ______  _____   ______                  ______   _________________       _____         _____        ______    )";
    H::gotoxy(x, y+2); H::setcolor(7); cout << R"(  ___|\    \|\    \ |\     \|\    \ |\     \             ___|\     \ /                 \ ____|\    \    ___|\    \   ___|\     \   )";
    H::gotoxy(x, y+3); H::setcolor(3); cout << R"( |    |\    \\\    \| \     \\\    \| \     \           |    |\     \\______     ______//     /\    \  |    |\    \ |     \     \  )";
    H::gotoxy(x, y+4); H::setcolor(7); cout << R"( |    | |    |\|    \  \     |\|    \  \     |          |    |/____/|   \( /    /  )/  /     /  \    \ |    | |    ||     ,_____/| )";
    H::gotoxy(x, y+5); H::setcolor(3); cout << R"( |    | |    | |     \  |    | |     \  |    |       ___|    \|   | |    ' |   |   '  |     |    |    ||    |/____/ |     \--'\_|/ )";
    H::gotoxy(x, y+6); H::setcolor(7); cout << R"( |    | |    | |      \ |    | |      \ |    |      |    \    \___|/       |   |      |     |    |    ||    |\    \ |     /___/|   )";
    H::gotoxy(x, y+7); H::setcolor(3); cout << R"( |    | |    | |    |\ \|    | |    |\ \|    |      |    |\     \         /   //      |\     \  /    /||    | |    ||     \____|\  )";
    H::gotoxy(x, y+8); H::setcolor(7); cout << R"( |____|/____/| |____||\_____/| |____||\_____/|      |\ ___\|_____|       /___//       | \_____\/____/ ||____| |____||____ '     /| )";
    H::gotoxy(x, y+9); H::setcolor(3); cout << R"( |    /    | | |    |/ \|   || |    |/ \|   ||      | |    |     |      |`   |         \ |    ||    | /|    | |    ||    /_____/ | )";
    H::gotoxy(x, y+10); H::setcolor(7); cout << R"( |____|____|/  |____|   |___|/ |____|   |___|/       \|____|_____|      |____|          \|____||____|/ |____| |____||____|     | / )";
    H::gotoxy(x, y+11); H::setcolor(3); cout << R"(   \(    )/      \(       )/     \(       )/            \(    )/          \(               \(    )/      \(     )/    \( |_____|/  )";
    H::gotoxy(x, y+12); H::setcolor(7); cout << R"(    '    '        '       '       '       '              '    '            '                '    '        '     '      '    )/     )";

}


void DNN::Design::Store::Menu(int a,int b)
{
    H::drawBoxDoubleLineWithBG(a,b,192,46,7);
    H::drawBoxSingleLine(a+10,b+5,40,37,7);
    H::drawBoxDoubleLineWithBG(a+7,b+8,46,1,241);
    H::gotoxy(a+22,b+9); H::setcolor(241); cout << "<<<< M E N U >>>>";

}

void DNN::Design::Store::PicForInsert(int a,int b)
{
    H::setcolor(6);
    H::gotoxy(a,b);  cout<<R"(              (        (                       )";
    H::gotoxy(a,b+1);cout<<R"(             ( )      ( )          (           )";
    H::gotoxy(a,b+2);cout<<R"(      (       Y        Y          ( )          )";
    H::gotoxy(a,b+3);cout<<R"(     ( )     |"|      |"|          Y           )";
    H::setcolor(7);
    H::gotoxy(a,b+4);cout<<R"(      Y      | |      | |         |"|          )";
    H::gotoxy(a,b+5);cout<<R"(     |"|     | |.-----| |---.___  | |          )";
    H::gotoxy(a,b+6);cout<<R"(     | |  .--| |,~~~~~| |~~~,,,,'-| |          )";
    H::gotoxy(a,b+7);cout<<R"(     | |-,,~~'-'___   '-'       ~~| |._        )";
    H::gotoxy(a,b+8);cout<<R"(    .| |~       // ___            '-',,'.      )";
    H::gotoxy(a,b+9);cout<<R"(   /,'-'     <_// // _  __             ~,\     )";
    H::gotoxy(a,b+10);cout<<R"(  / ;     ,-,     \\_> <<_______________;_)    )";
    H::gotoxy(a,b+11);cout<<R"(  | ;    {(_)} _,      . |================|    )";
    H::gotoxy(a,b+12);cout<<R"(  | '-._ ~~,,,           | ,,             |    )";
    H::gotoxy(a,b+13);cout<<R"(  |     '-.__ ~~~~~~~~~~~|________________|    )";
    H::gotoxy(a,b+14);cout<<R"(  |\         `'----------|                     )";
    H::gotoxy(a,b+15);cout<<R"(  | '=._                 |                     )";
    H::gotoxy(a,b+16);cout<<R"(  :     '=.__            |                     )";
    H::gotoxy(a,b+17);cout<<R"(   \         `'==========|                     )";
    H::gotoxy(a,b+18);cout<<R"(    '-._                 |                     )";
    H::gotoxy(a,b+19);cout<<R"(        '-.__            |                     )";
    H::gotoxy(a,b+20);cout<<R"(             `'----------|                     )";

}

void DNN::Design::Store::PicForDisplay(int a,int b, int c)
{
    H::setcolor(c);
    H::gotoxy(a,b);  cout<<R"(   _________   )";
    H::gotoxy(a,b+1);cout<<R"(  | _______ |  )";
    H::gotoxy(a,b+2);cout<<R"( / \         \ )";
    H::gotoxy(a,b+3);cout<<R"(/___\_________\)";
    H::gotoxy(a,b+4);cout<<R"(|   | \       |)";
    H::gotoxy(a,b+5);cout<<R"(|   |  \      |)";
    H::gotoxy(a,b+6);cout<<R"(|   |   \     |)";
    H::gotoxy(a,b+7);cout<<R"(|   | M  \    |)";
    H::gotoxy(a,b+8);cout<<R"(|   |     \   |)";
    H::gotoxy(a,b+9);cout<<R"(|   |\  I  \  |)";
    H::gotoxy(a,b+10);cout<<R"(|   | \     \ |)";
    H::gotoxy(a,b+11);cout<<R"(|   |  \  L  \|)";
    H::gotoxy(a,b+12);cout<<R"(|   |   \     |)";
    H::gotoxy(a,b+13);cout<<R"(|   |    \  K |)";
    H::gotoxy(a,b+14);cout<<R"(|   |     \   |)";
    H::gotoxy(a,b+15);cout<<R"(|   |      \  |)";
    H::gotoxy(a,b+16);cout<<R"(|___|_______\_|)";
}

void DNN::Design::Store::PicForSearch(int a,int b)
{
    H::setcolor(6);
    H::gotoxy(a,b);  cout<<R"(                 __,__                     )";
    H::gotoxy(a,b+1);cout<<R"(        .--.  .-"     "-.  .--.            )";
    H::gotoxy(a,b+2);cout<<R"(       / .. \/  .-. .-.  \/ .. \           )";
    H::gotoxy(a,b+3);cout<<R"(      | |  '|  /   Y   \  |'  | |          )";
    H::gotoxy(a,b+4);cout<<R"(      | \   \  \ 0 | 0 /  /   / |          )";
    H::gotoxy(a,b+5);cout<<R"(       \ '- ,\.-"`` ``"-./, -' /           )";
    H::gotoxy(a,b+6);cout<<R"(        `'-' /_   ^ ^   _\ '-'`            )";
    H::gotoxy(a,b+7);cout<<R"(        .--'|  \._ _ _./  |'--.            )";
    H::gotoxy(a,b+8);cout<<R"(      /`    \   \.-.  /   /    `\          )";
    H::gotoxy(a,b+9);cout<<R"(     /       '._/  |-' _.'       \         )";
    H::gotoxy(a,b+10);cout<<R"(    /          ;  /--~'   |       \        )";
    H::gotoxy(a,b+11);cout<<R"(   /        .'\|.-\--.     \       \       )";
    H::gotoxy(a,b+12);cout<<R"(  /   .'-. /.-.;\  |\|'~'-.|\       \      )";
    H::gotoxy(a,b+13);cout<<R"(  \       `-./`|_\_/ `     `\'.      \     )";
    H::gotoxy(a,b+14);cout<<R"(   '.      ;     ___)        '.`;    /     )";
    H::gotoxy(a,b+15);cout<<R"(     '-.,_ ;     ___)          \/   /      )";
    H::gotoxy(a,b+16);cout<<R"(      \   ``'------'\       \   `  /       )";
    H::gotoxy(a,b+17);cout<<R"(       '.    \       '.      |   ;/_       )";
    H::gotoxy(a,b+18);cout<<R"(     ___>     '.       \_ _ _/   ,  '--.   )";
    H::gotoxy(a,b+19);cout<<R"(   .'   '.   .-~~~~~-. /     |--'`~~-.  \  )";
    H::gotoxy(a,b+20);cout<<R"(  // / .---'/  .-~~-._/ / / /---..__.'  /  )";
    H::gotoxy(a,b+21);cout<<R"( ((_(_/    /  /      (_(_(_(---.__    .'   )";
    H::gotoxy(a,b+22);cout<<R"(           | |     _              `~~`     )";
    H::gotoxy(a,b+23);cout<<R"(           | |     \'.                     )";
    H::gotoxy(a,b+24);cout<<R"(            \ '....' |                     )";
    H::gotoxy(a,b+25);cout<<R"(             '.,___.'                      )";
}

void DNN::Design::Store::PicForUpdate(int a,int b)
{
    H::setcolor(0);
    H::gotoxy(a,b);  cout<<R"(            .-"-.                )";
    H::gotoxy(a,b+1);cout<<R"(           : /"\ :               )";
    H::gotoxy(a,b+2);cout<<R"(           `.`-'.'               )";
    H::setcolor(7);
    H::gotoxy(a,b+3);cout<<R"(             | |                 )";
    H::gotoxy(a,b+4);cout<<R"(          _..| |.._              )";
    H::gotoxy(a,b+5);cout<<R"(     _  ."   ___   ".  _         )";
    H::gotoxy(a,b+6);cout<<R"(    : `: .-""   ""-. :' :        )";
    H::gotoxy(a,b+7);cout<<R"(    `  : : ()   () : :  '        )";
    H::gotoxy(a,b+8);cout<<R"(     `.` `   ___   ' '.'         )";
    H::gotoxy(a,b+9);cout<<R"(        `-`._____.'-'            )";
    H::gotoxy(a,b+10);cout<<R"(        .-"       "-.            )";
    H::gotoxy(a,b+11);cout<<R"(      ."             ".          )";
    H::gotoxy(a,b+12);cout<<R"(    .'  .^         `.  `.        )";
    H::gotoxy(a,b+13);cout<<R"(  ."  .".'          `".  "       )";
    H::gotoxy(a,b+14);cout<<R"( `   ' .    _______  ` ".  "._   )";
    H::gotoxy(a,b+15);cout<<R"(`_.-'      :       :  `  "._  )  )";
    H::gotoxy(a,b+16);cout<<R"(      .    :       :   .    `"   )";
    H::gotoxy(a,b+17);cout<<R"(      .    '-------'             )";
    H::setcolor(3);
    H::gotoxy(a,b+18);cout<<R"(       .                '        )";
    H::gotoxy(a,b+19);cout<<R"(        .       _      :         )";
    H::gotoxy(a,b+20);cout<<R"(        :     .' `.    :         )";
    H::gotoxy(a,b+21);cout<<R"(        :    .     .   :         )";
    H::gotoxy(a,b+22);cout<<R"(        :   .          :         )";
    H::gotoxy(a,b+23);cout<<R"(        :___.       .__:         )";
    H::gotoxy(a,b+24);cout<<R"(       (____)       (___)        )";
}

void DNN::Design::Store::PicForDelete(int a,int b)

{
    H::setcolor(3);
    H::gotoxy(a,b);  cout<<R"(                      __________________                         )";   
    H::gotoxy(a,b+1);cout<<R"(                      \                 \                        )";   
    H::gotoxy(a,b+2);cout<<R"(                        \                 \                      )";
    H::gotoxy(a,b+3);cout<<R"(                          \                 \                    )";      
    H::gotoxy(a,b+4);cout<<R"(                            \                 \                  )";  
    H::gotoxy(a,b+5);cout<<R"(           /-------------------------------------                )";  
    H::gotoxy(a,b+6);cout<<R"(         //---------------//                  / |                )";  
    H::gotoxy(a,b+7);cout<<R"(       //               //                  / __|                )";
    H::gotoxy(a,b+8);cout<<R"(     //               //                  / /  ||                )";
    H::gotoxy(a,b+9);cout<<R"(   //               //                  / /    ||                )";  
    H::gotoxy(a,b+10);cout<<R"( //_______________//   o o            / /      ||      ___/-\___ )";
    H::gotoxy(a,b+11);cout<<R"(------------------------------------/   ------- |     |---------|)";
    H::gotoxy(a,b+12);cout<<R"(| DO NOT PLAY |         | HOUSEHOLD |           |      | | | | | )";
    H::gotoxy(a,b+13);cout<<R"(| ON OR AROUND|         |WASTE ONLY |           |      | | | | | )";
    H::gotoxy(a,b+14);cout<<R"(|--------------         ------------|           |      | | | | | )";
    H::gotoxy(a,b+15);cout<<R"(|                                   |           |      | | | | | )";
    H::gotoxy(a,b+16);cout<<R"(-------------------------------------------------      |_______| )";
}

void DNN::Design::Store::PicForSort(int a,int b)
{
    H::setcolor(3);
    H::gotoxy(a,b);  cout<<R"(         -.._       _-*"`)";  
    H::gotoxy(a,b+1);cout<<R"(           \ '-._.*' <")";  
    H::gotoxy(a,b+2);cout<<R"(       _.--'          "*-._)";  
    H::gotoxy(a,b+3);cout<<R"(    _-'             :''"*--^-)";  
    H::gotoxy(a,b+4);cout<<R"( -='.-*'.   _.-"-.  '.    ",)";  
    H::gotoxy(a,b+5);cout<<R"(   /    ;.-'      '*-.'-.   \)";  
    H::gotoxy(a,b+6);cout<<R"(  /    /'             '"*-   \)";  
    H::gotoxy(a,b+7);cout<<R"( ;                            :)";  
    H::gotoxy(a,b+8);cout<<R"(:        .*"*-.  .-*"*.        ;)";  
    H::gotoxy(a,b+9);cout<<R"(;       /      ;:      \       :)";  
    H::gotoxy(a,b+10);cout<<R"(;      ;    *  !!  *    :      :)";  
    H::gotoxy(a,b+11);cout<<R"(:      :     .'  '.     ;      ;)";  
    H::gotoxy(a,b+12);cout<<R"( ;      '-.-'      '-.-'      :)";  
    H::gotoxy(a,b+13);cout<<R"(  \                          /)";  
    H::gotoxy(a,b+14);cout<<R"(   \                        /)";  
    H::gotoxy(a,b+15);cout<<R"(    '.                    .')";  
    H::gotoxy(a,b+16);cout<<R"(     /'.      _.._      .' \)";  
    H::gotoxy(a,b+17);cout<<R"(    /   '-.          .-'    \)";  
    H::gotoxy(a,b+18);cout<<R"(   /       "--.,,.--"        \)";  
    H::gotoxy(a,b+19);cout<<R"(  :    :        |        ;    ;)";  
    H::gotoxy(a,b+20);cout<<R"(  |.--.;        |        :.--.|)";  
    H::gotoxy(a,b+21);cout<<R"(  (   ()        |        ()   ))";  
    H::gotoxy(a,b+22);cout<<R"(   '--^_        |        _^--')";  
    H::gotoxy(a,b+23);cout<<R"(      | "'*--.._I_..--*'" |)";  
    H::gotoxy(a,b+24);cout<<R"(      | __..._  | _..._   |)";  
    H::gotoxy(a,b+25);cout<<R"(     .'"      `"'"     ''"'.)";  
    H::gotoxy(a,b+26);cout<<R"(     """"""""""""""""""""""")";  
}

void DNN::Design::Store::PicForBack(int a,int b)
{
    H::setcolor(3);
    H::gotoxy(a,b);  cout<<R"(           ___)";
    H::gotoxy(a,b+1);cout<<R"(     _..--"\  `|`""--.._)";
    H::gotoxy(a,b+2);cout<<R"(  .-'       \  |        `'-.)";
    H::gotoxy(a,b+3);cout<<R"( /           \_|___...----'`\)";
    H::gotoxy(a,b+4);cout<<R"(|__,,..--""``(_)--..__      |)";
    H::gotoxy(a,b+5);cout<<R"('\     _.--'`.I._     ''--..')";
    H::gotoxy(a,b+6);cout<<R"(  `''"`,#)";H::setcolor(2);cout<<R"(DNN)";H::setcolor(6);cout<<R"(/_|_\)";H::setcolor(2);cout<<R"(ANT)";H::setcolor(6);cout<<R"(,---'`)";
    H::setcolor(7);
    H::gotoxy(a,b+7);cout<<R"(    ,#'  _.:`___`:-._ '#,)";
    H::gotoxy(a,b+8);cout<<R"(   #'  ,~'-;(oIo);-'~, '#)";
    H::gotoxy(a,b+9);cout<<R"(   #   `~-(  |    )=~`  #)";
    H::gotoxy(a,b+10);cout<<R"(   #       | |_  |      #)";
    H::gotoxy(a,b+11);cout<<R"(   #       ; ._. ;      #)";
    H::gotoxy(a,b+12);cout<<R"(   #  _..-;|\ - /|;-._  #)";
    H::gotoxy(a,b+13);cout<<R"(   #-'   /_ \\_// _\  '-#)";
    H::gotoxy(a,b+14);cout<<R"( /`#    ; /__\-'__\;    #`\)";
    H::gotoxy(a,b+15);cout<<R"(;  #\.--|  |O  O   |'-./#  ;)";
    H::gotoxy(a,b+16);cout<<R"(|__#/   \ _;O__O___/   \#__|)";
    H::gotoxy(a,b+17);cout<<R"( | #\    [I_[_]__I]    /# |)";
    H::gotoxy(a,b+18);cout<<R"( \_(#   /  |O  O   \   #)_/)";
    H::gotoxy(a,b+19);cout<<R"(       /   |        \)";
    H::gotoxy(a,b+20);cout<<R"(      /    |         \)";
    H::gotoxy(a,b+21);cout<<R"(     /    /\          \)";
    H::gotoxy(a,b+22);cout<<R"(    /     | `\         ;)";
    H::gotoxy(a,b+23);cout<<R"(   ;      \   '.       |)";
    H::gotoxy(a,b+24);cout<<R"(    \-._.__\     \_..-'/)";
    H::gotoxy(a,b+25);cout<<R"(     '.\  \-.._.-/  /'`)";
    H::gotoxy(a,b+26);cout<<R"(        \_.\    /._/)";
    H::gotoxy(a,b+27);cout<<R"(         \_.;  ;._/)";
    H::gotoxy(a,b+28);cout<<R"(       .-'-./  \.-'-.)";
    H::gotoxy(a,b+29);cout<<R"(      (___.'    '.___))";
}

void DNN::Design::Store::TextInsert(int a,int b)
{
    H::setcolor(7); H::gotoxy(a,b);  cout<<R"(,--.,--.  ,--. ,---.  ,------.,------. ,--------. )";H::setcolor(3);cout<<R"(  ,------. ,------.  ,-----. ,------.  ,--. ,--. ,-----.,--------.)";
    H::setcolor(7); H::gotoxy(a,b+1);cout<<R"(|  ||  ,'.|  |'   .-' |  .---'|  .--. ''--.  .--' )";H::setcolor(3);cout<<R"(  |  .--. '|  .--. ''  .-.  '|  .-.  \ |  | |  |'  .--./'--.  .--')";
    H::setcolor(7); H::gotoxy(a,b+2);cout<<R"(|  ||  |' '  |`.  `-. |  `--, |  '--'.'   |  |    )";H::setcolor(3);cout<<R"(  |  '--' ||  '--'.'|  | |  ||  |  \  :|  | |  ||  |       |  |   )";
    H::setcolor(3); H::gotoxy(a,b+3);cout<<R"(|  ||  | `   |.-'    ||  `---.|  |\  \    |  |    )";H::setcolor(2);cout<<R"(  |  | --' |  |\  \ '  '-'  '|  '--'  /'  '-'  ''  '--'\   |  |   )";
    H::setcolor(3); H::gotoxy(a,b+4);cout<<R"(`--'`--'  `--'`-----' `------'`--' '--'   `--'    )";H::setcolor(2);cout<<R"(  `--'     `--' '--' `-----' `-------'  `-----'  `-----'   `--'   )";
}

void DNN::Design::Store::TextDisplay(int a,int b)
{
    H::setcolor(7); H::gotoxy(a,b);  cout<<R"(,------.  ,--. ,---.  ,------. ,--.     ,---.,--.   ,--. )";H::setcolor(3);cout<<R"(  ,------. ,------. ,-----. ,-----. ,------. ,------.  )";
    H::setcolor(7); H::gotoxy(a,b+1);cout<<R"(|  .-.  \ |  |'   .-' |  .--. '|  |    /  O  \\  `.'  /  )";H::setcolor(3);cout<<R"(  |  .--. '|  .---''  .--./'  .-.  '|  .--. '|  .-.  \ )";
    H::setcolor(7); H::gotoxy(a,b+2);cout<<R"(|  |  \  :|  |`.  `-. |  '--' ||  |   |  .-.  |'.    /   )";H::setcolor(3);cout<<R"(  |  '--'.'|  `--, |  |    |  | |  ||  '--'.'|  |  \  :)";
    H::setcolor(2); H::gotoxy(a,b+3);cout<<R"(|  '--'  /|  |.-'    ||  | --' |  '--.|  | |  |  |  |    )";H::setcolor(5);cout<<R"(  |  |\  \ |  `---.'  '--'\'  '-'  '|  |\  \ |  '--'  /)";
    H::setcolor(2); H::gotoxy(a,b+4);cout<<R"(`-------' `--'`-----' `--'     `-----'`--' `--'  `--'    )";H::setcolor(5);cout<<R"(  `--' '--'`------' `-----' `-----' `--' '--'`-------' )";
}

void DNN::Design::Store::TextSearch(int a,int b)
{
   H::setcolor(7); H::gotoxy(a,b);  cout<<R"( ,---.  ,------.  ,---.  ,------.  ,-----.,--.  ,--.  )";H::setcolor(3);cout<<R"( ,------. ,------.  ,-----. ,------.  ,--. ,--. ,-----.,--------.)";
   H::setcolor(7); H::gotoxy(a,b+1);cout<<R"( '   .-' |  .---' /  O  \ |  .--. ''  .--./|  '--'  | )";H::setcolor(3);cout<<R"(  |  .--. '|  .--. ''  .-.  '|  .-.  \ |  | |  |'  .--./'--.  .--')";
   H::setcolor(7); H::gotoxy(a,b+2);cout<<R"( `.  `-. |  `--, |  .-.  ||  '--'.'|  |    |  .--.  | )";H::setcolor(3);cout<<R"(  |  '--' ||  '--'.'|  | |  ||  |  \  :|  | |  ||  |       |  |   )";
   H::setcolor(5); H::gotoxy(a,b+3);cout<<R"( .-'    ||  `---.|  | |  ||  |\  \ '  '--'\|  |  |  | )";H::setcolor(2);cout<<R"(  |  | --' |  |\  \ '  '-'  '|  '--'  /'  '-'  ''  '--'\   |  |   )";
   H::setcolor(5); H::gotoxy(a,b+4);cout<<R"( `-----' `------'`--' `--'`--' '--' `-----'`--'  `--' )";H::setcolor(2);cout<<R"(  `--'     `--' '--' `-----' `-------'  `-----'  `-----'   `--'   )";
}

void DNN::Design::Store::TextUpdate(int a,int b)
{
    H::setcolor(3); H::gotoxy(a,b);  cout<<R"(,--. ,--.,------. ,------.    ,---. ,--------.,------. )";H::setcolor(5);cout<<R"(  ,------. ,------. ,-----. ,-----. ,------. ,------.  )";
    H::setcolor(3); H::gotoxy(a,b+1);cout<<R"(|  | |  ||  .--. '|  .-.  \  /  O  \'--.  .--'|  .---' )";H::setcolor(5);cout<<R"(  |  .--. '|  .---''  .--./'  .-.  '|  .--. '|  .-.  \ )";
    H::setcolor(2); H::gotoxy(a,b+2);cout<<R"(|  | |  ||  '--' ||  |  \  :|  .-.  |  |  |   |  `--,  )";H::setcolor(7);cout<<R"(  |  '--'.'|  `--, |  |    |  | |  ||  '--'.'|  |  \  :)";
    H::setcolor(2); H::gotoxy(a,b+3);cout<<R"('  '-'  '|  | --' |  '--'  /|  | |  |  |  |   |  `---. )";H::setcolor(7);cout<<R"(  |  |\  \ |  `---.'  '--'\'  '-'  '|  |\  \ |  '--'  /)";
    H::setcolor(2); H::gotoxy(a,b+4);cout<<R"(`-----' `--'     `-------' `--' `--'  `--'   `------'  )";H::setcolor(7);cout<<R"( `--' '--'`------' `-----' `-----' `--' '--'`-------' )";
}

void DNN::Design::Store::TextDelete(int a,int b)
{
    H::setcolor(2); H::gotoxy(a,b);  cout<<R"(,------.  ,------.,--.   ,------.,--------.,------. )";H::setcolor(5);cout<<R"(  ,------. ,------. ,-----. ,-----. ,------. ,------.  )";
    H::setcolor(2); H::gotoxy(a,b+1);cout<<R"(|  .-.  \ |  .---'|  |   |  .---''--.  .--'|  .---' )";H::setcolor(5);cout<<R"(  |  .--. '|  .---''  .--./'  .-.  '|  .--. '|  .-.  \ )";
    H::setcolor(2); H::gotoxy(a,b+2);cout<<R"(|  |  \  :|  `--, |  |   |  `--,    |  |   |  `--,  )";H::setcolor(5);cout<<R"(  |  '--'.'|  `--, |  |    |  | |  ||  '--'.'|  |  \  :)";
    H::setcolor(3); H::gotoxy(a,b+3);cout<<R"(|  '--'  /|  `---.|  '--.|  `---.   |  |   |  `---. )";H::setcolor(7);cout<<R"(  |  |\  \ |  `---.'  '--'\'  '-'  '|  |\  \ |  '--'  /)";
    H::setcolor(3); H::gotoxy(a,b+4);cout<<R"(`-------' `------'`-----'`------'   `--'   `------' )";H::setcolor(7);cout<<R"(  `--' '--'`------' `-----' `-----' `--' '--'`-------' )";
}

void DNN::Design::Store::TextSort(int a,int b)
{
    H::setcolor(2); H::gotoxy(a,b);  cout<<R"( ,---.   ,-----. ,------. ,--------. )";H::setcolor(3);cout<<R"(  ,------. ,------. ,-----. ,-----. ,------. ,------.  )";
    H::setcolor(2); H::gotoxy(a,b+1);cout<<R"('   .-' '  .-.  '|  .--. ''--.  .--' )";H::setcolor(3);cout<<R"(  |  .--. '|  .---''  .--./'  .-.  '|  .--. '|  .-.  \ )";
    H::setcolor(2); H::gotoxy(a,b+2);cout<<R"(`.  `-. |  | |  ||  '--'.'   |  |    )";H::setcolor(3);cout<<R"(  |  '--'.'|  `--, |  |    |  | |  ||  '--'.'|  |  \  :)";
    H::setcolor(7); H::gotoxy(a,b+3);cout<<R"(.-'    |'  '-'  '|  |\  \    |  |    )";H::setcolor(5);cout<<R"(  |  |\  \ |  `---.'  '--'\'  '-'  '|  |\  \ |  '--'  /)";
    H::setcolor(7); H::gotoxy(a,b+4);cout<<R"(`-----'  `-----' `--' '--'   `--'    )";H::setcolor(5);cout<<R"(  `--' '--'`------' `-----' `-----' `--' '--'`-------' )";
}

void DNN::Design::Store::TextBack(int a,int b)
{
    H::setcolor(7); H::gotoxy(a,b);  cout<<R"(,------.,--.   ,--.,--.,--------. )";H::setcolor(3);cout<<R"(  ,--.   ,--.,------.,--.  ,--.,--. ,--.)";
    H::setcolor(7); H::gotoxy(a,b+1);cout<<R"(|  .---' \  `.'  / |  |'--.  .--' )";H::setcolor(3);cout<<R"(  |   `.'   ||  .---'|  ,'.|  ||  | |  |)";
    H::setcolor(7); H::gotoxy(a,b+2);cout<<R"(|  `--,   .'    \  |  |   |  |    )";H::setcolor(3);cout<<R"(  |  |'.'|  ||  `--, |  |' '  ||  | |  |)";
    H::setcolor(2); H::gotoxy(a,b+3);cout<<R"(|  `---. /  .'.  \ |  |   |  |    )";H::setcolor(7);cout<<R"(  |  |   |  ||  `---.|  | `   |'  '-'  ')";
    H::setcolor(2); H::gotoxy(a,b+4);cout<<R"(`------''--'   '--'`--'   `--'    )";H::setcolor(7);cout<<R"(  `--'   `--'`------'`--'  `--' `-----' )";
}

void DNN::Design::Store::DesignInsert()
{
    for(int i=1;i<=30;i++)
    {
        H::delay(100);
        H::HLine(65,13+i,120,6,178);
    }

    H::drawBoxDoubleLineWithBG(75,17,40,3,241);
    H::drawBoxDoubleLineWithBG(135,17,40,3,241);

    H::drawBoxDoubleLineWithBG(80,27,40,3,241);
    H::drawBoxDoubleLineWithBG(130,27,40,3,241);

    H::drawBoxDoubleLineWithBG(105,37,40,3,241);
}

void DNN::Design::Store::DesignDisplay()
{
    for(int i=0; i<=30; i++ )
    {
        H::drawBoxDoubleLineWithBG(60,13,130,i,7);
    }
}

void DNN::Design::Store::PicSearch(int a, int b)
{
    H::setcolor(3);
    H::gotoxy(a,b);  cout<<R"(              _.===========================._)";
    H::gotoxy(a,b+1);cout<<R"(            .'`  .-  - __- - - -- --__--- -.  `'.)";
    H::gotoxy(a,b+2);cout<<R"(        __ / ,'`     _|--|_________|--|_     `'. \)";
    H::gotoxy(a,b+3);cout<<R"(      /'--| ;    _.'\ |  '         '  | /'._    ; |)";
    H::gotoxy(a,b+4);cout<<R"(     //   | |_.-' .-'.'    -  -- -    '.'-. '-._| |)";
    H::gotoxy(a,b+5);cout<<R"(    (\)   \"` _.-` /                     \ `-._ `"/)";
    H::gotoxy(a,b+6);cout<<R"(    (\)    `-`    /      .---------.      \    `-`)";
    H::gotoxy(a,b+7);cout<<R"(    (\)           |      ||1||2||3||      |)";
    H::gotoxy(a,b+8);cout<<R"(   (\)            |      ||4||5||6||      |)";
    H::gotoxy(a,b+9);cout<<R"(  (\)             |      ||7||8||9||      |)";
    H::gotoxy(a,b+10);cout<<R"( (\)           ___|      ||*||0||#||      |)";
    H::gotoxy(a,b+11);cout<<R"( (\)          /.--|      '---------'      |)";
    H::gotoxy(a,b+12);cout<<R"(  (\)        (\)  |\_  _  __   _   __  __/|)";
    H::gotoxy(a,b+13);cout<<R"( (\)        (\)   |                       |)";
    H::gotoxy(a,b+14);cout<<R"((\)_._._.__(\)    |                       |)";
    H::gotoxy(a,b+15);cout<<R"( (\\\\jgs\\\)      '.___________________.')";
    H::gotoxy(a,b+16);cout<<R"(  '-'-'-'--'                              )";
}

void DNN::Design::Store::TextSearchBynumber(int a,int b)
{
    H::setcolor(7); H::gotoxy(a,b);  cout<<R"( ,---.  ,------.  ,---.  ,------.  ,-----.,--.  ,--.   ,-----.,--.   ,--. )";H::setcolor(3);cout<<R"(   ,-----. ,-----. ,------.  ,------.)";
    H::setcolor(7); H::gotoxy(a,b+1);cout<<R"('   .-' |  .---' /  O  \ |  .--. ''  .--./|  '--'  |   |  |) /_\  `.'  /  )";H::setcolor(3);cout<<R"(  '  .--./'  .-.  '|  .-.  \ |  .---')";
    H::setcolor(7); H::gotoxy(a,b+2);cout<<R"(`.  `-. |  `--, |  .-.  ||  '--'.'|  |    |  .--.  |   |  .-.  \'.    /   )";H::setcolor(3);cout<<R"(  |  |    |  | |  ||  |  \  :|  `--, )";
    H::setcolor(5); H::gotoxy(a,b+3);cout<<R"(.-'    ||  `---.|  | |  ||  |\  \ '  '--'\|  |  |  |   |  '--' /  |  |    )";H::setcolor(2);cout<<R"(  '  '--'\'  '-'  '|  '--'  /|  `---.)";
    H::setcolor(5); H::gotoxy(a,b+4);cout<<R"(`-----' `------'`--' `--'`--' '--' `-----'`--'  `--'   `------'   `--'    )";H::setcolor(2);cout<<R"(   `-----' `-----' `-------' `------')";
}

void DNN::Design::Store::TextSearchByPrice(int a,int b)
{
    H::setcolor(2); H::gotoxy(a,b);  cout<<R"(  ,---.  ,------.  ,---.  ,------.  ,-----.,--.  ,--.   ,-----.,--.   ,--. )";H::setcolor(5);cout<<R"(  ,------. ,------. ,--. ,-----.,------.)";
    H::setcolor(2); H::gotoxy(a,b+1);cout<<R"( '   .-' |  .---' /  O  \ |  .--. ''  .--./|  '--'  |   |  |) /_\  `.'  /  )";H::setcolor(5);cout<<R"(  |  .--. '|  .--. '|  |'  .--./|  .---')";
    H::setcolor(2); H::gotoxy(a,b+2);cout<<R"( `.  `-. |  `--, |  .-.  ||  '--'.'|  |    |  .--.  |   |  .-.  \'.    /   )";H::setcolor(5);cout<<R"(  |  '--' ||  '--'.'|  ||  |    |  `--, )";
    H::setcolor(7); H::gotoxy(a,b+3);cout<<R"( .-'    ||  `---.|  | |  ||  |\  \ '  '--'\|  |  |  |   |  '--' /  |  |    )";H::setcolor(3);cout<<R"(  |  | --' |  |\  \ |  |'  '--'\|  `---.)";
    H::setcolor(7); H::gotoxy(a,b+4);cout<<R"( `-----' `------'`--' `--'`--' '--' `-----'`--'  `--'   `------'   `--'    )";H::setcolor(3);cout<<R"(  `--'     `--' '--'`--' `-----'`------')";
}


void DNN::Design::Store::TextsearchByName(int a,int b)
{
    H::setcolor(2); H::gotoxy(a,b);  cout<<R"( ,---.  ,------.  ,---.  ,------.  ,-----.,--.  ,--.   ,-----.,--.   ,--. )";H::setcolor(7);cout<<R"(  ,--.  ,--.  ,---.  ,--.   ,--.,------.)";
    H::setcolor(2); H::gotoxy(a,b+1);cout<<R"('   .-' |  .---' /  O  \ |  .--. ''  .--./|  '--'  |   |  |) /_\  `.'  /  )";H::setcolor(7);cout<<R"(  |  ,'.|  | /  O  \ |   `.'   ||  .---')";
    H::setcolor(2); H::gotoxy(a,b+2);cout<<R"(`.  `-. |  `--, |  .-.  ||  '--'.'|  |    |  .--.  |   |  .-.  \'.    /   )";H::setcolor(7);cout<<R"(  |  |' '  ||  .-.  ||  |'.'|  ||  `--, )";
    H::setcolor(3); H::gotoxy(a,b+3);cout<<R"(.-'    ||  `---.|  | |  ||  |\  \ '  '--'\|  |  |  |   |  '--' /  |  |    )";H::setcolor(3);cout<<R"(  |  | `   ||  | |  ||  |   |  ||  `---.)";
    H::setcolor(3); H::gotoxy(a,b+4);cout<<R"(`-----' `------'`--' `--'`--' '--' `-----'`--'  `--'   `------'   `--'    )";H::setcolor(3);cout<<R"(  `--'  `--'`--' `--'`--'   `--'`------')";
}

void DNN::Design::Store::TextSearchByType(int a,int b)
{
    H::setcolor(3); H::gotoxy(a,b);  cout<<R"( ,---.  ,------.  ,---.  ,------.  ,-----.,--.  ,--.   ,-----.,--.   ,--.  )";H::setcolor(2);cout<<R"( ,--------.,--.   ,--.,------. ,------.)";
    H::setcolor(3); H::gotoxy(a,b+1);cout<<R"('   .-' |  .---' /  O  \ |  .--. ''  .--./|  '--'  |   |  |) /_\  `.'  /   )";H::setcolor(2);cout<<R"( '--.  .--' \  `.'  / |  .--. '|  .---')";
    H::setcolor(3); H::gotoxy(a,b+2);cout<<R"(`.  `-. |  `--, |  .-.  ||  '--'.'|  |    |  .--.  |   |  .-.  \'.    /    )";H::setcolor(2);cout<<R"(    |  |     '.    /  |  '--' ||  `--, )";
    H::setcolor(7); H::gotoxy(a,b+3);cout<<R"(.-'    ||  `---.|  | |  ||  |\  \ '  '--'\|  |  |  |   |  '--' /  |  |     )";H::setcolor(7);cout<<R"(    |  |       |  |   |  | --' |  `---.)";
    H::setcolor(7); H::gotoxy(a,b+4);cout<<R"(`-----' `------'`--' `--'`--' '--' `-----'`--'  `--'   `------'   `--'     )";H::setcolor(7);cout<<R"(    `--'       `--'   `--'     `------')";
}

void DNN::Design::Store::TextSearchByQTY(int a,int b)
{
    H::setcolor(2); H::gotoxy(a,b);  cout<<R"( ,---.  ,------.  ,---.  ,------.  ,-----.,--.  ,--.   ,-----.,--.   ,--. )";H::setcolor(5);cout<<R"(   ,-----. ,--------.,--.   ,--.)";
    H::setcolor(2); H::gotoxy(a,b+1);cout<<R"('   .-' |  .---' /  O  \ |  .--. ''  .--./|  '--'  |   |  |) /_\  `.'  /  )";H::setcolor(5);cout<<R"(  '  .-.  ''--.  .--' \  `.'  / )";
    H::setcolor(2); H::gotoxy(a,b+2);cout<<R"(`.  `-. |  `--, |  .-.  ||  '--'.'|  |    |  .--.  |   |  .-.  \'.    /   )";H::setcolor(5);cout<<R"(  |  | |  |   |  |     '.    /  )";
    H::setcolor(7); H::gotoxy(a,b+3);cout<<R"(.-'    ||  `---.|  | |  ||  |\  \ '  '--'\|  |  |  |   |  '--' /  |  |    )";H::setcolor(3);cout<<R"(  '  '-'  '-. |  |       |  |   )";
    H::setcolor(7); H::gotoxy(a,b+4);cout<<R"(`-----' `------'`--' `--'`--' '--' `-----'`--'  `--'   `------'   `--'    )";H::setcolor(3);cout<<R"(   `-----'--' `--'       `--'   )";
}

void DNN::Design::Store::PicForMenuUpdate(int a,int b)
{
    H::setcolor(3);
    H::gotoxy(a,b);  cout<<R"(            ___....___   ___)";
    H::gotoxy(a,b+1);cout<<R"(       _,--',-----,~~~),'_- `.)";
    H::gotoxy(a,b+2);cout<<R"(     ,'     `. ,-"""""    \_,-')";
    H::gotoxy(a,b+3);cout<<R"(    /        `'            \)";
    H::gotoxy(a,b+4);cout<<R"(  ,'                        \)";
    H::gotoxy(a,b+5);cout<<R"( /             _.----''-.   |)";
    H::setcolor(7);
    H::gotoxy(a,b+6);cout<<R"(|          ,--'/        \),-)";
    H::gotoxy(a,b+7);cout<<R"(|          |  |         /|)";
    H::gotoxy(a,b+8);cout<<R"(|          `.  `-o,-.o-(  `-_)";
    H::gotoxy(a,b+9);cout<<R"(|            `.   `-'   `.   `\)";
    H::gotoxy(a,b+10);cout<<R"( \            | .______,  )   '.)";
    H::gotoxy(a,b+11);cout<<R"(  \          '__        _.-;----.)";
    H::gotoxy(a,b+12);cout<<R"(   `. ,.----,' _)--''-.' /  \    |)";
    H::gotoxy(a,b+13);cout<<R"(    ,'      / `).-'''-`-( ,\ |   |)";
    H::gotoxy(a,b+14);cout<<R"(   .       / )-'         `._-\  /)";
    H::gotoxy(a,b+15);cout<<R"(   '.     /-'._      o    ,-\ \<)";
    H::setcolor(2);
    H::gotoxy(a,b+16);cout<<R"(     `.._/'--..:---...---;.'`.__>)";
    H::gotoxy(a,b+17);cout<<R"(    / ,;___|    `-.   ,-' \--")";
    H::gotoxy(a,b+18);cout<<R"(    ""    |        `,'  ___\)";
    H::gotoxy(a,b+19);cout<<R"(        .-:.--------|.-' ___))";
    H::gotoxy(a,b+20);cout<<R"(         \ - ,----"""\'""    \)";
    H::gotoxy(a,b+21);cout<<R"(         |,-/______.--\-----";>)";
    H::gotoxy(a,b+22);cout<<R"(         `----._____.--'""""")";
}

void DNN::Design::Store::TextImportStock(int a,int b)
{
    H::setcolor(3); H::gotoxy(a,b);  cout<<R"(,--.,--.   ,--.,------.  ,-----. ,------. ,--------. )";H::setcolor(7);cout<<R"(   ,---. ,--------. ,-----.  ,-----.,--. ,--.)";
    H::setcolor(3); H::gotoxy(a,b+1);cout<<R"(|  ||   `.'   ||  .--. ''  .-.  '|  .--. ''--.  .--' )";H::setcolor(7);cout<<R"(  '   .-''--.  .--''  .-.  ''  .--./|  .'   /)";
    H::setcolor(3); H::gotoxy(a,b+2);cout<<R"(|  ||  |'.'|  ||  '--' ||  | |  ||  '--'.'   |  |    )";H::setcolor(7);cout<<R"(  `.  `-.   |  |   |  | |  ||  |    |  .   ' )";
    H::setcolor(2); H::gotoxy(a,b+3);cout<<R"(|  ||  |   |  ||  | --' '  '-'  '|  |\  \    |  |    )";H::setcolor(5);cout<<R"(  .-'    |  |  |   '  '-'  ''  '--'\|  |\   \)";
    H::setcolor(2); H::gotoxy(a,b+4);cout<<R"(`--'`--'   `--'`--'      `-----' `--' '--'   `--'    )";H::setcolor(5);cout<<R"(  `-----'   `--'    `-----'  `-----'`--' '--')";
}

void DNN::Design::Store::TextUpdateName(int a,int b)
{
    H::setcolor(7); H::gotoxy(a,b);  cout<<R"(,--. ,--.,------. ,------.    ,---. ,--------.,------. )";H::setcolor(2);cout<<R"(  ,--.  ,--.  ,---.  ,--.   ,--.,------.)";
    H::setcolor(7); H::gotoxy(a,b+1);cout<<R"(|  | |  ||  .--. '|  .-.  \  /  O  \'--.  .--'|  .---' )";H::setcolor(2);cout<<R"(  |  ,'.|  | /  O  \ |   `.'   ||  .---')";
    H::setcolor(7); H::gotoxy(a,b+2);cout<<R"(|  | |  ||  '--' ||  |  \  :|  .-.  |  |  |   |  `--,  )";H::setcolor(2);cout<<R"(  |  |' '  ||  .-.  ||  |'.'|  ||  `--, )";
    H::setcolor(3); H::gotoxy(a,b+3);cout<<R"('  '-'  '|  | --' |  '--'  /|  | |  |  |  |   |  `---. )";H::setcolor(5);cout<<R"(  |  | `   ||  | |  ||  |   |  ||  `---.)";
    H::setcolor(3); H::gotoxy(a,b+4);cout<<R"( `-----' `--'     `-------' `--' `--'  `--'   `------' )";H::setcolor(5);cout<<R"(  `--'  `--'`--' `--'`--'   `--'`------')";
}

void DNN::Design::Store::TextUpdatePrice(int a,int b)
{
    H::setcolor(5); H::gotoxy(a,b);  cout<<R"(,--. ,--.,------. ,------.    ,---. ,--------.,------. )";H::setcolor(2);cout<<R"(  ,------. ,------. ,--. ,-----.,------.)";
    H::setcolor(5); H::gotoxy(a,b+1);cout<<R"(|  | |  ||  .--. '|  .-.  \  /  O  \'--.  .--'|  .---' )";H::setcolor(2);cout<<R"(  |  .--. '|  .--. '|  |'  .--./|  .---')";
    H::setcolor(5); H::gotoxy(a,b+2);cout<<R"(|  | |  ||  '--' ||  |  \  :|  .-.  |  |  |   |  `--,  )";H::setcolor(2);cout<<R"(  |  '--' ||  '--'.'|  ||  |    |  `--, )";
    H::setcolor(7); H::gotoxy(a,b+3);cout<<R"('  '-'  '|  | --' |  '--'  /|  | |  |  |  |   |  `---. )";H::setcolor(3);cout<<R"(  |  | --' |  |\  \ |  |'  '--'\|  `---.)";
    H::setcolor(7); H::gotoxy(a,b+4);cout<<R"( `-----' `--'     `-------' `--' `--'  `--'   `------' )";H::setcolor(3);cout<<R"(  `--'     `--' '--'`--' `-----'`------')";
}

void DNN::Design::Store::TextUpdateType(int a,int b)
{
    H::setcolor(3); H::gotoxy(a,b);  cout<<R"(,--. ,--.,------. ,------.    ,---. ,--------.,------.  )";H::setcolor(5);cout<<R"( ,--------.,--.   ,--.,------. ,------.)";
    H::setcolor(3); H::gotoxy(a,b+1);cout<<R"(|  | |  ||  .--. '|  .-.  \  /  O  \'--.  .--'|  .---'  )";H::setcolor(5);cout<<R"( '--.  .--' \  `.'  / |  .--. '|  .---')";
    H::setcolor(3); H::gotoxy(a,b+2);cout<<R"(|  | |  ||  '--' ||  |  \  :|  .-.  |  |  |   |  `--,   )";H::setcolor(5);cout<<R"(    |  |     '.    /  |  '--' ||  `--, )";
    H::setcolor(2); H::gotoxy(a,b+3);cout<<R"('  '-'  '|  | --' |  '--'  /|  | |  |  |  |   |  `---.  )";H::setcolor(7);cout<<R"(    |  |       |  |   |  | --' |  `---.)";
    H::setcolor(2); H::gotoxy(a,b+4);cout<<R"( `-----' `--'     `-------' `--' `--'  `--'   `------'  )";H::setcolor(7);cout<<R"(    `--'       `--'   `--'     `------')";
}

void DNN::Design::Store::TextUpdateQTY(int a,int b)
{
    H::setcolor(7); H::gotoxy(a,b); cout<<R"(,--. ,--.,------. ,------.    ,---. ,--------.,------.   )";H::setcolor(3);cout<<R"(  ,-----. ,--------.,--.   ,--.)";
    H::setcolor(7); H::gotoxy(a,b+1);cout<<R"(|  | |  ||  .--. '|  .-.  \  /  O  \'--.  .--'|  .---'  )";H::setcolor(3);cout<<R"( '  .-.  ''--.  .--' \  `.'  / )";
    H::setcolor(7); H::gotoxy(a,b+2);cout<<R"(|  | |  ||  '--' ||  |  \  :|  .-.  |  |  |   |  `--,   )";H::setcolor(3);cout<<R"( |  | |  |   |  |     '.    /  )";
    H::setcolor(2); H::gotoxy(a,b+3);cout<<R"('  '-'  '|  | --' |  '--'  /|  | |  |  |  |   |  `---.  )";H::setcolor(5);cout<<R"( '  '-'  '-. |  |       |  |   )";
    H::setcolor(2); H::gotoxy(a,b+4);cout<<R"( `-----' `--'     `-------' `--' `--'  `--'   `------'  )";H::setcolor(5);cout<<R"(  `-----'--' `--'       `--'   )";
}

void DNN::Design::Store::TextUpdateProduct(int a,int b)
{
    H::setcolor(3); H::gotoxy(a,b);  cout<<R"(,--. ,--.,------. ,------.    ,---. ,--------.,------. )";H::setcolor(2);cout<<R"(  ,------. ,------. ,-----. ,-----. ,------. ,------.  )";
    H::setcolor(3); H::gotoxy(a,b+1);cout<<R"(|  | |  ||  .--. '|  .-.  \  /  O  \'--.  .--'|  .---' )";H::setcolor(2);cout<<R"(  |  .--. '|  .---''  .--./'  .-.  '|  .--. '|  .-.  \ )";
    H::setcolor(3); H::gotoxy(a,b+2);cout<<R"(|  | |  ||  '--' ||  |  \  :|  .-.  |  |  |   |  `--,  )";H::setcolor(2);cout<<R"(  |  '--'.'|  `--, |  |    |  | |  ||  '--'.'|  |  \  :)";
    H::setcolor(5); H::gotoxy(a,b+3);cout<<R"('  '-'  '|  | --' |  '--'  /|  | |  |  |  |   |  `---. )";H::setcolor(7);cout<<R"(  |  |\  \ |  `---.'  '--'\'  '-'  '|  |\  \ |  '--'  /)";
    H::setcolor(5); H::gotoxy(a,b+4);cout<<R"( `-----' `--'     `-------' `--' `--'  `--'   `------' )";H::setcolor(7);cout<<R"(  `--' '--'`------' `-----' `-----' `--' '--'`-------' )";
}

void DNN::Design::Store::PicForSortdata(int a, int b)
{
    H::setcolor(7);
	H::gotoxy(a,b);  cout<<R"(                     <>______________________)";
	H::gotoxy(a,b+1);cout<<R"(       .-"""-.       ||-._`-._ :| |: _.-'_.-|)";
	H::gotoxy(a,b+2);cout<<R"(      /= ___  \      ||   `-._`:| |:`_.-'   |)";
	H::gotoxy(a,b+3);cout<<R"(     |- /~~~\  |     ||-------`-' '-'-------|)";
	H::gotoxy(a,b+4);cout<<R"(     |=( '.' ) |     ||------_.-. .-._------|)";
	H::gotoxy(a,b+5);cout<<R"(     \__\_=_/__/     ||  _.-'_.:| |:._`-._  |)";
	H::gotoxy(a,b+6);cout<<R"(      {_______}      ||-'_.-'  :| |:  `-._`-|)";
	H::gotoxy(a,b+7);cout<<R"(    /` *       `'--._||~~~~~~~~~~~~~~~~~~~~~~)";
	H::gotoxy(a,b+8);cout<<R"(   /= .     [] .     { >                     )";
	H::gotoxy(a,b+9);cout<<R"(  /  /|ooo     |`'--'||                      )";
	H::gotoxy(a,b+10);cout<<R"( (   )\_______/      ||                      )";
	H::gotoxy(a,b+11);cout<<R"(  \``\/       \      ||                      )";
	H::gotoxy(a,b+12);cout<<R"(   `-| ==    \_|     ||                      )";
	H::gotoxy(a,b+13);cout<<R"(     /         |     ||                      )";
	H::gotoxy(a,b+14);cout<<R"(    |=   >\  __/     ||                      )";
	H::gotoxy(a,b+15);cout<<R"(    \   \ |- --|     ||                      )";
	H::gotoxy(a,b+16);cout<<R"(     \ __| \___/     ||                      )";
	H::gotoxy(a,b+17);cout<<R"(     _{__} _{__}     ||                      )";
	H::gotoxy(a,b+18);cout<<R"(    (    )(    )     ||                      )";
	H::gotoxy(a,b+19);cout<<R"(^^~  `"""  `"""  ~^^^~^^~~~^^^~^^^~^^^~^^~^  )";
}

void DNN::Design::Store::TextSortByName(int a, int b)
{
    H::setcolor(3); H::gotoxy(a,b);  cout<<R"( ,---.   ,-----. ,------. ,--------.   ,-----.,--.   ,--. )";H::setcolor(7);cout<<R"(  ,--.  ,--.  ,---.  ,--.   ,--.,------.)";
    H::setcolor(3); H::gotoxy(a,b+1);cout<<R"('   .-' '  .-.  '|  .--. ''--.  .--'   |  |) /_\  `.'  /  )";H::setcolor(7);cout<<R"(  |  ,'.|  | /  O  \ |   `.'   ||  .---')";
    H::setcolor(3); H::gotoxy(a,b+2);cout<<R"(`.  `-. |  | |  ||  '--'.'   |  |      |  .-.  \'.    /   )";H::setcolor(7);cout<<R"(  |  |' '  ||  .-.  ||  |'.'|  ||  `--, )";
    H::setcolor(2); H::gotoxy(a,b+3);cout<<R"(.-'    |'  '-'  '|  |\  \    |  |      |  '--' /  |  |    )";H::setcolor(5);cout<<R"(  |  | `   ||  | |  ||  |   |  ||  `---.)";
    H::setcolor(2); H::gotoxy(a,b+4);cout<<R"(`-----'  `-----' `--' '--'   `--'      `------'   `--'    )";H::setcolor(5);cout<<R"(  `--'  `--'`--' `--'`--'   `--'`------')";
}

void DNN::Design::Store::TextSortByPrice(int a, int b)
{
    H::setcolor(2); H::gotoxy(a,b);  cout<<R"( ,---.   ,-----. ,------. ,--------.   ,-----.,--.   ,--. )";H::setcolor(3);cout<<R"(  ,------. ,------. ,--. ,-----.,------.)";
    H::setcolor(2); H::gotoxy(a,b+1);cout<<R"('   .-' '  .-.  '|  .--. ''--.  .--'   |  |) /_\  `.'  /  )";H::setcolor(3);cout<<R"(  |  .--. '|  .--. '|  |'  .--./|  .---')";
    H::setcolor(2); H::gotoxy(a,b+2);cout<<R"(`.  `-. |  | |  ||  '--'.'   |  |      |  .-.  \'.    /   )";H::setcolor(3);cout<<R"(  |  '--' ||  '--'.'|  ||  |    |  `--, )";
    H::setcolor(5); H::gotoxy(a,b+3);cout<<R"(.-'    |'  '-'  '|  |\  \    |  |      |  '--' /  |  |    )";H::setcolor(7);cout<<R"(  |  | --' |  |\  \ |  |'  '--'\|  `---.)";
    H::setcolor(5); H::gotoxy(a,b+4);cout<<R"(`-----'  `-----' `--' '--'   `--'      `------'   `--'    )";H::setcolor(7);cout<<R"(  `--'     `--' '--'`--' `-----'`------')";
}

void DNN::Design::Store::TextSortByType(int a, int b)
{
    H::setcolor(2); H::gotoxy(a,b);  cout<<R"( ,---.   ,-----. ,------. ,--------.   ,-----.,--.   ,--. )";H::setcolor(3);cout<<R"(  ,--------.,--.   ,--.,------. ,------.)";
    H::setcolor(2); H::gotoxy(a,b+1);cout<<R"('   .-' '  .-.  '|  .--. ''--.  .--'   |  |) /_\  `.'  /  )";H::setcolor(3);cout<<R"(  '--.  .--' \  `.'  / |  .--. '|  .---')";
    H::setcolor(2); H::gotoxy(a,b+2);cout<<R"(`.  `-. |  | |  ||  '--'.'   |  |      |  .-.  \'.    /   )";H::setcolor(3);cout<<R"(     |  |     '.    /  |  '--' ||  `--, )";
    H::setcolor(5); H::gotoxy(a,b+3);cout<<R"(.-'    |'  '-'  '|  |\  \    |  |      |  '--' /  |  |    )";H::setcolor(7);cout<<R"(     |  |       |  |   |  | --' |  `---.)";
    H::setcolor(5); H::gotoxy(a,b+4);cout<<R"(`-----'  `-----' `--' '--'   `--'      `------'   `--'    )";H::setcolor(7);cout<<R"(     `--'       `--'   `--'     `------')";
}
#endif