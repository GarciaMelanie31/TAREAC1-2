//COLABORADOR2 - CONTRERAS MONTAÑO LUIS MIGUEL
void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{ 	
	for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            r[i][j] = 0;
            for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
        for(int k=0; k<5; ++k)
			r[i][j]+=m1[i][k]*m2[k][j];

    for(int i=0; i<5; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    } 	
}
