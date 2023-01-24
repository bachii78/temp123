#include <iostream>

int conv(int s){

    int res = (~s) + 1;
    return res;
}


void forcount(int t, char k, int p){
        std::cout << t;
        for(int i = 0; i < p; i++){
            std::cout << k;
    }

}



void table(char delimt, int count){

    for(int a = 0; a < 2; a++){
        for(int b = 0; b < 2; b++){
            for(int c = 0; c < 2; c++){
                for(int d = 0; d < 2; d++){
                    int y = (a & (~b) & c & (~d))|((~a) & b & (~c) & d)|((~a) & (~b) & c & d);

                    forcount(a, delimt, count);
                    forcount(b, delimt, count);
                    forcount(c, delimt, count);
                    forcount(d, delimt, count);
                    std::cout << y << '\n';
}
            }
        }
    }



}

int main(){
    std::cout << conv(40) << std::endl;
    table('  ', 8);
    std::cout << '\n';

    return 0;
}
