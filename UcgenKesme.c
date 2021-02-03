#include <stdio.h>
#include <math.h>
#include <locale.h>

    

int main()
	{
	setlocale(LC_ALL,"Turkish");
    float sonx, sony;
	float d1, d2, d3, d4, d5, d6, d7, d8;
	float x1, y1, x2, y2, x3, y3, xd1, yd1, xd2, yd2, xs, ys, xb1, yb1, xb2, yb2;
	float dx, dy;

	float kesisme_X, kesisme_Y;

	printf("Üçgenin doğru parçası ile kesişim noktaları:\n");

    printf("Üçgenin 1. Çizgisinin X1 noktası: ");

	scanf("%f", &x1);

	xs = x1;

	printf("Üçgenin 1. Çizgisinin Y1 noktası: ");

	scanf("%f", &y1);

	ys = y1;

	printf("Üçgenin 1. Çizgisinin X2 noktası: ");

	scanf("%f", &x2);

	printf("Üçgenin 1. Çizgisinin Y2 noktası: ");

	scanf("%f", &y2);

	dx = x2 - x1;

	dy = y2 - y1;

	d1 = dy / dx;

	d2 = y1 - d1 * x1;


	printf("Üçgenin 2. Çizgisinin X3 noktası: ");

	scanf("%f", &x3);

	printf("Üçgenin 2. Çizgisinin Y3 noktası: ");

	scanf("%f", &y3);

	dx = x3 - x2;

	dy = y3 - y2;

	d3 = dy / dx;

    d4 = y2 - d3 * x2;

//----------------------Üçgenin üçüncü doğrusu---------------------------

    dx = x3 - xs;

	dy = y3 - ys;

	d5 = dy / dx;

    d6 = ys - d5 * xs;

    printf("Elimizde Bir Üçgen Var Artık: ");

    float dizix[3] = {x1,x2,x3};

    float diziy[3] = {y1,y2,y3};

     float temp;
     int i, j;

     for (i=1; i<3; i++)
     {
         for (j=0; j<3-i; j++)
         {
             if(dizix[j] > dizix[j+1])
             {
                        temp = dizix [j];
                        dizix [j] = dizix [j+1];
                        dizix [j+1] = temp;
             }
         }
     }

     xd1 = dizix[0];
     xd2 = dizix[2];
                                    //Bu iki for döngüsünün amacı üçgeni hem x hemde y ekseninde
     for (i=1; i<3; i++)             //Maksimum ve minumum değerlerini bulup kesişen noktalar ile karşılaştırmak
     {
         for (j=0; j<3-i; j++)
         {
             if(diziy[j] > diziy[j+1])
             {
                        temp = diziy [j];
                        diziy [j] = diziy [j+1];
                        diziy [j+1] = temp;
             }
         }
     }

     yd1 = diziy[0];
     yd2 = diziy[2];


    printf("Üçgeni Kesen Doğru Parçasını Yazalım:\n");

    printf("Kesen Doğru Parçanın X1 kısmı: ");

	scanf("%f", &xb1);

	printf("Kesen Doğru Parçanın Y1 kısmı: ");

	scanf("%f", &yb1);

	printf("Kesen Doğru Parçanın X2 kısmı: ");

	scanf("%f", &xb2);

	printf("Kesen Doğru Parçanın Y2 kısmı: ");

	scanf("%f", &yb2);

	dx = xb2 - xb1;

	dy = yb2 - yb1;

	d7 = dy / dx;

	d8 = yb1 - d7 * xb1; if (kesisme_Y > yb2 && kesisme_Y <= yb1)

	printf("Üçgenin 1. Çizgisinin denklemi: Y = %.2fX %c %.2f\n", d1, (d2 < 0) ? ' ' :'+',  d2);

	printf("Üçgenin 2. Çizgisinin denklemi: Y = %.2fX %c %.2f\n", d3, (d4 < 0) ? ' ' :'+',  d4);

	printf("Üçgenin 3. Çizgisinin denklemi: Y = %.2fX %c %.2f\n", d5, (d6 < 0) ? ' ' :'+',  d6);

    printf("Kesen Doğru Çizgisinin denklemi: Y = %.2fX %c %.2f\n", d7, (d8 < 0) ? ' ' :'+',  d8);

    if ((d1 - d7) == 0){

		printf(" Üçgenin İlk Kenarı ile Kesen Doğru Parçası Arasında Kesişme Yoktur\n");
	}
	else

	{

		kesisme_X = (d8 - d2) / (d1 - d7);

		kesisme_Y = d1 * kesisme_X + d2;

        if(kesisme_X >= xd1 && kesisme_X <= xd2){

        if(kesisme_Y >= yd1 && kesisme_Y <= yd2)

        printf("Kesişen Nokta 1: = %.2f, %.2f\n", kesisme_X,kesisme_Y);

        }


	if ((d3 - d7) == 0){

		printf(" Üçgenin İkinci Kenarı ile Kesen Doğru Parçası Arasında Kesişme Yoktur\n");
	}
	else

	{

		kesisme_X = (d8 - d4) / (d3 - d7);

		kesisme_Y = d3 * kesisme_X + d4;

        if(kesisme_X >= xd1 && kesisme_X <= xd2){

        if(kesisme_Y >= yd1 && kesisme_Y <= yd2)

        printf("Kesişen Nokta 2: = %.2f, %.2f\n", kesisme_X,kesisme_Y);

		 }


	if ((d5 - d7) == 0){

		printf(" Üçgenin Üçüncü Kenarı ile Kesen Doğru Parçası Arasında Kesişme Yoktur\n");
	}
	else

	{

		kesisme_X = (d8 - d6) / (d5 - d7);

		kesisme_Y = d5 * kesisme_X + d6;

        if(kesisme_X >= xd1 && kesisme_X <= xd2){

        if(kesisme_Y >= yd1 && kesisme_Y <= yd2)

        printf("Kesişen Nokta 3: = %.2f, %.2f\n", kesisme_X,kesisme_Y);

        }

	}
	}
	}
}
