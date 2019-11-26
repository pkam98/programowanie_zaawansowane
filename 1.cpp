#include <random>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
int main () {
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<short> dis;
    for (auto n=0;n<10;++n)
    cout<<dis(gen)<<' '<<to_string(dis(gen)) <<' ';
    endl (cout);
}
/* #include<iostream>
#include<string>
using namespace std;
int main() {
	
string str (10, '*'); 
while( ! str.empty() ) {
cout<< str<< endl;
str.erase( str.end()-1 ); 
 }
}

#include<iostream>
#include<thread>
#include<string>

using namespace std;
void addstring( unsigned n, string& s ) {
while(n--) {
s += "*"; cout<< "A";
 }
}
void removestring( string& s ) {
while( !s.empty() ) {
s.erase( s.end()-1 ); cout<< "B";
 }
}
int main() {
string m;
thread t1( addstring, 100, ref(m) );
thread t2( removestring, ref(m) );
t1.join();
t2.join();
cout<< endl<< m << endl;
}
*/