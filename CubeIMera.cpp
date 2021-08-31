#include<iostream>
#include<vector>
#include<unordered_map>

class IMera{
public:
    virtual double getMera() = 0;
};

template<class T>
class Kocka : public IMera{
private:
    T a;
public:
    Kocka(T a){
        this->a = a;
    }
    double getMera(){
        return a*a*a*a;
    }
};
int main(){
    Kocka<int> k1(1);
    Kocka<int> k2(3);
    Kocka<int> k3(13);
    Kocka<int> k4(5);
    Kocka<int> k5(6);
    vector<Kocka<int>> linearna;
    linearna.push_back(k1);
    linearna.push_back(k2);
    linearna.push_back(k3);
    linearna.push_back(k4);
    linearna.push_back(k5);
    vector<Kocka>::iterator it;
    for(it = linearna.begin(); it!=linearna.end(); it++){
        Kocka<int> k = *it;
        cout << k.getMera() << endl;
    }
    unordered_map<double, Trougao<int>> mapa;
    for(it = linearna.begin(); it!=linearna.end(); it++){
        Kocka<int> k = *it;
        unordered_map<double, Trougao<int>>::iterator itmap;
        itmap = mapa.find(k.getMera());
        if(itmap == mapa.end()){
            mapa.insert(make_pair(k.getMera(), k));
        }
    }
	unordered_map<double, Kocka<int>>::iterator itmapa;
	for(itmapa=mapa.begin(); itmapa!=mapa.end(); itmapa++){
		cout << itmapa->first << endl;
	}
}
