#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <fstream>
#include <cstdio>
#include "ctime"
#include <thread> 
#pragma comment(lib,"Winmm.lib")
using namespace std;
struct Users
{
	string login_new;
	string password_new;
}
users[100];

void sleep()
{
	ofstream log("log.txt", ios::app);
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	log << "Кот спит " << asctime(timeinfo) << endl;
	int satiety, happy, sleep, sleep2, happy2;
	ifstream in("stat.txt", ios::app);
	ofstream out("stat2.txt", ios::app);
	in >> satiety >> happy >> sleep;
	system("start sleep.mp3");
	cout << "Твой кот засыпает..." << endl;
	cout << R"(
                               __
                         _,-;''';`'-,.
                      _/',  `;  `;    `\
      ,        _..,-''    '   `  `      `\
     | ;._.,,-' .| |,_        ,,          `\
     | `;'      ;' ;, `,   ; |    '  '  .   \
     `; __`  ,'__  ` ,  ` ;  |      ;        \
     ; (6_);  (6_) ; |   ,    \        '      |       /
    ;;   _,' ,.    ` `,   '    `-._           |   __//_________
     ,;.=..`_..=.,' -'          ,''        _,--''------''''
_pb__\,`"=,,,=="',___,,,-----'''----'_'_'_''-;''
-----------------------''''''\ \'''''   )   /'
                              `\`,,,___/__/'_____,
                                `--,,,--,-,'''\
                               __,,-' /'       `
                             /'_,,--''
                            | (
                             `')" << endl;
	
	Sleep(1000);
	system("cls");
	for (int i = 0; i < 5; i++)
	{
		cout << "Твой кот засыпает..." << endl;
		cout << R"(
                               __
                         _,-;''';`'-,.
                      _/',  `;  `;    `\
      ,        _..,-''    '   `  `      `\
     | ;._.,,-' .| |,_        ,,          `\
     | `;'      ;' ;, `,   ; |    '  '  .   \
     `; __`  ,'__  ` ,  ` ;  |      ;        \
     ; (6_);  (6_) ; |   ,    \        '      |       /
    ;;   _,' ,.    ` `,   '    `-._           |   __//_________
     ,;.=..`_..=.,' -'          ,''        _,--''------''''
_pb__\,`"=,,,=="',___,,,-----'''----'_'_'_''-;''
-----------------------''''''\ \'''''   )   /'
                              `\`,,,___/__/'_____,
                                `--,,,--,-,'''\
                               __,,-' /'       `
                             /'_,,--''
                            | (
                             `')" << endl;
		
		Sleep(1700);
		system("cls");
		cout << "Твой кот засыпает..." << endl;
		cout << R"(
                               __
                         _,-;''';`'-,.
                      _/',  `;  `;    `\
      ,        _..,-''    '   `  `      `\
     | ;._.,,-' .| |,_        ,,          `\
     | `;'      ;' ;, `,   ; |    '  '  .   \
     `; __`  ,'__  ` ,  ` ;  |      ;        \
     ; (__);  (__) ; |   ,    \        '      |       /
    ;;   _,' ,.    ` `,   '    `-._           |   __//_________
     ,;.=..`_..=.,' -'          ,''        _,--''------''''
_pb__\,`"=,,,=="',___,,,-----'''----'_'_'_''-;''
-----------------------''''''\ \'''''   )   /'
                              `\`,,,___/__/'_____,
                                `--,,,--,-,'''\
                               __,,-' /'       `
                             /'_,,--''
                            | (
                             `')" << endl;
		Sleep(300);
		system("cls");
	}
	
	srand((unsigned)time(NULL));
	for (int i = 0; i < rand() % 50 + 40; i++)
	{
		cout << "Твой кот заснул..." << endl;
		cout << R"(
                               __
                         _,-;''';`'-,.
                      _/',  `;  `;    `\
      ,        _..,-''    '   `  `      `\
     | ;._.,,-' .| |,_        ,,          `\
     | `;'      ;' ;, `,   ; |    '  '  .   \
     `; __`  ,'__  ` ,  ` ;  |      ;        \
     ; (__);  (__) ; |   ,    \        '      |       /
    ;;   _,' ,.    ` `,   '    `-._           |   __//_________
     ,;.=..`_..=.,' -'          ,''        _,--''------''''
_pb__\,`"=,,,=="',___,,,-----'''----'_'_'_''-;''
-----------------------''''''\ \'''''   )   /'
                              `\`,,,___/__/'_____,
                                `--,,,--,-,'''\
                               __,,-' /'       `
                             /'_,,--''
                            | (
                             `')" << endl;
		Sleep(2000);
		system("cls");
	}
	sleep2 = sleep + 50;
	happy2 = happy - 50;
	cout << "И проснулся." << endl;
	PlaySound(L"cat-meow8.wav", NULL, NULL);
	cout << R"(
      ,/|         _.--''^``-...___.._.,;
     /, \'.     _-'          ,--,,,--'''
    { \    `_-''       '    /}
     `;;'            ;   ; ;
 ._.--''     ._,,, _..'  .;.'
  (,_....----'''     (,..--'')" << endl;
	Sleep(2500);
	system("cls");
	out << satiety << " " << happy2 << " " << sleep2;
	cout << "Сытость = " << satiety << " Счастье = " << happy2 << " Сон = " << sleep2;
	Sleep(5000);
	out.close();
	in.close();
	if (remove("stat.txt") != 0)
	{
		cout << "Ошибка удаления файлаn";
	}
	rename("stat2.txt", "stat.txt");
	system("start intro.mp3");
}

