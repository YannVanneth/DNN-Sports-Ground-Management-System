#ifndef __DNN_PROGRAMAA_HPP__
#define __DNN_PROGRAMAA_HPP__

#include "DNN.hpp"

namespace DNN
{
  class Program 
  {
      public:          
          static void Home();
          static void Run();
          
      class Design
      {
          public:
              static void _ExitProgram(int a,int b);
              static void _ExitDnn(int a,int b);
              static void _DnnExit(int a,int b);
              static void _AntExit(int a,int b);
              static void _TextYes(int a,int b,int c);
              static void _TextNo(int a,int b,int c);
              static void _TextThanks(int a,int b);

              static void _ArrowEixit();
      };
  };
}
void DNN::Program::Home()
{
    again:
    H::clearBox(1,1,200,50,7);
    DNN::Design::User::Auth::Home(1, 1);
    char press; int y = 1;
    
    do
    {
        H::gotoxy(100,27); H::setcolor(121); cout << R"(                               )";
        H::gotoxy(100,28); H::setcolor(121); cout << R"(          L O G I N            )";
        H::gotoxy(100,29); H::setcolor(121); cout << R"(                               )";
        H::gotoxy(100,32); H::setcolor(121); cout << R"(                               )";
        H::gotoxy(100,33); H::setcolor(121); cout << R"(       R E G I S T E R         )";
        H::gotoxy(100,34); H::setcolor(121); cout << R"(                               )";

      if(y == 1)
      {
        H::gotoxy(100,27); H::setcolor(151); cout << R"(                               )";
        H::gotoxy(100,28); H::setcolor(151); cout << R"(      ==> L O G I N <==        )";
        H::gotoxy(100,29); H::setcolor(151); cout << R"(                               )";
      }  

      if(y == 2)
      {
        H::gotoxy(100,32); H::setcolor(151); cout << R"(                               )";
        H::gotoxy(100,33); H::setcolor(151); cout << R"(   ==> R E G I S T E R <==     )";
        H::gotoxy(100,34); H::setcolor(151); cout << R"(                               )";
      }

      press = getch();

      switch(press)
      {
        case KEY_ARROW_UP:
          y--;
          if(y < 1)
          {
            y = 2;
          }
          break;
          
        case KEY_ARROW_DOWN:
          y++;
          if(y > 2)
          {
            y = 1;
          }
          break;

        case KEY_ARROW_LEFT: y--;
        {
          if(y < 1)
          {
            y = 2;
          }
        }
        break;
          
        case KEY_ARROW_RIGHT: y++;
        {
          if(y > 2)
          {
            y = 1;
          }
        }
        break;
      }

    }while(press != KEY_ENTER);

    if(y == 1)
    {
      H::cls(); H::clearBox(1,1,199,49,7); DNN::User::Auth::Login();
    }
    
    if(y == 2)
    {
      H::cls(); H::clearBox(1,1,199,49,7); DNN::User::Auth::Register(); getch();
      goto again;
    }
}
void DNN::Program::Run()
{
    // For Testing Purpose //-------------------------------------//
    system("MODE CON COLS=200 LINES=50");
    H::setFont(14, 700, L"Consolas", true);
    SetConsoleTitle("DNN SPORTS GROUND MANAGEMENT SYSTEM");
    // Console Property
	  HWND console = GetConsoleWindow();
   
    LONG style = GetWindowLong(console, GWL_STYLE);
    style &= ~(WS_MAXIMIZEBOX | WS_SIZEBOX);
    SetWindowLong(console, GWL_STYLE, style);

    /////////////////////////////////////////////////////////////////////

    using Design = DNN::Design::User::Auth;
    
    Design::Loading(8, 14);
    
    DNN::Program::Home();
}

/////////////////////////////////////////////////////////////////////
/////                    ARROW EXIT                             /////
/////////////////////////////////////////////////////////////////////


