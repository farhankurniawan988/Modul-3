#include "Pelajaran.h"
#include <iostream>
#include "Pelajaran.cpp"

using namespace std;

int main()
{
    string namapel = "Struktur Data";
    string kodepel = "STD";
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}