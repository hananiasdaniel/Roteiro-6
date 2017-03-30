#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED

class Televisao{

    private:
	    int volume, canal;
    public:
	    Televisao(int, int);
	    void setVolume(int);
	    void setCanal(int);
	    int getVolume();
	    int getCanal();
	    

};

#endif // TELEVISAO_H_INCLUDED