void DNN::Program::Design::_ArrowEixit()
{
  int x=1;
  char press;

  for(int i=1; i<=20; i++){
    	H::setcursor(0,0);
    	DNN::Program::Design::_ExitDnn(70-i,10);
    	DNN::Program::Design::_ExitProgram(30+i,20);
    	H::delay(50);
	}
	for(int i=1; i<=100; i++){
    	H::setcursor(0,0);
    	H::HLine(50,16,i,7,219);
	}
	DNN::Program::Design::_DnnExit(10,10);
	DNN::Program::Design::_AntExit(160,10);

  do{

        _TextYes(50,30,0);
	      _TextNo(120,30,0);
        
        if( x==1 )
        {
            _TextYes(50,30,3);
        }
        if( x==2 )
        {
            _TextNo(120,30,3);
        }
        
        press = getch();
        switch(press)
        {
            case 75:
            { //left
                x--;
                if(x<1) x=2; break;
            }
            case 77:
            {//right
                x++;
                if(x>2) x=1; break;
            }
            case 72:
            {//up
                x--;
                if(x<1) x=2; break;
            }

            case 80:
            {//down
                x++;
                if(x>2) x=1; break;
            }  
        }
    }while(press != 13);

    switch(x)
    {
        case 1:
        {
          for(int i=0;i<20;i++)
            {
              H::gotoxy(39,19+i); cout<<R"(                                                                                                                        )";
              H::HLine(39,20+i,110,0,219); H::delay(50);
            }
            
            for(int i=0;i<10;i++)
            {
              DNN::Program::Design::_TextThanks(39,30-i);
              H::delay(50);
            }
            H::delay(1000);
            exit(0);
            break;
        }
        case 2:
        {
            Account account; vector<LoginTemp> lt = DNN::File<LoginTemp>::read("temp.dnn");
            if(account.checkAdmin(lt[0].getUsername(),lt[0].getPassword())){DNN::User::MainMenu::Admin();}
            else{ DNN::User::MainMenu::Staff();}
            break;
        }
    }
}



////////////////////////////////////////////////////////////////////
////              DESIGN                                        ////
////////////////////////////////////////////////////////////////////

void DNN::Program::Design::_ExitProgram(int a,int b)
{
	H::setcolor(7); H::gotoxy(a,b);     cout<<R"(  ____                             )";H::setcolor(5);cout<<R"(                        _     _        )";H::setcolor(4);cout<<R"(            _ _     ___  )";
	H::setcolor(7); H::gotoxy(a,b+1);   cout<<R"( |  _ \  ___    _   _  ___  _   _  )";H::setcolor(5);cout<<R"(   __      ____ _ _ __ | |_  | |_ ___  )";H::setcolor(4);cout<<R"(   _____  _(_) |_  |__ \ )";
	H::setcolor(7); H::gotoxy(a,b+2);   cout<<R"( | | | |/ _ \  | | | |/ _ \| | | | )";H::setcolor(5);cout<<R"(   \ \ /\ / / _` | '_ \| __| | __/ _ \ )";H::setcolor(4);cout<<R"(  / _ \ \/ / | __|   / / )";
	H::setcolor(2); H::gotoxy(a,b+3);   cout<<R"( | |_| | (_) | | |_| | (_) | |_| | )";H::setcolor(5);cout<<R"(    \ V  V / (_| | | | | |_  | || (_) |)";H::setcolor(4);cout<<R"( |  __/>  <| | |_   |_|  )";
	H::setcolor(2); H::gotoxy(a,b+4);   cout<<R"( |____/ \___/   \__, |\___/ \__,_| )";H::setcolor(7);cout<<R"(     \_/\_/ \__,_|_| |_|\__|  \__\___/ )";H::setcolor(5);cout<<R"(  \___/_/\_\_|\__|  (_)  )";
	H::setcolor(2); H::gotoxy(a,b+5);   cout<<R"(                |___/              )";H::setcolor(7);cout<<R"(                                       )";H::setcolor(5);cout<<R"(                         )";	
}

