#ifndef bios_h
#define bios_h
void b_boot();
void b_wboot();
char b_const();
char b_conin();
void b_conout(char c);
void b_list(char c);
void b_punch(char c);
char b_reader();
void b_home();
char* b_seldsk(char disk);
void b_settrk(int trk);
void b_setsec(char sec);
void b_setdma(char *addr);
char b_read();
char b_write(char deblocking);
char b_listst();
char b_sectran(int log_sector, int *tran_table);
#endif