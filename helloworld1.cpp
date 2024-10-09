#include<bits/stdc++.h>
using namespace std;
class student{
	private:
		string  name;
		protected:
			string code;
		float acs;
		static int st;
	public :
		student(){
			st++;
		}
		~student(){
			--st;
		}
	void input(){
		cout << "code of student(r: regular/w: working):";
		cin >> code;
		 cout <<"Name of studenr:";
		 cin.ignore(); getline(cin,name);
	}
	void output(){
		cout <<endl <<setw(6) << code<< setw(30) <<name <<setw(10) << fixed<<setprecision(2)<< acs<<endl;
	}
	static void print_sum_student(){
		cout << endl <<"total of student is :" << st;
	}
};
int student :: st = 0;
class regular :virtual  public student{
	private :
		float special_require, presentation, report;
	public :
		void input_regular(){
			cout << endl <<"special require:" ; cin>>special_require;
			cout <<endl << "presentation:"; cin >> presentation;
			cout<< endl<< "report:"; cin >> report;
			acs= 0.1*special_require + 0.4*presentation + 0.5*report;
		}
};
class working:virtual public student{
	private: 
	float test, exam;
	public:
		void input_working(){
			cout <<endl<<"test of student:"; cin >> test;
			cout <<endl<< "exam of student :" ; cin >> exam;
			acs= 0.4*test +0.6*exam;
		}
};
class st: public regular , public working{
	public :
		void input_st(){
			input();
			if(code[0]=='r'){
				input_regular();
			}
			else {
			input_working();	
			}
			}
		
};
int main(){
	int m ;
	cout<< endl<< "enter the number of student:"; cin >>m;
	st*list=new st[m];
	for(int i =0; i < m ; i++){
		list[i].input_st();
		cout << endl<< "entered list.";
		for(int i = 0 ; i < m ; i++){
			list[i].output();
		}
	}
	
}