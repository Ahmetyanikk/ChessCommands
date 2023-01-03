#include <stdio.h>
#include <chessLib.h>

int main()
{

  struct poz sah={sah.yatay=5,sah.dusey='d'};
   struct poz vezir={sah.yatay=5,sah.dusey='d'};
    struct poz at={sah.yatay=5,sah.dusey='d'};
     struct poz fil={sah.yatay=5,sah.dusey='d'};
      struct poz piyon={sah.yatay=5,sah.dusey='d'};
       struct poz kale={sah.yatay=5,sah.dusey='d'};

printf("SAh\n");
  hareketYazdir('S',  sah);
printf("Kale\n");
  hareketYazdir('K',  kale);
  printf("Fil\n");
  hareketYazdir('F',  fil);
  printf("Vezir\n");
 hareketYazdir('V',  vezir);
  printf("Piyon\n");
  hareketYazdir('P',  piyon);
  printf("At\n");
  hareketYazdir('A',  at);
    return 0;
}
