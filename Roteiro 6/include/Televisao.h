#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    public:
        Televisao();
        virtual ~Televisao();

        int getVolume() { return volume; }
        int getCanal() { return canal; }
        void setVolume (int upDown);
        void setCanal (int upDown, int nCanal);

    protected:

    private:
        int volume;
        int canal;
};

#endif // TELEVISAO_H
