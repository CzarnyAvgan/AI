#include <iostream>

#include <random>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;
double aktywacja(double);
int main() {

/*
	double waga_0 = -4;
	double waga_1 = 2;
	double waga_2 = 2;
	double x_0 = 1;
	double x_1[7] = { 2,2,0,-2,-2,0,-4 };
	double x_2[7] = { 1,2,6,10,0,0,-20 };
	double S = 0 ;
	int d[7] = { 1,1,1,-1,-1,-1,-1 };
	int wyniki[7];
	int win =0;
	/*
	for (int i = 0;i < 7;i++) {
		wyniki[i] = 0;
	}
	while (win < 7) {
		for (int i = 0;i < 7;i++) {
			S = (x_0*waga_0) + (x_1[i] * waga_1) + (x_2[i] * waga_2);
			if (S > 0) {
				wyniki[i] = 1;
			}
			else {
				wyniki[i] = -1;
			}

			if (wyniki[i] != d[i]) {
				waga_0 = waga_0 + (d[i] * x_0);
				waga_1 = waga_1 + (d[i] * x_1[i]);
				waga_2 = waga_2 + (d[i] * x_2[i]);
				win = 0;
				
			}
			else {
				win++;
			}
		}
	}

	cout << waga_0 << " " << waga_1 << " " << waga_2 << endl;
	for (int i = 0;i < 7;i++) {
		cout << wyniki[i] << endl;
	}
	*/

	double x_0 = 1.0;
	double x_1[2] = { -1.0,1.0 };
	double x_2[2] = { -1.0,-1.0 };
	double x_3[2] = { 1.0,1.0};
	double x_4[2] = { -1.0,1.0 };
	double x_5[2] = { -1.0,1.0 };
	double x_6[2] = { 1.0,1.0 };
	double x_7[2] = { -1.0,-1.0 };
	double x_8[2] = { -1.0,-1.0 };
	double x_9[2] = { 1.0,1.0 };
	double x_10[2] = { -1.0,-1.0 };
	double x_11[2] = { -1.0,-1.0 };
	double x_12[2] = { 1.0,1.0 };
	int d[2] = { -1,1 };
	int win = 0;
	int wyniki[2] = { 0,0 };
	double uczenie = 0.2;
	double waga_0 = 0.6;
	double waga_1 = 0.6;
	double waga_2 = 0.6;
	double waga_3 = 0.6;
	double waga_4 = 0.6;
	double waga_5 = 0.6;
	double waga_6 = 0.6;
	double waga_7 = 0.6;
	double waga_8 = 0.6;
	double waga_9 = 0.6;
	double waga_10 = 0.6;
	double waga_11 = 0.6;
	double waga_12 = 0.6;
	double S = 0.0;
	int ile = 0;
	double temp=0.0;
	double E = 0.0;

		
	

	
	 do{
		 E = 0.0;
		
		for (int i = 0;i < 2;i++) {
		/*	temp = aktywacja(x_1[i]);*/
			
			S = (x_0*waga_0) + (x_1[i] * waga_1) + (x_2[i] * waga_2) + (x_3[i] * waga_3) + (x_4[i] * waga_4) + (x_5[i] * waga_5) + (x_6[i] * waga_6) + (x_7[i] * waga_7) + (x_8[i] * waga_8) + (x_9[i] * waga_9) + (x_10[i] * waga_10) + (x_11[i] * waga_11) + (x_12[i] * waga_12);
			
			/*if (S > 0.0) {
				wyniki[i] = 1;
			}
			else {
				wyniki[i] = -1;
			}*/
			
			temp = aktywacja(S);
			cout << "przejscie nr: " << i << " " <<temp<< endl;
			

				waga_0 = waga_0 + (d[i] *uczenie * x_0);
				waga_1 = waga_1 + (d[i] * uczenie * x_1[i]);
				waga_2 = waga_2 + (d[i] *uczenie* x_2[i]);
				waga_3 = waga_3 + (d[i] * uczenie * x_3[i]);
				waga_4 = waga_4 + (d[i] * uczenie * x_4[i]);
				waga_5 = waga_5 + (d[i] * uczenie * x_5[i]);
				waga_6 = waga_6 + (d[i] * uczenie * x_6[i]);
				waga_7 = waga_7 + (d[i] * uczenie * x_7[i]);
				waga_8 = waga_8 + (d[i] * uczenie * x_8[i]);
				waga_9 = waga_9 + (d[i] * uczenie * x_9[i]);
				waga_10 = waga_10 + (d[i] * uczenie * x_10[i]);
				waga_11 = waga_11 + (d[i] * uczenie * x_11[i]);
				waga_12 = waga_12 + (d[i] * uczenie * x_12[i]);


			
				E += 0.5*(d[i] - temp)*(d[i] - temp);
		}
		cout << E << endl;
		/*1/2(d-y)+1/2(d4-y4)*/
	 } while (E > 0.0006);
	 cout << "SZUMY!" << endl;
	 x_2[1] = 1.0;
	 x_8[0] = 1.0;
	 for (int i = 0;i < 2;i++) {
		 /*	temp = aktywacja(x_1[i]);*/

		 S = (x_0*waga_0) + (x_1[i] * waga_1) + (x_2[i] * waga_2) + (x_3[i] * waga_3) + (x_4[i] * waga_4) + (x_5[i] * waga_5) + (x_6[i] * waga_6) + (x_7[i] * waga_7) + (x_8[i] * waga_8) + (x_9[i] * waga_9) + (x_10[i] * waga_10) + (x_11[i] * waga_11) + (x_12[i] * waga_12);

		 /*if (S > 0.0) {
		 wyniki[i] = 1;
		 }
		 else {
		 wyniki[i] = -1;
		 }*/

		 temp = aktywacja(S);

		 cout << temp<<endl;

	 }
	for (int i = 0;i < 2;i++) {
	//	cout << wyniki[i] << endl;
	}


	cout << "koniec" << endl;
	getchar();
	return 0;
}

double aktywacja(double cos)
{
	double beta = 0.5;
	double ex;
	double wynik;
	ex = exp((-beta)*cos);
	
	wynik = (1 - ex) / (1 + ex);
	
	return wynik;

}