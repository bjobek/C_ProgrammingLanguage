#include <stdio.h> 

//Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
//the length of arbitrary long input lines, and as much as possible of the text.
#define MAXLINE 1000; // maximum input line
int print_longest_input_line();
int getline(char s[], int lim);
void copy(char to[],char from[]);


//Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.

//Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
//and to delete entirely blank lines.
        
//Exercise 1-19. Write a function reverse(s) that reverses the character string s . Use it to
//write a program that reverses its input a line at a time.


int main()
{

    return 0;
}



int print_longest_input_line()
{
int len; 
int max;
char line[MAXLINE];
char longest[MAXLINE];

max = 0;
while( ( len = getline(line,MAXLINE)) > 0)
    {
    if ( len > max) {
        max = len;
        copy(longest, line);
        }
    }
if (max > 0) // if there was a line
    printf("%s", longest);
return 0;
}

int getline(char s[], int lim)
{

}
void copy(char to[],char from[])
{

}


