#ifdef  Exp_h
#define Exp_h

//Exp.h -> ����θ� �������
//�����
class Exp {

	int base; //���̽�
	int exp; // ����
	int res;
	void calc();

public:
	Exp(int b, int e);//������
	Exp(int b); //������
	Exp();
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);

};
#endif //  Exp_h
