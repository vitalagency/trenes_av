    #ifndef VAGON_H
    #define VAGON_H

    class Vagon{
    protected:
        float peso;
    public:
        Vagon();
        virtual float calcularPeso();
        virtual ~Vagon();
    };

    #endif
