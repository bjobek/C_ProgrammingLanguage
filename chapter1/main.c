#include <stdio.h>
#include <assert.h>

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

}






int main(void)
{
    unsigned int sum =  count_b_t_n();
    assert(sum != 0);   
    printf("In Total: %d\n",sum);
    return 0;
}
