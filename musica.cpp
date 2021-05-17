#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main(){
   PlaySound(TEXT("nomefile.wav"), NULL, SND_FILENAME);
   return 0;
}
