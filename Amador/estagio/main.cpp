#include <iostream>

using namespace std;

const int MAX_ALUNOS = 1000;
int main()
{
  int i, indice_melhor, indice_melhor2, indice_melhor3, n;
  int turma=1;
  struct
  {
    int codigo, media;
  } alunos[MAX_ALUNOS];
  // le numero de alunos da primeira turma
  cin >> n;
  while (n > 0)
    {
      // le dados dos alunos
      for (i = 0; i < n; i++)
         cin >> alunos[i].codigo >> alunos[i].media;
      // procura aluno de maior media
      indice_melhor = 0;
      indice_melhor2 = 0;
      indice_melhor3 = 0;
      for (i = 1; i < n; i++)
         if (alunos[i].media > alunos[indice_melhor].media)
             indice_melhor = i;


      for (i = 0; i < n; i++){
            if (alunos[i].media == alunos[indice_melhor].media && alunos[i].codigo != alunos[indice_melhor2].codigo)
             indice_melhor2  = i;
            if (alunos[i].media == alunos[indice_melhor2].media && alunos[i].codigo != alunos[indice_melhor2].codigo)
             indice_melhor3 = i;
      }
      // escreve resposta
      cout << "Turma " << turma++ << "\n";
      cout << alunos[indice_melhor].codigo << "\n\n";
      cout << alunos[indice_melhor2].codigo << "\n\n";
      cout << alunos[indice_melhor3].codigo << "\n\n";
      // le numero de alunos da proxima turma
      cin >> n;
    }
  return 0;
}