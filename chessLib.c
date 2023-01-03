#include <chessLib.h>
void hareketYazdir(char tas, struct poz ilkPozisyon){
    int board [8][8];
    for (int i=0;i<8 ;i++ ) {
        for (int j=0;j<8 ;j++ ) {
            board[i][j]=0;
        }
    }

    int dYer=(int)ilkPozisyon.dusey-97;
    int yYer=(8-ilkPozisyon.yatay);
    *(*(board + yYer) + dYer)=2;


    if (tas=='S') {
        if (yYer==0) {
            if (dYer==0) {
                *(*(board + yYer) + dYer + 1)=1;
                 *(*(board + yYer + 1) + dYer + 1)=1;
                 *(*(board + yYer+1) + dYer )=1;



                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else if (dYer==7) {
                *(*(board + yYer) + dYer - 1)=1;
                 *(*(board + yYer+1) + dYer )=1;
                 *(*(board + yYer+1) + dYer - 1)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }

}
            else {
                *(*(board + yYer) + dYer + 1)=1;
                *(*(board + yYer) + dYer - 1)=1;
                 *(*(board + yYer + 1) + dYer + 1)=1;
                 *(*(board + yYer+1) + dYer )=1;
                 *(*(board + yYer+1) + dYer - 1)=1;



                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }

            }
        }
        else if (yYer==7) {
            if (dYer==0) {
                *(*(board + yYer) + dYer + 1)=1;
                 *(*(board + yYer-1) + dYer + 1)=1;
                 *(*(board + yYer-1) + dYer )=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else if (dYer==7) {
                *(*(board + yYer) + dYer - 1)=1;
                *(*(board + yYer-1) + dYer )=1;
                *(*(board + yYer-1) + dYer - 1)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }

}
            else {
                *(*(board + yYer) + dYer + 1)=1;
                *(*(board + yYer) + dYer - 1)=1;
                *(*(board + yYer-1) + dYer + 1)=1;
                *(*(board + yYer-1) + dYer )=1;
                *(*(board + yYer-1) + dYer - 1)=1;



                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }

            }
        }
        else {
            if (dYer==0) {
                *(*(board + yYer) + dYer + 1)=1;
                *(*(board + yYer+1) + dYer )=1;
                *(*(board + yYer+1) + dYer + 1)=1;
                *(*(board + yYer-1) + dYer )=1;
                *(*(board + yYer-1) + dYer + 1)=1;

                for (int i=0;i<8 ;i++ ) {
                    for (int j=0;j<8 ;j++ ) {
                        printf("%d",*(*(board + i) + j));
                        printf(" ");
                    }
                    printf("\n");

                }




            }
            else if (dYer==7) {
            *(*(board + yYer) + dYer - 1)=1;
            *(*(board + yYer+1) + dYer )=1;
            *(*(board + yYer+1) + dYer - 1)=1;
            *(*(board + yYer-1) + dYer )=1;
            *(*(board + yYer-1) + dYer - 1)=1;

                for (int i=0;i<8 ;i++ ) {
                    for (int j=0;j<8 ;j++ ) {
                        printf("%d",*(*(board + i) + j));
                        printf(" ");
                    }
                    printf("\n");

                }


}
            else {
               *(*(board + yYer) + dYer + 1)=1;
               *(*(board + yYer) + dYer - 1)=1;
                *(*(board + yYer + 1) + dYer + 1)=1;
                *(*(board + yYer+1) + dYer )=1;
                *(*(board + yYer+1) + dYer - 1)=1;
                *(*(board + yYer-1) + dYer + 1)=1;
                *(*(board + yYer-1) + dYer )=1;
                *(*(board + yYer-1) + dYer - 1)=1;


                for (int i=0;i<8 ;i++ ) {
                    for (int j=0;j<8 ;j++ ) {
                        printf("%d",*(*(board + i) + j));
                        printf(" ");
                    }
                    printf("\n");

                }


            }
        }



    }
    else if (tas=='V') {
        int temp=dYer;
        int temp2=yYer;

          while(temp!=7&&temp2!=0){
               temp++;
               temp2--;
           *(*(board + temp2) + temp )=1;

                   }

           temp=dYer;
           temp2=yYer;
            while(temp!=0&&temp2!=0){
                 temp--;
                 temp2--;
             *(*(board + temp2) + temp )=1;

                     }
            temp=dYer;
            temp2=yYer;
             while(temp!=7&&temp2!=7){
                  temp++;
                  temp2++;
              *(*(board + temp2) + temp )=1;

                      }
             temp=dYer;
             temp2=yYer;
              while(temp!=0&&temp2!=7){
                   temp--;
                   temp2++;
               *(*(board + temp2) + temp )=1;

                       }
              temp=dYer;
                        while(temp!=7){
                             temp++;
                         *(*(board + yYer) + temp )=1;

                                 }
                          temp=dYer;
                          while(temp!=0){
                               temp--;
                           *(*(board + yYer) + temp )=1;

                                   }
                          temp=yYer;
                          while(temp!=7){
                               temp++;
                           *(*(board + temp) + dYer )=1;

                                   }
                              temp=yYer;
                          while(temp!=0){
                               temp --;
                           *(*(board + temp) + dYer )=1;

                                   }
                          for (int i=0;i<8 ;i++ ) {
                              for (int j=0;j<8 ;j++ ) {
                                  printf("%d",*(*(board + i) + j));
                                  printf(" ");
                              }
                              printf("\n");

                          }

    }
    else if (tas=='F') {
        int temp=dYer;
        int temp2=yYer;

          while(temp!=7&&temp2!=0){
               temp++;
               temp2--;
           *(*(board + temp2) + temp )=1;

                   }

           temp=dYer;
           temp2=yYer;
            while(temp!=0&&temp2!=0){
                 temp--;
                 temp2--;
             *(*(board + temp2) + temp )=1;

                     }
            temp=dYer;
            temp2=yYer;
             while(temp!=7&&temp2!=7){
                  temp++;
                  temp2++;
              *(*(board + temp2) + temp )=1;

                      }
             temp=dYer;
             temp2=yYer;
              while(temp!=0&&temp2!=7){
                   temp--;
                   temp2++;
               *(*(board + temp2) + temp )=1;

                       }
              for (int i=0;i<8 ;i++ ) {
                  for (int j=0;j<8 ;j++ ) {
                      printf("%d",*(*(board + i) + j));
                      printf(" ");
                  }
                  printf("\n");

              }



    }
    else if (tas=='K') {
        int temp=dYer;
          while(temp!=7){
               temp++;
           *(*(board + yYer) + temp )=1;

                   }
            temp=dYer;
            while(temp!=0){
                 temp--;
             *(*(board + yYer) + temp )=1;

                     }
            temp=yYer;
            while(temp!=7){
                 temp++;
             *(*(board + temp) + dYer )=1;

                     }
                temp=yYer;
            while(temp!=0){
                 temp --;
             *(*(board + temp) + dYer )=1;

                     }
            for (int i=0;i<8 ;i++ ) {
                for (int j=0;j<8 ;j++ ) {
                    printf("%d",*(*(board + i) + j));
                    printf(" ");
                }
                printf("\n");

            }


    }
    else if (tas=='A') {
        if (yYer<2) {
            if (dYer<2) {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else if (dYer>5) {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
        }
        else if (yYer==7) {
            if (dYer==0) {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                *(*(board + yYer -2) + dYer + 1)=1;

            }
            else if (dYer==1) {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else if (dYer==6) {
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else if (dYer==7) {

                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }

            }
            else {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
}
        else {
            if (dYer==0) {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                 *(*(board + yYer+2) + dYer+1 )=1;

                *(*(board + yYer -2) + dYer + 1)=1;




                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else if (dYer==1) {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                 *(*(board + yYer+2) + dYer+1 )=1;
                 *(*(board + yYer+2) + dYer - 1)=1;
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;



                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else if (dYer==7) {

                 *(*(board + yYer+2) + dYer - 1)=1;

                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
            else if (dYer==6) {
                 *(*(board + yYer+2) + dYer+1 )=1;
                 *(*(board + yYer+2) + dYer - 1)=1;
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }

            }
            else {
                *(*(board + yYer+1) + dYer + 2)=1;
                *(*(board + yYer-1) + dYer +2)=1;
                 *(*(board + yYer+2) + dYer+1 )=1;
                 *(*(board + yYer+2) + dYer - 1)=1;
                *(*(board + yYer -2) + dYer + 1)=1;
                 *(*(board + yYer-2) + dYer - 1)=1;
                 *(*(board + yYer-1) + dYer-2 )=1;
                 *(*(board + yYer+1) + dYer - 2)=1;


                 for (int i=0;i<8 ;i++ ) {
                     for (int j=0;j<8 ;j++ ) {
                         printf("%d",*(*(board + i) + j));
                         printf(" ");
                     }
                     printf("\n");

                 }
            }
        }

    }
    else if (tas=='P') {
        if (dYer!=0&&dYer!=6) {
            *(*(board + yYer-1) + dYer )=1;
        }
        else if (dYer==6) {
             *(*(board + yYer-1) + dYer )=1;
             *(*(board + yYer-2) + dYer )=1;
        }
        for (int i=0;i<8 ;i++ ) {
            for (int j=0;j<8 ;j++ ) {
                printf("%d",*(*(board + i) + j));
                printf(" ");
            }
            printf("\n");

        }

    }





};
