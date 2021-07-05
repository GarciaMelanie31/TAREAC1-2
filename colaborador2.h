//COLABORADOR2 - CONTRERAS MONTAÑO LUIS MIGUEL
void main(){
int A[3][2] = {{1,1},{1,1},{1,1}};
int B[2][3] = {{2,2,2},{2,2,2}};
int res[3][3];
int c, suma;
for(int i = 0; i < 3; i++){
c = 0;
while(c < 3){
suma = 0;
for(int j = 0; j < 2; j++)
duma = suma + (A[i][j] * B[j][c]);
res[i][c] = suma;
c = c + 1;
}
}
for(int i = 0; i < 3; i++){
for(int j = 0; j < 3; j++)
cout << res[i][j] << "\t";
cout <<endl;
}
