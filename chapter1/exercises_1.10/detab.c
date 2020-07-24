#include <stdio.h> 
#include <assert.h> 
#include <string.h>

#define MAXLINE 1000

int detab(void);
int get_line(char s[], int lim);

int main(void){
    detab();
 
    return 1;
}

int get_line(char s[], int lim){
    int c;
    int i;

    for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i]=c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
int detab(void){

    char line[MAXLINE];
    int len;
    char c;
    while(( len = get_line(line,MAXLINE)) > 0){
        int i = 0;
        char tmpArr[MAXLINE];
        printf("len: %d \n",len);    
        while((c = line[i]) != '\0' && i <= len){
            if(c == '\t'){
                tmpArr[i]=' ';
                tmpArr[i+1]=' '; 
                tmpArr[i+2]=' ';
                tmpArr[i+3]=' ';
                i=i+4;
                
                assert((len=len+4) < MAXLINE);
                
                printf("Tab replaced with 4 spaces \n");

            }
            else{
                tmpArr[i]=c;
                ++i;
                printf("char : %c , addr : %ud,",c,&c);
            }
        }    
            
            
    printf("%s \n",tmpArr);         
        }
    return 1;
    }

