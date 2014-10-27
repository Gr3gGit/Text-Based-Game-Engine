#include <iostream>
#include <windows.h> //This means windows only 
#include <String>

//BY Gr3gGit

using namespace std;

//Player Stuff
string name = "null";
int age = 0;
int php; //[insert joke here]
int pp; //power
int mon; //money

void print(string s1){
	cout << s1 << endl; // print stuff easy
}
void inputchar(){
	cout << "> "; // simple character commonly used for input
}
void getName(){
	while (true){ // get name loop
		system("cls");
		print("What is your name?");
		inputchar();
		cin >> name;
		if (name == "" || name == " " || name == "  " || name == "   "){
			print("That is not a valid name!");
		}
		else if (name != ""){
			print("Name saved as: " + name);
			break;
		}
	}
}
void getAge(int agelim){ //Checks if someone is old enough to play the game, or just for someone's age
	system("cls");
	print("What is your age?");
	inputchar();
	cin >> age;
	if (age < agelim){
		print("You cannot play!");
		Sleep(3000);
		std::exit;
	}
	else if (age >= agelim){
		print("Age saved as: " + age);
		Sleep(2000);
		system("cls");

	}
}
void titleS(string s1, string s2){ //s1 is main title and s2 is subtitle
	system("color 0b");
	print(s1);
	Sleep(2000);
	print(s2);
	Sleep(2000);
	system("color 0a");
	system("cls");
}
void setStats(int hp, int pow){ // Set the player's stats
	php = hp;
	pp = pow;
}
void subHp(int hp){ //Subtract Hp
	php = php - hp;
}
void giveHp(int hp){ // Add Hp
	php = php + hp;
}
void giveMon(int money){
	mon = mon + money;
}
void subMon(int money){
	mon = mon - money;
}
void makeLine(int space){
	int spaceline = space; //Makes line spacing, like ---------

	for (int i = 0; i < spaceline; i++){
		cout << "-";
		
		
		if (i == spaceline - 1){
			print("-");
		}
	}
}