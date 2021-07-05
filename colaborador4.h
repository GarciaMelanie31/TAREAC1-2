//COLABORADOR4 - CESAR GEOVANNY MUSO LLUMIQUINGA
void transpuesta(float (*m1)[5], float (*r)[5])
  
  #include<iostream>
  #include<conio.h>
  
  using namespace std;

int main(){

int numeros[5][5];
    
	for(int y=0;y<5;y++){
      for(int z=0;z<5;z++){
        cout<<"Digite un numero ["<<y<<"]["<<z<<"]:";
        cin>>numeros[y][z];
      }
    }
    
    cout<<"\nMatriz Original\n";
    for(int y=0;y<5;y++){
      for(int z=0;z<5;z++){
        cout<<numeros[y][z]<<" ";
      }
      cout<<"\n";
    }
    
    cout<<"\nMatriz  Transpuesta\n";
    for(int y=0;y<5;y++){
      for(int z=0;z<5;z++){
        cout<<numeros[z][y]<<" ";
      }
      cout<<"\n";
    }
    
    getch();
    return 0;
  }
