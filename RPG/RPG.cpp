// RPG.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>

using namespace std;

//player's name
string name;

//waits for specified time
void wait(int seconds)
{
	clock_t temp;
	temp = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < temp) {}
}

//pauses and waits for enter
void pause()
{
	cout << "Press enter to continue...";
	cin.get();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

//intro, initial disp page
void intro()
{
	cout << "**********DUNGEONS OF MERKATH**********" << endl;
	cout << "										" << endl;
	cout << "                 (@)					" << endl;
	cout << "                  8					" << endl;
	cout << "                  8					" << endl;
	cout << "                  8					" << endl;
	cout << "             _____8_____				" << endl;
	cout << "             )___-&-___(				" << endl;
	cout << "                | | |					" << endl;
	cout << "                | | |					" << endl;
	cout << "                | | |					" << endl;
	cout << "                | | |					" << endl;
	cout << "                | | |					" << endl;
	cout << "                | | |					" << endl;
	cout << "                | | |					" << endl;
	cout << "                | | |					" << endl;
	cout << "                |0[ |					" << endl;
	cout << "              }[P/;L;}[;				" << endl;
	cout << "             );(/p{l/?][				" << endl;
	cout << "            {/}|\;l+;L/./{				" << endl;
	cout << "          7{/}|\;[\l+;L/./{$#			" << endl;
	cout << "         @4]{;'.m.m\2l+;L/./$%			" << endl;
	cout << "" << endl;
	pause();
	system("cls");
}

//gets character's name
void getName()
{
	cout << "\"What is your name?\"" << endl;
	cin >> name;
}

//plays backstory NTS - find other method than cls
void backStory()
{
	cout << "A voice rings out in a clarion tone inisde your head." << endl;
	wait(5);
	system("CLS");
	cout << "\"A great evil has awoken. Salkaloth the Elder Dragon has risen from his sleep.\"" << endl;
	wait(5);
	system("CLS");
	cout << "\"You must journey to the Dungeons of Merkath. Retrieve the legendary sword that resides there --\"" << endl;
	wait(5);
	system("CLS");
	cout << "\"Dragon's Bane.\"" << endl;
	wait(3);
	system("CLS");
	cout << "\"Find the blade and slay Salkaloth.\"" << endl;
	wait(5);
	system("CLS");
	cout << "\"All of Alduria hangs in the balance. Do not fail.\"" << endl;
	wait(5);
	system("CLS");
	cout << "\"Before I leave, my child...\"" << endl;
	wait(3);
	system("CLS");
	getName();
	cout << "\"" << name << ", a good name. Goodbye, my child. You are my champion.\"" << endl;
	wait(5);
	system("CLS");
	cout << "The voice fades, and you wake up." << endl;
	pause();
	system("CLS");
}

int _tmain(int argc, _TCHAR* argv[])
{
	intro();
	backStory();
	return 0;
}

