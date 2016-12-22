#include <iostream>
#include <stdlib.h>

//http://stackoverflow.com/questions/29721523/how-to-use-gotoxy-function-instead-of-clrscr
//http://flyingdc.pixnet.net/blog/post/24333750-gotoxy()-%E5%A6%99%E7%94%A8%E7%A7%BB%E5%8B%95%E6%B8%B8%E6%A8%99-
//http://www.chris.com/ascii/index.php?art=holiday/christmas/other
//http://chris.com/ascii/index.php?art=holiday/christmas/trees

using namespace std;
#ifdef _WIN32
#include <windows.h>

void gotoxy(int xpos, int ypos)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos; scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput, scrn);
}

void cls()
{
	system("cls");
}
#else
// http://stackoverflow.com/questions/1157209/is-there-an-alternative-sleep-function-in-c-to-milliseconds
#include <time.h>

void Sleep(int milli)
{
	struct timespec ts;
	ts.tv_sec = milli / 1000;
	ts.tv_nsec = (milli % 1000) * 1000000;
	nanosleep(&ts, NULL);
}

void cls()
{
	system("clear");
}
#endif

int main()
{
	while (1) {
		int i;

		cout << "           *             ," << endl;
		cout << "                       _/^\\_" << endl;
		cout << "                      <     >" << endl;
		cout << "     *                 /.-.\\         *" << endl;
		cout << "              *        `/&\\`                   *" << endl;
		cout << "                      ,@.*;@," << endl;
		cout << "                     /_o.I %_\\    *" << endl;
		cout << "        *           (`\'--:o(_@;" << endl;
		cout << "                   /`;--.,__ `\')             *" << endl;
		cout << "                  ;@`o % O,*`\'`&\\ " << endl;
		cout << "            *    (`\'--)_@ ;o %'()\\      *" << endl;
		cout << "                 /`;--._`\'\'--._O\'@;" << endl;
		cout << "                /&*,()~o`;-.,_ `\"\"`)" << endl;
		cout << "     *          /`,@ ;+& () o*`;-\';\\" << endl;
		cout << "               (`\"\"--.,_0 +% @' &()\\" << endl;
		cout << "               /-.,_    ``\'\'--....-\'`)  *" << endl;
		cout << "          *    /@%;o`:;\'--,.__   __.\'\\" << endl;
		cout << "              ;*,&(); @ % &^;~`\"`o;@();         *" << endl;
		cout << "              /(); o^~; & ().o@*&`;&%O\\" << endl;
		cout << "              `\"=\"==\"\"==,,,.,=\"==\"===\"`" << endl;
		cout << "           __.----.---\'\'#####---...___...-----._" << endl;
		cout << "         \'`     `       #####     `        ``" << endl;
		cout << "              `        `\"\"\"\"\"`        `" << endl;
		cout << "" << endl;
		cout << "  /|,/ _   _ _         / ` /_  _ .  _ _/_ _ _   _    _         " << endl;
		cout << " /  / /_\' / / /_/     /_, / / / / _\\  /  / / / /_| _\\          " << endl;
		cout << "              _/" << endl;
		Sleep(1000);
		cls();

		//cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
		//Sleep(500);

		//system("cls");


		cout << "           *             ," << endl;
		cout << "                       _/^\\_" << endl;
		cout << "                      <     >" << endl;
		cout << "     *                 /.-.\\         *" << endl;
		cout << "              *        `/&\\`                   *" << endl;
		cout << "                      , .*; ," << endl;
		cout << "                     /_o.I %_\\    *" << endl;
		cout << "        *           (`\'--:o(_ ;" << endl;
		cout << "                   /`;--.,__ `\')             *" << endl;
		cout << "                  ; `o % O,*`\'`&\\ " << endl;
		cout << "            *    (`\'--)_  ;o %'()\\      *" << endl;
		cout << "                 /`;--._`\'\'--._O\' ;" << endl;
		cout << "                /&*,()~o`;-.,_ `\"\"`)" << endl;
		cout << "     *          /`,  ;+& () o*`;-\';\\" << endl;
		cout << "               (`\"\"--.,_0 +%  ' &()\\" << endl;
		cout << "               /-.,_    ``\'\'--....-\'`)  *" << endl;
		cout << "          *    / %;o`:;\'--,.__   __.\'\\" << endl;
		cout << "              ;*,&();   % &^;~`\"`o; ();         *" << endl;
		cout << "              /(); o^~; & ().o *&`;&%O\\" << endl;
		cout << "              `\"=\"==\"\"==,,,.,=\"==\"===\"`" << endl;
		cout << "           __.----.---\'\'#####---...___...-----._" << endl;
		cout << "         \'`     `       #####     `        ``" << endl;
		cout << "              `        `\"\"\"\"\"`        `" << endl;
		cout << "" << endl;
		cout << "  /|,/ _   _ _         / ` /_  _ .  _ _/_ _ _   _    _         " << endl;
		cout << " /  / /_\' / / /_/     /_, / / / / _\\  /  / / / /_| _\\          " << endl;
		cout << "              _/" << endl;
		Sleep(1000);
		cls();


		cout << "           *             ," << endl;
		cout << "                       _/^\\_" << endl;
		cout << "                      <     >" << endl;
		cout << "     *                 /.-.\\         *" << endl;
		cout << "              *        `/&\\`                   *" << endl;
		cout << "                      ,@.*;@," << endl;
		cout << "                     /_ .I %_\\    *" << endl;
		cout << "        *           (`\'--: (_@;" << endl;
		cout << "                   /`;--.,__ `\')             *" << endl;
		cout << "                  ;@`  %  ,*`\'`&\\ " << endl;
		cout << "            *    (`\'--)_@ ;  %'()\\      *" << endl;
		cout << "                 /`;--._`\'\'--._ \'@;" << endl;
		cout << "                /&*,()~ `;-.,_ `\"\"`)" << endl;
		cout << "     *          /`,@ ;+& ()  *`;-\';\\" << endl;
		cout << "               (`\"\"--.,_  +% @' &()\\" << endl;
		cout << "               /-.,_    ``\'\'--....-\'`)  *" << endl;
		cout << "          *    /@%; `:;\'--,.__   __.\'\\" << endl;
		cout << "              ;*,&(); @ % &^;~`\"` ;@();         *" << endl;
		cout << "              /();  ^~; & (). @*&`;&% \\" << endl;
		cout << "              `\"=\"==\"\"==,,,.,=\"==\"===\"`" << endl;
		cout << "           __.----.---\'\'#####---...___...-----._" << endl;
		cout << "         \'`     `       #####     `        ``" << endl;
		cout << "              `        `\"\"\"\"\"`        `" << endl;
		cout << "" << endl;
		cout << "  /|,/ _   _ _         / ` /_  _ .  _ _/_ _ _   _    _         " << endl;
		cout << " /  / /_\' / / /_/     /_, / / / / _\\  /  / / / /_| _\\          " << endl;
		cout << "              _/" << endl;
		Sleep(1000);
		cls();

		cout << "           *             ," << endl;
		cout << "                       _/^\\_" << endl;
		cout << "                      <     >" << endl;
		cout << "     *                 /.-.\\         *" << endl;
		cout << "              *        `/ \\`                   *" << endl;
		cout << "                      ,@.*;@," << endl;
		cout << "                     /_o.I %_\\    *" << endl;
		cout << "        *           (`\'--:o(_@;" << endl;
		cout << "                   /`;--.,__ `\')             *" << endl;
		cout << "                  ;@`o % O,*`\'` \\ " << endl;
		cout << "            *    (`\'--)_@ ;o %'()\\      *" << endl;
		cout << "                 /`;--._`\'\'--._O\'@;" << endl;
		cout << "                / *,()~o`;-.,_ `\"\"`)" << endl;
		cout << "     *          /`,@ ;+  () o*`;-\';\\" << endl;
		cout << "               (`\"\"--.,_0 +% @'  ()\\" << endl;
		cout << "               /-.,_    ``\'\'--....-\'`)  *" << endl;
		cout << "          *    /@%;o`:;\'--,.__   __.\'\\" << endl;
		cout << "              ;*, (); @ %  ^;~`\"`o;@();         *" << endl;
		cout << "              /(); o^~;   ().o@* `; %O\\" << endl;
		cout << "              `\"=\"==\"\"==,,,.,=\"==\"===\"`" << endl;
		cout << "           __.----.---\'\'#####---...___...-----._" << endl;
		cout << "         \'`     `       #####     `        ``" << endl;
		cout << "              `        `\"\"\"\"\"`        `" << endl;
		cout << "" << endl;
		cout << "  /|,/ _   _ _         / ` /_  _ .  _ _/_ _ _   _    _         " << endl;
		cout << " /  / /_\' / / /_/     /_, / / / / _\\  /  / / / /_| _\\          " << endl;
		cout << "              _/" << endl;
		Sleep(1000);
		cls();

		cout << "           *              " << endl;
		cout << "                            " << endl;
		cout << "                             " << endl;
		cout << "     *                               *" << endl;
		cout << "              *        `/&\\`                   *" << endl;
		cout << "                      ,@.*;@," << endl;
		cout << "                     /_o.I %_\\    *" << endl;
		cout << "        *           (`\'--:o(_@;" << endl;
		cout << "                   /`;--.,__ `\')             *" << endl;
		cout << "                  ;@`o % O,*`\'`&\\ " << endl;
		cout << "            *    (`\'--)_@ ;o %'()\\      *" << endl;
		cout << "                 /`;--._`\'\'--._O\'@;" << endl;
		cout << "                /&*,()~o`;-.,_ `\"\"`)" << endl;
		cout << "     *          /`,@ ;+& () o*`;-\';\\" << endl;
		cout << "               (`\"\"--.,_0 +% @' &()\\" << endl;
		cout << "               /-.,_    ``\'\'--....-\'`)  *" << endl;
		cout << "          *    /@%;o`:;\'--,.__   __.\'\\" << endl;
		cout << "              ;*,&(); @ % &^;~`\"`o;@();         *" << endl;
		cout << "              /(); o^~; & ().o@*&`;&%O\\" << endl;
		cout << "              `\"=\"==\"\"==,,,.,=\"==\"===\"`" << endl;
		cout << "           __.----.---\'\'#####---...___...-----._" << endl;
		cout << "         \'`     `       #####     `        ``" << endl;
		cout << "              `        `\"\"\"\"\"`        `" << endl;
		cout << "" << endl;
		cout << "  /|,/ _   _ _         / ` /_  _ .  _ _/_ _ _   _    _         " << endl;
		cout << " /  / /_\' / / /_/     /_, / / / / _\\  /  / / / /_| _\\          " << endl;
		cout << "              _/" << endl;
		Sleep(250);
		cls();

		cout << "           *             ," << endl;
		cout << "                       _/^\\_" << endl;
		cout << "                      <     >" << endl;
		cout << "     *                 /.-.\\         *" << endl;
		cout << "              *        `/&\\`                   *" << endl;
		cout << "                      ,@.*;@," << endl;
		cout << "                     /_o.I %_\\    *" << endl;
		cout << "        *           (`\'--:o(_@;" << endl;
		cout << "                   /`;--.,__ `\')             *" << endl;
		cout << "                  ;@`o % O,*`\'`&\\ " << endl;
		cout << "            *    (`\'--)_@ ;o %'()\\      *" << endl;
		cout << "                 /`;--._`\'\'--._O\'@;" << endl;
		cout << "                /&*,()~o`;-.,_ `\"\"`)" << endl;
		cout << "     *          /`,@ ;+& () o*`;-\';\\" << endl;
		cout << "               (`\"\"--.,_0 +% @' &()\\" << endl;
		cout << "               /-.,_    ``\'\'--....-\'`)  *" << endl;
		cout << "          *    /@%;o`:;\'--,.__   __.\'\\" << endl;
		cout << "              ;*,&(); @ % &^;~`\"`o;@();         *" << endl;
		cout << "              /(); o^~; & ().o@*&`;&%O\\" << endl;
		cout << "              `\"=\"==\"\"==,,,.,=\"==\"===\"`" << endl;
		cout << "           __.----.---\'\'#####---...___...-----._" << endl;
		cout << "         \'`     `       #####     `        ``" << endl;
		cout << "              `        `\"\"\"\"\"`        `" << endl;
		cout << "" << endl;
		cout << "  /|,/ _   _ _         / ` /_  _ .  _ _/_ _ _   _    _         " << endl;
		cout << " /  / /_\' / / /_/     /_, / / / / _\\  /  / / / /_| _\\          " << endl;
		cout << "              _/" << endl;
		Sleep(250);
		cls();

		cout << "           *              " << endl;
		cout << "                            " << endl;
		cout << "                             " << endl;
		cout << "     *                               *" << endl;
		cout << "              *        `/&\\`                   *" << endl;
		cout << "                      ,@.*;@," << endl;
		cout << "                     /_o.I %_\\    *" << endl;
		cout << "        *           (`\'--:o(_@;" << endl;
		cout << "                   /`;--.,__ `\')             *" << endl;
		cout << "                  ;@`o % O,*`\'`&\\ " << endl;
		cout << "            *    (`\'--)_@ ;o %'()\\      *" << endl;
		cout << "                 /`;--._`\'\'--._O\'@;" << endl;
		cout << "                /&*,()~o`;-.,_ `\"\"`)" << endl;
		cout << "     *          /`,@ ;+& () o*`;-\';\\" << endl;
		cout << "               (`\"\"--.,_0 +% @' &()\\" << endl;
		cout << "               /-.,_    ``\'\'--....-\'`)  *" << endl;
		cout << "          *    /@%;o`:;\'--,.__   __.\'\\" << endl;
		cout << "              ;*,&(); @ % &^;~`\"`o;@();         *" << endl;
		cout << "              /(); o^~; & ().o@*&`;&%O\\" << endl;
		cout << "              `\"=\"==\"\"==,,,.,=\"==\"===\"`" << endl;
		cout << "           __.----.---\'\'#####---...___...-----._" << endl;
		cout << "         \'`     `       #####     `        ``" << endl;
		cout << "              `        `\"\"\"\"\"`        `" << endl;
		cout << "" << endl;
		cout << "  /|,/ _   _ _         / ` /_  _ .  _ _/_ _ _   _    _         " << endl;
		cout << " /  / /_\' / / /_/     /_, / / / / _\\  /  / / / /_| _\\          " << endl;
		cout << "              _/" << endl;
		Sleep(250);
		cls();

	}
	return 0;


}