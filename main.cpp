#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	int j;
	int k;
	int m;
	string sudoku;
	sudoku = "070000043040009610800634900094052000358460020000800530080070091902100005007040802";
	for (k=0 ; k<81 ; k=k+27){
		for (i=k ; i<k+27 ; i=i+9){
			for (j=i ; j<i+9 ; j=j+3){
				for (m=j; m<j+3 ; m=m+1){
					cout << " " << sudoku.substr(m,1) << " ";
				}
				cout << "|" ;
			}
			cout << endl ;
		}
		cout << "- - - - - - - - - - - - - - -" << endl;
	}
	i=0;
	while (i<5){
		int k; 
		k = getch(); 
		//cout << k;
		if(k==0)
    		k = getch(); 
		switch(k)
		{ 
    		    case 119: //up 
    		    		cout << "Hey" << endl; 
    	    			break;
	        	case 115: //down
						cout << "Hey2" << endl;
						break;
        		case 97: //left
	        			cout << "Hey3" << endl; 
						break;
        		case 100: //right
        				cout << "Hey4" << endl;
						break;
	            case 27: //esc
	            		i=5;
    	        		break;
		}
	}
	return 0;
}
