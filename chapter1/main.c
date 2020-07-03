#include <stdio.h>
#include <assert.h>



//#define OUT 0 /outside a word 
//#define IN  1 /inside a word 


//Word count, one line, exc 1.11
void one_word_one_line()
{
int c, nl, nw, nc, state;
int OUT = 0;
int IN = 1;
state = OUT;
nl = nw = nc = 0;
while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
    {
        ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t')
    {
        state = OUT;
        printf("\n");
    }
    else if (state == OUT)
    {
        state = IN;
        ++nw;
        putchar(c);
    }
    else
    {
        putchar(c);
    }

}
}


//Count blanks,tabs and newlines
int count_b_t_n()
{
int c , b , t , n;
c=b=t=n=0;

while((c=getchar()) != EOF)
{
    if(c == '\n'){
        ++n;
         printf("Newlines: %d\n",n);
    }
    else if(c == '\t'){
        ++t;  
        printf("Tabs: %d\n",t);
    }
    else if(c == ' '){
        ++b;
        printf("Whitespace: %d\n",b);
    }
}
return (t+b+n);
}


//Copy input to output, replace each string of one or more blanks by a single blank
void blanks2blank()
{
    int b,c;
    b=c=0;

    while((c=getchar()) != EOF){
        if(c == ' ')
        {
            b++;
        }
        else
        {
            if(b>=2)
            {
                printf(" " );
                putchar(c);
                b=0;
            }
            putchar(c);
            b=0;
        }
    }

}

void replace_t_b_bslash()
{
int c = 0;   
 while((c=getchar()) != EOF){
       
        if(c == '\\')
        {
            printf("\\\\");
        }
        else if(c=='\t')
        {

            printf("\\t");
        }
        
        else if(c=='\b')
        {
            printf("\\b");
        }
 } 
}

    







int main(void)
{
   //unsigned int sum =  count_b_t_n();
  //assert(sum != 0);   
   //printf("In Total: %d\n",sum);
   //blanks2blank();
   //replace_t_b_bslash();
  	one_word_one_line(); 
    return 0;}
