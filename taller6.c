#include<stdio.h>

void funcion1(char *fecha);
int* funcion2 (int anum[],int tam, int buscar);
void funcion3(int *a1,int *a2);

int main(int argc, char *argv[] ){
	//prueba funcion1
	printf("prueba funcion1");
	char *fecha ="2017-06-06";
	funcion1(fecha);

	//prueba funcion2
	printf("prueba funcion2");
	int array[10]={0,2,3,5,5,6,7,8,9,0}; //Declarar e inicializar un array.
	int *puntero=funcion2(array,10,2);
	printf("Dirección del elemento %p\n", puntero);

	//prueba funcion3
	printf("prueba funcion3");
	int a = 2;
	int b = 3;
	funcion3(&a, &b);
	printf("%d \n",a); //Imprime 3
	printf("%d \n",b); //Imprime 2
	
	return 0;


}

void funcion1(char *fecha){
	printf("Dia: %s \n", fecha+8);
	printf("Mes: %c%c \n", *(fecha+5),*(fecha+6));
	printf("Año: %c%c%c%c \n", *(fecha+0),*(fecha+1), *(fecha+2),*(fecha+3));		
}


int* funcion2(int anum[],int tam,int buscar){
	int *puntero = &anum[0]; //Le damos la dirección de inicio del array
	int i; //variable contadora...
	for (i=0;i<tam;i++){
		if((*(puntero+i)=buscar)){
			printf("%p\n",(puntero+i)); //imprimimos los valores del puntero.
			return (puntero+i);
		}
	}
	return 0;
}



void funcion3(int *a1,int *a2){
 	int temp=*a1;
	*a1=*a2;
	*a2=temp;
}

