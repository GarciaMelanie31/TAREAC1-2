//COLABORADOR4 - CÉSAR GEOVANNY MUSO LLUMIQUINGA
void transpuesta(float (*m1)[5], float (*r)[5])
{
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			r[j][i]=m1[j][i];
			cout<<r[j][i]<<" ";
		}
		cout<<endl;
	}
}
	
  
