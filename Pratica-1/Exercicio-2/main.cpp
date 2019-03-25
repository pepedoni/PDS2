#include "estudante.h"

#include <iostream>
#include <iomanip>

using namespace std;

int* reordenarMelhores(int *melhores, int maxIndex, int index, int value) {
    int aux = 0;

    if(index != 2) {
        aux = melhores[index];
        melhores[index] = value;
        return reordenarMelhores(melhores, maxIndex, index + 1, aux);
    }
    else {
        melhores[index] = value;
        return melhores;
    }
}

int main()
{
    float rsg = 0, notas[5], rsgAtual = 0;
    int melhores[3] = {-1, -1, -1};
    Estudante estudantes[10];
    

    // Lendo 10 Estudantes
    for (int i = 0; i < 10; i++)
    {
        Estudante estudante = Estudante();
        cin >> estudante.matricula;
        cin >> estudante.nome;
        for (int j = 0; j < 5; j++)
        {
            notas[j] = 0.000000;
            cin >> estudante.notas[j];
        }
        estudantes[i] = estudante;
        setprecision(2);
        rsg = estudante.calcular_rsg();
        
        cout << std::fixed << setprecision(2); 
        
        for(int k = 0; k < 3; k++) {
            
            // Caso a variavel melhores já esteja setada naquela posição
            if(melhores[k] != -1) {
                rsgAtual = estudantes[melhores[k]].calcular_rsg();
                // Verifica se o rsg atual é melhor que o rsg calculado
                if(rsg > rsgAtual) {
                    reordenarMelhores(melhores, 2, k, i); 
                    break;
                }
                else if(rsg == rsgAtual) {
                    if(estudante.matricula < estudantes[melhores[k]].matricula) {
                        reordenarMelhores(melhores, 2, k, i); 
                        break;
                    }
                }
            }
            else {
                reordenarMelhores(melhores, 2, k, i); 
                break;
            }
        }
    }

    for(int l = 0; l < 3; l++) {
        cout << estudantes[melhores[l]].matricula;
        cout << " " << estudantes[melhores[l]].nome;
        float rsgMelhor = estudantes[melhores[l]].calcular_rsg();
        cout << std::fixed << setprecision(2) << " " << rsgMelhor << "\n";
    }

    return 0;
}