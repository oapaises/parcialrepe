#include <stdio.h>
int main(){
int tamanio,f, c, burbuja, fil, col, taman=0;
	
	printf("Ingrese el tamaño de las matriz cuadrada 1 N*N: ");
	scanf("%d", & tamanio );
	int Matriz1[tamanio][tamanio];
	taman=tamanio*tamanio*2;
 int vector[taman];
	printf("\nLLENADO DE MATRIZ 1 \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese el valor %d,%d para la matriz 1: ", f, c);
			scanf("%d", & Matriz1[f][c]);	
		}
	}
	printf("\n MATRIZ 1 \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		for(c=0; c<tamanio; c++){
			printf("%d\t", Matriz1[f][c]);
		}
	}
	printf("Ingrese el tamaño de las matriz cuadrada 2 N*N: ");
	scanf("%d", & tamanio );
	int Matriz2[tamanio][tamanio];

	printf("\nLLENADO DE MATRIZ 2 \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese el valor %d,%d para la matriz 2:  ", f, c);
			scanf("%d", & Matriz2[f][c]);	
		}
	}
	printf("\n MATRIZ 2 \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		for(c=0; c<tamanio; c++){
			printf("%d\t", Matriz2[f][c]);
		}
	}
	for(f=0; f<(tamanio);f++){ 
		for(c=0; c<(tamanio); c++){ 
			for(fil=f+1; fil<f;fil++){
				for(col=c+1; col<c; col++){ 
					if(Matriz1[f][c]>Matriz1[fil][col]){
					burbuja=Matriz1[fil][col]; 
					Matriz1[f][c]=Matriz1[fil][col]; 
					Matriz1[fil][col]=burbuja; 
					vector[fil-1]=Matriz1[fil][col];
				}
				}
			} 
		} 
	} 
	for(f=0; f<(tamanio);f++){ 
		for(c=0; c<(tamanio); c++){ 
			for(fil=f+1; fil<f;fil++){
				for(col=c+1; col<c; col++){ 
					if(Matriz2[f][c]>Matriz2[fil][col]){
					burbuja=Matriz2[fil][col]; 
					Matriz2[f][c]=Matriz1[fil][col]; 
					Matriz2[fil][col]=burbuja; 
					vector[(taman/2)+(fil-1)]=Matriz2[fil][col];
				}
				}
			} 
		} 
	}
	printf("\n VECTOR \n");
		
		for(f=0; f<(tamanio-1); f++){ 
			printf("\n");
			for(fil=f+1; fil<tamanio;fil++){
				if(vector[fil]>vector[f]){
		burbuja=vector[fil];
		vector[fil]=vector[f];
		vector[f]=burbuja;
			printf("%d\t", vector[f]);
		}
	}
}	

}
