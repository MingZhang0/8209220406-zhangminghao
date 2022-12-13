#include <iostream>
using namespace std;
class Complex{
	private:
		Complex *m_pc;
	public:
		double real;
		double image;
	public:
		Complex(){
			real=0;
			image=0;
			this->m_pc=this;
		}
		Complex(double t_real,double t_image){
			this->real=t_real;
			this->image=t_image;
		}
		void display(){
			cout << "real=" << this->real << ",image=" << this->image << endl;
		}
		friend Complex operator + (Complex A,Complex B){
			return Complex(A.real+B.real,A.image+B.image);
	    }
		friend Complex operator - (Complex A,Complex B){
		    return Complex(A.real-B.real,A.image-B.image);	
		}
		friend Complex operator ++ (Complex & A,int){
		    return Complex(A.real++,A.image);
		}
		friend Complex operator ++(Complex&A){
			return Complex(++A.real,A.image);
		}
		friend Complex operator -- (Complex & A,int){
		    return Complex(A.real--,A.image);	
        }
        friend Complex operator -- (Complex& A){
        	return Complex(--A.real,A.image);
		}
		Complex operator=(Complex B){
			this->real=B.real;
			this->image=B.image;
			return *this;
		}
		Complex* operator->(){
			if(m_pc!=NULL){
				return m_pc;
			}
			static Complex s_complex(2.1,0.1);
			return &s_complex;
		}
		
};
int main()
{
	Complex comp1;
	comp1.real=1.0;
	comp1.image=1.0;
	comp1.display();//(1,1)
	Complex comp2(2.0,2.0);
	comp2.display();//(2,2)
	comp1+comp2;
	Complex comp3=comp1+comp2;
	comp3.display();//(3,3)
	comp3++;
	comp3.display();//(4,3)
	Complex comp4=comp2+comp3;
	comp4--;
	comp4.display();//(5，5)
	--comp1;
	comp1.display();//(0,1)
	++comp2;
	comp2.display();//(3，2）
	comp1->display();
	return 0;
}