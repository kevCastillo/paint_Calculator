//********************************************************************
//Name: Kevin Castillo
//Class: COSC 1435 Fall-22
//Instructor: Marwa Hassan
//Assignment 8 Problem 1
//Date: 11/16/2022
//Program description: Totals the gallons of paint needed 
//********************************************************************* 

#include <iostream>
#include <iomanip>
using namespace std;

void getLength(int&);
void getWidth(int&);
void getHeight(int&);
int doorArea();
int windowArea();
int mouldingArea(int);
void areaCalculation(int,int,int,int,int);

int main() {
  int length, width, height, totalArea, cellingArea, wallArea, doorSq, winArea, mouldArea;
  
  getLength(length);
  getWidth(width);
  getHeight(height);

  wallArea = length * height;
  cellingArea = length * width;
  
  doorSq = doorArea();
  winArea = windowArea();
  mouldArea = mouldingArea(totalArea);

  areaCalculation(wallArea, cellingArea, doorSq, winArea, mouldArea);
  
  return 0;
}

void getLength(int& lengthFeet){
  int lengthInches;  
  cout << "Please enter the Length in Feet and Inches: ";
  cin >> lengthFeet >> lengthInches;

  if (lengthInches >= 5)
    lengthFeet++;
}

void getWidth(int& widthFeet){
  int widthInches;
  cout << "\nPlease enter the Width in Feet and Inches: ";
  cin >> widthFeet >> widthInches;

  if (widthInches >= 5)
    widthFeet++;
}

void getHeight(int& heightFeet){
  int heightInches;
  cout << "\nPlease enter the Height in Feet and Inches: ";
  cin >> heightFeet >> heightInches;

  if (heightInches >= 5)
    heightFeet++;
}

int doorArea(){
  int numDoors, doorArea;
  cout << "\nPlease enter the number of doors in the room you are painting: ";
  cin >> numDoors;

  doorArea = numDoors * 8;
  return doorArea;
}

int windowArea(){
  int numWin, winArea;
  cout << "\nPlease enter the number of windows in the room you are painting: ";
  cin >> numWin;

  winArea = numWin * (3 * 3);
  return winArea;
}

int mouldingArea(int area){
  int mouldingWidthInches, mouldingFeet, mouldingArea;
  cout << "\nPlease enter the width of molding in inches: ";
  cin >> mouldingWidthInches;
  
  mouldingArea = mouldingWidthInches * area;
  
  return mouldingArea;
}

void areaCalculation(int wallArea, int cellingArea, int doorArea, int winArea, int mouldArea){
  int primer, finish;
  float neededPrimer, neededFinish;
  cout << "\t\tPaint Coverage \n";
  cout << "\n[Paint usually is applied at 350 to 400 square feet per gallon] \n(primer at 200 to 300 square feet per gallon)" << endl;
  cout << "\nPlease enter Primer and Finish: ";
    cin >> primer >> finish;

  cout << "------------------------------------------------" << endl;
  neededPrimer = static_cast<float>(wallArea) / primer;
  cout << "Needed PRIMER for Wall: " << setprecision(3) << neededPrimer << " gallons" << endl;
  neededFinish = static_cast<float>(wallArea) / finish;
  cout << "Needed FINISH for Wall: " <<  setprecision(3) << neededFinish << " gallons";
  
  neededPrimer = static_cast<float>(cellingArea) / primer;
  cout << "\n\nNeeded PRIMER for Celling: " << setprecision(3) << neededPrimer << " gallons" << endl;
  neededFinish = static_cast<float>(cellingArea) / finish;
  cout << "Needed FINISH for Celling: " <<  setprecision(3) << neededFinish << " gallons" << endl;
  
  neededPrimer = static_cast<float>(mouldArea) / primer;
  cout << "\nNeeded PRIMER for Mould: " <<  setprecision(3) << neededPrimer << " gallons" << endl;
  neededFinish = static_cast<float>(mouldArea) / finish;
  cout << "Needed FINISH for Mould: " <<  setprecision(3) << neededFinish << " gallons" << endl;
  cout << "------------------------------------------------";
}
