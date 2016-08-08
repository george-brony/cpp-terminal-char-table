#ifndef _C_TABLE_H
#define _C_TABLE_H

#include <iostream>
class char_table
{
private:
	int length;
	int high;
	char *arry = NULL;
public:
	void show_table();
	int put_char(char c, int l, int h);
	char get_char(int l, int h);
	int get_length();
	int get_high();
	char_table(int l, int h);
	~char_table();
};

#endif