void DNN::Program::Design::_ExitDnn(int a,int b)
{
	H::setcolor(7); H::gotoxy(a,b);     cout<<R"(   ____  _   _ _   _ )";H::setcolor(5);cout<<R"(   ____  ____   ___  ____ _____ ____  )";H::setcolor(2);cout<<R"(    ____ ____   ___  _   _ _   _ ____   )";
	H::setcolor(7); H::gotoxy(a,b+1);   cout<<R"(  |  _ \| \ | | \ | |)";H::setcolor(5);cout<<R"(  / ___||  _ \ / _ \|  _ \_   _/ ___| )";H::setcolor(2);cout<<R"(   / ___|  _ \ / _ \| | | | \ | |  _ \  )";
	H::setcolor(7); H::gotoxy(a,b+2);   cout<<R"(  | | | |  \| |  \| |)";H::setcolor(5);cout<<R"(  \___ \| |_) | | | | |_) || | \___ \ )";H::setcolor(2);cout<<R"(  | |  _| |_) | | | | | | |  \| | | | | )";
	H::setcolor(5); H::gotoxy(a,b+3);   cout<<R"(  | |_| | |\  | |\  |)";H::setcolor(2);cout<<R"(   ___) |  __/| |_| |  _ < | |  ___) |)";H::setcolor(3);cout<<R"(  | |_| |  _ <| |_| | |_| | |\  | |_| | )";
	H::setcolor(5); H::gotoxy(a,b+4);   cout<<R"(  |____/|_| \_|_| \_|)";H::setcolor(2);cout<<R"(  |____/|_|    \___/|_| \_\|_| |____/ )";H::setcolor(3);cout<<R"(   \____|_| \_\\___/ \___/|_| \_|____/  )";
}

