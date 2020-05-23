// Chuong trinh C++ duyet do thi su dung phuong phap DFS(Quay Lui)
#include <iostream>
#include <string>
#include <fstream>
#include<stack>
#define Max 100
using namespace std;

// Kahi bao lop do thi tao doi tuong do thi
class Dothi {
	private:	
	  	int n;					// So dinh cua do thi
		int A[Max][Max];		// Ma tran ke cua do thi
		bool chuaxet[Max];	// Mang luu trang thai cac dinh chua xet
		
	public:
		string myname = "\n My graph "; // Ten do thi
		int s ;        // Dinh khoi dau cua duyet
		void Khoitao() ;   	//khoi tao gia tri bao dau
		void Traloi();      // Bao ten doi tuong
		void NhapMotDinh(); // Nhap 1 dinh tu ban phim
		void DFS_Dequy(int u);  // Phuong phap DFS de quy
		void DFS_stack(int u);   // DFS ngan sep
		bool DocDuLieu(string filename); // Phuong thuc doc ma tran ke tu file True - > OK False => khong co
		
};
//Nhap mot dinh vao s;
void Dothi::NhapMotDinh() {
	cout << "Nhap dinh s: ";
	cin >> s;
}
//Doc duc lieu ma tran ke
bool Dothi::DocDuLieu(string filename) {
	ifstream inp(filename.c_str());  // Mo fileVao chua du lieu ma tran ke
	if(inp.is_open()) {
		inp >> n;
		cout << "\n So dinh cua do thi: " << n;
		cout << "\n Ma tran ke : " << endl;
		for(int i = 1; i <= n ; i++) {
			for(int j = 1; j <= n; j++) {
				inp >> A[i][j];
				cout << A[i][j] << " "; 
			}
			cout << endl;
		}
		return true;
	}
	return false;
}
// Khoi tao
void Dothi::Khoitao() {
	for (int i =1;i <= n ;i++) {
		chuaxet[i] = true; 
	}
}
// Bao ten do thi
void Dothi::Traloi() {
	cout << myname;
}
void Dothi::DFS_Dequy(int u ) {
	// Tham dinh u;
	cout << " " << u;
	chuaxet[u] = false;
	for(int v = 1 ; v<= n ;v++) {
		if(A[u][v] == 1 && chuaxet[v]) {
			DFS_Dequy(v) ;
		}
	}
}
//Duyet do thi theo ngan sep
void Dothi::DFS_stack(int u) {
	stack <int> nganxep;
	int v;
	nganxep.push(u);
	cout << " " <<u;
	chuaxet[u] = false;
	while (!nganxep.empty()) {
		v = nganxep.top();
		nganxep.pop();
		for(v = 1; v <= n ;v++) {
			if(chuaxet[v] && A[u][v]== 1) {
				chuaxet[v] = false;
				nganxep.push(u);
				nganxep.push(v);
				cout << " " << u;
				break;
			}
		}
	}
}
int main() {
	Dothi g;
	g.Traloi();
	if(g.DocDuLieu("3_1_DFS.in")) {
		cout << "\n Doc file OK ";
		g.Khoitao();   // Chua xet 
		g.NhapMotDinh();
		cout << "Duyet DFS de quy tu dinh S " << g.s << endl;
	//	g.DFS_Dequy(g.s);
		g.DFS_stack(g.s);
	} else {
		cout << "Loi File";
	}
	return 0;
}
