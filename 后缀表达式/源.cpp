# include <iostream>
# include <stack>
#include <conio.h>

using namespace std;
//��׺���ʽ�ļ���
//�������double��+�ַ���ͬʱ���룬��Ҫ����ԭ��
int main()
{

	stack<int> st;

	while (1)
	{
		
		//43�ǼӺ�42�ǳ˺�61�ǵȺ�

		double c=0, d1=0, d2=0;


		cin >> c;
		
		

		if (c !=43  && c != 42&&c!=61)
			st.push(c);

		if (c == 43)
		{

			d1 = st.top();
			st.pop();
			d2 = d1 + st.top();
			st.pop();
			st.push(d2);
		};
		if (c == 42)
		{

			d1 = st.top();
			st.pop();
			d2 =d1 * st.top();
			st.pop();
			st.push(d2);
		}

		if (c == 61)
		{
			d1 = st.top();
			cout << d1 << endl;
			break;
		}
		
		/*cout << d1<<endl;*/
	}
	system("pause");


}