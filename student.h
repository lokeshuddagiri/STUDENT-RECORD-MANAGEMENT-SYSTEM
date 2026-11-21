//#ifndef"student.h"
//#define"student.h"

typedef struct t
{
int roll;
char name[50];
float per;
struct t *next;
} sll;

extern sll *head;





int get_roll(void);
void add(sll *node);
void add_begin(void);
void add_pos(void);
void add_last(void);
void print(void);

sll *load(void);
int save(void);

sll *search_roll(int roll);
sll *search_name(char name[]);
void search_by_roll(void);
void search_by_name(void);

void modify_roll(void);
void modify_name(void);

void del_pos(void);
void del_roll(void);
void del_name(void);

void shortra(void);
void shortrd(void);
void shortpa(void);
void shortpd(void);
void sort_name(void);
//#endif