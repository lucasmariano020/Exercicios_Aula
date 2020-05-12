//Calcula area e perimetro de circulo

#include <stdio.h>  
#include <stdlib.h>
#define pi 3.14159265358979323846

void calc_circulo(float r, float *area, float *perimetro);

int main()
  {
    float diametro, area, *areap, perimetro, *perimetrop;
    areap = &area;
    perimetrop = &perimetro;
  	
    printf("Digite o diametro do circulo pelo qual a area e o perimetro sera calculado: ");
    scanf("%f", &diametro);
  	
    if(diametro >= 0)
     {
       calc_circulo((diametro/2), areap, perimetrop);
        printf("O circulo tem area: %.2fu e perimetro: %.2fu\n", area, perimetro);
      }
      
     else
      {
        printf("Somente numero positivo ou igual a 0");
        return 1;
      }
   
  	return 0;
  }
  
void calc_circulo(float r, float *area, float *perimetro)
  {
    *area = (pi*r*r);
    *perimetro = (2*pi*r);
  }
