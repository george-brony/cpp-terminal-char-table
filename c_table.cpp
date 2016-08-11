#ifndef _C_TABLE_CPP_
#define _C_TABLE_CPP_
#include <iostream>
#include "./c_table.h"

char_table::char_table(int h, int l){
	arry = new char[(l*h)];
	length=l;
	high=h;
	for (int i = 0; i < (l*h); i++)
	{
		arry[i] = 0;
	}
}

 char_table::~char_table(){
 	delete [] arry;
 }

void char_table::show_table(){
	int index = 0;
		std::cout << '\n';
	for(int i = 0; i < high; i++){
		for (int k = 0;k < length; k++)
		{
			std::cout << "----";
		}
		std::cout << '\n';
		for (int e = 0; e < (length); e++)
		{
			if(arry[index]==0)std::cout << '|' << "   ";
			else std::cout << "| " << arry[index] << " "; 
			index++;
		}

		std::cout << "|\n";


	}
		for (int k = 0;k < length; k++)
		{
			std::cout << "____";
		}
		std::cout << '\n';
}	

void char_table::put_char(char c, int h, int l){
	int i = (h)*length + (length - (length - l));
	arry[i] = c; 
}

int char_table::get_length(){
	return length;
}

int char_table::get_high(){
	return high;
}

char char_table::get_char(int h, int l){
	int i = (h)*length + (length - (length - l));
	return arry[i];
}
#endif
