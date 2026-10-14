#ifndef     __DESIGNCOSOLE_H__
#define     __DESIGNCOSOLE_H__

#include "../../Ground.hpp"


//using namespace DNN;

//////////////////////////////////////////////////////

namespace DNN::Design
{

	class Ground{

		public:

		class DesignFutsal{

		    public:

		        static void FutsalInput();
		        static void DesignOutput();
		        static void DesignSearch();
		        static void DesignUpdate();
		        static void DesignDelete(int a,int b,int c);
		        static void DesignDisplay();
		        static void DesignExit();
				static void RunTime(int a,int b);
				static void TextInput(int a,int b);
				static void TextOutput(int a,int b);
				static void DesignUpdateStatus(int a,int b);
				static void Autronaut(int a,int b);
				static void Star(int a,int b);
				static void FootballTeam(int a,int b);
				static void SearchWall(int a,int b,int c,int d,int e);
				static void Groud_Field(int a,int b);
				static void TextSortNumber(int a,int b);
				static void _PicTrash(int a,int b);
				static void _TexDNN(int a,int b,int c);
				static void _TextDeleteFutsal(int a,int b);
				static void _FutsalHomeScreen(int a,int b,int c);
				static void _TextFutsalMenu(int a,int b);
				static void _MenuUpdateFutsal(int a,int b);
				static void _TextUpdateFutsal(int a,int b);
				static void _MenuSort(int a,int b);
				static void _TextSortData(int a,int b);
				static void _SearchMenu(int a,int b);
				static void _TextSearchMenu(int a,int b);
				static void _TextNumber1(int a,int b);
				static void _TextNumber2(int a,int b);
				static void _TextNumber3(int a,int b);
				static void _TextESC(int a,int b);

				static void _DesignSearch(int a,int b);
				static void _SeachText(int a,int b);
				static void _ResultText(int a,int b);
				static void _EmojiSearch(int a,int b);
				static void _EmojiUpdate(int a,int b);
				static void _TextSearchDNN(int a,int b);
				static void _NewUpdate(int a,int b);
				static void _NewTextUpdate(int a,int b);

				static void _MenuNewUpdate(int a,int b);
				static void _TextMenuNewUpdate(int a,int b);
				static void _CloudUpdate(int a,int b);
				static void _Sun(int a,int b);
				static void _Home(int a,int b);
				static void _Tree(int a,int b);
		};

		class DesignVolleyball{

		    public:

		        static void DesignInput(int a);
				static void _TextInput(int a,int b,int c,int d);
				static void _TextMenu(int a,int b,int c,int d);
				static void _TextVolleyball(int a,int b,int c,int d);
				static void _Textseachvolleyball(int a,int b,int c,int d);
				static void _Textdeletevolleyball(int a,int b,int c,int d);
				static void _TextSortItem(int a,int b,int c,int d);
				static void _TextSortRecord(int a,int b,int c,int d);
				static void _TextSeachRecord(int a,int b,int c,int d);
				static void _TextUpdateVolleyballmenu(int a,int b,int c,int d);
				static void _VolleyballGround(int a,int b,int c,int d);
				static void _PlayerVolleyball(int a,int b,int c,int d);
		};

		class DesignAboutus{

		   public:

		        static void _TextAboutus(int a,int b,int c,int d);
				static void _TextLecturer(int a, int b, int c, int d);
				static void _DesignAboutUs(int a, int b, int c, int d);
				static void _TextMessage();
				static void _TextVanneth(int a, int b, int c, int d);
				static void _TextDavid(int a, int b, int c, int d);
				static void _TextAboutVanneth();
				static void _TextAboutDavid();
		};

		class DesignBasketball{

		    public:

		        static void DesignInput(int a,int b,int c,int d);
				static void DesignOutput();
				static void _TextBasketballItem(int a,int b,int c,int d);
				static void _BasketballGround(int a,int b,int c,int d);
				static void GoalBasketball(int a,int b,int c,int d);
				static void _TextDeleteBasketball(int a,int b,int c,int d);
				static void _PlayerVolleyball(int a,int b,int c,int d);
				static void _TextBasketball(int a,int b,int c,int d);
				static void _TextSearchBasketball(int a,int b,int c,int d);

				//////////////////////////////////////////////////////////////////////////////////////////////
				///////////////////////////// DESIGN FOR MENU DNN SPORTS GROUND //////////////////////////////
				//////////////////////////////////////////////////////////////////////////////////////////////

				static void _DNNSPORTGROUND(int a,int b,int c,int d);
				static void _MenuGround(int a,int b);
				static void _TextANT(int a,int b,int c,int d);
				static void _TextDNN(int a,int b,int c,int d);
				static void _TextFutal(int a,int b,int c);
				static void _TextVolleyball(int a,int b,int c);
				static void _TextBasket(int a, int b, int c);
		};
		class DesignInvoice{

			public:
				static void _DesignMenuInvoice(int a,int b);
				static void _TextMenuInvoice(int a,int b);
				static void _ChooseShfit(int a,int b);
				static void _DesignInputInvoice(int a,int b);

		};
	};
}


//////////////////////////////////////////
/////     Futsal Design             /////
////////////////////////////////////////
void DNN::Design::Ground::DesignFutsal::RunTime(int a,int b)
{
	H::drawBoxDoubleLineWithBG(a,b,20,5,3);
	while(!kbhit())
	{
		H::setcolor(7);
		time_t currentTime = time(nullptr);
		tm* localTime = localtime(&currentTime);
		int hour = localTime->tm_hour;
		if(hour > 12 && hour < 24)
		{
			hour-=12;
		}
		if(hour == 0)
		{
			hour = 12;
		}
		H::gotoxy(a+2,b+4);
		cout << ""
		<< hour << ':'
		<< localTime->tm_min <<':'
		<< localTime->tm_sec;
		if(localTime->tm_hour > 12){
			cout<<" PM  ";
		}else
		{
			cout<<" AM  ";
		}

		int dayOfWeek = localTime->tm_wday;

		// Define an array of day names
		const char* dayNames[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
		H::gotoxy(a+2,b+2);
		cout << dayNames[dayOfWeek]<<'-'
			<< (localTime->tm_year + 1900) << '/'
			<< (localTime->tm_mon + 1) << '/'
			<< localTime->tm_mday << endl;
    }
}
void DNN::Design::Ground::DesignFutsal::FutsalInput()
{

	DNN::Design::Ground::DesignFutsal::TextInput(35,0);

    H::drawBoxDoubleLineWithBG(10,10,180,25,47);
	H::VLine(105,10,25,47,186);

	//goal left
	H::HLine(10,15,20,47,220);
	H::VLine(30,15,15,47,219);
	H::HLine(10,30,20,47,223);

	//goal Right
	H::HLine(170,15,20,47,223);
	H::VLine(170,14,15,47,219);
	H::HLine(170,29,20,47,220);
}

void DNN::Design::Ground::DesignFutsal::TextInput(int a,int b)
{

	H::setcolor(7);

	H::gotoxy(a,b);   cout<<R"(  _______  ____  ____  ___________  ________     __      ___            __    _____  ___     _______   ____  ____  ___________  )";
	H::gotoxy(a,b+1); cout<<R"( /"     "|("  _||_ " |("     _   ")/"       )   /""\    |"  |          |" \  (\"   \|"  \   |   __ "\ ("  _||_ " |("     _   ") )";
	H::gotoxy(a,b+2); cout<<R"((: ______)|   (  ) : | )__/  \\__/(:   \___/   /    \   ||  |          ||  | |.\\   \    |  (. |__) :)|   (  ) : | )__/  \\__/  )";
	H::gotoxy(a,b+3); cout<<R"( \/    |  (:  |  | . )    \\_ /    \___  \    /' /\  \  |:  |          |:  | |: \.   \\  |  |:  ____/ (:  |  | . )    \\_ /     )";
	H::gotoxy(a,b+4); cout<<R"( // ___)   \\ \__/ //     |.  |     __/  \\  //  __'  \  \  |___       |.  | |.  \    \. |  (|  /      \\ \__/ //     |.  |     )";
	H::gotoxy(a,b+5); cout<<R"((:  (      /\\ __ //\     \:  |    /" \   :)/   /  \\  \( \_|:  \      /\  |\|    \    \ | /|__/ \     /\\ __ //\     \:  |     )";
	H::gotoxy(a,b+6); cout<<R"( \__/     (__________)     \__|   (_______/(___/    \___)\_______)    (__\_|_)\___|\____\)(_______)   (__________)     \__|     )";
	H::HLine(a-5,b+7,135,5,220);

	///left
	H::VLine(a-30,b,7,5,219);
	H::VLine(a-25,b,7,5,219);
	H::VLine(a-20,b,7,5,219);
	H::VLine(a-15,b,7,5,219);
	H::VLine(a-10,b,7,5,219);

	///right
	H::VLine(a+140,b,7,5,219);
	H::VLine(a+145,b,7,5,219);
	H::VLine(a+150,b,7,5,219);
	H::VLine(a+155,b,7,5,219);
	H::VLine(a+160,b,7,5,219);
}

void DNN::Design::Ground::DesignFutsal::DesignOutput()
{
	//background
	H::setcursor(0,0);
	H::drawBoxDoubleLineWithBG(5,12,190,30,7);
	//Header
	H::drawBoxDoubleLineWithBG(5,9,190,1,7);
	H::drawBoxDoubleLineWithBG(5,44,190,1,79);
	for(int i=0;i<=30;i++){
		//left
		H::HLine(5,1,i+1,2,176);
		H::HLine(35-i,3,1,2,176);
		H::HLine(5,5,i+1,2,176);
		H::HLine(35-i,7,1,2,176);

		//right

		H::HLine(165,1,i+1,2,176);
		H::HLine(195-i,3,1,2,176);
		H::HLine(165,5,i+1,2,176);
		H::HLine(195-i,7,1,2,176);

		H::delay(5);
	}

}
void DNN::Design::Ground::DesignFutsal::TextOutput(int a,int b)
{

	H::setcolor(7);
	H::gotoxy(a,b);   cout<<R"(  ______ _    _ _______ _____         _         _____ _____   ____  _    _ _   _ _____  )";
	H::gotoxy(a,b+1); cout<<R"( |  ____| |  | |__   __/ ____|  /\   | |       / ____|  __ \ / __ \| |  | | \ | |  __ \ )";
	H::gotoxy(a,b+2); cout<<R"( | |__  | |  | |  | | | (___   /  \  | |      | |  __| |__) | |  | | |  | |  \| | |  | |)";
	H::gotoxy(a,b+3); cout<<R"( |  __| | |  | |  | |  \___ \ / /\ \ | |      | | |_ |  _  /| |  | | |  | | . ` | |  | |)";
	H::gotoxy(a,b+4); cout<<R"( | |    | |__| |  | |  ____) / ____ \| |____  | |__| | | \ \| |__| | |__| | |\  | |__| |)";
	H::gotoxy(a,b+5); cout<<R"( |_|     \____/   |_| |_____/_/    \_\______|  \_____|_|  \_\\____/ \____/|_| \_|_____/ )";

	for(int i=1;i<=97;i++){
		H::setcolor(2);
		H::gotoxy(a-5+i,b+7); cout<<char(178);
	}

}
void DNN::Design::Ground::DesignFutsal::TextSortNumber(int a,int b)
{
	H::setcolor(7);
	H::gotoxy(a,b);   cout<<R"(  ____   ___  ____ _____   _   _ _   _ __  __ ____  _____ ____  )";
	H::gotoxy(a,b+1); cout<<R"( / ___| / _ \|  _ \_   _| | \ | | | | |  \/  | __ )| ____|  _ \ )";
	H::gotoxy(a,b+2); cout<<R"( \___ \| | | | |_) || |   |  \| | | | | |\/| |  _ \|  _| | |_) |)";
	H::gotoxy(a,b+3); cout<<R"(  ___) | |_| |  _ < | |   | |\  | |_| | |  | | |_) | |___|  _ < )";
	H::gotoxy(a,b+4); cout<<R"( |____/ \___/|_| \_\|_|   |_| \_|\___/|_|  |_|____/|_____|_| \_\)";
	for(int i=1;i<=75;i++){
		H::setcolor(2);
		H::gotoxy(a-5+i,b+7); cout<<char(178);
	}

}

void DNN::Design::Ground::DesignFutsal::DesignSearch()
{
	H::drawBoxDoubleLineWithBG(18,14,30,3,47);
	H::setcolor(47);H::gotoxy(25,16);cout<<"S E A R C H";
	for(int i=0;i<140;i++){
		H::drawBoxDoubleLineWithBG(50,14,i,3,79);
	}
}
void DNN::Design::Ground::DesignFutsal::DesignUpdateStatus(int a,int b)
{
	H::setcursor(0,0);
	H::drawBoxDoubleLineWithBG(a-5,b,180,8,7);
	DNN::Design::Ground::DesignVolleyball::_TextUpdateVolleyballmenu(a+20,b+1,3,7);
	for(int i=1;i<=9;i++)
	{
		H::VLine(a,b+9,i,i,178);    H::delay(10);
		H::VLine(a+5,b+9,i,i,178);  H::delay(10);
		H::VLine(a+10,b+9,i,i,178); H::delay(10);
		H::VLine(a+15,b+9,i,i,178); H::delay(10);
		H::VLine(a+20,b+9,i,i,178); H::delay(10);
		H::VLine(a+25,b+9,i,i,178); H::delay(10);
		H::VLine(a+30,b+9,i,i,178); H::delay(10);

		H::VLine(a+141,b+9,i,i,178); H::delay(10);
		H::VLine(a+146,b+9,i,i,178);H::delay(10);
		H::VLine(a+151,b+9,i,i,178);H::delay(10);
		H::VLine(a+156,b+9,i,i,178);H::delay(10);
		H::VLine(a+161,b+9,i,i,178);H::delay(10);
		H::VLine(a+166,b+9,i,i,178);H::delay(10);
		H::VLine(a+171,b+9,i,i,178);H::delay(10);
		H::delay(5);
	}
	H::VLine(a+70,b+8,20,7,207);
	H::VLine(a+95,b+8,20,7,207);

	H::drawBoxDoubleLineWithBG(a+62,b+11,40,3,145);
	H::setcolor(159);H::gotoxy(a+65,b+13);cout<<"ENTER GROUND NUMBER  : ";

	H::drawBoxDoubleLineWithBG(a-10,b+18,190,3,7);
	H::drawBoxDoubleLineWithBG(a+3,b+23,3,18,135);
	H::drawBoxDoubleLineWithBG(a+162,b+23,3,18,135);
	H::HLine(a+1,b+43,7,136,219);
	H::HLine(a-1,b+44,11,136,219);
	H::HLine(a+160,b+43,7,136,219);
	H::HLine(a+158,b+44,11,136,219);

	// H::drawBoxDoubleLineWithBG(a+62,b+25,40,2,79);
}
void DNN::Design::Ground::DesignFutsal::Autronaut(int a,int b)
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
void DNN::Design::Ground::DesignFutsal::Star(int a,int b)
{
	H::gotoxy(a,b);  cout<<R"(       .        )";
	H::gotoxy(a,b+1);cout<<R"(  ---./|\.---   )";
	H::gotoxy(a,b+2);cout<<R"(  '._/ | \_.'   )";
	H::gotoxy(a,b+3);cout<<R"(_.-'_'.|.'_'-._ )";
	H::gotoxy(a,b+4);cout<<R"( '-._.'|'._.-'  )";
	H::gotoxy(a,b+5);cout<<R"(  .' \ | / '.   )";
	H::gotoxy(a,b+6);cout<<R"(  ---'\|/'---   )";
	H::gotoxy(a,b+7);cout<<R"(       '        )";
}

void DNN::Design::Ground::DesignFutsal::FootballTeam(int a,int b)
{
	H::setcolor(7);
	H::gotoxy(a,b);  cout<<R"(                                                                                        ,/)                )";
	H::gotoxy(a,b+1);cout<<R"(                                                                                        |_|                )";
	H::gotoxy(a,b+2);cout<<R"(        _        _        _        _        _        _        _        _        _       ].[       ,~,      )";
	H::gotoxy(a,b+3);cout<<R"(       |.|      |.|      |.|      |.|      |.|      |.|      |.|      |.|      |.|    /~`-'~\     |_|      )";
	H::gotoxy(a,b+4);cout<<R"(       ]^[      ]^[      ]^[      ]^[      ]^[      ]^[      ]^[      ]^[      ]^[   (<| 5 |>)    ]0[      )";
	H::gotoxy(a,b+5);cout<<R"(     /~/^\~\  /~`-'~\  /~`-'~\  /~`-'~\  /~`-'~\  /~`-'~\  /~`-'~\  /~`-'~\  /~`-'~\  \|___|/   ,-`^'~\    )";
	H::gotoxy(a,b+6);cout<<R"(    {<| 10|>}{<| 11|>}{<| 6 |>}{<| 8 |>}{<| 3 |>}{<| 7 |>}{<| 9 |>}{<| 4 |>}{<| 2 |>} {/   \}  {<| 1 |>}   )";
	H::gotoxy(a,b+7);cout<<R"(     \|___|/  \|___|/  \|___|/  \|___|/  \|___|/  \|___|/  \|___|/  \|___|/  \|___|/  /__1__\   \|,__|/    )";
	H::gotoxy(a,b+8);cout<<R"(    /\    \    /   \    /   \    /   \    /   \    /   \    /   \    /   \    /   \   | / \ |   {/ \  /    )";
	H::gotoxy(a,b+9);cout<<R"(    |/>/|__\  /__|__\  /__|__\  /__|__\  /__|__\  /__|__\  /__|__\  /__|__\  /__|__\  |/   \|   /__|\/\    )";
	H::gotoxy(a,b+10);cout<<R"(    |)   \ |  | / \ |  | / \ |  | / \ |  | / \ |  | / \ |  | / \ |  | / \ |  | / \ |  {}   {}   | / \ |    )";
	H::gotoxy(a,b+11);cout<<R"(   (_|    \)  (/   \)  (/   \)  (/   \)  (/   \)  (/   \)  (/   \)  (/   \)  (/   \)  |)   (|   (/   \)    )";
	H::gotoxy(a,b+12);cout<<R"(   / \    (|  |)   (|  |)   (|  |)   (|  |)   (|  |)   (|  |)   (|  |)   (|  |)   (|  ||   ||  _|)   (|_   )";
	H::gotoxy(a,b+13);cout<<R"(.,.\_/,..,|,)(.|,.,|,)(,|,.,|.)(.|,.,|,)(,|,.,|.)(.|,.,|,)(,|,.,|.)(.|,.,|,)(,|,.,|.)(.|.,.|,)(.,|.,.|,.),.,.)";
}
void DNN::Design::Ground::DesignFutsal::SearchWall(int a,int b,int c,int d,int e)
{
	H::drawBoxDoubleLineWithBG(a-25,b+5,190,30,7);H::delay(20);

	H::VLine(a-20,b,5,6,207);H::delay(20);
	H::VLine(a-15,b,5,6,207);H::delay(20);
	H::VLine(a-10,b,5,6,207);H::delay(20);

	H::VLine(a+160,b,5,6,207);H::delay(20);
	H::VLine(a+155,b,5,6,207);H::delay(20);
	H::VLine(a+150,b,5,6,207);H::delay(20);

	H::HLine(a-25,b-8,190,d,219);H::delay(20);
	H::HLine(a-25,b+1,190,d,219);H::delay(20);
	DNN::Design::Ground::DesignVolleyball::_TextSeachRecord(a,b-7,7,3);
	// H::drawBoxDoubleLineWithBG(a-25,b+13,190,3,3);H::delay(20);
	H::drawBoxDoubleLineWithBG(a-10,b+7,26,1,255);H::delay(20);
	H::drawBoxDoubleLineWithBG(a+20,b+7,26,1,153); H::delay(20);
	// H::HLine(a-10,b+15,160,7,222);H::delay(20);
	H::HLine(a+50,b+8,100,7,176);H::delay(20);

}
void DNN::Design::Ground::DesignFutsal::Groud_Field(int a,int b)
{
	H::setcolor(2);
	H::gotoxy(a,b);  cout<<R"(  ___________________________ )";H::delay(20);
	H::gotoxy(a,b+1);cout<<R"( |             |             |)";H::delay(20);
	H::gotoxy(a,b+2);cout<<R"( |___          |          ___|)";H::delay(20);
	H::gotoxy(a,b+3);cout<<R"( |_  |         |         |  _|)";H::delay(20);
	H::gotoxy(a,b+4);cout<<R"(.| | |.       ,|.       .| | |.)";H::delay(20);
	H::gotoxy(a,b+5);cout<<R"(|| | | )     ( | )     ( | | ||)";H::delay(20);
	H::gotoxy(a,b+6);cout<<R"('|_| |'       `|'       `| |_|')";H::delay(20);
	H::gotoxy(a,b+7);cout<<R"( |___|         |         |___|)";H::delay(20);
	H::gotoxy(a,b+8);cout<<R"( |             |             |)";H::delay(20);
	H::gotoxy(a,b+9);cout<<R"( |_____________|_____________|)";H::delay(20);


}

void DNN::Design::Ground::DesignFutsal::DesignDelete(int a,int b,int c)
{
	H::setcursor(0,0);
	H::drawBoxDoubleLineWithBG(a-2,b-1,194,42,0);
	H::drawBoxDoubleLineWithBG(a,b,190,40,0);
	H::drawBoxDoubleLineWithBG(a+2,b+1,186,38,0);
	H::drawBoxDoubleLineWithBG(a+10,b+15,60,20,7);
	H::HLine(a+10,b+12,170,1,176);
	H::VLine(a+95,b+15,20,3,206);
	H::drawBoxDoubleLineWithBG(a+10,b+15,29,1,87);
	H::setcolor(87); H::gotoxy(a+13,b+16); cout << " ENTER NUMBER OF FUTSAL ";
	H::drawBoxDoubleLineWithBG(a+41,b+15,29,1,159);
	_PicTrash(a+120,b+15);
	_TexDNN(a+20,b+22,c);

}
void DNN::Design::Ground::DesignFutsal::_PicTrash(int a,int b)
{
	H::setcolor(2);
	H::gotoxy(a,b);   cout<<R"(                             ___        )";H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(                          __//_\\__     )";H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(    ___________        _-~  ~   ~  ~-_  )";H::delay(20);
	H::gotoxy(a,b+3); cout<<R"(,-~~           ~~-,  ,/               \,)";H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(`-__ ,-  ,-  ,-__-'  `-__           __-')";H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(|   ~~~~~~~~~~~   |  |   ~~~~~~~~~~~   |)";H::delay(20);
	H::gotoxy(a,b+6); cout<<R"(| ,-   _    _  ,- |  | ,-   _    _  ,- |)";H::delay(20);
	H::gotoxy(a,b+7); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+8); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+9); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+10); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+11); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+12); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+13); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+14); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+15); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+16); cout<<R"(| |   |    |   |  |  | |   |    |   |  |)";H::delay(20);
	H::gotoxy(a,b+17); cout<<R"(| `-  `_   `_  `- |  | `-  `_   `_  `- |)";H::delay(20);
	H::gotoxy(a,b+18); cout<<R"(`-__           __-'  `-__           __-')";H::delay(20);
	H::gotoxy(a,b+19); cout<<R"(    ~~~~~~~~~~~          ~~~~~~~~~~~)";
}

