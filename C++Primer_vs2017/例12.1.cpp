#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

class strBlob
{
public:
	typedef vector<string>::size_type size_type;
	strBlob();
	strBlob(initializer_list<string> il);
	size_type size() const
	{
		return data->size();
	}
	bool empty() const
	{
		return data->empty();
	}

	void push_back(const string &t)
	{
		data->push_back(t);
	}

	void pop_back();
	string& front();
	string& back();
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

strBlob::strBlob():data(make_shared<vector<string>>())
{
}

strBlob::strBlob(initializer_list<string> il):data(make_shared<vector<string>>(il))
{
}

void strBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

string& strBlob::front()
{
	// TODO: 在此处插入 return 语句
	check(0, "front on empty StrBlob");
	return data->front();
}

string& strBlob::back()
{
	// TODO: 在此处插入 return 语句
	check(0, "back on empty StrBlob");
	return data->back();
}

void strBlob::check(size_type i, const string & msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
}

int main(void)
{
	strBlob b1;
	{
		strBlob b2 = {"a", "the", "an"};
		b1 = b2;
		b2.push_back("about");
		cout << b2.size() << endl;
	}
	cout << b1.size() << endl;

	system("pause");
	return 0;
}