void ingresar(float (*m1)[5], float(*m2)[5])
{
	int f,c;
	  cout<<endl;
	  cout<<"Ingrese los valores de la matriz 1"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"Ingrese un numero: ";
			cin>>m1[i][j];
		}
	}
	cout<<"\n";
	cout<<endl;
	cout<<"Ingrese los valores de la matriz 2"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"Ingrese un numero: ";
			cin>>m2[i][j];
		}
	}
	cout<<"\n";
	cout<<"La matriz 1 es:"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<m1[i][j];
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"La matriz 2 es:"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<m2[i][j];
		}
		cout<<endl;
	}
 	
}