void DNN::Design::Ground::DesignFutsal::_TexDNN(int a,int b,int c)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"( _ .-') _       .-') _      .-') _  )";H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(( (  OO) )     ( OO ) )    ( OO ) ) )";H::delay(20);
	H::gotoxy(a,b+2); cout<<R"( \     .'_ ,--./ ,--,' ,--./ ,--,'  )";H::delay(20);
	H::gotoxy(a,b+3); cout<<R"( ,`'--..._)|   \ |  |\ |   \ |  |\  )";H::delay(20);
	H::gotoxy(a,b+4); cout<<R"( |  |  \  '|    \|  | )|    \|  | ) )";H::delay(20);
	H::gotoxy(a,b+5); cout<<R"( |  |   ' ||  .     |/ |  .     |/  )";H::delay(20);
	H::gotoxy(a,b+6); cout<<R"( |  |   / :|  |\    |  |  |\    |   )";H::delay(20);
	H::gotoxy(a,b+7); cout<<R"( |  '--'  /|  | \   |  |  | \   |   )";H::delay(20);
	H::gotoxy(a,b+8); cout<<R"( `-------' `--'  `--'  `--'  `--'   )";H::delay(20);

}

void DNN::Design::Ground::DesignFutsal::_TextDeleteFutsal(int a,int b)
{
	H::setcolor(7);
	H::gotoxy(a,b);   cout<<R"( ________    _______  ___       _______  ___________  _______       _______  ____  ____  ___________  ________     __      ___       )";H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(|"      "\  /"     "||"  |     /"     "|("     _   ")/"     "|     /"     "|("  _||_ " |("     _   ")/"       )   /""\    |"  |      )";H::delay(20);
	H::setcolor(3);
	H::gotoxy(a,b+2); cout<<R"((.  ___  :)(: ______)||  |    (: ______) )__/  \\__/(: ______)    (: ______)|   (  ) : | )__/  \\__/(:   \___/   /    \   ||  |      )";H::delay(20);
	H::gotoxy(a,b+3); cout<<R"(|: \   ) || \/    |  |:  |     \/    |      \\_ /    \/    |       \/    |  (:  |  | . )    \\_ /    \___  \    /' /\  \  |:  |      )";H::delay(20);
	H::setcolor(7);
	H::gotoxy(a,b+4); cout<<R"((| (___\ || // ___)_  \  |___  // ___)_     |.  |    // ___)_      // ___)   \\ \__/ //     |.  |     __/  \\  //  __'  \  \  |___   )";H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(|:       :)(:      "|( \_|:  \(:      "|    \:  |   (:      "|    (:  (      /\\ __ //\     \:  |    /" \   :)/   /  \\  \( \_|:  \  )";H::delay(20);
	H::gotoxy(a,b+6); cout<<R"((________/  \_______) \_______)\_______)     \__|    \_______)     \__/     (__________)     \__|   (_______/(___/    \___)\_______) )";H::delay(20);
}

void DNN::Design::Ground::DesignFutsal::_FutsalHomeScreen(int a,int b,int c)
{
	H::drawBoxDoubleLineWithBG(a-5,b-1,180,7,2);
	H::VLine(a,b+7,28,2,178);     H::delay(20);
	H::VLine(a+170,b+7,28,2,178); H::delay(20);

	H::VLine(a+9,b+15,22,3,178);   H::delay(20);
	H::VLine(a+32,b+15,22,3,178);  H::delay(20);

	H::VLine(a+142,b+15,22,3,178); H::delay(20);
	H::VLine(a+162,b+15,22,3,178); H::delay(20);

	H::VLine(a+40,b+20,15,1,178);  H::delay(20);
	H::VLine(a+60,b+20,15,1,178);  H::delay(20);

	H::VLine(a+110,b+20,15,1,178); H::delay(20);
	H::VLine(a+130,b+20,15,1,178); H::delay(20);

	H::VLine(a+50,b+27,10,6,178);  H::delay(20);
	H::VLine(a+70,b+27,10,6,178);  H::delay(20);

	H::VLine(a+100,b+27,10,7,178); H::delay(20);
	H::VLine(a+120,b+27,10,7,178); H::delay(20);

	H::VLine(a+85,b+11,25,7,178); H::delay(20);

	H::drawBoxDoubleLineWithBG(a-5,b+35,180,1,135); H::delay(20);
}
void DNN::Design::Ground::DesignFutsal::_TextFutsalMenu(int a,int b)
{
	H::setcolor(7);
	H::gotoxy(a,b);   cout<<R"( ________  _____  _____  _________   ______        _       _____      ____    ____  ________  ____  _____  _____  _____  )";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(|_   __  ||_   _||_   _||  _   _  |.' ____ \      / \     |_   _|    |_   \  /   _||_   __  ||_   \|_   _||_   _||_   _| )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(  | |_ \_|  | |    | |  |_/ | | \_|| (___ \_|    / _ \      | |        |   \/   |    | |_ \_|  |   \ | |    | |    | |   )";	H::delay(20);
	H::setcolor(3);
	H::gotoxy(a,b+3); cout<<R"(  |  _|     | '    ' |      | |     _.____`.    / ___ \     | |   _    | |\  /| |    |  _| _   | |\ \| |    | '    ' |   )";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"( _| |_       \ \__/ /      _| |_   | \____) | _/ /   \ \_  _| |__/ |  _| |_\/_| |_  _| |__/ | _| |_\   |_    \ \__/ /    )";	H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(|_____|       `.__.'      |_____|   \______.'|____| |____||________| |_____||_____||________||_____|\____|    `.__.'     )";	H::delay(20);
}

void DNN::Design::Ground::DesignFutsal::_MenuUpdateFutsal(int a,int b)
{
	H::setcursor(0,0);
	H::drawBoxDoubleLineWithBG(a,b,180,40,7);
	H::HLine(a+5,b+10,170,3,207);

	H::VLine(a+16,b+10,3,7,207);  H::delay(20);
	H::VLine(a+44,b+10,3,7,207);  H::delay(20);
	H::VLine(a+10,b+13,23,6,207); H::delay(20);
	H::VLine(a+20,b+13,20,7,207); H::delay(20);
	H::VLine(a+40,b+13,20,7,207); H::delay(20);
	H::VLine(a+50,b+13,23,6,207); H::delay(20);
	H::HLine(a+9,b+36,41,6,207);  H::delay(20);
	H::HLine(a+9,b+13,41,6,207);  H::delay(20);
	H::HLine(a+11,b+13,37,7,219); H::delay(20);
	H::HLine(a+13,b+13,33,5,219); H::delay(20);
	H::setcolor(223);H::gotoxy(a+25,b+13); cout<<"M E N U";

	H::VLine(a+76,b+10,3,7,207);   H::delay(20);
	H::VLine(a+104,b+10,3,7,207);  H::delay(20);
	H::VLine(a+70,b+13,23,7,207);  H::delay(20);
	H::VLine(a+80,b+13,15,7,207);  H::delay(20);
	H::VLine(a+100,b+13,15,7,207); H::delay(20);
	H::VLine(a+110,b+13,23,7,207); H::delay(20);
	H::HLine(a+69,b+36,41,6,207);  H::delay(20);
	H::HLine(a+69,b+13,41,6,207);  H::delay(20);
	H::HLine(a+71,b+13,37,7,219);  H::delay(20);
	H::HLine(a+73,b+13,33,1,219);  H::delay(20);
	H::setcolor(151);H::gotoxy(a+83,b+13); cout<<"T E A M -> A ";

	H::VLine(a+136,b+10,3,7,207);  H::delay(20);
	H::VLine(a+164,b+10,3,7,207);  H::delay(20);
	H::VLine(a+130,b+13,23,7,207); H::delay(20);
	H::VLine(a+140,b+13,20,7,207); H::delay(20);
	H::VLine(a+160,b+13,20,7,207); H::delay(20);
	H::VLine(a+170,b+13,23,7,207); H::delay(20);
	H::HLine(a+129,b+36,41,6,207); H::delay(20);
	H::HLine(a+129,b+13,41,6,207); H::delay(20);
	H::HLine(a+131,b+13,37,7,219); H::delay(20);
	H::HLine(a+133,b+13,33,1,219); H::delay(20);
	H::setcolor(151);H::gotoxy(a+143,b+13); cout<<"T E A M -> B ";

	H::drawBoxDoubleLineWithBG(a+15,b+16,30,1,87);
	H::drawBoxDoubleLineWithBG(a+15,b+21,30,1,87);
	H::drawBoxDoubleLineWithBG(a+15,b+26,30,1,87);
	H::drawBoxDoubleLineWithBG(a+15,b+31,30,1,87);
	H::gotoxy(a+18,b+17); cout<<"0. U P D A T E A L L";
	H::gotoxy(a+18,b+22); cout<<"1. S T A T U S";
	H::gotoxy(a+18,b+27); cout<<"2. D A T E";
	H::gotoxy(a+18,b+32); cout<<"3. P R I C E";

	H::drawBoxDoubleLineWithBG(a+74,b+16,31,1,31);
	H::drawBoxDoubleLineWithBG(a+74,b+21,31,1,31);
	H::drawBoxDoubleLineWithBG(a+74,b+26,31,1,31);
	H::gotoxy(a+77,b+17); cout<<"4. HOME -> [ 3-5 ]";
	H::gotoxy(a+77,b+22); cout<<"6. HOME -> [ 5-7 ]";
	H::gotoxy(a+77,b+27); cout<<"8. HOME -> [ 7-9 ]";

	H::drawBoxDoubleLineWithBG(a+134,b+16,31,1,31);
	H::drawBoxDoubleLineWithBG(a+134,b+21,31,1,31);
	H::drawBoxDoubleLineWithBG(a+134,b+26,31,1,31);
	H::drawBoxDoubleLineWithBG(a+134,b+31,31,1,31);
	H::gotoxy(a+137,b+17); cout<<"5. AWAY -> [ 3-5 ]";
	H::gotoxy(a+137,b+22); cout<<"7. AWAY -> [ 5-7 ]";
	H::gotoxy(a+137,b+27); cout<<"9. AWAY -> [ 7-9 ]";
	H::gotoxy(a+136,b+32); cout<<"[ ESC ] -> [ B A C K ]";

	// _TextUpdateFutsal(a+10,b+2);

}
void DNN::Design::Ground::DesignFutsal::_TextUpdateFutsal(int a,int b)
{
	H::setcolor(3);H::setcursor(0,0);
	H::gotoxy(a,b);   cout<<R"( ____  ____    _______   ________       __  ___________  _______       _______  ____  ____  ___________  ________     __      ___                       )";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(("  _||_ " |  |   __ "\ |"      "\     /""\("     _   ")/"     "|     /"     "|("  _||_ " |("     _   ")/"       )   /""\    |"  |             __       )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(|   (  ) : |  (. |__) :)(.  ___  :)   /    \)__/  \\__/(: ______)    (: ______)|   (  ) : | )__/  \\__/(:   \___/   /    \   ||  |          .'".'"'.    )";	H::delay(20);
	H::setcolor(6);
	H::gotoxy(a,b+3); cout<<R"((:  |  | . )  |:  ____/ |: \   ) ||  /' /\  \  \\_ /    \/    |       \/    |  (:  |  | . )    \\_ /    \___  \    /' /\  \  |:  |         :._.""._.:   )";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"( \\ \__/ //   (|  /     (| (___\ || //  __'  \ |.  |    // ___)_      // ___)   \\ \__/ //     |.  |     __/  \\  //  __'  \  \  |___      :  \__/  :   )";	H::delay(20);
	H::setcolor(7);
	H::gotoxy(a,b+5); cout<<R"( /\\ __ //\  /|__/ \    |:       :)/   /  \\  \\:  |   (:      "|    (:  (      /\\ __ //\     \:  |    /" \   :)/   /  \\  \( \_|:  \      './  \.'    )";	H::delay(20);
	H::gotoxy(a,b+6); cout<<R"((__________)(_______)   (________/(___/    \___)\__|    \_______)     \__/     (__________)     \__|   (_______/(___/    \___)\_______)        ""       )";	H::delay(20);
}
void DNN::Design::Ground::DesignFutsal::_MenuSort(int a,int b)
{
	H::setcursor(0,0);
	H::drawBoxDoubleLineWithBG(a,b,190,42,0);
	H::drawBoxDoubleLineWithBG(a+2,b+1,186,40,0);

	H::HLine(a+25,b+15,140,3,175); H::delay(20);

	H::VLine(a+15,b+12,5,5,178);  H::delay(20);
	H::VLine(a+20,b+12,5,5,178);  H::delay(20);
	H::VLine(a+25,b+12,5,5,178);  H::delay(20);

	H::VLine(a+175,b+12,5,5,178); H::delay(20);
	H::VLine(a+170,b+12,5,5,178); H::delay(20);
	H::VLine(a+165,b+12,5,5,178); H::delay(20);

	H::drawBoxDoubleLineWithBG(a+5,b+2,180,10,7);
	H::drawBoxDoubleLineWithBG(a+5,b+17,180,23,7);

	H::VLine(a+20,b+17,5,7,207);   H::delay(20);
	H::VLine(a+40,b+17,5,7,207);   H::delay(20);
	H::VLine(a+150,b+17,5,7,207);  H::delay(20);
	H::VLine(a+170,b+17,5,7,207);  H::delay(20);

	H::VLine(a+35,b+21,5,7,207);  	H::delay(20);
	H::VLine(a+55,b+17,10,7,207);   H::delay(20);
	H::VLine(a+155,b+21,5,7,207);   H::delay(20);
	H::VLine(a+135,b+17,10,7,207);  H::delay(20);

	H::VLine(a+50,b+26,5,7,207);    H::delay(20);
	H::VLine(a+70,b+17,15,7,207);   H::delay(20);
	H::VLine(a+140,b+26,5,7,207);   H::delay(20);
	H::VLine(a+120,b+17,15,7,207);  H::delay(20);

	H::VLine(a+65,b+31,5,7,207);    H::delay(20);
	H::VLine(a+85,b+17,20,7,207);   H::delay(20);
	H::VLine(a+125,b+31,5,7,207);   H::delay(20);
	H::VLine(a+105,b+17,20,7,207);  H::delay(20);

	H::drawBoxDoubleLineWithBG(a+15,b+21,30,1,39);
	H::drawBoxDoubleLineWithBG(a+145,b+21,30,1,39);

	H::gotoxy(a+17,b+22);  cout << "1. NUMBER -> [ ASC ]";
	H::gotoxy(a+147,b+22); cout << "2. NUMBER -> [ DESC ]";

	H::drawBoxDoubleLineWithBG(a+30,b+26,30,1,87);
	H::drawBoxDoubleLineWithBG(a+130,b+26,30,1,87);

	H::gotoxy(a+32,b+27);  cout << "3.PRICE -> [ ASC ]";
	H::gotoxy(a+132,b+27); cout << "4. PRICE -> [ DESC ]";

	H::drawBoxDoubleLineWithBG(a+45,b+31,30,1,31);
	H::drawBoxDoubleLineWithBG(a+115,b+31,30,1,31);

	H::gotoxy(a+47,b+32);  cout << "5. DATE -> [ ASC ]";
	H::gotoxy(a+117,b+32); cout << "6. DATE -> [ DESC ]";

	H::drawBoxDoubleLineWithBG(a+60,b+36,30,1,71);
	H::drawBoxDoubleLineWithBG(a+100,b+36,30,1,71);

	H::gotoxy(a+62,b+37);  cout << "7.STATUS -> [ ASC ]";
	H::gotoxy(a+102,b+37); cout << "8. STATUS -> [ DESC ]";

	H::drawBoxDoubleLineWithBG(a+79,b+21,30,1,103);
	H::gotoxy(a+81,b+22); 	H::setcolor(105); cout<<"[ ESC ] ->"; H::setcolor(103); cout << "  BACK MENU.";

	H::gotoxy(a+10,b+39); H::setcolor(7);  cout << "PRESS [ "; H::setcolor(5); cout << "NUMBER"; H::setcolor(7); cout << " ] TO CHOOSE ONE OPTION.";
}
void DNN::Design::Ground::DesignFutsal::_TextSortData(int a,int b)
{
	H::setcolor(3);
	H::gotoxy(a,b);   cout<<R"(   _____  ____  _____ _______   ______ _    _ _______ _____         _         _____ _____   ____  _    _ _   _ _____  )";H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(  / ____|/ __ \|  __ \__   __| |  ____| |  | |__   __/ ____|  /\   | |       / ____|  __ \ / __ \| |  | | \ | |  __ \ )";H::delay(20);
	H::gotoxy(a,b+2); cout<<R"( | (___ | |  | | |__) | | |    | |__  | |  | |  | | | (___   /  \  | |      | |  __| |__) | |  | | |  | |  \| | |  | |)";H::delay(20);
	H::setcolor(7);
	H::gotoxy(a,b+3); cout<<R"(  \___ \| |  | |  _  /  | |    |  __| | |  | |  | |  \___ \ / /\ \ | |      | | |_ |  _  /| |  | | |  | | . ` | |  | |)";H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(  ____) | |__| | | \ \  | |    | |    | |__| |  | |  ____) / ____ \| |____  | |__| | | \ \| |__| | |__| | |\  | |__| |)";H::delay(20);
	H::setcolor(3);
	H::gotoxy(a,b+5); cout<<R"( |_____/ \____/|_|  \_\ |_|    |_|     \____/   |_| |_____/_/    \_\______|  \_____|_|  \_\\____/ \____/|_| \_|_____/ )";H::delay(20);
}
void DNN::Design::Ground::DesignFutsal::_SearchMenu(int a,int b)
{
	H::setcursor(0,0);
	H::drawBoxDoubleLineWithBG(a,b,3,25,255);
	H::drawBoxDoubleLineWithBG(a+170,b,3,25,255);

	H::VLine(a+2,b+1,24,241,223);   H::delay(20);
	H::VLine(a+172,b+1,24,241,223); H::delay(20);

	H::HLine(a-4,b+27,11,0,219);    H::delay(20);
	H::HLine(a-2,b+26,7,0,219);     H::delay(20);

	H::HLine(a-4,b-2,11,3,219);     H::delay(20);
	H::HLine(a-2,b-1,7,3,219);      H::delay(20);

	H::HLine(a+166,b-2,11,3,219);   H::delay(20);
	H::HLine(a+168,b-1,7,3,219);    H::delay(20);

	H::HLine(a+166,b+27,11,0,219);  H::delay(20);
	H::HLine(a+168,b+26,7,0,219);   H::delay(20);

	H::HLine(a-10,b-3,193,7,219);   H::delay(20);
	H::HLine(a-10,b-14,193,7,219);  H::delay(20);

	H::drawBoxDoubleLineWithBG(a+30,b+6,20,12,7);
	H::drawBoxDoubleLineWithBG(a+60,b+6,20,12,7);
	H::drawBoxDoubleLineWithBG(a+90,b+6,20,12,7);
	H::drawBoxDoubleLineWithBG(a+120,b+6,20,12,7);

	_TextNumber1(a+33,b+8);
	_TextNumber2(a+63,b+8);
	_TextNumber3(a+95,b+9);
	_TextESC(a+123,b+10);

	H::VLine(a+40,b-3,8,7,207);   H::delay(20);
	H::VLine(a+70,b-3,8,7,207);   H::delay(20);
	H::VLine(a+100,b-3,8,7,207);   H::delay(20);
	H::VLine(a+130,b-3,8,7,207);   H::delay(20);

	H::HLine(a+32,b+6,16,7,219);   H::delay(20);
	H::HLine(a+34,b+6,12,2,219);   H::delay(20);

	H::HLine(a+62,b+6,16,7,219);   H::delay(20);
	H::HLine(a+64,b+6,12,2,219);   H::delay(20);

	H::HLine(a+92,b+6,16,7,219);   H::delay(20);
	H::HLine(a+94,b+6,12,2,219);   H::delay(20);

	H::HLine(a+122,b+6,16,7,219);   H::delay(20);
	H::HLine(a+124,b+6,12,2,219);   H::delay(20);

	H::setcolor(164);H::gotoxy(a+36,b+6); cout<<"P R I C E";
	H::setcolor(164);H::gotoxy(a+65,b+6); cout<<"N U M B E R";
	H::setcolor(164);H::gotoxy(a+96,b+6); cout<<"S T A T U S";
	H::setcolor(164);H::gotoxy(a+125,b+6); cout<<"B A C K";
}
void DNN::Design::Ground::DesignFutsal::_TextSearchMenu(int a,int b)
{
	H::setcolor(3);
	H::gotoxy(a,b+1); cout<<R"(   _____ ______          _____   _____ _    _   ______ _    _ _______ _____         _         _____ _____   ____  _    _ _   _ _____  )";H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(  / ____|  ____|   /\   |  __ \ / ____| |  | | |  ____| |  | |__   __/ ____|  /\   | |       / ____|  __ \ / __ \| |  | | \ | |  __ \ )";H::delay(20);
	H::setcolor(7);
	H::gotoxy(a,b+3); cout<<R"( | (___ | |__     /  \  | |__) | |    | |__| | | |__  | |  | |  | | | (___   /  \  | |      | |  __| |__) | |  | | |  | |  \| | |  | |)";H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(  \___ \|  __|   / /\ \ |  _  /| |    |  __  | |  __| | |  | |  | |  \___ \ / /\ \ | |      | | |_ |  _  /| |  | | |  | | . ` | |  | |)";H::delay(20);
	H::setcolor(3);
	H::gotoxy(a,b+5); cout<<R"(  ____) | |____ / ____ \| | \ \| |____| |  | | | |    | |__| |  | |  ____) / ____ \| |____  | |__| | | \ \| |__| | |__| | |\  | |__| |)";H::delay(20);
	H::gotoxy(a,b+6); cout<<R"( |_____/|______/_/    \_\_|  \_\\_____|_|  |_| |_|     \____/   |_| |_____/_/    \_\______|  \_____|_|  \_\\____/ \____/|_| \_|_____/ )";H::delay(20);
}

void DNN::Design::Ground::DesignFutsal::_TextNumber1(int a,int b)
{
	H::setcolor(3);
	H::gotoxy(a,b);   cout<<R"(     __       )";H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(...-'  |`.    )";H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(|      |  |   )";H::delay(20);
	H::gotoxy(a,b+3); cout<<R"(....   |  |   )";H::delay(20);
	H::setcolor(7);
	H::gotoxy(a,b+4); cout<<R"(  -|   |  |   )";H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(   |   |  |   )";H::delay(20);
	H::gotoxy(a,b+6); cout<<R"(...'   `--'   )";H::delay(20);
	H::setcolor(3);
	H::gotoxy(a,b+7); cout<<R"(|         |`. )";H::delay(20);
	H::gotoxy(a,b+8); cout<<R"(` --------\ | )";H::delay(20);
	H::gotoxy(a,b+9); cout<<R"( `---------'  )";H::delay(20);
}

void DNN::Design::Ground::DesignFutsal::_TextNumber2(int a,int b)
{
	H::setcolor(3);
	H::gotoxy(a,b);   cout<<R"(    .`````-.   )";H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(   /   ,-.  \  )";H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(  (___/  |   | )";H::delay(20);
	H::setcolor(7);
	H::gotoxy(a,b+3); cout<<R"(        .'  /  )";H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(    _.-'_.-'   )";H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(  _/_  .'      )";H::delay(20);
	H::setcolor(3);
	H::gotoxy(a,b+6); cout<<R"( ( ' )(__..--. )";H::delay(20);
	H::gotoxy(a,b+7); cout<<R"((_{;}_)      | )";H::delay(20);
	H::gotoxy(a,b+8); cout<<R"( (_,_)-------' )";H::delay(20);


}

void DNN::Design::Ground::DesignFutsal::_TextNumber3(int a,int b)
{
	H::setcolor(3);
	H::gotoxy(a,b);   cout<<R"(  _______  )";H::delay(20);
	H::gotoxy(a,b+1); cout<<R"( /" __   ) )";H::delay(20);
	H::gotoxy(a,b+2); cout<<R"((__/ _) ./ )";H::delay(20);
	H::setcolor(7);
	H::gotoxy(a,b+3); cout<<R"(    /  //  )";H::delay(20);
	H::gotoxy(a,b+4); cout<<R"( __ \_ \\  )";H::delay(20);
	H::setcolor(3);
	H::gotoxy(a,b+5); cout<<R"((: \__) :\ )";H::delay(20);
	H::gotoxy(a,b+6); cout<<R"( \_______) )";H::delay(20);
}
void DNN::Design::Ground::DesignFutsal::_TextESC(int a,int b)
{
	H::setcolor(3);
	H::gotoxy(a,b+1); cout<<R"(  ___ ___  ___ )";H::delay(20);
	H::gotoxy(a,b+2); cout<<R"( | __/ __|/ __|)";H::delay(20);
	H::setcolor(7);
	H::gotoxy(a,b+3); cout<<R"( | _|\__ \ (__ )";H::delay(20);
	H::gotoxy(a,b+4); cout<<R"( |___|___/\___|)";H::delay(20);
}

void DNN::Design::Ground::DesignFutsal::_DesignSearch(int a,int b)
{
	H::drawBoxSingleLine(a,b,90,40,7);
	H::HLine(a+5,b+10,80,7,219);
	_SeachText(a+5,b+2);
	H::drawBoxDoubleLineWithBG(a+20,b+15,50,18,7);
	H::drawBoxDoubleLineWithBG(a+15,b+30,60,3,7);
	_TextSearchDNN(a+12,b+18);

	H::drawBoxSingleLine(a+95,b,90,40,7);
	H::HLine(a+100,b+10,80,7,219);
	_ResultText(a+103,b+2);
	_EmojiSearch(a+100,b+20);
	_EmojiUpdate(a+130,b+17);
}

void DNN::Design::Ground::DesignFutsal::_SeachText(int a,int b)
{

	H::setcolor(2); H::gotoxy(a+5,b++); cout << R"(  ________  _______       __        _______    ______    __    __  )";
	H::setcolor(2); H::gotoxy(a+5,b++); cout << R"( /"       )/"     "|     /""\      /"      \  /" _  "\  /" |  | "\ )";
	H::setcolor(3); H::gotoxy(a+5,b++); cout << R"((:   \___/(: ______)    /    \    |:        |(: ( \___)(:  (__)  :))";
	H::setcolor(3); H::gotoxy(a+5,b++); cout << R"( \___  \   \/    |     /' /\  \   |_____/   ) \/ \      \/      \/ )";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"(  __/  \\  // ___)_   //  __'  \   //      /  //  \ _   //  __  \\ )";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"( /" \   :)(:      "| /   /  \\  \ |:  __   \ (:   _) \ (:  (  )  :))";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"((_______/  \_______)(___/    \___)|__|  \___) \_______) \__|  |__/ )";

}

