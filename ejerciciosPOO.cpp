#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int punto1() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = a+b+c;
    cout << d << endl;
    return 0;
}


int punto2()
{
    int n;
    cin >> n;
    if(n >= 1 && n <= 9){
        if(n == 1){
            cout << "one" <<endl;
        }else if(n == 2){
            cout << "two" <<endl;
        }else if(n == 3){
            cout << "three" <<endl;
        }else if(n == 4){
            cout << "four" <<endl;
        }else if(n == 5){
            cout << "five" <<endl;
        }else if(n == 6){
            cout << "six" <<endl;
        }else if(n == 7){
            cout << "seven" <<endl;
        }else if(n == 8){
            cout << "eight" <<endl;
        }else if(n == 9){
            cout << "nine" <<endl;
        }
    }else{
        cout << "Greater than 9" <<endl;
    }

    return 0;
}

int punto3() {
    int a, b;
    cin >> a;
    cin >> b;
    for (int n = a; n <= b;++n){
        if(n >= 1 && n <= 9){
            if(n == 1){
                cout << "one" <<endl;
            }else if(n == 2){
                cout << "two" <<endl;
            }else if(n == 3){
                cout << "three" <<endl;
            }else if(n == 4){
                cout << "four" <<endl;
            }else if(n == 5){
                cout << "five" <<endl;
            }else if(n == 6){
                cout << "six" <<endl;
            }else if(n == 7){
                cout << "seven" <<endl;
            }else if(n == 8){
                cout << "eight" <<endl;
            }else if(n == 9){
                cout << "nine" <<endl;
            }
        }else{
            if(n % 2 == 0){
                cout << "even" <<endl;
            }else{
                cout << "odd" <<endl;
            }
        }
    }
    return 0;
}

//punto 4
int mayor(int &a,int &b,int &c,int &d){
    int x = a;
    if(x < b){
        x = b;
    }if(x < c){
        x = c;
    }if(x < d){
        x = d;
    }
    return x;
}

int punto4() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int x = mayor(a,b,c,d);
    cout << x << endl;
    return 0;
}

int punto5() {
    int n;
    cin >> n;
    int arr[n];
    int k;
    for(int i = 0; i < n; ++i){
        cin >> k;
        arr[i] = k;
    }
    for(int i = n-1; i >= 0; --i){
        cout << arr[i] << " ";
    } 
    cout << endl;
    return 0;
}

int punto6() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int longitud_a = a.length();
    int longitud_b = b.length();
    cout << longitud_a << " " << longitud_b << endl;

    string concatenada = a + b;
    cout << concatenada << endl;

    string a_modificada = b[0] + a.substr(1);
    string b_modificada = a[0] + b.substr(1);
    cout << a_modificada << " " << b_modificada << endl;

    return 0;
}
//punto 7
class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    // Setter methods
    void set_age(int age) {
        this->age = age;
    }

    void set_first_name(string first_name) {
        this->first_name = first_name;
    }

    void set_last_name(string last_name) {
        this->last_name = last_name;
    }

    void set_standard(int standard) {
        this->standard = standard;
    }

    // Getter methods
    int get_age() {
        return age;
    }

    string get_first_name() {
        return first_name;
    }

    string get_last_name() {
        return last_name;
    }

    int get_standard() {
        return standard;
    }

    string to_string() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

// punto 8
class Student {
private:
    int scores[5];

public:
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    int calculateTotalScore() {
        int totalScore = 0;
        for (int i = 0; i < 5; i++) {
            totalScore += scores[i];
        }
        return totalScore;
    }
};
int main() {
    int n; 
    cin >> n;
    Student *s = new Student[n]; 
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();

    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }
    cout << count;
    
    return 0;
}
