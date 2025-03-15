//fahrenheit to kelvin olacak şekilde yap
//celsius = kelvin - 273
//fahrenheit = 1.8 * celcius + 32
//ana fikir olarak fahrenheittan celcius sonra celciustan kelvin yapıcaz

#include <stdio.h>
float fahrenheit_celcius(float fahrenheit);
float fahrenheit_kelvin(float sicaklik);

int main(void)
{
float fahrenheit,kelvin;

    printf("fahrenheit girin:  ");
    scanf("%f",&fahrenheit);
    kelvin = fahrenheit_kelvin(fahrenheit);
    printf("kelvin degeri: %.2f \n",kelvin);

    return 0;
}
float fahrenheit_celcius(float fahrenheit)
{
    //fahrenheit = 1.8 * celcius + 32
    //celcius = (F - 32)/1.8
    float celcius = (fahrenheit-32)/1.8;

    return celcius;
}
float fahrenheit_kelvin(float sicaklik)
{
    //celsius = kelvin - 273
    //kelvin = celcius + 273
    float kelvin = fahrenheit_celcius(sicaklik) + 273;

    return kelvin;
}