void stat()
{
	int satiety, happy, sleep;
	system("cls");
	ifstream fin("stat.txt");
	fin >> satiety >> happy >> sleep;
	cout << "Сытость = " << satiety << " Счастье = " << happy << " Сон = " << sleep;
	Sleep(2000);
	system("cls");
}

void read1(string login_new, string password_new)
{
	ofstream fout("users.txt", ios::app);
	ifstream fin("users.txt");
	for (int i = 0; i < 100; i++)
	{
		fin >> users[1].login_new >> users[1].password_new;
	}
}

int eat()
{
	ofstream log("log.txt", ios::app);
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	log << "Кот ест " << asctime(timeinfo) << endl;
	int satiety, happy, sleep, satiety2;
	ifstream in("stat.txt", ios::app);
	ofstream out("stat2.txt", ios::app);
	in >> satiety >> happy >> sleep;
	setlocale(LC_ALL, "ru");
	system("cls");
	cout << "Твой кот ест\n";
	cout << "Жди"<<endl;
	system("cls");
	satiety2 = 0;
	srand((unsigned)time(NULL));
	for (int i = 0; i < rand() % 5 + 2; i++) 
	{
		cout << "Хрум"<<endl;
		cout << R"(     /\__/\)" << endl;
		cout << R"(    /`    '\)" << endl;
		cout << R"(  === 0  0 ===)" << endl;
		cout << R"(    \  __  /)" << endl;
		cout << R"(   /        \)" << endl;
		cout << R"(  /          \)" << endl;
		cout << R"( |            |)" << endl;
		cout << R"(  \  ||  ||  /)" << endl;
		cout << R"(   \_oo__oo_/#######o)" << endl;
		cout << "Кот съел корма --> " << i << endl;
		Sleep(1000);
		system("cls");
		cout << "Хрум" << endl;
		cout << R"(     /\__/\)" << endl;
		cout << R"(    /`    '\)" << endl;
		cout << R"(  === 0  0 ===)" << endl;
		cout << R"(    \  --  /)" << endl;
		cout << R"(   /        \)" << endl;
		cout << R"(  /          \)" << endl;
		cout << R"( |            |)" << endl;
		cout << R"(  \  ||  ||  /)" << endl;
		cout << R"(   \_oo__oo_/#######o)" << endl;
		cout << "Кот съел корма --> "<< i << endl;
		PlaySound(L"cat-lick.wav", NULL, NULL);
		Sleep(1000); // ждать 1 секунд, время эта функция считает в тысячных долях секунды
		satiety2 = satiety + (i*15);
		system("cls");
	}
	
	cout << "Спасибо, МЯУ!!!\n" << endl;
	cout << R"(        |\__/,|   (`\)" << endl;
	cout << R"(      _.|o o  |_   ) ))" << endl;
	cout << R"(  ---(((---(((---------)" << endl;
	PlaySound(L"cat-meow8.wav", NULL, NULL);
	Sleep(5000);
	out << satiety2 << " " << happy << " " << sleep;
	cout << "Сытость = " << satiety2 << " Счастье = " << happy << " Сон = " << sleep;
	Sleep(2000);
	out.close();
	in.close();
	if (remove("stat.txt") != 0)
	{
		cout << "Ошибка удаления файлаn";
	}
	rename("stat2.txt", "stat.txt");
	return 0;
	system("start intro.mp3");
}

