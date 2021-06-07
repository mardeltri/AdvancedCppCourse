#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H


class FractalCreator
{
public:
    FractalCreator();

    virtual ~FractalCreator();

    void calculateIteration();
    void drawFractal();
    void addZoom(const Zooom& zoom);
    void writeBitmap(string name);
};

#endif // FRACTALCREATOR_H