void DNN::Design::Ground::DesignFutsal::_ResultText(int a,int b)
{

	H::setcolor(5); H::gotoxy(a+5,b++); cout << R"(  _______    _______   ________  ____  ____  ___  ___________ )";
	H::setcolor(5); H::gotoxy(a+5,b++); cout << R"( /"      \  /"     "| /"       )("  _||_ " ||"  |("     _   "))";
	H::setcolor(5); H::gotoxy(a+5,b++); cout << R"(|:        |(: ______)(:   \___/ |   (  ) : |||  | )__/  \\__/ )";
	H::setcolor(3); H::gotoxy(a+5,b++); cout << R"(|_____/   ) \/    |   \___  \   (:  |  | . )|:  |    \\_ /    )";
	H::setcolor(3); H::gotoxy(a+5,b++); cout << R"( //      /  // ___)_   __/  \\   \\ \__/ //  \  |___ |.  |    )";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"(|:  __   \ (:      "| /" \   :)  /\\ __ //\ ( \_|:  \\:  |    )";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"(|__|  \___) \_______)(_______/  (__________) \_______)\__|    )";

}


void DNN::Design::Ground::DesignFutsal::_EmojiSearch(int a,int b)
{
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(         o  o   o  o       )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(         |\/ \^/ \/|       )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(         |,-------.|       )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(       ,-.(|)   (|),-.     )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(       \_*._ ' '_.* _/     )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(        /`-.`--' .-'\      )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(   ,--./    `---'    \,--. )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(   \   |(  )     (  )|   / )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(    \  | ||       || |  /  )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(     \ | /|\     /|\ | /   )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(     /  \-._     _,-/  \   )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(    //| \\  `---'  // |\\  )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(   /,-.,-.\       /,-.,-.\ )";
	H::setcolor(2); H::gotoxy(a+15,b++); cout << R"(  o   o   o      o   o    o)";
}


void DNN::Design::Ground::DesignFutsal::_EmojiUpdate(int a,int b)
{
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(          /\/\/\/\        )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(         /       /        )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(        (. (.  )          )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(         (      ]         )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(        /____  /          )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(         \     |          )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(         /-----\          )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(       / /     /  \       )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(     / \/       \/  \     )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(   / / /           \  \   )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"( ((()  /__________\ (/\))))";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(        /         \       )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(        |    /\    \      )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(        ----| |----       )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(        |__ |  \__ \      )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(       {____|   {___}     )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(=======================/  )";
}

void DNN::Design::Ground::DesignFutsal::_TextSearchDNN(int a,int b)
{

	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(              .-._        .-._        )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"(   _,..---._ /==/ \  .-._/==/ \  .-._ )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"( /==/,   -  \|==|, \/ /, /==|, \/ /, /)";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"( |==|   _   _\==|-  \|  ||==|-  \|  | )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"( |==|  .=.   |==| ,  | -||==| ,  | -| )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"( |==|,|   | -|==| -   _ ||==| -   _ | )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"( |==|  '='   /==|  /\ , ||==|  /\ , | )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"( |==|-,   _`//==/, | |- |/==/, | |- | )";
	H::setcolor(3); H::gotoxy(a+15,b++); cout << R"( `-.`.____.' `--`./  `--``--`./  `--` )";

}

void DNN::Design::Ground::DesignFutsal::_NewUpdate(int a, int b)
{
	H::drawBoxSingleLine(a,b,90,40,7);
	H::HLine(a+5,b+10,80,7,219);
	_NewTextUpdate(a+5,b+2);
	H::drawBoxDoubleLineWithBG(a+20,b+15,50,18,7);
	H::drawBoxDoubleLineWithBG(a+15,b+30,60,3,7);
	_TextSearchDNN(a+12,b+18);

	H::drawBoxSingleLine(a+95,b,90,40,7);
	H::HLine(a+100,b+10,80,7,219);
	_ResultText(a+103,b+2);
	_EmojiSearch(a+100,b+20);
	_EmojiUpdate(a+130,b+17);
}

void DNN::Design::Ground::DesignFutsal::_NewTextUpdate(int a, int b)
{

	H::setcolor(5); H::gotoxy(a+5,b++); cout << R"(  ____  ____    _______   ________       __  ___________  _______  )";
	H::setcolor(5); H::gotoxy(a+5,b++); cout << R"( ("  _||_ " |  |   __ "\ |"      "\     /""\("     _   ")/"     "| )";
	H::setcolor(5); H::gotoxy(a+5,b++); cout << R"( |   (  ) : |  (. |__) :)(.  ___  :)   /    \)__/  \\__/(: ______) )";
	H::setcolor(3); H::gotoxy(a+5,b++); cout << R"( (:  |  | . )  |:  ____/ |: \   ) ||  /' /\  \  \\_ /    \/    |   )";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"(  \\ \__/ //   (|  /     (| (___\ || //  __'  \ |.  |    // ___)_  )";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"(  /\\ __ //\  /|__/ \    |:       :)/   /  \\  \\:  |   (:      "| )";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"( (__________)(_______)   (________/(___/    \___)\__|    \_______) )";
	H::setcolor(7); H::gotoxy(a+5,b++); cout << R"(                                                                   )";
}

void DNN::Design::Ground::DesignFutsal::_MenuNewUpdate(int a, int b)
{
	H::VLine(a,b,40,7,219);
	_TextMenuNewUpdate(a-78,b+2);
	H::VLine(a-65,b+12,20,7,178);
	H::VLine(a-40,b+12,20,7,178);
	H::drawBoxDoubleLineWithBG(a-90,b+12,75,1,154);
	H::setcolor(159); H::gotoxy(a-73,b+13); cout<<"HELLO! WELCOME TO MENU UPDATE OF GROUND!";
	H::drawBoxDoubleLineWithBG(a-90,b+15,5,20,154);
	H::HLine(a-92,b+36,9,3,219);
	H::HLine(a-94,b+37,13,3,219);
	H::VLine(a-87,b+16,19,151,223);
	H::drawBoxDoubleLineWithBG(a-20,b+15,5,20,154);
	H::HLine(a-22,b+36,9,3,219);
	H::HLine(a-24,b+37,13,3,219);
	H::VLine(a-17,b+16,19,151,223);

	_CloudUpdate(a+10,b+5);
	_Sun(a+70,b+1);
	_Home(a+65,b+25);
	_Tree(a+10,b+27);
	_Tree(a+20,b+27);
	_Tree(a+30,b+27);
	_Tree(a+40,b+27);

	H::drawBoxDoubleLineWithBG(a-73,b+18,40,1,135);
	H::setcolor(135); H::gotoxy(a-70,b+19); cout<<"PRESS [ 1 ] TO UPDATE STATUS";
	H::drawBoxDoubleLineWithBG(a-73,b+22,40,1,135);
	H::setcolor(135); H::gotoxy(a-70,b+23); cout<<"PRESS [ 2 ] TO UPDATE PRICE";
	H::drawBoxDoubleLineWithBG(a-73,b+26,40,1,135);
	H::setcolor(135); H::gotoxy(a-70,b+27); cout<<"PRESS [ 3 ] TO UPDATE DATE";
	H::drawBoxDoubleLineWithBG(a-73,b+30,40,1,135);
	H::setcolor(135); H::gotoxy(a-70,b+31); cout<<"PRESS [ ESC ] TO BACK TO MAIN MENU";
}

void DNN::Design::Ground::DesignFutsal::_TextMenuNewUpdate(int a, int b)
{
	H::setcolor(3); H::gotoxy(a,b++); cout <<R"( ___      ___   _______  _____  ___   ____  ____  )";
	H::setcolor(3); H::gotoxy(a,b++); cout <<R"(|"  \    /"  | /"     "|(\"   \|"  \ ("  _||_ " | )";
	H::setcolor(3); H::gotoxy(a,b++); cout <<R"( \   \  //   |(: ______)|.\\   \    ||   (  ) : | )";
	H::setcolor(2); H::gotoxy(a,b++); cout <<R"( /\\  \/.    | \/    |  |: \.   \\  |(:  |  | . ) )";
	H::setcolor(2); H::gotoxy(a,b++); cout <<R"(|: \.        | // ___)_ |.  \    \. | \\ \__/ //  )";
	H::setcolor(2); H::gotoxy(a,b++); cout <<R"(|.  \    /:  |(:      "||    \    \ | /\\ __ //\  )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(|___|\__/|___| \_______) \___|\____\)(__________) )";
}

void DNN::Design::Ground::DesignFutsal::_CloudUpdate(int a, int b)
{
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(            _                                        )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(          (`  ).                   _                 )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(         (     ).              .:(`  )`.             )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(        _(       '`.          :(   .    )            )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(    .=(`(      .   )     .--  `.  (    ) )           )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(   ((    (..__.:'-'   .+(   )   ` _`  ) )            )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(   `(       ) )       (   .  )     (   )  ._         )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(     ` __.:'   )     (   (   ))     `-'.-(`  )       )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(  ( )       --'       `- __.'         :(      ))     )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"( (_.'          .')                    `(    )  ))    )";
	H::setcolor(7); H::gotoxy(a,b++); cout <<R"(              (_  )                     ` __.:'      )";
}

void DNN::Design::Ground::DesignFutsal::_Sun(int a, int b)
{
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(             .              )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(         .   :   .          )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(     '.   .  :  .   .'      )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(  ._   '._.-'''-._.'   _.   )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(    '-..'         '..-'     )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"( --._ /.==.     .==.\ _.--  )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(     ;/_o__\   /_o__\;      )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(-----|`     ) (     `|----- )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(    _: \_) (\_/) (_/ ;_     )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"( --'  \  '._.=._.'  /  '--  )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(   _.-''.  '._.'  .''-._    )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(  '    .''-.(_).-''.    '   )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(     .'   '  :  '   '.      )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(        '    :   '          )";
	H::setcolor(6); H::gotoxy(a,b++); cout << R"(             '              )";
}

void DNN::Design::Ground::DesignFutsal::_Home(int a, int b)
{
	H::setcolor(3); H::gotoxy(a,b++); cout << R"(    ) )        /\               )";
	H::setcolor(3); H::gotoxy(a,b++); cout << R"(   =====      /  \              )";
	H::setcolor(3); H::gotoxy(a,b++); cout << R"(  _|___|_____/ __ \____________ )";
	H::setcolor(3); H::gotoxy(a,b++); cout << R"( |::::::::::/ |  | \:::::::::::|)";
	H::setcolor(3); H::gotoxy(a,b++); cout << R"( |:::::::::/  ====  \::::::::::|)";
	H::setcolor(3); H::gotoxy(a,b++); cout << R"( |::::::::/__________\:::::::::|)";
	H::setcolor(3); H::gotoxy(a,b++); cout << R"( |_________|  ____  |__________|)";
	H::setcolor(7); H::gotoxy(a,b++); cout << R"(  | ______ | / || \ | _______ | )";
	H::setcolor(7); H::gotoxy(a,b++); cout << R"(  ||  |   || ====== ||   |   || )";
	H::setcolor(7); H::gotoxy(a,b++); cout << R"(  ||--+---|| |    | ||---+---|| )";
	H::setcolor(7); H::gotoxy(a,b++); cout << R"(  ||__|___|| |   o| ||___|___|| )";
	H::setcolor(7); H::gotoxy(a,b++); cout << R"(  |========| |____| |=========| )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"( (^^-^^^^^-|________|-^^^--^^^) )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"( (,, , ,, ,/________\,,,, ,, ,) )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(','',,,,' /__________\,,,',',;; )";
}

void DNN::Design::Ground::DesignFutsal::_Tree(int a, int b)
{
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(    _\/_     )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(     /\      )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(     /\      )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(    /  \     )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(    /~~\o    )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(   /o   \    )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(  /~~*~~~\   )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"( o/    o \   )";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"( /~~~~~~~~\~`)";
	H::setcolor(2); H::gotoxy(a,b++); cout << R"(/__*_______\ )";
	H::setcolor(7); H::gotoxy(a,b++); cout << R"(     ||      )";
	H::setcolor(3); H::gotoxy(a,b++); cout << R"(   \====/    )";
	H::setcolor(3); H::gotoxy(a,b++); cout << R"(    \__/     )";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////// VOLLEYBALL ////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DNN::Design::Ground::DesignVolleyball::DesignInput(int a)
{
	H::drawBoxDoubleLineWithBG(10,10,180,35,a);
	H::setcolor(2); H::gotoxy(140,40); cout << R"(   ,=""=,                       )"; H::delay(50);
	H::setcolor(2); H::gotoxy(140,41); cout << R"(  c , _,{                       )"; H::delay(50);
	H::setcolor(2); H::gotoxy(140,42); cout << R"(  /\  @ )                 __    )"; H::delay(50);
	H::setcolor(3); H::gotoxy(140,43); cout << R"( /  ^~~^\          <=.,__/ '}=  )"; H::delay(50);
	H::setcolor(3); H::gotoxy(140,44); cout << R"((_/ ,, ,,)          \_ _>_/~    )"; H::delay(50);
	H::setcolor(3); H::gotoxy(140,45); cout << R"( ~\_(/-\)'-,_,_,_,-'(_)-(_)     )"; H::delay(50);

	_PlayerVolleyball(40,37,2,3);

	H::setcolor(2); H::gotoxy(10,33); cout << R"( ____________________ )"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,34); cout << R"(/                    \)"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,35); cout << R"(|     VOLLEYBALL     |)"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,36); cout << R"(|     INFORMATION    |)"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,37); cout << R"(\____________________/)"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,38); cout << R"(         L_ !         )"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,39); cout << R"(        / _)!         )"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,40); cout << R"(       / /__L         )"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,41); cout << R"( _____/ (____)        )"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,42); cout << R"(        (____)        )"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,43); cout << R"( _____  (____)        )"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,44); cout << R"(      \_(____)        )"; H::delay(50);
	H::setcolor(2); H::gotoxy(10,45); cout << R"(         \__/         )"; H::delay(50);

	H::setcolor(2); H::gotoxy(5,12); cout << R"(           .-.           )"; H::delay(50);
	H::setcolor(2); H::gotoxy(5,13); cout << R"(     ___  (   )  ___     )"; H::delay(50);
	H::setcolor(2); H::gotoxy(5,14); cout << R"(,_.-'   `'-| |-'`   '-._,)"; H::delay(50);
	H::setcolor(2); H::gotoxy(5,15); cout << R"( '.      .-| |-.      .' )"; H::delay(50);
	H::setcolor(2); H::gotoxy(5,16); cout << R"(   `~~~~`  |.') `~~~~`   )"; H::delay(50);
	H::setcolor(3); H::gotoxy(11,17); cout << R"(    (_.|           )"; H::delay(50);
	H::setcolor(3); H::gotoxy(11,18); cout << R"(     |._)          )"; H::delay(50);
	H::setcolor(3); H::gotoxy(11,19); cout << R"(     |.')          )"; H::delay(50);
	H::setcolor(3); H::gotoxy(11,20); cout << R"(    (_.|           )"; H::delay(50);
	H::setcolor(3); H::gotoxy(11,21); cout << R"(     |._)          )"; H::delay(50);
	H::setcolor(3); H::gotoxy(11,22); cout << R"(    ('.|           )"; H::delay(50);
	H::setcolor(3); H::gotoxy(11,23); cout << R"(     |._)          )"; H::delay(50);
	H::setcolor(3); H::gotoxy(11,24); cout << R"(     '-'           )"; H::delay(50);


    H::setcolor(3); H::gotoxy(95,35); cout << R"(       _               )"; H::delay(50);
    H::setcolor(3); H::gotoxy(95,36); cout << R"(      |E]              )"; H::delay(50);
    H::setcolor(3); H::gotoxy(95,37); cout << R"(    .-|=====-.         )"; H::delay(50);
    H::setcolor(3); H::gotoxy(95,38); cout << R"(    | | mail |         )"; H::delay(50);
    H::setcolor(3); H::gotoxy(95,39); cout << R"( ___|________|         )"; H::delay(50);
    H::setcolor(2); H::gotoxy(95,40); cout << R"(        ||   DNN       )"; H::delay(50);
    H::setcolor(2); H::gotoxy(95,41); cout << R"( ,;,    ||   )_(,;;;,  )"; H::delay(50);
    H::setcolor(2); H::gotoxy(95,42); cout << R"( <_>  \ ||   \|/ \_/   )"; H::delay(50);
    H::setcolor(2); H::gotoxy(95,43); cout << R"( \|/  \\||  \\|   |//  )"; H::delay(50);
    H::setcolor(2); H::gotoxy(95,44); cout << R"(_\|//_\\|///_\V/_\|//__)"; H::delay(50);
}
void DNN::Design::Ground::DesignVolleyball::_TextInput(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"( _____  ____  _____   ______   ________  _______   _________   _____  ____  _____  ________    ___   _______     ____    ____       _     _________  _____   ___   ____  _____  )";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(|_   _||_   \|_   _|.' ____ \ |_   __  ||_   __ \ |  _   _  | |_   _||_   \|_   _||_   __  | .'   `.|_   __ \   |_   \  /   _|     / \   |  _   _  ||_   _|.'   `.|_   \|_   _| )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+2); cout<<R"(  | |    |   \ | |  | (___ \_|  | |_ \_|  | |__) ||_/ | | \_|   | |    |   \ | |    | |_ \_|/  .-.  \ | |__) |    |   \/   |      / _ \  |_/ | | \_|  | | /  .-.  \ |   \ | |   )";	H::delay(20);
	H::gotoxy(a,b+3); cout<<R"(  | |    | |\ \| |   _.____`.   |  _| _   |  __ /     | |       | |    | |\ \| |    |  _|   | |   | | |  __ /     | |\  /| |     / ___ \     | |      | | | |   | | | |\ \| |   )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+4); cout<<R"( _| |_  _| |_\   |_ | \____) | _| |__/ | _| |  \ \_  _| |_     _| |_  _| |_\   |_  _| |_    \  `-'  /_| |  \ \_  _| |_\/_| |_  _/ /   \ \_  _| |_    _| |_\  `-'  /_| |_\   |_  )";	H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(|_____||_____|\____| \______.'|________||____| |___||_____|   |_____||_____|\____||_____|    `.___.'|____| |___||_____||_____||____| |____||_____|  |_____|`.___.'|_____|\____| )";	H::delay(20);
}
void DNN::Design::Ground::DesignVolleyball::_TextMenu(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"( ___      ___  ______    ___      ___       _______  ___  ___  _______       __      ___      ___       )";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(|"  \    /"  |/    " \  |"  |    |"  |     /"     "||"  \/"  ||   _  "\     /""\    |"  |    |"  |      )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"( \   \  //  /// ____  \ ||  |    ||  |    (: ______) \   \  / (. |_)  :)   /    \   ||  |    ||  |      )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+3); cout<<R"(  \\  \/. .//  /    ) :)|:  |    |:  |     \/    |    \\  \/  |:     \/   /' /\  \  |:  |    |:  |      )";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(   \.    //(: (____/ //  \  |___  \  |___  // ___)_   /   /   (|  _  \\  //  __'  \  \  |___  \  |___   )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+5); cout<<R"(    \\   /  \        /  ( \_|:  \( \_|:  \(:      "| /   /    |: |_)  :)/   /  \\  \( \_|:  \( \_|:  \  )";	H::delay(20);
	H::gotoxy(a,b+6); cout<<R"(     \__/    \"_____/    \_______)\_______)\_______)|___/     (_______/(___/    \___)\_______)\_______) )";	H::delay(20);
}
void DNN::Design::Ground::DesignVolleyball::_TextVolleyball(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"( ____   ____   ___   _____     _____     ________  ____  ____  ______        _       _____     _____     )";
	H::gotoxy(a,b+1); cout<<R"(|_  _| |_  _|.'   `.|_   _|   |_   _|   |_   __  ||_  _||_  _||_   _ \      / \     |_   _|   |_   _|    )";
	H::setcolor(d);
	H::gotoxy(a,b+2); cout<<R"(  \ \   / / /  .-.  \ | |       | |       | |_ \_|  \ \  / /    | |_) |    / _ \      | |       | |      )";
	H::gotoxy(a,b+3); cout<<R"(   \ \ / /  | |   | | | |   _   | |   _   |  _| _    \ \/ /     |  __'.   / ___ \     | |   _   | |   _  )";
	H::setcolor(c);
	H::gotoxy(a,b+4); cout<<R"(    \ ' /   \  `-'  /_| |__/ | _| |__/ | _| |__/ |   _|  |_    _| |__) |_/ /   \ \_  _| |__/ | _| |__/ | )";
	H::gotoxy(a,b+5); cout<<R"(     \_/     `.___.'|________||________||________|  |______|  |_______/|____| |____||________||________| )";
	for(int i=1;i<=107;i++){
		H::setcolor(2);
		H::gotoxy(a+i,b+7); cout<<char(178);
	}
}
void DNN::Design::Ground::DesignVolleyball::_Textseachvolleyball(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b+1); cout<<R"(   _____ ______          _____   _____ _    _  __      ______  _      _      ________     ______          _         _____ _____   ____  _    _ _   _ _____  )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(  / ____|  ____|   /\   |  __ \ / ____| |  | | \ \    / / __ \| |    | |    |  ____\ \   / /  _ \   /\   | |       / ____|  __ \ / __ \| |  | | \ | |  __ \ )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+3); cout<<R"( | (___ | |__     /  \  | |__) | |    | |__| |  \ \  / / |  | | |    | |    | |__   \ \_/ /| |_) | /  \  | |      | |  __| |__) | |  | | |  | |  \| | |  | |)";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(  \___ \|  __|   / /\ \ |  _  /| |    |  __  |   \ \/ /| |  | | |    | |    |  __|   \   / |  _ < / /\ \ | |      | | |_ |  _  /| |  | | |  | | . ` | |  | |)";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+5); cout<<R"(  ____) | |____ / ____ \| | \ \| |____| |  | |    \  / | |__| | |____| |____| |____   | |  | |_) / ____ \| |____  | |__| | | \ \| |__| | |__| | |\  | |__| |)";	H::delay(20);
	H::gotoxy(a,b+6); cout<<R"( |_____/|______/_/    \_\_|  \_\\_____|_|  |_|     \/   \____/|______|______|______|  |_|  |____/_/    \_\______|  \_____|_|  \_\\____/ \____/|_| \_|_____/ )";	H::delay(20);
}
void DNN::Design::Ground::DesignVolleyball::_Textdeletevolleyball(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b+1); cout<<R"( ________    _______  ___       _______  ___________  _______      ___      ___  ______    ___      ___       _______  ___  ___  _______       __      ___      ___          )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(|"      "\  /"     "||"  |     /"     "|("     _   ")/"     "|    |"  \    /"  |/    " \  |"  |    |"  |     /"     "||"  \/"  ||   _  "\     /""\    |"  |    |"  |         )";	H::delay(20);
	H::gotoxy(a,b+3); cout<<R"((.  ___  :)(: ______)||  |    (: ______) )__/  \\__/(: ______)     \   \  //  /// ____  \ ||  |    ||  |    (: ______) \   \  / (. |_)  :)   /    \   ||  |    ||  |         )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+4); cout<<R"(|: \   ) || \/    |  |:  |     \/    |      \\_ /    \/    |        \\  \/. .//  /    ) :)|:  |    |:  |     \/    |    \\  \/  |:     \/   /' /\  \  |:  |    |:  |         )";	H::delay(20);
	H::gotoxy(a,b+5); cout<<R"((| (___\ || // ___)_  \  |___  // ___)_     |.  |    // ___)_        \.    //(: (____/ //  \  |___  \  |___  // ___)_   /   /   (|  _  \\  //  __'  \  \  |___  \  |___      )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+6); cout<<R"(|:       :)(:      "|( \_|:  \(:      "|    \:  |   (:      "|        \\   /  \        /  ( \_|:  \( \_|:  \(:      "| /   /    |: |_)  :)/   /  \\  \( \_|:  \( \_|:  \     )";	H::delay(20);
	H::gotoxy(a,b+7); cout<<R"((________/  \_______) \_______)\_______)     \__|    \_______)         \__/    \"_____/    \_______)\_______)\_______)|___/     (_______/(___/    \___)\_______)\_______)    )";	H::delay(20);
}
void DNN::Design::Ground::DesignVolleyball::_TextSortItem(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b+1); cout<<R"(   _____  ____  _____ _______   _____ _______ ______ __  __    ____  ______    _____ _____   ____  _    _ _   _ _____  )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(  / ____|/ __ \|  __ \__   __| |_   _|__   __|  ____|  \/  |  / __ \|  ____|  / ____|  __ \ / __ \| |  | | \ | |  __ \ )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+3); cout<<R"( | (___ | |  | | |__) | | |      | |    | |  | |__  | \  / | | |  | | |__    | |  __| |__) | |  | | |  | |  \| | |  | |)";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(  \___ \| |  | |  _  /  | |      | |    | |  |  __| | |\/| | | |  | |  __|   | | |_ |  _  /| |  | | |  | | . ` | |  | |)";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+5); cout<<R"(  ____) | |__| | | \ \  | |     _| |_   | |  | |____| |  | | | |__| | |      | |__| | | \ \| |__| | |__| | |\  | |__| |)";	H::delay(20);
	H::gotoxy(a,b+6); cout<<R"( |_____/ \____/|_|  \_\ |_|    |_____|  |_|  |______|_|  |_|  \____/|_|       \_____|_|  \_\\____/ \____/|_| \_|_____/ )";	H::delay(20);
}
void DNN::Design::Ground::DesignVolleyball::_TextSortRecord(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"(  ______     ___   _______   _________   _______     ________    ______    ___   _______     ______    )";
	H::gotoxy(a,b+1); cout<<R"(.' ____ \  .'   `.|_   __ \ |  _   _  | |_   __ \   |_   __  | .' ___  | .'   `.|_   __ \   |_   _ `.  )";
	H::setcolor(d);
	H::gotoxy(a,b+2); cout<<R"(| (___ \_|/  .-.  \ | |__) ||_/ | | \_|   | |__) |    | |_ \_|/ .'   \_|/  .-.  \ | |__) |    | | `. \ )";
	H::gotoxy(a,b+3); cout<<R"( _.____`. | |   | | |  __ /     | |       |  __ /     |  _| _ | |       | |   | | |  __ /     | |  | | )";
	H::setcolor(c);
	H::gotoxy(a,b+4); cout<<R"(| \____) |\  `-'  /_| |  \ \_  _| |_     _| |  \ \_  _| |__/ |\ `.___.'\\  `-'  /_| |  \ \_  _| |_.' / )";
	H::gotoxy(a,b+5); cout<<R"( \______.' `.___.'|____| |___||_____|   |____| |___||________| `.____ .' `.___.'|____| |___||______.'  )";
	for(int i=1;i<=102;i++){
		H::setcolor(2);
		H::gotoxy(a+i,b+7); cout<<char(178);
	}
}
void DNN::Design::Ground::DesignVolleyball::_TextSeachRecord(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"(  ________  _______       __        _______    ______    __    __        _______    _______   ______    ______     _______   ________   )";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"( /"       )/"     "|     /""\      /"      \  /" _  "\  /" |  | "\      /"      \  /"     "| /" _  "\  /    " \   /"      \ |"      "\  )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"((:   \___/(: ______)    /    \    |:        |(: ( \___)(:  (__)  :)    |:        |(: ______)(: ( \___)// ____  \ |:        |(.  ___  :) )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+3); cout<<R"( \___  \   \/    |     /' /\  \   |_____/   ) \/ \      \/      \/     |_____/   ) \/    |   \/ \    /  /    ) :)|_____/   )|: \   ) || )";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(  __/  \\  // ___)_   //  __'  \   //      /  //  \ _   //  __  \\      //      /  // ___)_  //  \ _(: (____/ //  //      / (| (___\ || )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+5); cout<<R"( /" \   :)(:      "| /   /  \\  \ |:  __   \ (:   _) \ (:  (  )  :)    |:  __   \ (:      "|(:   _) \\        /  |:  __   \ |:       :) )";	H::delay(20);
	H::gotoxy(a,b+6); cout<<R"((_______/  \_______)(___/    \___)|__|  \___) \_______) \__|  |__/     |__|  \___) \_______) \_______)\"_____/   |__|  \___)(________/  )";	H::delay(20);
}
void DNN::Design::Ground::DesignVolleyball::_TextUpdateVolleyballmenu(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"( ____  ____    _______   ________       __  ___________  _______       _______    _______   ______    ______     _______   ________   )";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(("  _||_ " |  |   __ "\ |"      "\     /""\("     _   ")/"     "|     /"      \  /"     "| /" _  "\  /    " \   /"      \ |"      "\  )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(|   (  ) : |  (. |__) :)(.  ___  :)   /    \)__/  \\__/(: ______)    |:        |(: ______)(: ( \___)// ____  \ |:        |(.  ___  :) )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+3); cout<<R"((:  |  | . )  |:  ____/ |: \   ) ||  /' /\  \  \\_ /    \/    |      |_____/   ) \/    |   \/ \    /  /    ) :)|_____/   )|: \   ) || )";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"( \\ \__/ //   (|  /     (| (___\ || //  __'  \ |.  |    // ___)_      //      /  // ___)_  //  \ _(: (____/ //  //      / (| (___\ || )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+5); cout<<R"( /\\ __ //\  /|__/ \    |:       :)/   /  \\  \\:  |   (:      "|    |:  __   \ (:      "|(:   _) \\        /  |:  __   \ |:       :) )";	H::delay(20);
	H::gotoxy(a,b+6); cout<<R"((__________)(_______)   (________/(___/    \___)\__|    \_______)    |__|  \___) \_______) \_______)\"_____/   |__|  \___)(________/  )";	H::delay(20);
}

void DNN::Design::Ground::DesignVolleyball::_VolleyballGround(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"(- +-------------+)";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(  | DNN SPORTS  |   .)";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(  +-------------+   |`.)";	H::delay(20);
	H::gotoxy(a,b+3); cout<<R"(  |             |   |  `.)";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"( \|,,          .|,  |-_  `.)";	H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(  "'            "   |  -_  `._)";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+6); cout<<R"(____________________|____-_ _|_______________,....)";	H::delay(20);
	H::gotoxy(a,b+7); cout<<R"(', `   .   .    '    _.    -_|   .  _   .     ',:;")";	H::delay(20);
	H::gotoxy(a,b+8); cout<<R"(  ', '  ..    .  .  (_) ',   |       -    ..    ',)";	H::delay(20);
	H::gotoxy(a,b+9); cout<<R"( ,;,',  .    . .  ,    .     |   ',    `.   .     ',)";	H::delay(20);
	H::gotoxy(a,b+10);cout<<R"( ',";.',_____________________|______________________',)";	H::delay(20);
}

void DNN::Design::Ground::DesignVolleyball::_PlayerVolleyball(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"(              o _  d|)";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(             _/) 'd$|)";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(             _/| d$p|)";	H::delay(20);
	H::gotoxy(a,b+3); cout<<R"(               'd$p |  o)";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+4); cout<<R"(      _o/`_____|$p__|_`|\________)";	H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(     / |       |p     / \       /)";	H::delay(20);
	H::gotoxy(a,b+6); cout<<R"(    / / \      |        o/`@   /)";	H::delay(20);
	H::gotoxy(a,b+7); cout<<R"(   /           |      `-|     /)";	H::delay(20);
	H::gotoxy(a,b+8); cout<<R"(  /____________|_______/_\___/)";	H::delay(20);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////// BASKETBALL /////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Design::Ground::DesignBasketball::DesignInput(int a,int b,int c,int d)
{
	H::VLine(a+10,b,38,7,207);   H::delay(20);
	H::VLine(a+170,b,38,7,207);  H::delay(20);
	H::HLine(a,b+38,c,d,207);    H::delay(20);
	H::HLine(a,b,c,d,219);       H::delay(20);
	H::HLine(a,b+27,c,42,219);   H::delay(20);

	H::VLine(a+40,b,10,7,207);   H::delay(20);
	H::VLine(a+50,b,10,7,207);   H::delay(20);
	H::VLine(a+60,b,10,7,207);   H::delay(20);
	H::VLine(a+70,b,10,7,207);   H::delay(20);

	H::VLine(a+115,b,10,7,207);  H::delay(20);
	H::VLine(a+125,b,10,7,207);  H::delay(20);
	H::VLine(a+135,b,10,7,207);  H::delay(20);
	H::VLine(a+145,b,10,7,207);  H::delay(20);


	for(int i = 0; i < 145; i+=15)
	{
		DNN::Design::Ground::DesignFutsal::Star(a+15+i,b+30);
	}

}
void DNN::Design::Ground::DesignBasketball::DesignOutput()
{
	//background
	H::setcursor(0,0);
	H::drawBoxDoubleLineWithBG(5,12,190,30,7);
	//Header
	H::drawBoxDoubleLineWithBG(5,9,190,1,7);
	H::drawBoxDoubleLineWithBG(5,44,190,1,79);
	for(int i=0;i<=30;i++){
		//left
		H::HLine(5,1,i+1,2,176);
		H::HLine(35-i,3,1,2,176);
		H::HLine(5,5,i+1,2,176);
		H::HLine(35-i,7,1,2,176);

		//right

		H::HLine(165,1,i+1,2,176);
		H::HLine(195-i,3,1,2,176);
		H::HLine(165,5,i+1,2,176);
		H::HLine(195-i,7,1,2,176);

		H::delay(5);
	}
}
void DNN::Design::Ground::DesignBasketball::_TextBasketballItem(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"(  ____           _____ _  ________ _______ ____          _      _        _____ _______ ______ __  __ )";
	H::gotoxy(a,b+1); cout<<R"( |  _ \   /\    / ____| |/ /  ____|__   __|  _ \   /\   | |    | |      |_   _|__   __|  ____|  \/  |)";
	H::setcolor(d);
	H::gotoxy(a,b+2); cout<<R"( | |_) | /  \  | (___ | ' /| |__     | |  | |_) | /  \  | |    | |        | |    | |  | |__  | \  / |)";
	H::gotoxy(a,b+3); cout<<R"( |  _ < / /\ \  \___ \|  < |  __|    | |  |  _ < / /\ \ | |    | |        | |    | |  |  __| | |\/| |)";
	H::setcolor(c);
	H::gotoxy(a,b+4); cout<<R"( | |_) / ____ \ ____) | . \| |____   | |  | |_) / ____ \| |____| |____   _| |_   | |  | |____| |  | |)";
	H::gotoxy(a,b+5); cout<<R"( |____/_/    \_\_____/|_|\_\______|  |_|  |____/_/    \_\______|______| |_____|  |_|  |______|_|  |_|)";
    for(int i=1;i<=107;i++){
		H::setcolor(2);
		H::gotoxy(a+i,b+7); cout<<char(178);
	}
}

void DNN::Design::Ground::DesignBasketball::_BasketballGround(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);   cout<<R"(                 ,-'""""`-._                           )";	H::delay(20);
	H::gotoxy(a,b+1); cout<<R"(               ,' // <->    "-.                        )";	H::delay(20);
	H::gotoxy(a,b+2); cout<<R"(               | '` ,;;;....__|                        )";	H::delay(20);
	H::gotoxy(a,b+3); cout<<R"(               |   /._''''''''                       , )";	H::delay(20);
	H::gotoxy(a,b+4); cout<<R"(                | `--._"-._                         /| )";	H::delay(20);
	H::gotoxy(a,b+5); cout<<R"(                 | ===|"-__'                    _.-'/  )";	H::delay(20);
	H::gotoxy(a,b+6); cout<<R"(               .-: ==||-"'"-'--.          _..--' ,-'   )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+7); cout<<R"(   ,,--"""--._ ( |\__||         |____----"   _.-"      )";	H::delay(20);
	H::gotoxy(a,b+8); cout<<R"(   VV--"\ ,_  "',\  .-,`---.-,  `-_   __..--"          )";	H::delay(20);
	H::gotoxy(a,b+9); cout<<R"( ,'_/_-"`V' "-./_ `\.` `     |    _'""                 )";	H::delay(20);
	H::gotoxy(a,b+10); cout<<R"( |__|__.-|     | "-. `------' `,-"                     )";	H::delay(20);
	H::gotoxy(a,b+11); cout<<R"( `.-\-_ ,'      |  |"""---._,-"'`]""-.                 )";	H::delay(20);
	H::gotoxy(a,b+12); cout<<R"(   `-`-'        ;--;,        `._ /  ||                 )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+13); cout<<R"(             ,""`   |           ,"  ||                 )";	H::delay(20);
	H::gotoxy(a,b+14); cout<<R"(             VV_.==='           VV--'                  )";	H::delay(20);

}
void DNN::Design::Ground::DesignBasketball::GoalBasketball(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);     cout<<R"( __________________    )";	H::delay(20);
	H::gotoxy(a,b+1);   cout<<R"(|__________________|   )";	H::delay(20);
	H::gotoxy(a,b+2);   cout<<R"( \/\/\/\/\/\/\/\/\/    )";	H::delay(20);
	H::gotoxy(a,b+3);   cout<<R"(  \/\/\/\/\/\/\/\/     )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+4);   cout<<R"(   \/\/\/\/\/\/\/      )";	H::delay(20);
	H::gotoxy(a,b+5);   cout<<R"(    |/\/\/\/\/\|       )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+6);   cout<<R"(    |/\/\/\/\/\|       )";	H::delay(20);
	H::gotoxy(a,b+7);   cout<<R"(    |/\/\/\/\/\|       )";	H::delay(20);
}

void DNN::Design::Ground::DesignBasketball::_TextDeleteBasketball(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);     cout<<R"( ________    _______  ___       _______  ___________  _______      _______       __        ________  __   ___  _______  ___________  _______       __      ___      ___       )";	H::delay(20);
	H::gotoxy(a,b+1);   cout<<R"(|"      "\  /"     "||"  |     /"     "|("     _   ")/"     "|    |   _  "\     /""\      /"       )|/"| /  ")/"     "|("     _   ")|   _  "\     /""\    |"  |    |"  |      )";	H::delay(20);
	H::gotoxy(a,b+2);   cout<<R"((.  ___  :)(: ______)||  |    (: ______) )__/  \\__/(: ______)    (. |_)  :)   /    \    (:   \___/ (: |/   /(: ______) )__/  \\__/ (. |_)  :)   /    \   ||  |    ||  |      )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+3);   cout<<R"(|: \   ) || \/    |  |:  |     \/    |      \\_ /    \/    |      |:     \/   /' /\  \    \___  \   |    __/  \/    |      \\_ /    |:     \/   /' /\  \  |:  |    |:  |      )";	H::delay(20);
	H::gotoxy(a,b+4);   cout<<R"((| (___\ || // ___)_  \  |___  // ___)_     |.  |    // ___)_     (|  _  \\  //  __'  \    __/  \\  (// _  \  // ___)_     |.  |    (|  _  \\  //  __'  \  \  |___  \  |___   )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+5);   cout<<R"(|:       :)(:      "|( \_|:  \(:      "|    \:  |   (:      "|    |: |_)  :)/   /  \\  \  /" \   :) |: | \  \(:      "|    \:  |    |: |_)  :)/   /  \\  \( \_|:  \( \_|:  \  )";	H::delay(20);
	H::gotoxy(a,b+6);   cout<<R"((________/  \_______) \_______)\_______)     \__|    \_______)    (_______/(___/    \___)(_______/  (__|  \__)\_______)     \__|    (_______/(___/    \___)\_______)\_______) )";	H::delay(20);
}
void DNN::Design::Ground::DesignBasketball::_TextBasketball(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);     cout<<R"( _______       __        ________  __   ___  _______  ___________  _______       __      ___      ___       )";	H::delay(20);
	H::gotoxy(a,b+1);   cout<<R"(|   _  "\     /""\      /"       )|/"| /  ")/"     "|("     _   ")|   _  "\     /""\    |"  |    |"  |      )";	H::delay(20);
	H::gotoxy(a,b+2);   cout<<R"((. |_)  :)   /    \    (:   \___/ (: |/   /(: ______) )__/  \\__/ (. |_)  :)   /    \   ||  |    ||  |      )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+3);   cout<<R"(|:     \/   /' /\  \    \___  \   |    __/  \/    |      \\_ /    |:     \/   /' /\  \  |:  |    |:  |      )";	H::delay(20);
	H::gotoxy(a,b+4);   cout<<R"((|  _  \\  //  __'  \    __/  \\  (// _  \  // ___)_     |.  |    (|  _  \\  //  __'  \  \  |___  \  |___   )";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+5);   cout<<R"(|: |_)  :)/   /  \\  \  /" \   :) |: | \  \(:      "|    \:  |    |: |_)  :)/   /  \\  \( \_|:  \( \_|:  \  )";	H::delay(20);
	H::gotoxy(a,b+6);   cout<<R"((_______/(___/    \___)(_______/  (__|  \__)\_______)     \__|    (_______/(___/    \___)\_______)\_______) )";	H::delay(20);
}

void DNN::Design::Ground::DesignBasketball::_TextSearchBasketball(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);     cout<<R"(   _____ ______          _____   _____ _    _   ____           _____ _  ________ _______ ____          _      _         _____ _____   ____  _    _ _   _ _____  )";	H::delay(20);
	H::gotoxy(a,b+1);   cout<<R"(  / ____|  ____|   /\   |  __ \ / ____| |  | | |  _ \   /\    / ____| |/ /  ____|__   __|  _ \   /\   | |    | |       / ____|  __ \ / __ \| |  | | \ | |  __ \ )";	H::delay(20);
	H::setcolor(d);
	H::gotoxy(a,b+2);   cout<<R"( | (___ | |__     /  \  | |__) | |    | |__| | | |_) | /  \  | (___ | ' /| |__     | |  | |_) | /  \  | |    | |      | |  __| |__) | |  | | |  | |  \| | |  | |)";	H::delay(20);
	H::gotoxy(a,b+3);   cout<<R"(  \___ \|  __|   / /\ \ |  _  /| |    |  __  | |  _ < / /\ \  \___ \|  < |  __|    | |  |  _ < / /\ \ | |    | |      | | |_ |  _  /| |  | | |  | | . ` | |  | |)";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+4);   cout<<R"(  ____) | |____ / ____ \| | \ \| |____| |  | | | |_) / ____ \ ____) | . \| |____   | |  | |_) / ____ \| |____| |____  | |__| | | \ \| |__| | |__| | |\  | |__| |)";	H::delay(20);
	H::gotoxy(a,b+5);   cout<<R"( |_____/|______/_/    \_\_|  \_\\_____|_|  |_| |____/_/    \_\_____/|_|\_\______|  |_|  |____/_/    \_\______|______|  \_____|_|  \_\\____/ \____/|_| \_|_____/ )";	H::delay(20);
}

