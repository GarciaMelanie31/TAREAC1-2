//COLABORADOR5 - RAMIREZ PEREA JONATHAN JOSUE
void mediayvarianza(float (*m1)[5], float (*m2)[5])
{
  cout<<"\nel resultado de la media de la matriz 1 es:";

for (int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		
		media+= m1[i][j];
		
		
	}

}
media/=25;

cout<<media<<endl;

cout<<"\nel resultado de la media de la matriz 2 es:";

for (int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		
		media2+= m2[i][j];
	}

}
media2/=25;
cout<<media2<<endl;

cout<<"\nla varianza de la primera matriz es:";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		
		varianza1+= (m1[i][j]-media)*(m1[i][j]-media);
	}	
}
varianza1/=25;

cout<<varianza1<<endl;

cout<<"\nla varianza de la segunda matriz es:";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		
		varianza2+= (m2[i][j]-media2)*(m2[i][j]-media2);
	}	
}
varianza2/=25;

cout<<varianza2<<endl<<endl;

if(media>media2){
	
	cout<<"\nmedia de matriz 1 es mayor que la media de matriz 2\n\n";
}
else{
	
	cout<<"\nmedia de matriz 2 es mayor que la media de matriz 1\n\n";
}
if(varianza1>varianza2){
	
	cout<<"\nvarianza de matriz 1 es mayor que la varianza de matriz 2\n\n";
}
else{
	
	cout<<"\nvarianza de matriz 2 es mayor que la varianza de matriz 1\n\n";
}
  
  
  
  
}
