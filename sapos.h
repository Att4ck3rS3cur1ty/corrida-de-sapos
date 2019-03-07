extern const int dist_total;

class Sapos{
	private:
		int id;
		int dist_percorrida;
		int pulos;
	public:
		int getId(){ 
			return id; 
		}
		int getDist_Percorrida(){ 
			return dist_percorrida; 
		}
		
		int getPulos(){ 
			return pulos; 
		}
		
		void setId(int id){ 
			this->id = id; 
		}
		
		void setDist_Percorrida(int dist_percorrida){
			this->dist_percorrida = dist_percorrida;	
		}
		
		void setPulos(int pulos){
			this->pulos = pulos;
		}
	public:
		void pular(int x);
		int fim();
		void vez();

		Sapos(int i, int d, int p){
			setId(i);
			setDist_Percorrida(d);
			setPulos(p);
		}

		Sapos(){
		}
	
};