void DNN::Design::Ground::DesignBasketball::_DNNSPORTGROUND(int a,int b,int c,int d)
{
	H::setcolor(c);
	H::gotoxy(a,b);     cout<<R"(  .--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--. )";	H::delay(20);
	H::gotoxy(a,b+1);   cout<<R"( / .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \)";	H::delay(20);
	H::gotoxy(a,b+2);   cout<<R"( \ \/\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ \/ /)";	H::delay(20);
	H::gotoxy(a,b+3);   cout<<R"(  \/ /`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\/ / )";	H::delay(20);
	H::gotoxy(a,b+4);   cout<<R"(  / /\                                                                                                                / /\ )";	H::delay(20);
	H::setcolor(c);
	H::setcolor(c);H::gotoxy(a,b+5);   cout<<R"( / /\ \  )";H::setcolor(d);cout<<R"( ____   _   _  _   _   ____   ____    ___   ____  _____  ____     ____  ____    ___   _   _  _   _  ____  )";H::setcolor(c);cout<<R"(  / /\ \)";	H::delay(20);
	H::setcolor(c);H::gotoxy(a,b+6);   cout<<R"( \ \/ /  )";H::setcolor(d);cout<<R"(|  _ \ | \ | || \ | | / ___| |  _ \  / _ \ |  _ \|_   _|/ ___|   / ___||  _ \  / _ \ | | | || \ | ||  _ \ )";H::setcolor(c);cout<<R"(  \ \/ /)";	H::delay(20);
	H::setcolor(c);H::gotoxy(a,b+7);   cout<<R"(  \/ /   )";H::setcolor(c);cout<<R"(| | | ||  \| ||  \| | \___ \ | |_) || | | || |_) | | |  \___ \  | |  _ | |_) || | | || | | ||  \| || | | |)";H::setcolor(c);cout<<R"(   \/ / )";	H::delay(20);
	H::setcolor(c);H::gotoxy(a,b+8);   cout<<R"(  / /\   )";H::setcolor(c);cout<<R"(| |_| || |\  || |\  |  ___) ||  __/ | |_| ||  _ <  | |   ___) | | |_| ||  _ < | |_| || |_| || |\  || |_| |)";H::setcolor(c);cout<<R"(   / /\ )";	H::delay(20);
	H::setcolor(c);H::gotoxy(a,b+9);   cout<<R"( / /\ \  )";H::setcolor(d);cout<<R"(|____/ |_| \_||_| \_| |____/ |_|     \___/ |_| \_\ |_|  |____/   \____||_| \_\ \___/  \___/ |_| \_||____/ )";H::setcolor(c);cout<<R"(  / /\ \)";	H::delay(20);
	H::setcolor(c);
	H::gotoxy(a,b+10);   cout<<R"( \ \/ /                                                                                                              \ \/ /)";	H::delay(20);
	H::gotoxy(a,b+11);   cout<<R"(  \/ /                                                                                                                \/ / )";	H::delay(20);
	H::gotoxy(a,b+12);   cout<<R"(  / /\.--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--./ /\ )";	H::delay(20);
	H::gotoxy(a,b+13);   cout<<R"( / /\ \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \/\ \)";	H::delay(20);
	H::gotoxy(a,b+14);   cout<<R"( \ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /)";	H::delay(20);
	H::gotoxy(a,b+15);   cout<<R"(  `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--' )";	H::delay(20);
}

