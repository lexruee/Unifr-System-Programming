/*------------------------------------------------------------------------
Reverse Polish Calculator                                       -- kr76-79

usage: progr_name [input_file] [output_file]
example: calc 2 3*

Adapted by Beat Hirsbrunner, October 2011, rev. Oct. 2013
------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>	// for atof()

#define MAXOP  100	// max size of operand or operator
#define NUMBER '0'	// signal that a number was found

int getop(char []);
void push(double);
double pop(void);

// reverse Polish calculator --- kr76
main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }
    return 0;
}


/* ----------------------------------- */
/* Stack "module" --------------- kr77 */
/* ----------------------------------- */

#define MAXVAL 100	 // maximum depth of val stack

int    sp = 0;		 // next free stack position
double val[MAXVAL];	 // value stack

// push: push f onto value stack --- kr77
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;

    else
        printf("error: stack full, can't push %g\n", f);
}

// pop: pop and return top value from stack --- kr77
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}



/* ----------------------------------- */
/* getop "module" --------------- kr78 */
/* ----------------------------------- */

#include <ctype.h>  // isdigit


/*------------------------------------------------------*/
// getop: get next operator or numeric operand --- BH, Oct. 2013
// (a simplified version of kr78: numbers are restricted to integers)

#define BUFSIZE 100
//use macro functions
#define ungetch(c) do { if ( bufp >= BUFSIZE) printf("ungetch: too many characters\n"); else buf[bufp++] = c; }while(0)
#define getch()	((bufp > 0) ? buf[--bufp] : getchar())

int getop(char s[])
{
    static char buf[BUFSIZE];
    static int bufp = 0;
    char c;
    int i=0;

     while ((c=getch()) == ' ' || c =='\t') ; // skip spaces

    if (c<'0' || c>'9')                      // c is not a digit
        return c;  

    s[0]=c;
    while(isdigit(s[++i] = c = getch()))     // collect integer
        ;
    s[i]='\0';                               // string terminator
    if (c!=EOF) ungetch(c);                  // save the last read character
    return NUMBER;
}
/*------------------------------------------------------*/
