//Programming for Performance (BSCS2011) - ASSIGNMENT 1: File I/O, Memory, Compression, Proximity Search.
//Marysabel Mejia Polania.


//Header.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Variables.

//Methods.
void VByte_Codes(string F_Name);

//Main.
int main(){
    VByte_Codes("F0");
    return 0;
}

//Method development.

//** Write a program that accepts as a parameter a file name (e.g., an Fi from the set of files above), and produces a new file containing the integers from Fi compressed as VByte codes. The output file corresponding to input file “Fi” should be called “Fi.vb”.
void VByte_Codes(string F_Name){
    ofstream outfile;
    outfile.open(F_Name+".vb");
    
    string greeting = "Hello";
    outfile<<greeting<<endl;
    
    outfile.close();
}