void DNN::Design::Ground::DesignBasketball::_MenuGround(int a,int b)
{

	H::drawBoxSingleLine(a+3, b, 50, 22, 7);
	H::VLine(a+18, b, 20, 7, 207);
	H::VLine(a+38, b, 20, 7, 207);

	H::VLine(a+13, b-5, 5, 7, 207);
	H::VLine(a+43, b-5, 5, 7, 207);

	H::HLine(a+8, b, 40, 6, 219);
	H::HLine(a+10, b, 36, 5, 219);

	H::HLine(a+98, b-18, 67, 7, 178);
	H::VLine(a+103, b-20, 45, 7, 178);
	H::VLine(a+163, b-20, 45, 7, 178);

	_TextANT(a-30, b+2, 5, 6);
	_TextDNN(a+60,b+2,5,6);

	H::VLine(a+115, b-18, 30, 7, 207);
	H::VLine(a+150, b-18, 30, 7, 207);

	H::gotoxy(a+16,b); H::setcolor(223); cout << "DNN SPORTS GROUND MENU";

	H::gotoxy(140,40); H::setcolor(7); cout<< " USE [ "; H::setcolor(5); cout << "ARROW"; H::setcolor(7); cout << " ] "; H::setcolor(7); cout << "TO MOVE OPTION AND [ "; H::setcolor(5); cout << "ENTER"; H::setcolor(7); cout << " ] TO SELECT.";
}

