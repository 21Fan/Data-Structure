# include <iostream>
# include <stack>

using namespace std;

int main()
{
    stack<int> st;

    // 产生一个堆栈st，由下至上的元素分别为1,2,3,4,5
    for (int i = 1; i <= 5; i++){
        st.push(i);
    }

    // 依次弹出堆栈中的元素并显示，分别为5,4,3,2,1
    for (int i = 1; i <= 5; i++) {
        cout << st.top() << endl;
        st.pop();
    }
}
//https://blog.csdn.net/tina_ttl/article/details/52778037 

