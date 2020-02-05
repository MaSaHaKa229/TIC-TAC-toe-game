#include <iostream>
#include <windows.h>
int main(){
bool check = 0;
int x, y, counter = 0, c;
char mas [3][3] = {{'-','-','-'}, {'-','-','-'}, {'-','-','-'}};
std::cout << " " << "0" << " " << "1" << " " << "2" << std::endl;
std::cout << "0" << "-" << " " << "-" << " " << "-" << std::endl;
std::cout << "1" << "-" << " " << "-" << " " << "-" << std::endl;
std::cout << "2" << "-" << " " << "-" << " " << "-" << std::endl;
while(check == 0){
    std::cout << "Enter coordinates" << std::endl;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;

    if(mas[x][y]=='-'){
        if (counter%2!=1){
            mas[x][y] = 'X';
        }
        else {
            mas[x][y] = 'O';
        }
        system("cls");
        std::cout << " " << "0" << " " << "1" << " " << "2" << std::endl;
        std::cout << "0" << mas[0][0] << " " << mas[1][0] << " " << mas[2][0] << std::endl;
        std::cout << "1" << mas[0][1] << " " << mas[1][1] << " " << mas[2][1] << std::endl;
        std::cout << "2" << mas[0][2] << " " << mas[1][2] << " " << mas[2][2] << std::endl;
        counter++;

    }
    for (x = 0; x<3;x++){
        for (y=0; y<3;y++){
            if (mas[x][y]!='-'){
                c++;
            }
        }
    }
    if(c==9){
        check = 1;
        std::cout << "Nobody wins";
    }
    c = 0;
    if (mas[0][0]==mas[1][0]&&mas[0][0]==mas[2][0]&&mas[0][0]=='X'||mas[0][1]==mas[1][1]&&mas[0][1]==mas[2][1]&&mas[0][1]=='X'||mas[0][2]==mas[1][2]&&mas[0][2]==mas[2][2]&&mas[0][2]=='X'||mas[0][0]==mas[0][1]&&mas[0][0]==mas[0][2]&&mas[0][0]=='X'||mas[1][0]==mas[1][1]&&mas[1][0]==mas[1][2]&&mas[1][0]=='X'||mas[2][0]==mas[2][1]&&mas[2][0]==mas[2][2]&&mas[2][0]=='X'||mas[0][0]==mas[1][1]&&mas[0][0]==mas[2][2]&&mas[0][0]=='X'||mas[2][0]==mas[1][1]&&mas[2][0]==mas[0][2]&&mas[2][0]=='X'){
        std::cout << "X player wins";
        check = 1;
    }
    if (mas[0][0]==mas[1][0]&&mas[0][0]==mas[2][0]&&mas[0][0]=='O'||mas[0][1]==mas[1][1]&&mas[0][1]==mas[2][1]&&mas[0][1]=='O'||mas[0][2]==mas[1][2]&&mas[0][2]==mas[2][2]&&mas[0][2]=='O'||mas[0][0]==mas[0][1]&&mas[0][0]==mas[0][2]&&mas[0][0]=='O'||mas[1][0]==mas[1][1]&&mas[1][0]==mas[1][2]&&mas[1][0]=='O'||mas[2][0]==mas[2][1]&&mas[2][0]==mas[2][2]&&mas[2][0]=='O'||mas[0][0]==mas[1][1]&&mas[0][0]==mas[2][2]&&mas[0][0]=='O'||mas[2][0]==mas[1][1]&&mas[2][0]==mas[0][2]&&mas[2][0]=='O'){
        std::cout << "O player wins";
        check = 1;
    }
  }
}
