#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
    public:
        Relogio();
        virtual ~Relogio();

        int getHora() { return hora; }
        int getMinuto() { return minuto; }
        int getSegundo() { return segundo; }
        void setHorario (int h, int m, int s);
        void avancarHorario ();

    protected:

    private:
        int hora;
        int minuto;
        int segundo;
};

#endif // RELOGIO_H
