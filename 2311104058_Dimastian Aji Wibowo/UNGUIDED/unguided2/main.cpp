#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    Pelajaran pel = create_pelajaran("Matematika", "MTH101");

    tampil_pelajaran(pel);

    return 0;
}
