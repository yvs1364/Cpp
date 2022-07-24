#include <iostream>
using namespace std;

int main(){
  /* Programme qui lis chaque lige/caractère/tab/espace d'un fichier */
  /* et return le nombre de fois qu'il rencontre ces params */
  char ch;
  int lineCnt=0, charCnt=0, tabCnt=0,blankCnt=0, sumCnt=0;

  while(cin.get(ch)){
    switch(ch){
      case '\t':
        ++tabCnt;
        break;
      case ' ':
      ++blankCnt;
        break;  
      case '\n':
        ++lineCnt;
        break;
      default:
        ++charCnt;
        break;
    }
  sumCnt = lineCnt + charCnt + tabCnt + blankCnt;
  }
  
  cout << "Total Character : " << sumCnt << endl;
  cout << endl;
  cout << "lineCnt : " << lineCnt << endl;
  cout << "charCnt : " << charCnt << endl;
  cout << "tabCnt : "<< tabCnt << endl;
  cout << "blankCnt : "<< blankCnt << endl;
  return 0;
}