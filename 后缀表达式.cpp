# include <iostream>
# include <stack>

using namespace std;

int main()
{
	
    stack<int> st;

    char c,d1,d2;
  
    c=getchar();
    
    if(c<=57&&c>=48)
    st.push(c);
    
    if(c==43)
    {
	
    d1=st.top();
    st.pop();
    //d2='d1'+'st.top();
    
	}
    // ���ε�����ջ�е�Ԫ�ز���ʾ���ֱ�Ϊ5,4,3,2,1
    for (int i = 1; i <= 5; i++) {
        cout << st.top() << endl;
        st.pop();
    }

    system("pause");
    

}
