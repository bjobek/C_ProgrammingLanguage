#include <stdio.h>
#include <assert.h>

//Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
//in its input.
void freq_histogram()
{
    #define alpha_len 27
    #define num_len 10
    
    int alpha_list[alpha_len]={0};
    int num_list[num_len]={0};
    int c = 0;
    int lower  = 'a';
    int upper  = 'z';
    int u_lower = 'A';
    int u_upper = 'Z';

    while((c = getchar()) != EOF)
    {
        if(c >= 'a' && c <= 'z')
        {
            int tmp = c-'a';
            alpha_list[tmp]++;

        }

        else if(c >= 'A' && c <= 'Z')
        {
            int tmp = c-'A';
            alpha_list[tmp]++;
        }
        else if(c >= '0' && c <= '9')
        {
            int tmp = c-'0';
            num_list[tmp]++;
        } 
    }
    for(int i = 0; i < 26; ++i)
    {
        int tmp = alpha_list[i];

        while(tmp >0)
        {
            printf("-");
            --tmp;
        }
        printf("\n");
       // printf("%d\n",alpha_list[i]);
    }
    for(int i = 0; i < 10; ++i)
    {
        printf("%d\n",num_list[i]);
    }
}


// 1-13. Write a program to print a histogram of the lengths of words in its input. It is
//easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
void len_histogram()
{  
    #define count_len 10
    int count[count_len]={0,0,0,0,0,0,0,0,0,0};
    int c;
    int IN = 1;
    int OUT = 0;
    int state=OUT;
    int len=0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            state=OUT;
            if(len>0)
            {
                assert(len < 10);
                count[len]++;
                len=0;
            }

        }
        else if(state == OUT)
        {
            state = IN;
            len++;
        }
        else
            len++;
     
    }
    for(int i = 0; i < count_len; ++i)
    {
        for(int j = 0; j < count[i]; ++j)
        {   
            if(j==0)
                printf("%d -",i);
            else
                printf("-");
        }
        printf("\n");
    }
}




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
  	//one_word_one_line(); 
    //len_histogram();
    freq_histogram();
    
    return 0;}