void DNN::Design::Ground::DesignBasketball::_TextANT(int a,int b,int c,int d)
{
	H::setcolor(7);
	H::setcolor(7);H::gotoxy(a,b);     cout<<R"( _____               _____ )";	H::delay(20);
	H::gotoxy(a,b+1);   cout<<R"(( ___ )             ( ___ ))";	H::delay(20);
	H::gotoxy(a,b+2);   cout<<R"( |   |~~~~~~~~~~~~~~~|   | )";	H::delay(20);

	H::setcolor(7); H::gotoxy(a,b+3);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(       _       )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+4);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(      / \      )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+5);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(     / _ \     )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+6);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(    / ___ \    )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+7);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(   /_/   \_\   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+8);   cout<<R"( |   |)";H::setcolor(c);cout<<R"(    _   _      )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+9);   cout<<R"( |   |)";H::setcolor(c);cout<<R"(   | \ | |     )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+10);  cout<<R"( |   |)";H::setcolor(c);cout<<R"(   |  \| |     )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+11);  cout<<R"( |   |)";H::setcolor(c);cout<<R"(   | |\  |     )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+12);  cout<<R"( |   |)";H::setcolor(c);cout<<R"(   |_| \_|     )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+13);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(    _____      )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+14);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(   |_   _|     )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+15);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(     | |       )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+16);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(     | |       )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+17);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(     |_|       )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);

	H::gotoxy(a,b+18);  cout<<R"( |___|~~~~~~~~~~~~~~~|___| )";	H::delay(20);
	H::gotoxy(a,b+19);  cout<<R"((_____)             (_____))";	H::delay(20);
}

