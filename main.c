#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define Lett_A  65
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
struct matrics{
  int  NumR;  
  char rows[1025];  
};

int main()
{
    int L;
    scanf("%d", &L);
    int H;
    scanf("%d", &H); fgetc(stdin);
    char T[256];
    fgets(T, 256, stdin);
    char Symb;
    struct matrics rows[H];

    for (int i = 0; i < H; i++) {
        //char ROW[1025];    
        //fgets(ROW, 1025, stdin);
        fgets(rows[i].rows, 1025, stdin);
    };    
   
     for (int i = 0; i < H; i++) 
   {
        for(int y = 0; T[y] != '\n'; y++)
        {
            Symb = toupper(T[y]); 
            //if symbol in alphabet
            if  (Symb>='A' && Symb <= 'Z')
            {
                int Lt = (Symb - Lett_A)*L;

                for(int k = Lt ; k < Lt+L; k++)
                {
                    printf("%c", rows[i].rows[k]);                            
                   //fprintf(stderr, "Position symbol: %i\n", Lt);            
                };
            }                   
            else //if symbol not in alphabet
            {
                for(int q = 0 ; q < L; q++)
                {
                    printf("%c", rows[i].rows[q]);            
                };
            };
        };
        printf( "\n");            
   };
    return  EXIT_SUCCESS;
}            

/*
 #  ##   ## ##  ### ###  ## # # ###  ## # # #   # # ###  #  ##   #  ##   ## ### # # # # # # # # # # ### ### 
# # # # #   # # #   #   #   # #  #    # # # #   ### # # # # # # # # # # #    #  # # # # # # # # # #   #   # 
### ##  #   # # ##  ##  # # ###  #    # ##  #   ### # # # # ##  # # ##   #   #  # # # # ###  #   #   #   ## 
# # # # #   # # #   #   # # # #  #  # # # # #   # # # # # # #    ## # #   #  #  # # # # ### # #  #  #       
# # ##   ## ##  ### #    ## # # ###  #  # # ### # # # #  #  #     # # # ##   #  ###  #  # # # #  #  ###  #  
 */
