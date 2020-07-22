#include <stdio.h> 
#include <assert.h> 
//Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
//the length of arbitrary long input lines, and as much as possible of the text.
#define MAXLINE 1000 // maximum input line
int print_longest_input_line();
int get_line(char s[], int lim);
void copy(char to[],char from[]);


//Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.
int print_above_80_lines();

//Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input,
//and to delete entirely blank lines.

// check if in a word
// after being in a word, copy to new buffer
int exec118(){
char line[MAXLINE];
int len;

while (( len = get_line(line,MAXLINE)) > 0){
    int tmp=len;
    int c;
    while(tmp > 0){
          assert(line[len]=='\0');
          c = line[tmp-2];

          if(c == '\t' || c == ' '){
            line[tmp-1]='\0';
            line[tmp-2]='\n';
            assert(len > 0);
            len--;
            tmp--;
            printf("Trailing blank or tab detected\n");
            printf("Len reduced to %d\n",len);
            
          }
          else
          {
          tmp = -1;
          printf("%s\n",line);
          }
    }


}
return 1;
}

//Exercise 1-19. Write a function reverse(s) that reverses the character string s . Use it to
//write a program that reverses its input a line at a time.


int main()
{
   exec118();
   // print_above_80_lines();
   // print_longest_input_line();
    return 0;
}
///////////////////////////////////////////////////
int print_above_80_lines(){

    int len; // current line length
    int cap;// lower line length limit
    char line[MAXLINE];
    char line_buf[MAXLINE][MAXLINE];
    int arr_count;
    cap = 80;
    arr_count=0;
    while( (len = get_line(line,MAXLINE)) > 0 ){
        
        if(len > cap){
            copy(line_buf[arr_count],line);
            arr_count++;
        }

    }
    if(arr_count > 0){
    
        for(int i = 0; i < arr_count; ++i){
            printf("%s\n",line_buf[i]);
            
        }
    }
    return 0;
}



///////////////////////////////////////////////////
int print_longest_input_line()
{
int len; //current line length 
int max; // current max line length
char line[MAXLINE];
char longest[MAXLINE];

max = 0;
while( ( len = get_line(line,MAXLINE)) > 0){
    if ( len > max) {
        max = len;
        copy(longest, line);
        }
    }
if (max > 0) // if there was a line
    printf("%s", longest);
    printf("\n%d\n",max);
return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
//Copy: copy from buf to buf
void copy(char to[],char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

// Append: buf to big buf
int append(char to[], char from[])
{
   return 0; 
}

