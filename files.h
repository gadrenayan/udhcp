/* files.h */
#ifndef _FILES_H
#define _FILES_H

struct config_keyword {
	char keyword[14];
	int (*handler)(char *line, void *var);
	void *var;
	char def[20];
};


int read_config(char *file);
void write_leases(int dummy);
void read_leases(char *file);

#endif
