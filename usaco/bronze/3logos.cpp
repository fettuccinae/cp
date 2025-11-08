#include <bits/stdc++.h>

using namespace std;

int main() {
	int x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int area=x1*y1+x2*y2+x3*y3;
	int side = sqrt(area);
	if ((side * side) != area) {
		cout<<"-1";
		return 0;
	} 
	//x_n<y_n
	if(x1>y1){
		int t=x1;
		x1=y1;
		y1=t;
	}
	if(x2>y2){
		int t=x2;
		x2=y2;
		y2=t;
	}
	if(x3>y3){
		int t=x3;
		x3=y3;
		y3=t;
	}

	char arr[side][side]; //arr[x][y]
	for(int i=0;i<side;i++){
		for(int j=0;j<side;j++){
			arr[i][j]='X';
		}
	}

	bool twoTOone=false;
	bool threeTOone=false;
	if(y1==side){

	}else if(y2==side){
		//swap x1y1 with x2y2
		twoTOone=true;
		int t=x1;
		x1=x2;
		x2=t;
		t=y1;
		y1=y2;
		y2=t;
	}else if(y3==side){
		//swap x1y1 with x3y3
		threeTOone=true;
		int t=x1;
		x1=x3;
		x3=t;
		t=y1;
		y1=y3;
		y3=t;
	}
	else{
		cout<<"-1\n";
		return 0;
	}
	if(y1==side){
		for(int j=0;j<x1;j++){
			for(int i=0;i<side;i++){
				if(twoTOone) arr[j][i]='B';
				else if(threeTOone) arr[j][i]='C';
				else arr[j][i]='A';
			}
		}
		if(y2==side){//y1=y2=y3=side
			for(int j=x1;j<x1+x2;j++){
				for(int i=0;i<side;i++){
					if(twoTOone) arr[j][i]='A';
					else arr[j][i]='B';
				}
			}
			for(int j=x1+x2;j<x1+x2+x3;j++){
				for(int i=0;i<side;i++){
					if(threeTOone) arr[j][i]='A';
					else arr[j][i]='C';
				}
			}
		}else{
			if(x2==side-x1){
				for(int j=x1;j<side;j++){
					for(int i=0;i<y2;i++){
						if(twoTOone) arr[j][i]='A';
						else arr[j][i]='B';
					}
				}
				for(int j=x1;j<side;j++){
					for(int i=y2;i<side;i++){
						if(threeTOone) arr[j][i]='A';
						else arr[j][i]='C';
					}
				}
			}
			
			if(y2==side-x1){
				for(int j=x1;j<side;j++){
					for(int i=0;i<x2;i++){
						if(twoTOone) arr[j][i]='A';
						else arr[j][i]='B';
					}
				}
				for(int j=x1;j<side;j++){
					for(int i=x2;i<side;i++){
						if(threeTOone) arr[j][i]='A';
						else arr[j][i]='C';
					}
				}
			}
		}
	}
	cout<<side<<endl;
	for(int i=0;i<side;i++){
		for(int j=0;j<side;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
} 