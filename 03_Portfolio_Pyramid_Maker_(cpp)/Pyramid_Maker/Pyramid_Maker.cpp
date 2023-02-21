#include<iostream>
#include<windows.h> //API for loading (std::flush, and sleep(n))
using namespace std;
//#include<string>
#include<time.h>
//#include<cmath>
#include<stdlib.h>

void display(int);
void firstPyramid(int, int);
void secondPyramid(int, int);
void thirdPyramid(int, int);
void fourthPyramid(int, int);
void fifthPyramid(int, int);
void sixthPyramid(int, int);
void seventhPyramid(int, int);
void eighthPyramid(int, int);
//int v1return(int);
int returnDots(int);

int main(){
	
	int dots = 5;
	//loading screen
	cout<<"Whats up bro... u wanna taste my pyramid shit and be high af bro..u feel me bro....sheeeeeet...bruh....."<<endl<<"yo... type in \"a\" and let it load"<<endl;

	char bruh;
	cout<<"//////// enter here: ";
	cin>>bruh;
	if(bruh='A'){
		int dd = 1000;
		cout<<"loading";
		while(true){
			dd = dd + 100;;
			Sleep(dd);
//			cout<<".";
//			cout<<flush;
			int cc = returnDots(dots);
			for(int j=0;j<cc;j++){
				cout<<".";
			}
			
			
			if(dd>1800) break;
		}
		cout<<endl;
	}
	/////////////////////////////////
	
	cout<<"oo===============================oo"<<endl; //Welcome Message
	cout<<"||                               ||"<<endl;
	cout<<"||  W E L C O M E                ||"<<endl;
	cout<<"||                               ||"<<endl;
	cout<<"||        T O                    ||"<<endl;
	cout<<"||                               ||"<<endl;
	cout<<"||  j a v a l e a r n e r 1 3's  ||"<<endl;
	cout<<"||                               ||"<<endl;
	cout<<"||                P Y R A M I D  ||"<<endl;	
	cout<<"||                               ||"<<endl;	
	cout<<"||                    M A K E R  ||"<<endl;
	cout<<"||                               ||"<<endl;	
	cout<<"||                          0.2  ||"<<endl;	
	cout<<"||                               ||"<<endl;
	cout<<"||                      ('o ')/  ||"<<endl;
	cout<<"oo===============================oo"<<endl; 
	
	int ini = 1; //initiator
	int pick, num;
	
	while(ini == 1){ //start
			                    
		cout<<"\n       < Pick Your Pyramid >"<<endl<<endl; //pick pyramid		                    
		
		cout<<"(1) Left-to-Right"<<endl;
		cout<<"(2) Right-to-Left"<<endl;
		cout<<"(3) Left-to-Right Upside-down"<<endl;
		cout<<"(4) Right-to-Left Upside-down"<<endl;
		cout<<"(5) Centered"<<endl;
		cout<<"(6) Centered Upside-down"<<endl;
		cout<<"(7) Cool Tree"<<endl;
		cout<<"(8) Mantra Pattern"<<endl;
		cout<<"or Enter 0 to Exit."<<endl<<endl;
		cout<<">> ";
		cin>>pick; //enter pick
		
		if(pick==1||pick==2||pick==3||pick==4||pick==5||pick==6||pick==7||pick==8){
			
			cout<<"\nHow tall do you want your pyramid to be?: ";
			cin>>num;
		
		}else if(pick==0){
		
			cout<<"\n                     //Good Bye.";
			return 0;
		
		}else{
		
			cout<<"\n!!!!!!!!!!!!! E R R O R !!!!!!!!!!!!!"<<endl;
			cout<<"      Invalid input. Try again"<<endl;
		
		}
		
		if(pick == 1){
			
			firstPyramid(num, pick);
			
		}else if(pick == 2){
			
			secondPyramid(num, pick);
			
		}else if(pick == 3){
			
			thirdPyramid(num, pick);
			
		}else if(pick == 4){
			
			fourthPyramid(num, pick);
			
		}else if(pick == 5){
			
			fifthPyramid(num, pick);
			
		}else if(pick == 6){
			
			sixthPyramid(num, pick);
			
		}else if(pick == 7){
			
			seventhPyramid(num, pick);
			
		}else if(pick == 8){
			
			eighthPyramid(num, pick);
			
		}
		
		cout<<"\nWant another pyramid?"<<endl;
		cout<<"Press 1 to continue, 0 to quit: ";
		cin>>ini;
		if(ini == 0) cout<<"\n                     //Good Bye.";
	
	}
	
}

void display(int pick){ //pyramid request loading message
	cout<<"\n============================= Your Request for Pyramid"<<" "<<pick<<" is loading..."<<endl;
	cout<<"\n>>>> Result <<<<"<<endl<<endl;
}

void firstPyramid(int num, int pick){ //first pyramid, left to right
	
	display(pick);
	
	int d;
	
	for(int i=0;i<num;i++){
		
		d = 0;
		
		while(true){
			
			if(d < i + 1){
				cout<<"*";
			}else{
				cout<<" ";
			}
			
			d++;
			if(d > num) break;
			
		}
		
		cout<<endl;
	
	}
	
}

