# include <iostream>
# include <stack>

using namespace std;

int main()
{
    stack<int> st;

    // ����һ����ջst���������ϵ�Ԫ�طֱ�Ϊ1,2,3,4,5
    for (int i = 1; i <= 5; i++){
        st.push(i);
    }

    // ���ε�����ջ�е�Ԫ�ز���ʾ���ֱ�Ϊ5,4,3,2,1
    for (int i = 1; i <= 5; i++) {
        cout << st.top() << endl;
        st.pop();
    }
}
//https://blog.csdn.net/tina_ttl/article/details/52778037 