void DNN::Design::Ground::DesignBasketball::_TextDNN(int a,int b,int c,int d)
{
	H::setcolor(7); H::gotoxy(a,b);     cout<<R"( _____             _____ )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+1);   cout<<R"(( ___ )           ( ___ ))";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+2);   cout<<R"( |   |~~~~~~~~~~~~~|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+3);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(    ____     )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+4);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(   |  _ \    )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+5);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(   | | | |   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+6);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(   | |_| |   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+7);   cout<<R"( |   |)";H::setcolor(d);cout<<R"(   |____/    )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+8);   cout<<R"( |   |)";H::setcolor(c);cout<<R"(    _   _    )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+9);   cout<<R"( |   |)";H::setcolor(c);cout<<R"(   | \ | |   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+10);  cout<<R"( |   |)";H::setcolor(c);cout<<R"(   |  \| |   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+11);  cout<<R"( |   |)";H::setcolor(c);cout<<R"(   | |\  |   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+12);  cout<<R"( |   |)";H::setcolor(c);cout<<R"(   |_| \_|   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+13);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(    _   _    )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+14);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(   | \ | |   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+15);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(   |  \| |   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+16);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(   | |\  |   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+17);  cout<<R"( |   |)";H::setcolor(d);cout<<R"(   |_| \_|   )";H::setcolor(7);cout<<R"(|   | )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+18);  cout<<R"( |___|~~~~~~~~~~~~~|___| )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+19);  cout<<R"((_____)           (_____))";	H::delay(20);
}

