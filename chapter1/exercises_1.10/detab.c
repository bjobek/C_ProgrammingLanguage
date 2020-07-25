#include <stdio.h> 
#include <assert.h> 
#include <string.h>

#define MAXLINE 1000
#define TAB 4
int detab(void);
int get_line(char s[], int lim);
int get_spaces(int pos, int tabw );
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
int get_spaces(int pos, int tabw){
    return tabw - (pos % tabw);
}
int detab(void){

    char line[MAXLINE];
    int len;
    char c;
    while(( len = get_line(line,MAXLINE)) > 0){
        int i = 0;
        int j = 0;
        char tmpArr[MAXLINE];
       // printf("len: %d \n",len);    
        while((c = line[i]) != '\0' && i <= len){
            if(c == '\t'){
                int spaces = get_spaces(j, TAB);
                printf("pos: %d , spaces: %d \n", j , spaces);
                assert(spaces > 0 && spaces <= TAB);
                while(spaces > 0){
                tmpArr[j] = ' ';
                ++j;
                --spaces;
               // printf("Added spaces \n"); 
                }
            }
            else{
                tmpArr[j]=c;
                ++j;
               // printf("%c \n",c);
            }
            ++i;
        }    
        tmpArr[j]='\0';    
            
    printf("%s \n",tmpArr);         
        }
    return 1;
    }

