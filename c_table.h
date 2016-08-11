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
	void put_char(char c, int h, int l);
	char get_char(int h, int l);
	int get_length();
	int get_high();
	char_table(int h, int l);
	~char_table();
};

#endif
