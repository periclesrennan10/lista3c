#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int questao;
	questao = -1;
	
	while (questao != 0){
		cout << endl << "Digite um numero de 1 a 10 para ir a questao ou 0 para sair: ";
		cin >> questao;
	
	
		switch (questao){
		
			case 1: {
				for (int i = 1; i <= 50; i++){
					
					if (i % 4 == 0){
						cout << "pim ";
					}else {
						cout << i << " ";
					}
				}
				break;
			}
			
			case 2: {
				int numeros = 20;
				int valores[numeros];
				float soma = 0;
				
				cout << "Digite 20 numeros inteiros: " << endl;
				for (int i = 0; i < numeros; i++){
					cin >> valores[i];
					soma += valores[i];
				}
				float media = soma / numeros;
				
				cout << "A media dos valores eh: " << media;
				
				break;
			}
			
			case 3: {
				int numeros;
				int soma = 0;
				
				cout << "Digite quantos numeros voce quer informar: ";
				cin >> numeros;
				for (int i = 0; i < numeros; i++){
					int numero;
					cout << "Digite o numero: ";
					cin >> numero;
					if (numero % 2 == 0){
						soma += numero;
					}
				}
				cout << "A soma dos numeros pares eh: " << soma;	
				break;
			}
			
			case 4: {
				double dinJoao = 1000;
				double jurosJoao = 0.5;
				
				double dinMaria = 100;
				double jurosMaria = 1;
				
				int meses = 0;
				
				while (dinMaria <= dinJoao){
					dinJoao *= (1 + jurosJoao / 100);
					dinMaria *= (1 + jurosMaria / 100);
					meses++;
				}
				
				cout << "Sera necessario " << meses << " meses para Maria ter mais dinheiro que joao.";
				break;
			}
			
			case 5: {
				int numero;
				
				cout << "Digite um numero para fatorar: ";
				cin >> numero;
				
				int fatorial = 1;
        		for (int i = 2; i <= numero; ++i) {
            	fatorial *= i;
			}
			cout << "O fatorial de " << numero << " eh: " << fatorial;
				break;
			}
			
			case 6: {
				int num = 30;
				int vetor[num];
				
				int numPar = 0;
				int numImpar = 0;
				
				cout << "Digite " << num << " numeros" << endl;
				for (int i = 0; i < num; i++){
					cout << "Digite o numero: ";
					cin >> vetor[i];				
				}
				cout << "Os numeros pares: ";
				for (int i = 0; i < num; i++){
					if (vetor[i] % 2 == 0){
						cout << vetor[i] << " ";
					}
				}
				cout << endl << "Os numeros impares: ";
				for (int i = 0; i < num; i++){
					if (vetor[i] % 2 != 0){
						cout << vetor[i] << " ";
					}
				}
				break;
				
			}
			case 7: {
				int numero = 5;
				int vetor[numero];
				
				for (int i = 0; i < numero; i++){
					cout << "Digite o numero: ";
					cin >> vetor[i];
				}
				for (int i = 0; i < numero; i++){
					if (vetor[i] <= 10){
						cout << "V[" << i << "] = " << vetor[i] << endl;
					}
				} 
				break;
			}
			case 8: {
				int matriz[2][3];
				for (int i = 0; i < 2; i++){
					for (int j = 0; j < 3; j++){
						cout << "Digite o numero da linha " << i << " coluna: " << j << " ";
						cin >> matriz[i][j];
					}
				}
				
				
				int valor;
				cout << "Escolha uma coluna entre 0 e 2: ";
				cin >> valor;
				
				for (int i = 0; i < 2; i++){
					for (int j = 0; j < 3; j++){
						cout << matriz[i][j] << " ";
					}
				}
				
				int soma = 0;
				cout << endl << "Os valores da coluna: ";
				for (int i = 0; i < 2; i++){
					cout << matriz[i][valor] << " ";
					soma += matriz[i][valor];
					}
					
				cout << endl << "A soma dos valores da coluna escolhida eh: " << soma << endl; 
				
				
				break;
			}
			
			case 9: {
				int matriz[10][10];
				for (int i = 0; i < 10; i++){
					for (int j = 0; j < 10; j++){
						cout << "Digite o numero da linha " << i << " coluna: " << j << " ";
						cin >> matriz[i][j];
					}
				}
				
				int maiorValor = matriz[0][0];
				int maiorValorLinha = 0;
				int maiorValorColuna = 0;
				
				for (int i = 0; i < 10; i++){
					for (int j = 0; j < 10; j++){
						if (matriz[i][j] > maiorValor){
							maiorValor = matriz[i][j];
							maiorValorLinha = i;
							maiorValorColuna = j;
						}
					}
				}
					
					cout << "O maior valor encontrado foi: " << maiorValor << endl;
					
					cout << "Elementos da coluna: ";
					for (int i = 0; i < 10; i++){
						cout << matriz[i][maiorValorColuna] << " ";
					}
					
					cout << "Elementos da linha: ";
					for (int j = 0; j < 10; j++){
						cout << matriz[maiorValorLinha][j] << " ";
					}
				
				break;
			}
			
		}
	}
//	1 2 3 
//	4 5 6
//	7 8 9
	
	
	return 0;
}
		


