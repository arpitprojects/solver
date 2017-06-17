//A Header File That include each and every standard library and stl file.
//Already Implemented file precompiled header.
#include <bits/stdc++.h>
// A namespace is the container for a set of identifier (also known as symbols, names) like referencing cout, cin.
using namespace std;


//Vector are sequences containers represents array that can change in size
void display(std::vector<string> v)
{
	for (std::vector<string>::iterator i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << "\n";
}
int main(int argc, char const *argv[])
{
    std::map<string, std::vector<string> > map_string;
    ifstream file_input;
	//Input-stream to operated on the file.
    string s;

    file_input.open("dictionary (2).txt");
	//open the text file.
    while(file_input >> s)
    {
    	string copy_s;
    	copy_s.append(s);
        //Extend the string appending addition character at the end of current values:
    	sort(copy_s.begin(),copy_s.end());
        //for example, used a 3-part hybrid sort algorithm: introsort is performed first(Source google)
    	map_string[copy_s].push_back(s);
    }

    string input_string(argv[1]);
    //Taking input from cmd.
    sort(input_string.begin(), input_string.end());
    //stl function sort
    if (map_string.find(input_string) == map_string.end())
        //Maps are the associative container to store element formed by the combination of a key value and the mapping value,
    	cout << "No record found!";
    else
    	display(map_string[input_string]);

    return 0;
}