#ifndef bdos_h
#define bdos_h
// Function is in C, parameter is in DE
// 0: System reset
void bd_p_termcpm();
// 1: Console input
char bd_c_read();
// 2: Console output
void bd_c_write(char e);
// 3: Reader input
char bd_a_read();
// 4: Punch output
void bd_a_write(char e);
// 5: List output
void bd_l_write(char e);
// 6: Direct Console I/O
char bd_c_rawio(char e);
// 7: Get I/O byte
char bd_get_iob();
// 8: Set I/O byte
void bd_set_iob(char e);
// 9: Print string
void bd_c_writestr(char *str);
// 10: Read console buffer
void bd_c_readstr(char *buf);
// 11: Get console status
char bd_c_stat();
// 12: Return version number
int bd_s_bdosver();
// 13: Reset disk system
char bd_drv_allreset();
// 14: Select disk
char bd_drv_set(char ltr);
// 15: Open file
int bd_f_open(char *fcb);
// 16: Close file
int bd_f_close(char *fcb);
// 17: Search for First
int bd_f_sfirst(char *fcb);
// 18: Search for Next
int bd_f_sfirst(char *fcb);
// 19: Delete file
int bd_f_delete(char *fcb);
// 20: Read sequential
int bd_f_read(char *fcb);
// 21: Write sequential
int bd_f_write(char *fcb);
// 22: Make file
int bd_f_make(char *fcb);
// 23: Rename file
int bd_f_rename(char *fcb);
// 24: Return login vector
int bd_drv_loginvec();
// 25: Return current disk
char bd_drv_get();
// 26: Set DMA address
void bd_f_dmaoff(char *dma);
// 27: Get Addr(Alloc)
char* bd_drv_allocvec();
// 28: Write Protect Disk
void bd_drv_setro();
// 29: Get R/O vector
int bd_drv_rovec();
// 30: Set file attributes
char bd_f_attrib(char *fcb);
// 31: Get Addr(Disk Parms)
char* bd_drv_dpb();
// 32: Set/Get User Code
char bd_f_usernum(char usernum);
// 33: Read Random
char bd_f_readrand(char *fcb);
// 34: Write Random
char bd_f_writerand(char *fcb);
// 35: Compute File Size
char bd_f_size(char *fcb);
// 36: Set Random Record
void bd_f_randrec(char *fcb);
// 37: Reset Drive
void bd_drv_reset(int drives);
// 40: Write random with Zero Fill
int bd_f_writezf(char *fcb);

#endif