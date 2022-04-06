#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
string sudoku; //globlne varijable
string solution;

void check(string sudoku, string solution, int x){
	if (sudoku[x] != solution[x]){
		cout << "NO! You died once..." << endl;
		sudoku[x]='0';
	}
}
	

void print(int x, string sudoku){
	int i,j,k,m;
	if (x<0){
		x=x+81;
	}
	string sudokucopy;
	sudokucopy = sudoku;
	sudokucopy[x] = 'X';
	for (k=0 ; k<81 ; k=k+27){
		for (i=k ; i<k+27 ; i=i+9){
			for (j=i ; j<i+9 ; j=j+3){
				for (m=j; m<j+3 ; m=m+1){
					cout << " " << sudokucopy.substr(m,1) << " ";
				}
				cout << "|" ;
			}
			cout << endl ;
		}
		cout << "- - - - - - - - - - - - - - -" << endl;
	}
	cout << endl;
}

int main() {
	int i,j,k,m,x;
	x=0;
	char a;
	sudoku = "070000043040009610800634900094052000358460020000800530080070091902100005007040802";
	solution = "679518243543729618821634957794352186358461729216897534485276391962183475137945862";
	print(x, sudoku);
	i=0;
	while (i<5){
		if (sudoku==solution){
			cout << "BRAVO!!" << endl;
			break;
		}
		int k; 
		k = getch(); 
		//cout << k;
		if(k==0)
    		k = getch(); 
		switch(k)
		{ 
    		    case 119: //up 
    		    		x=(x-9)%81;
    		    		print(x, sudoku);
    		    		//cout << x;
    	    			break;
	        	case 115: //down
						x=(x+9)%81;
						print(x, sudoku);
						break;
        		case 97: //left
	        			x=(x-1)%81;
	        			print(x, sudoku);
						break;
        		case 100: //right
        				x=(x+1)%81;
        				print(x, sudoku);
						break;
				case 49: //1
						cout << "1" << endl;
						a='1';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
				case 50: //2
						cout << "2" << endl;
						a='2';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
				case 51: //3
						cout << "3" << endl;
						a='3';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
				case 52: //4
						cout << "4" << endl;
						a='4';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
				case 53: //5
						cout << "5" << endl;
						a='5';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
				case 54: //6
						cout << "6" << endl;
						a='6';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
				case 55: //7
						cout << "7" << endl;
						a='7';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
				case 56: //8
						cout << "8" << endl;
						a='8';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
				case 57: //9
						cout << "9" << endl;
						a='9';
						if (sudoku[x]=='0'){
							sudoku[x]=a;
							check(sudoku, solution, x);
						}
						break;
	            case 27: //esc
	            		i=5;
    	        		break;
		}
	}
	return 0;
}