void voice()
{
	int a;
	srand(time(0));
	a = rand() % 10 + 5;
	cout << " " << a;
	PlaySound(L"cat-meow8.wav", NULL, NULL);
	//system("start coy.wav");
	

	//system("start intro.mp3");
}

void walk()
{
	int satiety, happy, sleep, happy2, sleep2, satiety2;
	system("cls");
	cout << "Твой кот вышел погулять."<<endl;
	cout << R"(                _             )" << endl;
	cout << R"(                \`*-.            )" << endl;
	cout << R"(                 )  _`-.          )" << endl;
	cout << R"(                .  : `. .               )" << endl;
	cout << R"(                : _   '  \               )" << endl;
	cout << R"(                ; *` _.   `*-._          )" << endl;
	cout << R"(                `-.-'          `-.       )" << endl;
	cout << R"(                  ;       `       `.     )" << endl;
	cout << R"(                  :.       .        \    )" << endl;
	cout << R"(                  . \  .   :   .-'   .   )" << endl;
	cout << R"(                  '  `+.;  ;  '      :   )" << endl;
	cout << R"(                  :  '  |    ;       ;-. )" << endl;
	cout << R"(                  ; '   : :`-:     _.`* ;)" << endl;
	cout << R"(         [bug] .*' /  .*' ; .*`- +'  `*' )" << endl;
	cout << R"(               `*-*   `*-*  `*-*'        )" << endl;
	Sleep(2000);
	int a,n;
	srand(time(0));
	a = rand() % 3;
	cout << a;
	Sleep(1000);
	system("cls");
	if (a == 1)
	{
		ofstream log("log.txt", ios::app);
		time_t seconds = time(NULL);
		tm* timeinfo = localtime(&seconds);
		log << "Кот залез на дерево " << asctime(timeinfo) << endl;
		ifstream in("stat.txt", ios::app);
		ofstream out("stat2.txt", ios::app);
		in >> satiety >> happy >> sleep;
		cout << "Твой кот решил залезть на дерево" << endl;
		Sleep(1500);
		cout << R"(        .
       -.\_.--._.______.-------.___.---------.___
       )`.                                       `-._
      (                                              `---.
      /o                                                  `.
     (                                                      \
   _.'`.  _                                                  L
   .'/| "" """"._                                            |
      |          \             |                             J
                  \-._          \                             L
                  /   `-.        \                            J
                 /      /`-.      )_                           `
                /    .-'    `    J  """"-----.`-._             |\            
              .'   .'        L   F            `-. `-.___        \`.
           ._/   .'          )  )                `-    .'""""`.  \)
__________((  _.'__       .-'  J              _.-'   .'        `. \
                   """""""((  .'--.__________(   _.-'___________)..|----------------._____
                            ""                """               ``U'
-----._______
             `-------.__________.--
                       `-.                      ______________.---------------------------
                          `----'`---------'----')" << endl;

		Sleep(2000);
		system("cls");
		cout << "Твой кот решил залезть на дерево" << endl;
		PlaySound(L"cat-meow5.wav", NULL, NULL);
		cout << R"(
                                                               .-.        .-.
                                                              -  )      .'  )
                                                   __        /  /      /   /
                         .--.                   .-'  """"-._/__(_____.'   /
                      .-'  _)          __     .'  ___.--'                J
                     /  `-.,   .------'  `--.J---'                      /
                     F      `-<                                       .'
                     `.        `.                                 .--'
                     .'|         \                              .'
                   .'            J                             /
                  /              /                            /
                 /              '                           -'
               .'                                          (
              /                               __.----'      \
             /                         __.---'       `.      L
          .-'     _.              .--''                \     \
         /       '             .-'                      \     \
         `--.       /`  __.---'                          \     \
             \     /  .'                                  \     \
             -`.    _/                                     \     \
              ' \_,-'-._                                    \     L
                    \`.`-                                    `.    L
                                                               \   |
                                                                L   L
                                                                |   )
                                                                 \  /
                                                                  "")" << endl;
		Sleep(200);
		system("cls");
		cout << "Твой кот решил залезть на дерево" << endl;
		
		cout << R"(
                                                    _                 
                                                   / )        
                                                  (   )         
                                                  J   (          
                                                   \   \         
                                               .')_.F   \        
                                               (_)'      \        
                                              .'         /
                                             /          /
                  F-.                       /           `.
                  )  `._                 _.'/             \
                 /  -   `-------.___'`-'`                  L
                /                  )                       |
               /_.-.                                       )
              --._                                    .' .-.`.
               \  '                                   | /   \ )
             -''`.                                    \ |    Y
           .'.'/| `--'                               .'`.\__/
            ' '      J                            .-'
                      \                         .'
                   _.-'--.           ___     _.'
                .-'       `-    )--'``  `````
              .'    ._    __.--'
              (  _.'  """"
               ""  )" << endl;
		Sleep(200);
		system("cls");
		cout << "Твой кот решил залезть на дерево" << endl;
		cout << R"(
                                                 _.,._./)
                                             .-''        `-.
                  ___                      .'               `.
           ____.-'   `--.____             /                 <)
         <_.  /__---.    `.  `-""------.-'                   L
          `. //  `,                                        -.|
            \ \    )                                         `._
             | )                                                `-.
             J                                                     `-.
              L  _.      /         \                      _           `--.__
              `. \)     /           `.                     `-._             `-.___
                \    .'              |                   _.'   `-._               `-.
                 |"-'\`-._    \      |     .--._    _.--'          ``-.___           )
                 J  J\`.  `-._ \     |_.--'     """"                      `----.___.'
                  L  )        "J    J
                   `"           L   |
                                ( ...\
                                 \\\\'
                                  `-')" << endl;
		Sleep(200);
		system("cls");
		cout << "Твой кот решил залезть на дерево" << endl;
		cout << R"(
                                           ______  .----.___
                                       .--'      `' `-      `-.
                                    .-'                        `.
                                __.'-                            `.
                              .'                                   `.
                   _.---._   /                                       `.
                 .'       "-'                                          `.
             .--'                                              .         `.
             `._.-"                                             \._        `.
               <_`-.                            .'              |  `.        `.
                |`                   .'     .--'._            .'     `-.       `.
                |         |/         |   .-'      `---.__.---'          `.       `.
                 \``    _.-          | .'                                 `.       `.
                  L   //F `.         |/                                     `-.      \
                  |"""\J    \        |                                         `-.    \
                   |||\F   .'\       |                                            `-._/
                    |`J  .'   \|     F
                    ` F |      )    J
                     J  F      |    J
                     |  F      |    F
                     \_/       |   J
                               |   )
                               F  J
                              J   |
                             ')   F
                             /.   |                             
                             ', J'             
                             `-'')" << endl;
		Sleep(200);
		system("cls");
		cout << "Твой кот решил залезть на дерево" << endl;

		cout << R"(
                                                                .-""-.__
                                              _.--"""--._____.-'        `-._
                                           .-'                              `.
                                         .'                        _.._       `.
                                        /                       J""    `-.      \
                                       /                         \        `-.    `.
                                     .'          |               F           \     \
                                     F           |              /             `.    \
                               _.---<_           J             J                `-._/
                             ./`.     `.          \          J F
                          __/ F  )                 \          \
                        <     |                \    >.         L
                         `-.                    |  J  `-.      )
                           J         |          | /      `-    F
                            \  o     /         (|/        //  /
                             `.    )'.          |        /'  /
                              `---'`\ `.        |        /  /
                              '|\\ \ `. `.      |       /( /
                                 `` `  \  \     |       \_'
                                        L  L    |     .' /
                                        |  |    |    (_.'
                                        J  J    F
                                        J  J   J
                                        J  J   J                                
                                        J  J   F                                
                                        |  |  J                                 
                                        |  F  F                                 
                                        F /L  |                               
                                        `' \_)'                               
                                                )" << endl;
		Sleep(200);
		system("cls");
		cout << "Твой кот решил залезть на дерево" << endl;
		cout << R"(
                                                                                 .--.
                                                                                J    L
                                                                                |    |
                                                                                F    F
                                                                               J    J
                                                                              /    /
                                                                             /    /
                                                                           .'    /
                                                   .--""--._              /     /
                                               _.-'         `-.          /     /
                                    __       .'                `.       /     /
                                 _-'-."`-.  J                    \     /     /
                            .---(  `, _   `'|                     `.  J     /
                              `. )                                  ""     /
                               F                                          J
                               L                  |                      J
                               ` (/     /         |                      F
                                |    ._'          |                      |
                               /'`--'`.           |                      J
                               '||\   |-._        `.  ___.               |
                                 `     \  `.        |/    `-            J
                                        F   L       /       J           /
                                        |   J      J         F         J
                                        |    \     J         |        J
                                        |    |L    J         J        J
                                        |    FJ    |          L       |
                                        |   J  L   |          L\      F
                                        |   F  |   |           L\    J
                                        F  F   |   |           | L   |
                                       J  J    |   |           | |   F
                                       /  )    F  J            F F  J
                                      ( .'    )   F           J J  F
                                      `"     (   J           /.'  J
                                              `-'           ||-' |)
                                                              '-')" << endl;
		Sleep(200);
		system("cls");
		cout << "Твой кот решил залезть на дерево" << endl;
		cout << R"(
                                               .--.
                                               `.  \
                                                 \  \
                                                  .  \
                                                  :   .
                                                  |    .
                                                  |    :
                                                  |    |
  ..._  ___                                       |    |
 `."".`''''""--..___                              |    |
 ,-\  \             ""-...__         _____________/    |
 / ` " '                    `""""""""                  .
 \                                                      L
 (>                                                      \
/                                                         \
\_    ___..---.                                            L
  `--'         '.                                           \
                 .                                           \_
                _/`.                                           `.._
             .'     -.                                             `.
            /     __.-Y     /''''''-...___,...--------.._            |
           /   _."    |    /                ' .      \   '---..._    |
          /   /      /    /                _,. '    ,/           |   |
          \_,'     _.'   /              /''     _,-'            _|   |
                  '     /               `-----''               /     |
                  `...-'                                       !_____))" << endl;

		cout << "И упал. Зато хорошо прогулялся. " << endl;
		//ofstream log("log.txt", ios::app);
		//time_t seconds = time(NULL);
		//tm* timeinfo = localtime(&seconds);
		log << "Кот упал с дерева " << asctime(timeinfo) << endl;
		happy2 = happy + 20;
		sleep2 = sleep - 15;
		satiety2 = satiety - 5;
		out << satiety2 << " " << happy2 << " " << sleep2;
		cout << "Сытость = " << satiety2 << " Счастье = " << happy2 << " Сон = " << sleep2;
		Sleep(5000);
		out.close();
		in.close();
		if (remove("stat.txt") != 0)
		{
			cout << "Ошибка удаления файлаn";
		}
		rename("stat2.txt", "stat.txt");
		system("cls");
	}
	else if (a == 2)
	{
		ofstream log("log.txt", ios::app);
		time_t seconds = time(NULL);
		tm* timeinfo = localtime(&seconds);
		log << "Кот думает " << asctime(timeinfo) << endl;
		ifstream in("stat.txt", ios::app);
		ofstream out("stat2.txt", ios::app);
		in >> satiety >> happy >> sleep;
		system("start coy.wav");
		cout << "Твой кот решил спокойно посидеть на заборе и подумать о его кошачей жизни." << endl;
		Sleep(1500);
		srand((unsigned)time(NULL));
		n = rand() % 5 + 2;
		for (int i = 0; i < n; i++)
		{
			
			cout << R"(
            |\___/|
            )     (
           =\     /=
             )===(
            /     \
            |     |
           /       \
           \       /
            \__  _/
              ( (
               ) )
              (_(
							)" << endl;
			Sleep(1000);
			system("cls");
			cout << R"(
            |\___/|
            )     (
           =\     /=
             )===(
            /     \
            |     |
           /       \
           \       /
            \__  _/
              ) )
             ( (
              )_)
							)" << endl;
			Sleep(1000);
			system("cls");
		}
		happy2 = happy + 20;
		sleep2 = sleep - 10;
		satiety2 = satiety - 10;
		out << satiety2 << " " << happy2 << " " << sleep2;
		cout << "Сытость = " << satiety << " Счастье = " << happy2 << " Сон = " << sleep2;
		Sleep(5000);
		out.close();
		in.close();
		if (remove("stat.txt") != 0)
		{
			cout << "Ошибка удаления файлаn";
		}
		rename("stat2.txt", "stat.txt");
		system("cls");
		system("start intro.mp3");
	}
	else if (a == 0)
	{
		ofstream log("log.txt", ios::app);
		time_t seconds = time(NULL);
		tm* timeinfo = localtime(&seconds);
		log << "Кот гуляет ночью " << asctime(timeinfo) << endl;
		ifstream in("stat.txt", ios::app);
		ofstream out("stat2.txt", ios::app);
		in >> satiety >> happy >> sleep;
		system("start guitar.mp3");
		cout << R"()" << endl;
		cout << R"(
             *     ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *
          |\___/|
          )     (             .              '
         =\     /=
           )===(       *
          /     \
          |     |
         /       \
         \       /
  _/\_/\_/\__  _/_/\_/\_/\_/\_/\_/\_/\_/\_/\_
  |  |  |  |( (  |  |  |  |  |  |  |  |  |  |
  |  |  |  | ) ) |  |  |  |  |  |  |  |  |  |
  |  |  |  |(_(  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |)" << endl;
		Sleep(2000);
		system("cls");
		cout << R"(
             *     ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *
          |\___/|
         =) ^Y^ (=            .              '
          \  ^  /
           )=*=(       *
          /     \
          |     |
         /| | | |\
         \| | |_|/\
  _/\_/\_//_// ___/\_/\_/\_/\_/\_/\_/\_/\_/\_
  |  |  |  | \_) |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |)" << endl;
		Sleep(2000);
		system("cls");
		cout << R"(
             *     ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *    _
          |\___/|                      \\
         =) ^Y^ (=   |\_/|              ||    '
          \  ^  /    )a a '._.-""""-.  //
           )=*=(    =\T_= /    ~  ~  \//
          /     \     `"`\   ~   / ~  /
          |     |         |~   \ |  ~/
         /| | | |\         \  ~/- \ ~\
         \| | |_|/|        || |  // /`
  _/\_/\_//_// __//\_/\_/\_((_|\((_//\_/\_/\_
  |  |  |  | \_) |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |)" << endl;
		Sleep(2000);
		system("cls");
		srand((unsigned)time(NULL));
		n = rand() % 4 + 2;

		cout << R"(
            *     ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *    
          |\___/|     /\___/\
          )     (     )    ~( .              '
         =\     /=   =\~    /=
           )===(       ) ~ (
          /     \     /     \
          |     |     ) ~   (
         /       \   /     ~ \
         \       /   \~     ~/
  _/\_/\_/\__  _/_/\_/\__~__/_/\_/\_/\_/\_/\_
  |  |  |  |( (  |  |  | ))  |  |  |  |  |  |
  |  |  |  | ) ) |  |  |//|  |  |  |  |  |  |
  |  |  |  |(_(  |  |  (( |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |\)|  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |)" << endl;
		Sleep(2000);
		system("cls");
		for (int i = 0; i < n; i++)
		{
			cout << R"(
            *     ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *    
          |\___/|     /\___/\
          )     (     )    ~( .              '
         =\     /=   =\~    /=
           )===(       ) ~ (
          /     \     /     \
          |     |     ) ~   (
         /       \   /     ~ \
         \       /   \~     ~/
  _/\_/\_/\__  _/_/\_/\__~__/_/\_/\_/\_/\_/\_
  |  |  |  | ) ) |  |  | ))  |  |  |  |  |  |
  |  |  |  |( (  |  |  |//|  |  |  |  |  |  |
  |  |  |  | )_) |  |  (( |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |\)|  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |)" << endl;
			Sleep(2500);
			system("cls");
			cout << R"(
            *     ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *    
          |\___/|     /\___/\
          )     (     )    ~( .              '
         =\     /=   =\~    /=
           )===(       ) ~ (
          /     \     /     \
          |     |     ) ~   (
         /       \   /     ~ \
         \       /   \~     ~/
  _/\_/\_/\__  _/_/\_/\__~__/_/\_/\_/\_/\_/\_
  |  |  |  |( (  |  |  | ))  |  |  |  |  |  |
  |  |  |  | ) ) |  |  |//|  |  |  |  |  |  |
  |  |  |  |(_(  |  |  (( |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |\)|  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |)" << endl;
			Sleep(2500);
			system("cls");
		}
	happy2 = happy + 40;
	sleep2 = sleep - 10;
	satiety2 = satiety - 5;
	out << satiety2 << " " << happy2 << " " << sleep;
	cout << "Сытость = " << satiety2 << " Счастье = " << happy2 << " Сон = " << sleep2;
	Sleep(5000);
	out.close();
	in.close();
	if (remove("stat.txt") != 0)
	{
		cout << "Ошибка удаления файлаn";
	}
	rename("stat2.txt", "stat.txt");
	system("cls");
	}
	system("start intro.mp3");
}

void wait()
{
	
	cout << "Привет, это твой кот." << endl;
	cout << R"(   |\_._/| )" << endl;
	cout << "   | o o | " << endl;
	cout << "   (  T  ) " << endl;
	cout << "  .^`-^-'^. " << endl;
	cout << "  `.  ;  .' " << endl;
	cout << "  | | | | | " << endl;
	cout << " ((_((|))_)) " << endl;
	cout << "select prog: (e)at, (v)oise, (w)alk, (S)tatistics" << endl;
	Sleep(500);
	system("cls");
	
	cout << "Привет, это твой кот." << endl;
	cout << R"(   |,\__/| )" << endl;
	cout << "   |  o o| " << endl;
	cout << "   (   T ) " << endl;
	cout << "  .^`-^-'^. " << endl;
	cout << "  `.  ;  .' " << endl;
	cout << "  | | | | | " << endl;
	cout << " ((_((|))_)) " << endl;
	cout << "select prog: (e)at, (v)oise, (w)alk, (S)tatistics" << endl;
	Sleep(500);
	system("cls");

	
	cout << "Привет, это твой кот." << endl;
	cout << R"(   |\__/,| )" << endl;
	cout << "   |o o  | " << endl;
	cout << "   ( T   ) " << endl;
	cout << "  .^`-^-'^. " << endl;
	cout << "  `.  ;  .' " << endl;
	cout << "  | | | | | " << endl;
	cout << " ((_((|))_)) " << endl;
	cout << "select prog: (e)at, (v)oise, (w)alk, (S)tatistics" << endl;
	Sleep(500);
	system("cls");
	
	
}

int main()
{
	int satiety, happy, son;
	float m;
	setlocale(LC_ALL, "ru");
	m = 0;
	system("start intro.mp3");
	cout << "    /" << R"(\)" << "_____/" << R"(\)" << endl;
	cout << "   /  o   o  " << static_cast<char>(92) << endl;
	cout << "  ( ==  ^  == ) " << endl;
	cout << "   )         (" << endl;
	cout << "  (           )" << endl;
	cout << " ( (  )   (  ) )" << endl;
	cout << "(__(__)___(__)__)" << endl;
	cout << "    Загрузка" << endl;
	
	Sleep(1000);
	system("cls");

	while (!_kbhit())
	{
		int i;
		srand((unsigned)time(NULL));
		i = rand() % 7 + 6;
		if (i == 6)
		{
			cout << "Hello from cat " << i << endl;
			Sleep(1000);
			ifstream in("stat.txt", ios::app);
			in >> satiety >> happy >> son;
			in.close();
			cout << "Сытость = " << satiety << " Счастье = " << happy << " Сон = " << son << endl;
			Sleep(5000);
			system("cls");
			if (satiety < happy && satiety < son)
			{
				ofstream log("log.txt", ios::app);
				time_t seconds = time(NULL);
				tm* timeinfo = localtime(&seconds);
				log << "Кот проголодался " << asctime(timeinfo) << endl;
				log.close();
				cout << "Твой кот голодный" << endl;
				Sleep(1500);
				system("cls");
				eat();
			}
			if (happy < satiety && happy < son)
			{
				ofstream log("log.txt", ios::app);
				time_t seconds = time(NULL);
				tm* timeinfo = localtime(&seconds);
				log << "Кот хочет гулять " << asctime(timeinfo) << endl;
				log.close();
				cout << "Твой кот хочет погулять" << endl;
				Sleep(1500);
				system("cls");
				walk();
			}
			if (son < happy && son < satiety)
			{
				ofstream log("log.txt", ios::app);
				time_t seconds = time(NULL);
				tm* timeinfo = localtime(&seconds);
				log << "Кот хочет спать " << asctime(timeinfo) << endl;
				log.close();
				cout << "Твой кот хочет спать" << endl;
				Sleep(1500);
				system("cls");
				sleep();
			}
			if (satiety == happy)
			{
				ofstream log("log.txt", ios::app);
				time_t seconds = time(NULL);
				tm* timeinfo = localtime(&seconds);
				log << "Кот хочет спать " << asctime(timeinfo) << endl;
				log.close();
				cout << "Твой кот сыт и счастлив" << endl;
				Sleep(1500);
				system("cls");
				sleep();
			}
			if (satiety == son)
			{
				ofstream log("log.txt", ios::app);
				time_t seconds = time(NULL);
				tm* timeinfo = localtime(&seconds);
				log << "Кот хочет гулять " << asctime(timeinfo) << endl;
				log.close();
				cout << "Твой кот сыт и бодр" << endl;
				Sleep(1500);
				system("cls");
				walk();
			}
			if (happy == son)
			{
				ofstream log("log.txt", ios::app);
				time_t seconds = time(NULL);
				tm* timeinfo = localtime(&seconds);
				log << "Кот проголодался " << asctime(timeinfo) << endl;
				log.close();
				cout << "Твой кот счастлив и бодр" << endl;
				Sleep(1500);
				system("cls");
				eat();
			}
		}
		wait();
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'e':
				eat();
				break;
			case 'v':
				voice();
				break;
			case 's':
				stat();
				break;
			case 'w':
				walk();
				break;
			case 'c':
				sleep();
				break;
			}
		}
	}
}
