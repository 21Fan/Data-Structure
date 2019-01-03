# include <iostream>
# include <stack>
#include <conio.h>

using namespace std;
//后缀表达式的计算
//如果做到double和+字符型同时输入，需要编译原理
int main()
{

	stack<int> st;

	while (1)
	{
		
		//43是加号42是乘号61是等号

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