void DNN::Program::Design::_DnnExit(int a,int b)
{
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( _____               _____ )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"(( ___ )-------------( ___ ))";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout << R"( ______  )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout << R"(|      | )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout << R"(|  _    |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout << R"(| | |   |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout << R"(| |_|   |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout << R"(|       |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout << R"(|______| )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout << R"( __    _ )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout << R"(|  |  | |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout << R"(|   |_| |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout << R"(|       |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout << R"(|  _    |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout << R"(| | |   |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout << R"(|_|  |__|)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(1); cout << R"( __    _ )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(1); cout << R"(|  |  | |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(1); cout << R"(|   |_| |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(1); cout << R"(|       |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(1); cout << R"(|  _    |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(1); cout << R"(| | |   |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(1); cout << R"(|_|  |__|)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |___|               |___| )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"((_____)-------------(_____))";H::delay(20);
}

void DNN::Program::Design::_AntExit(int a,int b)
{
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( _____               _____ )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"(( ___ )-------------( ___ ))";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout <<R"( _______ )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout <<R"(|   _   |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout <<R"(|  |_|  |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout <<R"(|       |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout <<R"(|       |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout <<R"(|   _   |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(3); cout <<R"(|__| |__|)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout <<R"( __    _ )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout <<R"(|  |  | |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout <<R"(|   |_| |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout <<R"(|       |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout <<R"(|  _    |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout <<R"(| | |   |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(2); cout <<R"(|_|  |__|)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(5); cout <<R"( _______ )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(5); cout <<R"(|       |)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(5); cout <<R"(|_     _|)"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(5); cout <<R"(  |   |  )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(5); cout <<R"(  |   |  )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(5); cout <<R"(  |   |  )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |   )"; H::setcolor(5); cout <<R"(  |___|  )"; H::setcolor(7); cout <<R"(   |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |   |               |   | )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"( |___|               |___| )";H::delay(20);
	H::setcolor(7); H::gotoxy(a,b++);   cout<<R"((_____)-------------(_____))";H::delay(20);
}

void DNN::Program::Design::_TextYes(int a,int b,int c)
{

	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"( ___  ___  _______   ________ )"; 
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"(|"  \/"  |/"     "| /"       ))"; 
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"( \   \  /(: ______)(:   \___/ )"; 
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"(  \\  \/  \/    |   \___  \   )"; 
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"(  /   /   // ___)_   __/  \\  )"; 
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"( /   /   (:      "| /" \   :) )"; 
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"(|___/     \_______)(_______/  )"; 
                               
}

void DNN::Program::Design::_TextNo(int a,int b,int c)
{

	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"( _____  ___      ______    )";
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"((\"   \|"  \    /    " \   )";
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"(|.\\   \    |  // ____  \  )";
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"(|: \.   \\  | /  /    ) :) )";
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"(|.  \    \. |(: (____/ //  )";
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"(|    \    \ | \        /   )";
	H::setcolor(c); H::gotoxy(a,b++);   cout<<R"( \___|\____\)  \"_____/    )";
                           
}

void DNN::Program::Design::_TextThanks(int a,int b)
{
    
    H::setcolor(2); H::gotoxy(a,b++);   cout<<R"(                                                                                              ,---.                     )";
    H::setcolor(2); H::gotoxy(a,b++);   cout<<R"(            ,--------.,--.  ,--.  ,---.  ,--.  ,--.,--. ,--.   ,--.   ,--.,-----. ,--. ,--.   |   |                     )";
    H::setcolor(2); H::gotoxy(a,b++);   cout<<R"(            '--.  .--'|  '--'  | /  O  \ |  ,'.|  ||  .'   /    \  `.'  /'  .-.  '|  | |  |   |  .'                     )";
    H::setcolor(3); H::gotoxy(a,b++);   cout<<R"(               |  |   |  .--.  ||  .-.  ||  |' '  ||  .   '      '.    / |  | |  ||  | |  |   |  |                      )";
    H::setcolor(3); H::gotoxy(a,b++);   cout<<R"(               |  |   |  |  |  ||  | |  ||  | `   ||  |\   \       |  |  '  '-'  ''  '-'  '   `--'                      )";
    H::setcolor(3); H::gotoxy(a,b++);   cout<<R"(               `--'   `--'  `--'`--' `--'`--'  `--'`--' '--'       `--'   `-----'  `-----'    .--.                      )";
    H::setcolor(3); H::gotoxy(a,b++);   cout<<R"(                                                                                              '--'                 ,---.)";
    H::setcolor(7); H::gotoxy(a,b++);   cout<<R"(,--.  ,--.  ,---.,--.   ,--.,------.     ,---.     ,--.  ,--.,--. ,-----.,------.   ,------.    ,---.,--.   ,--.   |   |)";
    H::setcolor(7); H::gotoxy(a,b++);   cout<<R"(|  '--'  | /  O  \\  `.'  / |  .---'    /  O  \    |  ,'.|  ||  |'  .--./|  .---'   |  .-.  \  /  O  \\  `.'  /    |  .')";
    H::setcolor(7); H::gotoxy(a,b++);   cout<<R"(|  .--.  ||  .-.  |\     /  |  `--,    |  .-.  |   |  |' '  ||  ||  |    |  `--,    |  |  \  :|  .-.  |'.    /     |  | )";
    H::setcolor(5); H::gotoxy(a,b++);   cout<<R"(|  |  |  ||  | |  | \   /   |  `---.   |  | |  |   |  | `   ||  |'  '--'\|  `---.   |  '--'  /|  | |  |  |  |      `--' )";
    H::setcolor(5); H::gotoxy(a,b++);   cout<<R"(`--'  `--'`--' `--'  `-'    `------'   `--' `--'   `--'  `--'`--' `-----'`------'   `-------' `--' `--'  `--'      .--. )";
    H::setcolor(5); H::gotoxy(a,b++);   cout<<R"(                                                                                                                   '--' )";
    H::setcolor(7); H::gotoxy(a,b++);   cout<<R"(                                                                                                                        )";
}
#endif 