#include <iostream>

using namespace std;

int main() {
    int n1,n2,n3,nr,nq ;
    float m , mr = 0 ;
    
    cout<<"Bem vindo ao programa que ira calcular a media de um aluno" << endl;
    cout<<"Digite a primeira nota do aluno" << endl;
    cin>>n1; // Ira receber a primeira nota
    cout<<"Digite a segunda nota do aluno" << endl;
    cin>>n2; // Ira receber a segunda nota
    cout<<"Digite a terceira nota do aluno" << endl;
    cin>>n3; // Ira receber a terceira nota
    cout<<"Digite a nota qualitativa do aluno" << endl;
    cin>>nq; // Ira receber a nota qualitativa
    m = (n1+n2+n3+nq)/4; // O calculo da media
    cout<<"A media do aluno é "<< m << endl;
    
    if ((m < 0) || (m>10)) { // Caso a pessoa digite valores invalidos nas notas , a media vai dar maior que 10 ou menor que 0
        cout<<"Você digitou valores invalidos que deram a media menor que 0 ou maior que 10" << endl ;
        cout<<"Obrigado por usar o programa" ;
        return 0;
    };
    if ((m >=6) && (m <=10)) { // Caso a media seja maior ou igual a 6 e menor ou igual a 10 , ela esta aprovada
        cout<<"Aprovado com sucesso" << endl;
        cout<<"Obrigado por usar o programa";
    }
    if ((m < 6) && (m >=5)) { // Aqui vai ser menor que 6 e maior ou igual a 5 pra ficar de recuperação
        cout<<"Recuperação" << endl ;
        cout<<"Digite a nota de recuperação do aluno" << endl;
        cin>>nr ; // Nota de recuperação
        mr = (n1+n2+n3+nr+nq)/5 ; // Calculo da media de recuperação
        if ((mr >=6) && (mr <=10)) { // Caso a pessoa passe na recuperação
            cout<<"Aprovado com sucesso" << endl;
            cout<<"Obrigado por usar o programa";
            
        } else if ((mr < 6) && (mr >= 0)) { // Caso ela nao consiga
            cout<<"Reprovado" << endl;
            cout<<"Obrigado por usar o programa";
        }
    if ((m >= 0) && (m < 5)) { //Caso ela seja reprovado de vez
        cout<<"Reprovado" << endl;
        cout<<"Obrigado por usar o programa" ;
    }    
    }
}
