
	int q1,q2,q3,m,f;\
	cout<<"==================GUIZZ==================\n";
	cout<<"Enter first quizz (10):";
	cin>>q1;
	cout<<"Enter second quizz(10):";
	cin>>q2;
	cout<<"Enter third quizz(10):";
	cin>>q3;
	cout<<"==================MID TERM==================\n";
	cout<<"Enter mid term (40):";
	cin>>m;
	cout<<"==================FINAL==================\n";
	cout<<"Enter final (50):";
	cin>>f;
	cout<<"==================process==================\n";
	float QuizzTotal;
	QuizzTotal=static_cast<float>(q1+q2+q3)/3;
	cout<<"\nQuizz Total ="<<QuizzTotal<<endl;
	cout<<"mid term:"<<m<<endl;
	cout<<"final:"<<f<<endl;
	float Total;
	Total=static_cast<float>(QuizzTotal+m+f);
	cout<<"\nTotal ="<<Total<<endl;
	cout<<"\nYour score is =";
	cout<<((Total>=60)==0?"Fail":"Pass")<<endl;