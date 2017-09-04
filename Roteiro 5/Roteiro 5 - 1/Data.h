#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        Data();
        Data(int d, int m, int a);
        virtual ~Data();
        void avancarDia();
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        int getDia();
        int getMes();
        int getAno();

    protected:

    private:
        int dia, mes, ano;
};

#endif // DATA_H
