#include <iostream>
using namespace std;

int main()
{
  string nome;
  int idade = 0, numero, escolha = 0;
  char sexo;
  int fome, higiene, inteligencia, ativo, energia, felicidade, saude, atividade; // VÃO DE 0 A 100
  char vivo = 's';

  srand(time(0));
  fome = rand()% (50)+51;
  higiene = rand()% (50)+51;
  inteligencia = rand()% (50)+51;
  ativo = rand()% (50)+51;
  energia = rand()% (50)+51;
  felicidade = rand()% (50)+51;
  saude = rand()% (50)+51;
  atividade = rand()% (50)+51;


  cout << "=======================================\n";
  cout << "Seu Tamagotchi acabou de sair do ovo!\n";
  cout << "=======================================\n";
  cout << endl;

  cout << "Dê um nome a ele(a)! : ";
  cin >> nome;

  cout << endl;

  cout << "Você deseja adotar um [m]acho, [f]emea ou [s]ortear um sexo? ";
  cin >> sexo;

  cout << endl;

  switch (sexo)
  {
    case 'm':
      cout <<"Nome:" << nome << endl ;
      cout <<"Sexo: Macho" << endl;
      cout << "idade: 0"<< endl;
    break; 
    case 'f':
      cout <<"Nome:" << nome << endl;
      cout <<"Sexo: Fêmea" << endl;
      cout << "idade: 0"<< endl;
    break; 
    case 's':
    srand(time(0)); 
    int numero = rand()%100 +1; 

    cout <<  endl;
    if (numero%2 == 0)
    {
      cout <<"Nome:" << nome<< endl;
      cout <<"Sexo: Macho"<< endl;
      cout << "idade: 0"<< endl;
    }
    else
      cout <<"Nome:" << nome<< endl;
      cout <<"Sexo: Fêmea"<< endl;
      cout << "idade: 0"<< endl;
    break; 
  }

  while (escolha < 8)
  {
    cout << endl;
    cout << "=======================================\n";
    cout << "Fome: "<< fome << endl;
    cout << "Higiene: "<< higiene<< endl;
    cout << "Saúde: "<< saude<< endl;
    cout << "Inteligência: "<< inteligencia<< endl;
    cout << "Atividade: "<< atividade<< endl;
    cout << "Energia: "<< energia<< endl;
    cout << "Felicidade: "<< felicidade<< endl;  
    cout << "=======================================\n";
    cout << "AGORA VOCÊ PODE INTERAGIR COM ELE!!\n";
    cout << "=======================================\n";
    cout << endl;
    cout << "OPÇÕES:\n";
    cout << endl;
    cout << "1 - Comer\n";
    cout << "2 - Praticar esporte\n";
    cout << "3 - Ler\n";
    cout << "4 - Jogar\n";
    cout << "5 - Tomar banho\n";
    cout << "6 - Tomar remédio\n";
    cout << "7 - Dormir\n";
    cout << "8 - Sair do programa\n";

    cin >> escolha;

    switch (escolha)
    {
      case 1:
        if (fome < 100 && (saude > 50 || felicidade < 50) )
        {
          fome = fome + 30;
          felicidade = felicidade + 5;
          saude = saude + 10;
          higiene = higiene - 10;
          energia = energia -10;
        }  
        else if(fome == 100 && (felicidade > 70 || felicidade < 30) )
        {
          saude = saude - 10;
          felicidade = felicidade + 10;
        }
        else
        {
          cout << "Não estou com fome!\n";
        }
      break;
      case 2:
        if (energia > 40 || saude > 50)
        {
          fome = fome -20;
          energia = energia -30;
          saude = saude +20;
          felicidade = felicidade + 10;
          ativo = ativo + 10;
          higiene = higiene - higiene; 
        }
        else 
        {
          cout << "Não quero praticar esporte!\n";
        }
      break;
      case 3:
        if (fome && energia > 30)
        {
          inteligencia = inteligencia + 10;
          energia = energia - 5;
        }
        else
        {
          cout << "Não quero ler!\n";
        }
      break;
      case 4:
        if (energia > 10 || felicidade > 50)
        {
          felicidade = felicidade + 10;
          inteligencia = inteligencia + 5;
          higiene = higiene - 5;
        }
        else
        {
          cout << "Não quero jogar!\n";
        }
      break;
      case 5:
        if (higiene < 30 && felicidade > 10)
        {
          higiene = higiene + 100;
          felicidade = felicidade + 10;
          saude = saude + 10;
        }
        else
        {
          cout << "Não quero tomar banho!\n";
        }
      break;
      case 6:
        if( saude < 30)
        {
          saude = saude + 10;
        }
        else
        {
          cout << "Não quero tomar remédio!\n";
        }
      break;
      case 7:
        if (energia < 30 && (saude > 50 || saude < 30))
        {
          if (saude > 50)
          {
            energia = energia + 100; 
          }

          if (saude < 30)
          {
            energia = energia + 30;
            saude = saude + 10;
          } 
        }
        else 
        {
          cout << "Não quero dormir!\n";
        }
      break;
    }

    if (fome > 100)
    {
      fome = 100;
    }
    
    if (energia > 100)
    {
      energia = 100;
    }
    
    if (saude > 100)
    {
      saude = 100;
    }
    
    if (felicidade > 100)
    {
      felicidade = 100;
    }
    
    if (higiene > 100)
    {
      higiene = 100;
    }
    
    if (ativo > 100)
    {
      ativo = 100;
    }


    cout << endl;
    cout << "=======================================\n";
    cout << "Fome: "<< fome << endl;
    cout << "Higiene: "<< higiene<< endl;
    cout << "Saúde: "<< saude<< endl;
    cout << "Inteligência: "<< inteligencia<< endl;
    cout << "Atividade: "<< atividade<< endl;
    cout << "Energia: "<< energia<< endl;
    cout << "Felicidade: "<< felicidade<< endl;  
    cout << "=======================================\n";
    
    if ( energia && saude == 0)
    {
      cout << "ADEUS!!!";
    }
  }
  cout << "=======================================\n";
  cout << "             ATÉ MAIS!\n";
  cout << "=======================================\n";

  return 0;
}