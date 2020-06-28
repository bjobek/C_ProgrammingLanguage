

#include <stdio.h>

float celsiusToFahr(float cell)
{
//(30°C x 1.8) + 32 = 86°F
float fahr;
fahr = (cell * 1.8) + 32.0;


return fahr;
}

int main()
{
float fahr, celsius;

int lower,upper,step;

lower=0;
upper=300;
step=20;

fahr = lower; //start value


printf("Fahrenheit to Celsius conversion table:\n");
while(fahr<=upper)
{
	celsius=(5.0/9.0) * (fahr-32.0);
	printf("%3.0f %6.1f\n", fahr,celsius);
	fahr=fahr+step;
}


lower = 0;
upper = 100;
step=10;

fahr=lower;
celsius=lower;

printf("Celsious to Fahrenheit Conversion:\n");
while(celsius <= upper)
{
fahr = celsiusToFahr(celsius);
printf("%3.0f %6.1f\n", celsius,fahr);
celsius=celsius+step;

}



}