void DNN::Design::Ground::DesignBasketball::_TextFutal(int a,int b,int c)
{
	H::setcolor(c);
	H::gotoxy(a,b);     cout<<R"(>>===========================================<<)";
	H::gotoxy(a,b+1);   cout<<R"(|| _____  _   _  _____  ____     _     _     ||)";
	H::gotoxy(a,b+2);   cout<<R"(|||  ___|| | | ||_   _|/ ___|   / \   | |    ||)";
	H::gotoxy(a,b+3);   cout<<R"(||| |_   | | | |  | |  \___ \  / _ \  | |    ||)";
	H::gotoxy(a,b+4);   cout<<R"(|||  _|  | |_| |  | |   ___) |/ ___ \ | |___ ||)";
	H::gotoxy(a,b+5);   cout<<R"(|||_|     \___/   |_|  |____//_/   \_\|_____|||)";
	H::gotoxy(a,b+6);   cout<<R"(>>===========================================<<)";
}
void DNN::Design::Ground::DesignBasketball::_TextVolleyball(int a,int b, int c)
{
	H::setcolor(c);
	H::gotoxy(a,b);     cout<<R"(>>===========================================<<)";
	H::gotoxy(a,b+1);   cout<<R"(||__     __ ___   _      _      _____ __   __||)";
	H::gotoxy(a,b+2);   cout<<R"(||\ \   / // _ \ | |    | |    | ____|\ \ / /||)";
	H::gotoxy(a,b+3);   cout<<R"(|| \ \ / /| | | || |    | |    |  _|   \ V / ||)";
	H::gotoxy(a,b+4);   cout<<R"(||  \ V / | |_| || |___ | |___ | |___   | |  ||)";
	H::gotoxy(a,b+5);   cout<<R"(||   \_/   \___/ |_____||_____||_____|  |_|  ||)";
	H::gotoxy(a,b+6);   cout<<R"(>>===========================================<<)";
}
void DNN::Design::Ground::DesignBasketball::_TextBasket(int a, int b, int c)
{
	H::setcolor(c);
	H::gotoxy(a,b);     cout<<R"(>>==========================================<<)";
	H::gotoxy(a,b+1);   cout<<R"(|| ____     _     ____   _  __ _____  _____ ||)";
	H::gotoxy(a,b+2);   cout<<R"(||| __ )   / \   / ___| | |/ /| ____||_   _|||)";
	H::gotoxy(a,b+3);   cout<<R"(|||  _ \  / _ \  \___ \ | ' / |  _|    | |  ||)";
	H::gotoxy(a,b+4);   cout<<R"(||| |_) |/ ___ \  ___) || . \ | |___   | |  ||)";
	H::gotoxy(a,b+5);   cout<<R"(|||____//_/   \_\|____/ |_|\_\|_____|  |_|  ||)";
	H::gotoxy(a,b+6);   cout<<R"(>>==========================================<<)";
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////// ABOUT US DESIGN ////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Design::Ground::DesignAboutus::_TextAboutus(int a,int b, int c, int d)
{
	H::setcolor(7); H::gotoxy(a,b);     cout<<R"(__| |_______________________________________________________________________________________| |__)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+1);   cout<<R"(__   _______________________________________________________________________________________   __)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+2);   cout<<R"(  | |                                                                                       | |  )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+3);   cout<<R"(  | |)";H::setcolor(d);cout<<R"(      __       _______     ______    ____  ____  ___________ )";H::setcolor(c);cout<<R"(    ____  ____   ________ )";H::setcolor(7);cout<<R"(| |  )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+4);   cout<<R"(  | |)";H::setcolor(d);cout<<R"(     /""\     |   _  "\   /    " \  ("  _||_ " |("     _   "))";H::setcolor(c);cout<<R"(   ("  _||_ " | /"       ))";H::setcolor(7);cout<<R"(| |  )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+5);   cout<<R"(  | |)";H::setcolor(d);cout<<R"(    /    \    (. |_)  :) // ____  \ |   (  ) : | )__/  \\__/ )";H::setcolor(c);cout<<R"(   |   (  ) : |(:   \___/ )";H::setcolor(7);cout<<R"(| |  )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+6);   cout<<R"(  | |)";H::setcolor(c);cout<<R"(   /' /\  \   |:     \/ /  /    ) :)(:  |  | . )    \\_ /    )";H::setcolor(d);cout<<R"(   (:  |  | . ) \___  \   )";H::setcolor(7);cout<<R"(| |  )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+7);   cout<<R"(  | |)";H::setcolor(c);cout<<R"(  //  __'  \  (|  _  \\(: (____/ //  \\ \__/ //     |.  |    )";H::setcolor(d);cout<<R"(    \\ \__/ //   __/  \\  )";H::setcolor(7);cout<<R"(| |  )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+8);   cout<<R"(  | |)";H::setcolor(d);cout<<R"( /   /  \\  \ |: |_)  :)\        /   /\\ __ //\     \:  |    )";H::setcolor(c);cout<<R"(    /\\ __ //\  /" \   :) )";H::setcolor(7);cout<<R"(| |  )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+9);   cout<<R"(  | |)";H::setcolor(d);cout<<R"((___/    \___)(_______/  \"_____/   (__________)     \__|    )";H::setcolor(c);cout<<R"(   (__________)(_______/  )";H::setcolor(7);cout<<R"(| |  )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+10);  cout<<R"(__| |_______________________________________________________________________________________| |__)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+11);  cout<<R"(__   _______________________________________________________________________________________   __)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+12);  cout<<R"(  | |                                                                                       | |  )";	H::delay(20);
}

void DNN::Design::Ground::DesignAboutus::_TextLecturer(int a, int b, int c, int d)
{
	H::setcolor(7); H::gotoxy(a,b);     cout<<R"(>>=====================================================================================<<)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+1);   cout<<R"(||)";H::setcolor(d);cout<<R"( ___       _______   ______  ___________  ____  ____   _______    _______   _______  )";H::setcolor(7);cout<<R"(||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+2);   cout<<R"(||)";H::setcolor(d);cout<<R"(|"  |     /"     "| /" _  "\("     _   ")("  _||_ " | /"      \  /"     "| /"      \ )";H::setcolor(7);cout<<R"(||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+3);   cout<<R"(||)";H::setcolor(d);cout<<R"(||  |    (: ______)(: ( \___))__/  \\__/ |   (  ) : ||:        |(: ______)|:        |)";H::setcolor(7);cout<<R"(||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+4);   cout<<R"(||)";H::setcolor(c);cout<<R"(|:  |     \/    |   \/ \        \\_ /    (:  |  | . )|_____/   ) \/    |  |_____/   ))";H::setcolor(7);cout<<R"(||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+5);   cout<<R"(||)";H::setcolor(c);cout<<R"( \  |___  // ___)_  //  \ _     |.  |     \\ \__/ //  //      /  // ___)_  //      / )";H::setcolor(7);cout<<R"(||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+6);   cout<<R"(||)";H::setcolor(d);cout<<R"(( \_|:  \(:      "|(:   _) \    \:  |     /\\ __ //\ |:  __   \ (:      "||:  __   \ )";H::setcolor(7);cout<<R"(||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+7);   cout<<R"(||)";H::setcolor(d);cout<<R"( \_______)\_______) \_______)    \__|    (__________)|__|  \___) \_______)|__|  \___))";H::setcolor(7);cout<<R"(||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+8);   cout<<R"(>>=====================================================================================<<)";	H::delay(20);
}

void DNN::Design::Ground::DesignAboutus::_DesignAboutUs(int a, int b, int c, int d)
{
	H::setcursor(0,0);

	_TextLecturer(a+108,b+2,2,3);

	H::VLine(a+104,b,40,7,178);    H::delay(20);
	H::VLine(a+103,b,40,3,178);    H::delay(20);
	H::VLine(a+102,b,40,7,178);    H::delay(20);

	H::HLine(a+25,b+14,45,7,219);  H::delay(20);
	H::HLine(a+20,b+15,55,4,219);  H::delay(20);
	H::HLine(a+15,b+16,65,3,219);  H::delay(20);
	H::HLine(a+10,b+17,75,1,219);  H::delay(20);

	H::HLine(a+115,b+11,75,2,219); H::delay(20);
	H::HLine(a+120,b+12,65,3,219); H::delay(20);
	H::HLine(a+125,b+13,55,5,219); H::delay(20);
	H::HLine(a+130,b+14,45,7,219); H::delay(20);
	H::HLine(a+125,b+15,55,5,219); H::delay(20);
	H::HLine(a+120,b+16,65,3,219); H::delay(20);
	H::HLine(a+115,b+17,75,2,219); H::delay(20);

	H::drawBoxDoubleLineWithBG(a,b+18,95,22,255);      H::delay(20);
	H::drawBoxDoubleLineWithBG(a+109,b+18,85,22,255);  H::delay(20);

	H::drawBoxSingleLine(a+2,b+19,91,5,241);  H::delay(20);
	H::drawBoxSingleLine(a+2,b+26,91,13,241); H::delay(20);

	H::drawBoxSingleLine(a+110,b+18,83,22,241);  H::delay(20);

	H::drawBoxSingleLine(a+124,b+23,54,5,241);        H::delay(20);
	H::drawBoxDoubleLineWithBG(a+114,b+27,20,3,252);  H::delay(20);
	H::drawBoxDoubleLineWithBG(a+169,b+27,20,3,252);  H::delay(20);
	H::drawBoxDoubleLineWithBG(a+142,b+21,20,3,252);  H::delay(20);

	H::drawBoxDoubleLineWithBG(a+167,b+20,25,3,252);  H::delay(20);
	H::drawBoxDoubleLineWithBG(a+111,b+20,25,3,252);  H::delay(20);

	H::gotoxy(a+118,b+20); H::setcolor(252); cout << " SHCOOL ";
	H::gotoxy(a+112,b+22); H::setcolor(241); cout << " ANT TRAINING CENTER ";

	H::gotoxy(a+174,b+20); H::setcolor(252); cout << " COURSE ";
	H::gotoxy(a+174,b+22); H::setcolor(241); cout << " C++ OOP ";

	H::gotoxy(a+147,b+21); H::setcolor(252); cout << " TEACHER ";
	H::gotoxy(a+145,b+23); H::setcolor(241); cout << " MR.UON HINSY ";
	H::gotoxy(a+118,b+27); H::setcolor(252); cout << " MENTOR 1 ";
	H::gotoxy(a+114,b+29); H::setcolor(241); cout << " MISS. VUTH RACHANA ";
	H::gotoxy(a+173,b+27); H::setcolor(252); cout << " MENTOR 2 ";
	H::gotoxy(a+169,b+29); H::setcolor(241); cout << " MR.CHHEAN SEYHA ";
}

void DNN::Design::Ground::DesignAboutus::_TextMessage()
{
	H::gotoxy(9, 30); H::setcolor(241); cout<<"We're the scholarship students at"; H::setcolor(252); cout<<" [1] ANT Technology Training Center,"; H::setcolor(241); cout<<"  specialize ";
	H::gotoxy(4, 32); H::setcolor(241); cout<<"in Mobile Application. Study For 11 Months From 19 February 2024 To 20 December 2024.";
	H::gotoxy(4, 34); H::setcolor(241); cout<<"Thanks to the generous support of the"; H::setcolor(252); cout<<" [2] Ministry of Post and Telecommunication.";
	H::gotoxy(4, 36); H::setcolor(241); cout<<"This opportunity is allowing us to develop valuable skills in mobile app development and ";
	H::gotoxy(4, 38); H::setcolor(241); cout<<"pursue exciting careers in the tech industry."; H::setcolor(252); cout<<"[1] ANT Technology Training Center";
	H::gotoxy(4, 40); H::setcolor(252); cout<<"[2] Ministry of Post and Telecommunication.";
}

void DNN::Design::Ground::DesignAboutus::_TextVanneth(int a, int b, int c, int d)
{
	H::setcolor(7); H::gotoxy(a,b);     cout<<R"( _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+1);   cout<<R"(|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+2);   cout<<R"(|_|                                                                                    |_|)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+3);   cout<<R"(|_|)";H::setcolor(d);cout<<R"(  __  __ ____ __   __ _    _   _ _   _  __     ___    _   _ _   _ _____ _____ _   _ )";H::setcolor(7);cout<<R"(|_|)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+4);   cout<<R"(|_|)";H::setcolor(d);cout<<R"( |  \/  |  _ \\ \ / // \  | \ | | \ | | \ \   / / \  | \ | | \ | | ____|_   _| | | |)";H::setcolor(7);cout<<R"(|_|)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+5);   cout<<R"(|_|)";H::setcolor(c);cout<<R"( | |\/| | |_) |\ V // _ \ |  \| |  \| |  \ \ / / _ \ |  \| |  \| |  _|   | | | |_| |)";H::setcolor(7);cout<<R"(|_|)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+6);   cout<<R"(|_|)";H::setcolor(d);cout<<R"( | |  | |  _ < _| |/ ___ \| |\  | |\  |   \ V / ___ \| |\  | |\  | |___  | | |  _  |)";H::setcolor(7);cout<<R"(|_|)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+7);   cout<<R"(|_|)";H::setcolor(d);cout<<R"( |_|  |_|_| \_(_)_/_/   \_\_| \_|_| \_|    \_/_/   \_\_| \_|_| \_|_____| |_| |_| |_|)";H::setcolor(7);cout<<R"(|_|)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+8);   cout<<R"(|_| _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _  _ |_|)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+9);   cout<<R"(|_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_||_|)";	H::delay(20);
}
void DNN::Design::Ground::DesignAboutus::_TextDavid(int a, int b, int c, int d)
{
	H::setcolor(7); H::gotoxy(a,b);     cout<<R"(++----------------------------------------------------------------------++   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+1);   cout<<R"(++----------------------------------------------------------------------++   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+2);   cout<<R"(||)";H::setcolor(d);cout<<R"( __  __ ____    ___  _____ _   _ _   _   ____    ___     _____ ____   )";H::setcolor(7);cout<<R"(||   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+3);   cout<<R"(||)";H::setcolor(d);cout<<R"(|  \/  |  _ \  / _ \| ____| | | | \ | | |  _ \  / \ \   / /_ _|  _ \  )";H::setcolor(7);cout<<R"(||   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+4);   cout<<R"(||)";H::setcolor(d);cout<<R"(| |\/| | |_) || | | |  _| | | | |  \| | | | | |/ _ \ \ / / | || | | | )";H::setcolor(7);cout<<R"(||   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+5);   cout<<R"(||)";H::setcolor(c);cout<<R"(| |  | |  _ < | |_| | |___| |_| | |\  | | |_| / ___ \ V /  | || |_| | )";H::setcolor(7);cout<<R"(||   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+6);   cout<<R"(||)";H::setcolor(c);cout<<R"(|_|  |_|_| \_(_)___/|_____|\___/|_| \_| |____/_/   \_\_/  |___|____/  )";H::setcolor(7);cout<<R"(||   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+7);   cout<<R"(||                                                                      ||   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+8);   cout<<R"(++----------------------------------------------------------------------++   )";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+9);   cout<<R"(++----------------------------------------------------------------------++   )";	H::delay(20);
}

void DNN::Design::Ground::DesignAboutus::_TextAboutVanneth()
{
	H::gotoxy(10, 30); H::setcolor(252); cout<<"MR.YANN VANNETH";
	H::gotoxy(10, 32); H::setcolor(241); cout<<"PLACE OF BIRTH : OU REANG OV DISTRIC, TBONG KHMUM PROVINCE.";
	H::gotoxy(10, 34); H::setcolor(241); cout<<"AGE            : 21 YEARS.";
	H::gotoxy(10, 36); H::setcolor(252); cout<<"EDUCATIONS";
	H::gotoxy(10, 38); H::setcolor(241); cout<<"UNIVERSITY     : ROYAL UNIVERSITY OF PHNOM PENH.";
	H::gotoxy(10, 40); H::setcolor(241); cout<<"HIGHT SCHOOL   : HUN SEN SALA KRAV HIGHT SCHOOL.";
}
void DNN::Design::Ground::DesignAboutus::_TextAboutDavid()
{
	H::gotoxy(10, 30); H::setcolor(252); cout<<"MR.OEUN DAVID";
	H::gotoxy(10, 32); H::setcolor(241); cout<<"PLACE OF BIRTH : SAMRONG DISTRIC, TAKEO PROVINCE.";
	H::gotoxy(10, 34); H::setcolor(241); cout<<"AGE            : 22 YEARS.";
	H::gotoxy(10, 36); H::setcolor(252); cout<<"EDUCATIONS";
	H::gotoxy(10, 38); H::setcolor(241); cout<<"UNIVERSITY     : ROYAL UNIVERSITY OF PHNOM PENH.";
	H::gotoxy(10, 40); H::setcolor(241); cout<<"HIGHT SCHOOL   : PHNOM CHISOR HIGHT SCHOOL.";
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////// DESIGN INVOICE //////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DNN::Design::Ground::DesignInvoice::_DesignMenuInvoice(int a,int b)
{
	H::drawBoxSingleLine(a, b, 195, 48, 7);
	_TextMenuInvoice(a+5,b+3);

	H::VLine(a+6, b+11,1,7,219);
	H::VLine(a+6, b+12,20,6,207);

	H::VLine(a+37, b+11,1,7,219);
	H::VLine(a+37, b+12,20,6,207);

	H::VLine(a+37, b+15,1,7,219);
	H::VLine(a+6, b+15,1,7,219);
	H::HLine(a+6, b+16,30,7,207);

	H::VLine(a+37, b+21,1,7,219);
	H::VLine(a+6, b+21,1,7,219);
	H::HLine(a+6, b+22,30,7,207);

	H::VLine(a+37, b+27,1,7,219);
	H::VLine(a+6, b+27,1,7,219);
	H::HLine(a+6, b+28,30,7,207);

	H::VLine(a+37, b+31,1,7,219);
	H::VLine(a+6, b+31,1,7,219);
	H::HLine(a+6, b+32,30,6,207);

	H::drawBoxDoubleLineWithBG(a+11, b+14, 20, 3, 135);
	H::drawBoxDoubleLineWithBG(a+11, b+20, 20, 3, 135);
	H::drawBoxDoubleLineWithBG(a+11, b+26, 20, 3, 135);

	H::VLine(a+45,b+3,43,7,219);
}
void DNN::Design::Ground::DesignInvoice::_TextMenuInvoice(int a,int b)
{
	H::setcolor(7); H::gotoxy(a,b);     cout<<R"(++----------------------------++)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+1);   cout<<R"(++----------------------------++)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+2);   cout<<R"(||  __  __ _____ _   _ _   _  ||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+3);   cout<<R"(|| |  \/  | ____| \ | | | | | ||)";	H::delay(20);
	H::setcolor(3); H::gotoxy(a,b+4);   cout<<R"(|| | |\/| |  _| |  \| | | | | ||)";	H::delay(20);
	H::setcolor(3); H::gotoxy(a,b+5);   cout<<R"(|| | |  | | |___| |\  | |_| | ||)";	H::delay(20);
	H::setcolor(3); H::gotoxy(a,b+6);   cout<<R"(|| |_|  |_|_____|_| \_|\___/  ||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+7);   cout<<R"(||                            ||)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+8);   cout<<R"(++----------------------------++)";	H::delay(20);
	H::setcolor(7); H::gotoxy(a,b+9);   cout<<R"(++----------------------------++)";	H::delay(20);
}

void DNN::Design::Ground::DesignInvoice::_ChooseShfit(int a,int b)
{
	for(int i=0;i<55;i++)
	{
		H::clearBox((a-8)+i,b+3,2,43,7);
		H::VLine((a-5)+i,b+3,43,7,219);
		H::delay(60);
	}
	_TextMenuInvoice(a+5,b+3);

	H::VLine(a+6, b+11,1,7,219);
	H::VLine(a+6, b+12,20,6,207);

	H::VLine(a+37, b+11,1,7,219);
	H::VLine(a+37, b+12,20,6,207);

	H::VLine(a+37, b+15,1,7,219);
	H::VLine(a+6, b+15,1,7,219);
	H::HLine(a+6, b+16,30,7,207);

	H::VLine(a+37, b+21,1,7,219);
	H::VLine(a+6, b+21,1,7,219);
	H::HLine(a+6, b+22,30,7,207);

	H::VLine(a+37, b+27,1,7,219);
	H::VLine(a+6, b+27,1,7,219);
	H::HLine(a+6, b+28,30,7,207);

	H::VLine(a+37, b+31,1,7,219);
	H::VLine(a+6, b+31,1,7,219);
	H::HLine(a+6, b+32,30,6,207);
}

void DNN::Design::Ground::DesignInvoice::_DesignInputInvoice(int a,int b)
{
	H::drawBoxSingleLine(a,b+3,80,35,6);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// END OF NAMESPACE /////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif
