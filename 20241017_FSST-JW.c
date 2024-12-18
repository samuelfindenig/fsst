
#include <Windows.h>

void cursor_gotoxy(int spalte, int zeile)
{
	COORD coord;
	coord.X = spalte;
	coord.Y = zeile;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


//Funktion zum Cursor Setzen
//setzen des Cursors auf eine Bildschirmposition NUR WINDOWS
//Dazu wird Windows.h als include benötigt



//Sleep
#include <time.h>
void sleep_ms(int milli_seconds)
{
	// Start Zeit speichern
	clock_t start_time = clock(); //in time.h
	// clock() gibt die Anzahl der Ticks seit dem Programmstart zurück
	while (clock() < start_time + milli_seconds);
	// solange die Zeit noch nicht erricht ist im Kreis laufen
}

//den Cursor unsichtbar machen
void CursorVisible(int visible)
{
	CONSOLE_CURSOR_INFO info;
	HANDLE out;
	info.bVisible = visible;
	info.dwSize = 1;
	out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(out, &info);
}

char return_keystatus()
{
	char cKey = '\0';

	if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) { cKey = VK_ESCAPE; }//ESC
	else if (GetAsyncKeyState(VK_F1) & 0x8000) { cKey = VK_F1; }//F1
	else if (GetAsyncKeyState(VK_F2) & 0x8000) { cKey = VK_F2; }//F2
	else if (GetAsyncKeyState(VK_F3) & 0x8000) { cKey = VK_F3; }//F3
	else if (GetAsyncKeyState(VK_F4) & 0x8000) { cKey = VK_F4; } //F4
	else if (GetAsyncKeyState(VK_F5) & 0x8000) { cKey = VK_F5; }//F5
	else if (GetAsyncKeyState(VK_F6) & 0x8000) { cKey = VK_F6; }//F6
	else if (GetAsyncKeyState(VK_F7) & 0x8000) { cKey = VK_F7; }//F7
	else if (GetAsyncKeyState(VK_F8) & 0x8000) { cKey = VK_F8; }//F8
	else if (GetAsyncKeyState(VK_F9) & 0x8000) { cKey = VK_F9; }//F9
	else if (GetAsyncKeyState(VK_F10) & 0x8000) { cKey = VK_F10; }//F10
	else if (GetAsyncKeyState(VK_F11) & 0x8000) { cKey = VK_F11; }//F11
	else if (GetAsyncKeyState(VK_F12) & 0x8000) { cKey = VK_F12; }//F12
	else if (GetAsyncKeyState(VK_TAB) & 0x8000) { cKey = VK_TAB; }//TAB
	else if (GetAsyncKeyState(VK_CAPITAL) & 0x8000) { cKey = VK_CAPITAL; }//CAPS
	else if (GetAsyncKeyState(VK_SHIFT) & 0x8000) { cKey = VK_SHIFT; }//SHIFT
	else if (GetAsyncKeyState(VK_CONTROL) & 0x8000) { cKey = VK_CONTROL; }//CONTROL
	else if (GetAsyncKeyState(VK_MENU) & 0x8000) { cKey = VK_MENU; } //ALT 
	else if (GetAsyncKeyState(VK_RCONTROL) & 0x8000) { cKey = VK_RCONTROL; }//RIGHT CONTROL
	else if (GetAsyncKeyState(VK_RSHIFT) & 0x8000) { cKey = VK_RSHIFT; } //RIGHT SHIFT
	else if (GetAsyncKeyState(VK_SPACE) & 0x8000) { cKey = VK_SPACE; }//VK_SPACE
	else if (GetAsyncKeyState(VK_PRIOR) & 0x8000) { cKey = VK_PRIOR; }//PAGE UP key
	else if (GetAsyncKeyState(VK_NEXT) & 0x8000) { cKey = VK_NEXT; }//PAGE DOWN key
	else if (GetAsyncKeyState(VK_END) & 0x8000) { cKey = VK_END; }//END key
	else if (GetAsyncKeyState(VK_HOME) & 0x8000) { cKey = VK_HOME; } //HOME key
	else if (GetAsyncKeyState(VK_LEFT) & 0x8000) { cKey = VK_LEFT; }//LEFT ARROW key
	else if (GetAsyncKeyState(VK_UP) & 0x8000) { cKey = VK_UP; }//UP ARROW key
	else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { cKey = VK_RIGHT; }//RIGHT ARROW key
	else if (GetAsyncKeyState(VK_DOWN) & 0x8000) { cKey = VK_DOWN; }//DOWN ARROW key
	else if (GetAsyncKeyState(VK_INSERT) & 0x8000) { cKey = VK_INSERT; } //INS key
	else if (GetAsyncKeyState(VK_DELETE) & 0x8000) { cKey = VK_DELETE; } //DEL key
	else if (GetAsyncKeyState(VK_NUMPAD0) & 0x8000) { cKey = VK_NUMPAD0; }//Numeric keypad 0 key
	else if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000) { cKey = VK_NUMPAD1; }//Numeric keypad 1 key
	else if (GetAsyncKeyState(VK_NUMPAD2) & 0x8000) { cKey = VK_NUMPAD2; } //Numeric keypad 2 key
	else if (GetAsyncKeyState(VK_NUMPAD3) & 0x8000) { cKey = VK_NUMPAD3; }//Numeric keypad 3 key
	else if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000) { cKey = VK_NUMPAD4; }//Numeric keypad 4 key
	else if (GetAsyncKeyState(VK_NUMPAD5) & 0x8000) { cKey = VK_NUMPAD5; }//Numeric keypad 5 key
	else if (GetAsyncKeyState(VK_NUMPAD6) & 0x8000) { cKey = VK_NUMPAD6; }//Numeric keypad 6 key
	else if (GetAsyncKeyState(VK_NUMPAD7) & 0x8000) { cKey = VK_NUMPAD7; }//Numeric keypad 7 key
	else if (GetAsyncKeyState(VK_NUMPAD8) & 0x8000) { cKey = VK_NUMPAD8; }//Numeric keypad 8 key
	else if (GetAsyncKeyState(VK_NUMPAD9) & 0x8000) { cKey = VK_NUMPAD9; }//Numeric keypad 9 key
	else if (GetAsyncKeyState(VK_MULTIPLY) & 0x8000) { cKey = VK_MULTIPLY; }//VK_MULTIPLY
	else if (GetAsyncKeyState(VK_ADD) & 0x8000) { cKey = VK_ADD; }//Add key
	else if (GetAsyncKeyState(VK_SEPARATOR) & 0x8000) { cKey = VK_SEPARATOR; }//Separator key
	else if (GetAsyncKeyState(VK_SUBTRACT) & 0x8000) { cKey = VK_SUBTRACT; }//Subtract key
	else if (GetAsyncKeyState(VK_DECIMAL) & 0x8000) { cKey = VK_DECIMAL; }//Decimal key
	else if (GetAsyncKeyState(VK_DIVIDE) & 0x8000) { cKey = VK_DIVIDE; } //VK_DIVIDE
	else if (GetAsyncKeyState(VK_NUMLOCK) & 0x8000) { cKey = VK_NUMLOCK; }//NUM LOCK key
	else if (GetAsyncKeyState(VK_SCROLL) & 0x8000) { cKey = VK_SCROLL; }//SCROLL LOCK key
	else if (GetAsyncKeyState(VK_OEM_PLUS) & 0x8000) { cKey = VK_OEM_PLUS; }//For any country/region, the '+' key
	else if (GetAsyncKeyState(VK_OEM_COMMA) & 0x8000) { cKey = VK_OEM_COMMA; }//For any country/region, the ',' key
	else if (GetAsyncKeyState(VK_OEM_MINUS) & 0x8000) { cKey = VK_OEM_MINUS; }//For any country/region, the '-' key
	else if (GetAsyncKeyState(VK_OEM_PERIOD) & 0x8000) { cKey = VK_OEM_PERIOD; }//For any country/region, the '.' key
	else if (GetAsyncKeyState('Q') & 0x8000) { cKey = 'q'; } //if key q is pressed.
	else if (GetAsyncKeyState('W') & 0x8000) { cKey = 'w'; } //if key w is pressed.
	else if (GetAsyncKeyState('E') & 0x8000) { cKey = 'e'; } //if key e is pressed.
	else if (GetAsyncKeyState('R') & 0x8000) { cKey = 'r'; } //if key r is pressed.
	else if (GetAsyncKeyState('T') & 0x8000) { cKey = 't'; } //if key t is pressed.
	else if (GetAsyncKeyState('Y') & 0x8000) { cKey = 'y'; } //if key y is pressed.
	else if (GetAsyncKeyState('U') & 0x8000) { cKey = 'u'; } //if key u is pressed.
	else if (GetAsyncKeyState('I') & 0x8000) { cKey = 'i'; } //if key i is pressed.
	else if (GetAsyncKeyState('O') & 0x8000) { cKey = 'o'; } //if key o is pressed.
	else if (GetAsyncKeyState('P') & 0x8000) { cKey = 'p'; } //if key p is pressed.
	else if (GetAsyncKeyState('A') & 0x8000) { cKey = 'a'; } //if key a is pressed.
	else if (GetAsyncKeyState('S') & 0x8000) { cKey = 's'; } //if key s is pressed.
	else if (GetAsyncKeyState('D') & 0x8000) { cKey = 'd'; } //if key d is pressed.
	else if (GetAsyncKeyState('F') & 0x8000) { cKey = 'f'; } //if key f is pressed.
	else if (GetAsyncKeyState('G') & 0x8000) { cKey = 'g'; } //if key g is pressed.
	else if (GetAsyncKeyState('H') & 0x8000) { cKey = 'h'; } //if key h is pressed.
	else if (GetAsyncKeyState('J') & 0x8000) { cKey = 'j'; } //if key j is pressed.
	else if (GetAsyncKeyState('K') & 0x8000) { cKey = 'k'; } //if key k is pressed.
	else if (GetAsyncKeyState('L') & 0x8000) { cKey = 'l'; } //if key l is pressed.
	else if (GetAsyncKeyState('Z') & 0x8000) { cKey = 'z'; } //if key z is pressed.
	else if (GetAsyncKeyState('X') & 0x8000) { cKey = 'x'; } //if key x is pressed.
	else if (GetAsyncKeyState('C') & 0x8000) { cKey = 'c'; } //if key c is pressed.
	else if (GetAsyncKeyState('V') & 0x8000) { cKey = 'v'; } //if key v is pressed.
	else if (GetAsyncKeyState('B') & 0x8000) { cKey = 'b'; } //if key b is pressed.
	else if (GetAsyncKeyState('N') & 0x8000) { cKey = 'n'; } //if key n is pressed.
	else if (GetAsyncKeyState('M') & 0x8000) { cKey = 'm'; } //if key m is pressed.

	return cKey;
}


#include <stdio.h>

int main(void) {
	int i;
	for (i = 0; i < 4; i++) {
		cursor_gotoxy(i, i);
		printf("*");
	}
	CursorVisible(0);


	getchar();
	return 0;
}
