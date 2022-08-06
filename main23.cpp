
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int generar(){
	int n;
	srand(time(NULL));
	n =((rand() % 7) + 1);
	
	return(n);}
	
	int generar2(){
	int n;
	srand(time(NULL));
	n =((rand() % 8) + 1);
	
	return(n);}
	
	
	int generar3(){
	int n;
	srand(time(NULL));
	n =((rand() % 9) + 1);
	
	return(n);}
	
	
	int fila(){
		int filatiro;
		int f;
printf("\n porfavor ingrese las coordenadas a las cuales quiere disparar""\n");	
do{
printf("\n ingrese elnumero de la fila del 0 al 9 tambien");
scanf("%d",&filatiro);

}while(filatiro>9);
	 
		
return (filatiro);	
	}
	
	
	
	
	int columna(){
		
		int columnatiro;
		int c;
printf("\n porfavor ingrese las coordenadas a las cuales quiere disparar""\n");	
do{
printf("igrese el numero de la columna del 0 al 9:");
scanf("%d",&columnatiro);



}while(columnatiro>9);
	 
		
return (columnatiro);	
	}
	
	
	

int main()
{
  int n;
  int n2;
  int n3;
  int n4;
  int n5;
  int n6;
  int n7;
  int n8;
  int n9;
  int columnatiro;
  int filatiro;
  int coordenada1,coordenada2,coordenada3,coordenada4,coordenada5,coordenada6,coordenada7,coordenada8,
  coordenada9,coordenada10,coordenada11,coordenada12,coordenada13,coordenada14,coordenada15,coordenada16,
  coordenada17,coordenada18,coordenada19,coordenada20,coordenada21,coordenada22;
 
      
	int mar[10][10];
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			mar[i][j] = 0;	
		}
	}

  int boat = 0;
  for (int i = 0; i < 10; i++)
  {
    
    for (int j = 0; j < 10; j++)
      printf("%d\t",mar[i][j]);
    }

    n=generar();
    n2=generar();
    n3=n2+1;
    n4=n2+2;
 mar[n][n2]=1;
 mar[n][n3]=1;
 mar[n][n4]=1;
 
 
    
    n5=generar2();
    n6=generar2();
    n7=n5+1;
    mar[n7][n6]=2;
    mar[n5][n6]=2;
    
    
    
    
    n8=generar3();
    n9=generar3();
    mar[n8][n9]=3;
    
    
	
    
    

    
}



coordenada1=fila();
coordenada2=columna();
mar[coordenada1][coordenada2];
if(mar[coordenada1][coordenada2]!=0){
printf("le diste a un barco ");
	
	
	
}


//segundo tiro
coordenada3=fila();
coordenada4=columna();
if(mar[coordenada3][coordenada4]!=0){
	printf("le diste a un barco ");}


//tercer tiro
coordenada5=fila();
coordenada6=columna();
if(mar[coordenada5][coordenada6]!=0){
printf("le diste a un barco ");}


//cuarto tiro
coordenada7=fila();
coordenada8=columna();
if(mar[coordenada7][coordenada8]!=0){
printf("le diste a un barco ");}

//quinto tiro
coordenada9=fila();
coordenada10=columna();
if(mar[coordenada9][coordenada10]!=0){
printf("le diste a un barco");}

//sexto tiro
coordenada11=fila();
coordenada12=columna();
if(mar[coordenada11][coordenada12]!=0){
printf("le diste a un barco ");}

//septimo  tiro
coordenada13=fila();
coordenada14=columna();
if(mar[coordenada13][coordenada14]!=0){
printf("le diste a un barco");}

//septimo  tiro
coordenada15=fila();
coordenada16=columna();
if(mar[coordenada15][coordenada16]!=0){
printf("le diste a un barco");}

//octavo tiro
coordenada17=fila();
coordenada18=columna();
if(mar[coordenada17][coordenada18]!=0){
printf("le diste a un barco");}

//noveno tiro
coordenada19=fila();
coordenada20=columna();
if(mar[coordenada19][coordenada20]!=0){
printf("le diste a un barco");}


//decimo tiro
coordenada21=fila();
coordenada22=columna();
if(mar[coordenada21][coordenada22]!=0){
printf("le diste a un barco");}











}