void secondPyramid(int num, int pick){ //second pyramid, right to left
	
	display(pick);
	
	int d;
	
	for(int i=num;i>0;i--){
		
		d = 0;
		
		while(true){
			
			if(i > d){
				
				cout<<" ";
			
			}else{
				
				cout<<"*";
				
			}
			
			d++;
			if(d>num) break;
			
		}
		
		cout<<endl;
		
	}
	
}

void thirdPyramid(int num, int pick){ //thrid pyramid, left to right, upside down
	
	display(pick);
	
	int d;
	
	for(int i=0;i<num;i++){
		
		d = num;
		
		while(true){
			
			if(d > i){
				cout<<"*";
			}else{
				cout<<" ";
			}
			
			d--;
			if(d < 0) break;
			
		}
		
		cout<<endl;
		
	}
	
}

void fourthPyramid(int num, int pick){ //fourth pyramid, right to left, upside down
	
	display(pick);
	
	int d;
	
	for(int i=0;i<num;i++){
		
		d = 0;
		
		while(true){
			
			if(d < i + 1){
				cout<<" ";
			}else{
				cout<<"*";
			}
			
			d++;
			if(d > num) break;
			
		}
		
		cout<<endl;
	
	}
	
}

void fifthPyramid(int num, int pick){ //fifth pyramid, centered
	
	display(pick);
	
	int count, d;
	
	for(int i=0;i<num;i++){
		
		d = 0;
		count = 0;
			
			while(true){
				
				//cout.width(2);
				
				if(d <= num-i-1){
					
					cout<<" ";
				
				}else{
					
					cout<<"*";
				
				}
				
				count++;
				
				if(count <= num){
					
					d++;
				
				}else{
					
					d--;
				
				}
				
				if(d<0) break;
				
			}
			
			cout<<endl;
			
		}
		
	}

void sixthPyramid(int num, int pick){ //sixth pyramid, centered upside-down
	
	display(pick);
	
	int d, count;
	
	for(int i=0;i<num;i++){
		
		count = 0;
		d = 0;
		
		while(true){
			
			if(count<num){ //left to the center
		
				if(d>=i){
				
					cout<<"*";
			
				}else{
			
					cout<<" ";
			
				}
				
				d++;
	
			}else{ //right to the center
	
				if(d>i+1){
	
					cout<<"*";
	
				}else{
	
					cout<<" ";
	
				}
				
				d--;
	
			}
			
			count++;
			if(d<0) break;
		}
		
		cout<<endl;
		
	}
	
}

void seventhPyramid(int num, int pick){ //seventh pyramid, tree
	
	display(pick);
	
	int trunkHeight = 4;
	int count, d;
	
	for(int i=0;i<num;i++){     //leaves
			
			d = 0;
			count = 0;
			
			while(true){
				
				cout.width(2);
				
				if(d <= num-i-1){
					
					cout<<" ";
				
				}else{
					
					cout<<"*";
				
				}
				
				count++;
				
				if(count <= num){
					
					d++;
				
				}else{
					
					d--;
				
				}
				
				if(d<0) break;
				
			}
			
			cout<<endl;
			
		}
		
		for(int i=0;i<trunkHeight;i++){      //trunk
			
			count = 0;
			
			while(true){
			
				if(count==num*2){
					
					cout<<"| |";
					
					break;
				
				}else{
				
					cout<<" ";
				
				}
				
				count++;
			
			}
			
			cout<<endl;
		
		}
	
}

void eighthPyramid(int num, int pick){ //eighth pyramid, combied patterns
	
	display(pick);
	
	int r, count;
			
		for(int i=0;i<num;i++){ //top
			
			r = 0, count = 0;
			
			while(true){
				
				cout.width(2);
				
				if(count<num){            //top left
				
					if(r<num-i-1){
						cout<<" ";
					}else{
						cout<<"*";
					}
				
				}else if(count>num){    //top right
					if(r>num-i-3){
						cout<<"*";
					}else{
						cout<<" ";
					}
				}else{
					cout<<" ";
				}
				
				count++;
				
				if(count>num) r--;
				if(count<num) r++;
				
				if(count > num*2 + 1) break;
				
			}
			
			cout<<endl;
		
		}
		
		cout<<endl;
		
		for(int j=0;j<num;j++){       //bottom
			
			r = num, count = 0;
			
			while(true){
				
				cout.width(2);
				
				if(count<num){    //bottom left
					
					if(r>num-j){
						cout<<" ";
					}else{
						cout<<"*";
					}
					
				}else if(count>num){    //bottom right
					
					if(r>num-j){
						cout<<" ";
					}else{
						cout<<"*";
					}
					
				}else{
					cout<<" ";
				}
				
				count++;
				
				if(count>num) r++;
				if(count<=num) r--;
				
				if(count > num*2 + 1) break;
			
			}
			
			cout<<endl;
		
	}
	}

int returnDots(int dots){
	srand (time(NULL)); 
	int counter;
	int forDots = rand()%dots;
	return forDots;
}
	
//int v1return(int v1){ //for rand
//	int d = rand()%v1;
//	return d;
//}


