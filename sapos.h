extern const int dist_total;

class Sapos{
	private:
		int id;
		int dist_percorrida;
		int pulos;
	public:
		int getId();
		int getDist_Percorrida();
		int getPulos();
		void setId(int id);
		void setDist_Percorrida(int dist_percorrida);
		void setPulos(int pulos);
	public:
		void pular(int x);
		void vez();
		bool fim();
	
};
