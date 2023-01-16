#include <conio.h>
#include <iomanip>
#include <iostream>
using namespace std; //Here I am adding libraries for using variable manipulation, the getch call, and cin/cout input and output. 
#define TRUE 1
#define FALSE 0 //I am defining 1 as true and 0 as false because I am using boolean expressions.

int main() {
	///code for entering values for assignment 01 starts here.
		double assignment01 = 0; //declaring assignment 01 as a floating point.
	cout << "Please enter the score for \'Assignment #01\': "; //Text display
	cin >> assignment01; //for input score
			while (cin.fail() == TRUE || assignment01 < 0 || assignment01 > 40) { //cin.fail will occur in assignment is not an numeric value in between or equal to 0 and 40.
			if (cin.fail() == TRUE) {
				cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
				cin.clear();
				rewind(stdin);
				assignment01 = 0; //clear, rewind to fix the issue, and clear all residual input values back to 0. 
			}
				if (assignment01 < 0 || assignment01 > 40) {
					cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl; //error message will keep showing up if you continue to put in innapropriate value.
				}
				cout << "Please enter the score for \'Assignment #01\': "; //repropmt again.
				cin >> assignment01;  //input again.
			}
			//code for assignment 02 starts here.
			double assignment02 = 0; 
			cout << "Please enter the score for \'Assignment #02\': ";
			cin >> assignment02;
			while (cin.fail() == TRUE || assignment02 < 0 || assignment02 > 40) {
			if (cin.fail() == TRUE) {
				cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
				cin.clear();
				rewind(stdin);
				assignment02 = 0;
			}
				if (assignment02 < 0 || assignment02 > 40) {
				cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
				cout << "Please enter the score for \'Assignment #02\': " ;
				cin >> assignment02;
		}
			//code for assignment 03 starts here. 
			double assignment03 = 0; //declare variables.
			cout << "Please enter the score for \'Assignment #03\': ";
			cin >> assignment03;
			while (cin.fail() == TRUE || assignment03 < 0 || assignment03 > 40) {
			if (cin.fail() == TRUE) {
				cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
				cin.clear();
				rewind(stdin);
				assignment03 = 0;
			}
				if (assignment03 < 0 || assignment03 > 40) {
				cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
				cout << "Please enter the score for \'Assignment #03\': ";
				cin >> assignment03;
		}
			//code for assignment 04 starts here. 
			double assignment04 = 0;
			cout << "Please enter the score for \'Assignment #04\': ";
			cin >> assignment04;
			while (cin.fail() == TRUE || assignment04 < 0 || assignment04 > 40) {
			if (cin.fail() == TRUE) {
				cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
				cin.clear();
				rewind(stdin);
				assignment04 = 0;
			}
				if (assignment04 < 0 || assignment04 > 0) {
					cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
				cout << "Please enter the score for \'Assignment #04\': ";
				cin >> assignment04;
		}
			//code for assignment 05 starts here.
			double assignment05 = 0;
			cout << "Please enter the score for \'Assignment #05\': ";
			cin >> assignment05;
			while (cin.fail() == TRUE || assignment05 < 0 || assignment05 > 40) {
			if (cin.fail() == TRUE) {
				cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
				cin.clear();
				rewind(stdin);
				assignment05 = 0;
			}
				if (assignment05 < 0 || assignment05 > 40) {
				cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
				cout << "Please enter the score for \'Assignment #05\': ";
				cin >> assignment05;
		}
			//code for assignment 06 starts here.
			double assignment06 = 0;
			cout << "Please enter the score for \'Assignment #06\': ";
			cin >> assignment06;
			while (cin.fail() == TRUE || assignment06 < 0 || assignment06 > 40) {
			if (cin.fail() == TRUE) {
					cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
					cin.clear();
					rewind(stdin);
					assignment06 = 0;
			}
				if (assignment06 < 0 || assignment06 > 40) {
					cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
			cout << "Please enter the score for \'Assignment #06\': ";
			cin >> assignment06;
		}
			//code for assignment 07 starts here. 
			double assignment07 = 0;
			cout << "Please enter the score for \'Assignment #07\': ";
			cin >> assignment07;
			while (cin.fail() == TRUE || assignment07 < 0 || assignment07 > 40) {
			if (cin.fail() == TRUE) {
					cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
					cin.clear();
					rewind(stdin);
					assignment07 = 0;
			}
				if (assignment07 < 0 || assignment07 > 40) {
					cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
				cout << "Please enter the score for \'Assignment #07\': ";
				cin >> assignment07;
		}
			//code for assignment 08 starts here.
			double assignment08 = 0;
			cout << "Please enter the score for \'Assignment #08\': ";
			cin >> assignment08;
			while (cin.fail() == TRUE || assignment08 < 0 || assignment08 > 40) {
			if (cin.fail() == TRUE) {
					cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
					cin.clear();
					rewind(stdin);
					assignment08 = 0;
			}
				if (assignment08 < 0 || assignment08 > 40) {
					cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
				cout << "Please enter the score for \'Assignment #08\': ";
				cin >> assignment08;
		}
			//code for assignment 09 starts here.
			double assignment09 = 0;
			cout << "Please enter the score for \'Assignment #09\': ";
			cin >> assignment09;
			while (cin.fail() == TRUE || assignment09 < 0 || assignment09 > 40) {
			if (cin.fail() == TRUE) {
					cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
					cin.clear();
					rewind(stdin);
					assignment09 = 0;
			}
				if (assignment09 < 0 || assignment09 > 40) {
					cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
				cout << "Please enter the score for \'Assignment #09\': ";
				cin >> assignment09;
		}
			//code for assignment 10 starts here. 
			double assignment10 = 0;
			cout << "Please enter the score for \'Assignment #10\': ";
			cin >> assignment10;
			while (cin.fail() == TRUE || assignment10 < 0 || assignment10 > 40) {
			if (cin.fail() == TRUE) {
				cout << "That wasn't a numeric value between 0 and 40. Please enter a numeric value between 0 and 40." << endl;
				cin.clear();
				rewind(stdin);
				assignment10;
			}
				if (assignment10 < 0 || assignment10 > 40) {
				cout << "That wasn't a numeric value between 0 and 40. Please try again." << endl;
			}
				cout << "Please enter the score for \'Assignment #10\': ";
				cin >> assignment10;
		}
			//code for project 01 starts here.
			double project01 = 0;//this is coded exactly like the assignments except the conditions are a numeric value between 0-200.
			cout << "Please enter the score for \'Project #01\': ";
			cin >> project01;
			while (cin.fail() == TRUE || project01 < 0 || project01 > 200) {
			if (cin.fail() == TRUE) {
				cout << "That wasn't a numeric value between 0 and 200. Please try again." << endl;
				cin.clear();
				rewind(stdin);
				project01 = 0;
			}
				if (project01 < 0 || project01 > 200) {
				cout << "That wasn't a numeric value between 0 and 200. Please try again. " << endl;
			}
				cout << "Please enter the score for \'Project #01\': ";
				cin >> project01;
		}
			//code for project 02 starts here.
			double project02 = 0;
			cout << "Please enter the score for \'Project #02\': ";
			cin >> project02;
			while (cin.fail() == TRUE || project02 < 0 || project02 > 200) {
			if (cin.fail() == TRUE) {
					cout << "That wasn't a numeric value between 0 and 200. Please try again." << endl;
					cin.clear();
					rewind(stdin);
					project02 = 0;
			}
				if (project02 < 0 || project02 > 200) {
					cout << "That wasn't a numeric value between 0 and 200. Please try again. " << endl;
			}
				cout << "Please enter the score for \'Project #02\': ";
				cin >> project02;
			}
	double totalSoFar = assignment01 + assignment02 + assignment03 + assignment04 + assignment05 + assignment06 + assignment07 + assignment08 + assignment09 + assignment10 + project01 + project02;
			cout << fixed << setprecision(2) << "TOTAL POINTS SO FAR : " << totalSoFar << endl;
			if ((totalSoFar/800) >= .90) {
				cout << "CURRENT GRADE: A" << endl;
			}
			else if ((totalSoFar/800) >= .80) {
				cout << "CURRENT GRADE: B" << endl;
			}
			else if ((totalSoFar/800) >= .70) {
				cout << "CURRENT GRADE: C" << endl;
			}
			else if ((totalSoFar/800) >= .60) {
				cout << "CURRENT GRADE: D" << endl; //Using another if/else-if portion to state the current grade.
			}
			else if ((totalSoFar / 800) <= .59) {
				cout << "CURRENT GRADE: E" << endl; 
				cout << "YOU ARE FAILING." << endl;
			}
			

	//code for creating the top of the table.
	//variables for values and ASCII table constants
	const unsigned char ASCII_HORIZONTALLINE = (char)205; // These constants are to create the table using the ASCII table, as well as the percent symbol.
	const unsigned char ASCII_TABLETOPLEFTCORNER = (char)201; //I am capitalizing them and adding ASCII to the name so I can see it all and recognize it better.
	const unsigned char ASCII_TABLEBOTTOMLEFTCORNER = (char)200;
	const unsigned char ASCII_TABLEBOTTOMRIGHTCORNER = (char)188;
	const unsigned char ASCII_TABLEDOWNCORNER = (char)203;
	const unsigned char ASCII_VERTICALLINE = (char)186;
	const unsigned char ASCII_TABLETOPRIGHTCORNER = (char)187;
	const unsigned char ASCII_PERCENTSYMBOL = (char)37;
	const unsigned char ASCII_LEFTCONNECT = (char)204;
	const unsigned char ASCII_RIGHTCONNECT = (char)185;
	const unsigned char ASCII_FOURWAY = (char)206;
	const unsigned char ASCII_TABLEUPCORNER = (char)202;
	int tableCounter = 1; // starting at one. This is to create the ASCII table.
	int column1_width = 15; //the width of the table column 1.
	int column2_width = 15;
	int column3_width = 25;
	int tableWidth = 57;
	double percentNeeded; //changing variable to calculate percent needed.
	double pointsNeeded; //changing variable to calculate points needed.

	cout << ASCII_TABLETOPLEFTCORNER;
		while (tableCounter <= column1_width) {
			cout << ASCII_HORIZONTALLINE;
			tableCounter = tableCounter + 1;//making the loop to have the table top line continue on for 15 spaces, so I don't have to keep typing it.
	}
	cout << ASCII_TABLEDOWNCORNER;
	tableCounter = 1;
		while (tableCounter <= column2_width) {
			cout << ASCII_HORIZONTALLINE;
			tableCounter = tableCounter + 1;//table turns down slightly, hence the name "downcorner"...
			
	}
	cout << ASCII_TABLEDOWNCORNER;
	tableCounter = 1;
		while (tableCounter <= column3_width) {
			cout << ASCII_HORIZONTALLINE;
			tableCounter = tableCounter + 1;//column 3 begins, making it slightly longer.
	}
		cout << ASCII_TABLETOPRIGHTCORNER << endl;
		//cout stating the headers. I made the set width to match the table width.
		cout << ASCII_VERTICALLINE << setw(15) << "FINAL GRADE" << ASCII_VERTICALLINE << setw(15) << "POINTS NEEDED" << ASCII_VERTICALLINE << setw(25) << "PERCENTAGE NEEDED" << ASCII_VERTICALLINE << endl;
		cout << ASCII_LEFTCONNECT;

		tableCounter = 1;//another while loop to add a long horizontal line to isolate the headers.
		while (tableCounter <= column1_width) { 
			cout << ASCII_HORIZONTALLINE;
			tableCounter = tableCounter + 1;
			}
		cout << ASCII_FOURWAY;//to join the crossing lines
		tableCounter = 1;//another while loop to add a long horizontal line to isolate the headers.
		while (tableCounter <= column2_width) {
			cout << ASCII_HORIZONTALLINE;
			tableCounter = tableCounter + 1;
			}
		cout << ASCII_FOURWAY;
		tableCounter = 1;//another while loop to add a long horizontal line to isolate the headers.
		while (tableCounter <= column3_width) {
			cout << ASCII_HORIZONTALLINE;
			tableCounter = tableCounter + 1;
			}
		
		cout << ASCII_RIGHTCONNECT << endl;
		int gradeCounter = 1; //Starting at the first grade; A. 
		//I am not too confident about this. Trying to make a while loop to write out the constant "ABCD" and make the table lines.
		while (gradeCounter <= 4) {		//The while loop should let me make if/else statements within it so I don't have to make a long list for each part of the table.
				cout << ASCII_VERTICALLINE; //putting that vertical line down on the far left.
			if (gradeCounter == 1)
				cout << setw(7) << "A" << setw(9) << ASCII_VERTICALLINE;//to display the text for ABCD. 
			else if (gradeCounter == 2)							//The computer knows to put B below A because of the loop
				cout << setw(7) << "B" << setw(9) << ASCII_VERTICALLINE;
			else if (gradeCounter == 3)
				cout << setw(7) << "C" << setw(9) << ASCII_VERTICALLINE;
			else if (gradeCounter == 4)
				cout << setw(7) << "D" << setw(9) << ASCII_VERTICALLINE;
		//Going to do the same with the other values for points needed. Lines for the table should appear after the values. 
			
			if (gradeCounter == 1)// starting back at 1 representing A, if/else to list points needed.
				pointsNeeded = 900 - totalSoFar;//to initialize value of pointsNeeded if the total is subtracted from the minimum for an A.
			else if (gradeCounter == 2)//grade B
				pointsNeeded = 800 - totalSoFar;//same thing, total so far subtracted from minimum for a B.
			else if (gradeCounter == 3)
				pointsNeeded = 700 - totalSoFar;
			else if (gradeCounter == 4)
				pointsNeeded = 600 - totalSoFar;
				cout << fixed << setw(10) << setprecision(2) << pointsNeeded << setw(6) << ASCII_VERTICALLINE;//I have to use "fixed" with my format specifier or I get an exponent value.

		//Going to do the same thing with percentage needed.
				if (gradeCounter == 1)
					percentNeeded = (pointsNeeded / 900) * 100; // this will give me the percentage increase in points I would need to get an A
				else if (gradeCounter == 2)
					percentNeeded = (pointsNeeded / 800) * 100; //percentage of increase or decrease for a B
				else if (gradeCounter == 3)
					percentNeeded = (pointsNeeded / 700) * 100;
				else if (gradeCounter == 4)
					percentNeeded = (pointsNeeded / 600) * 100;
				cout << fixed << setw(15) << setprecision(2) << percentNeeded << ASCII_PERCENTSYMBOL << setw(10) << ASCII_VERTICALLINE; //displaying value. 

			cout << endl;
			gradeCounter = gradeCounter + 1;
		}
			cout << ASCII_TABLEBOTTOMLEFTCORNER; 
		tableCounter = 1;//more while loops to add horizontal lines to close the table.
			while (tableCounter <= column1_width) {
			cout << ASCII_HORIZONTALLINE;
			tableCounter = tableCounter + 1;
			}
			cout << ASCII_TABLEUPCORNER;
			tableCounter = 1;//more while loops to add horizontal lines to close the table.
			while (tableCounter <= column2_width) {
				cout << ASCII_HORIZONTALLINE;
				tableCounter = tableCounter + 1;
			}
			cout << ASCII_TABLEUPCORNER;
			tableCounter = 1;//more while loops to add horizontal lines to close the table.
			while (tableCounter <= column3_width) {
				cout << ASCII_HORIZONTALLINE;
				tableCounter = tableCounter + 1;
			}

			cout << ASCII_TABLEBOTTOMRIGHTCORNER << endl;

		//Table finished. Now adding warning that anything below a score of x% will result in a failing grade.
			cout << fixed << "Anything below a score of " << setprecision(2) << percentNeeded << ASCII_PERCENTSYMBOL << " for 'Project #03' will result in a failing grade for this semester!" << endl;




	
	_getch();
	return 0;
}
//1)
// I used while loops to make the long horizontal lines. I was actually at first just trying to type out every ASCII_HORIZONTALLINE for a while before I realized it didnt make sense.
//My dad checked what I was doing and hinted that I need a way to produce a lot with less code. He mentioned while loops and I told him, yes I learned about those. I did need help however, figuring out how to use it in more ways.
//I used the while loops to write out the text that appears in the table. This was very difficult but in the end it is so much easier and less tedious than typing everything out.
//My code is less bloated this way.
//2)
//The number of digits cannot exceed a certain amount in my table. I used set width to center the values to look cleaner and set precision to not allow more than two decimal spaces right of the decimal point.
//I also used cin.fail so you can't input certain values.. Its not possible to type 10,000, for example. So, I will never get a huge value in my table.
//I also used "fixed" so I won't get exponential values that don't make sense in the context of a grade projector.