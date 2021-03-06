// Header file for the body functions
// for outputExcel.c
//
// Isaac Powrie
// body.h
// 2018-11-20

#define FUNC_SIZE 30
#define NUM_OPTS 4
#define FNAME_SIZE 30
#define SHEET_SIZE 9000

struct Function {
	char type;
	char m;
	int m_val;
	char b;
	int b_val;
	char c;
	int c_val;
};

// menu function takes no parameters and displays the options list 
// as well as handling option selection. This function returns each
// selection as an integer which determines whether or not the 
// program will finish running
//
int menu(void);

// getUserInpt function takes a structure function which corresponds to a 
// selection option. The function prints out and the user replaces the 
// the values of the constants with those of their desired curve.
//
void getUserInpt(struct Function *);

// printLin function takes the user appended linear function from getUserInpt 
// and it prints ~10000 x and y coordinate pairs to a CSV file.
//
void printLin(struct Function *);

// printQuad function takes the user appended quadratic function from getUserInpt 
// and it prints ~10000 x and y coordinate pairs to a CSV file.
//
void printQuad(struct Function *);

// printSin function takes the user appended sine function from getUserInpt 
// and it prints ~10000 x and y coordinate pairs to a CSV file.
//
void printSin(struct Function *);

// printCos function takes the user appended linear cosine from getUserInpt 
// and it prints ~10000 x and y coordinate pairs to a CSV file.
//
void printCos(struct Function *);

