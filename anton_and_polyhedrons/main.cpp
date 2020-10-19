#include <iostream>
#include <vector>

int main()
{
    // int Tetrahedron = 4;
    //int Cube = 6;
    //int Octahedron = 8;
    // int Dodecahedron = 12;
    // int Icosahedron = 20;
    int totalFaces = 0;

    int polyhedron;
    std::cin >> polyhedron;
    std::vector<std::string> s(polyhedron);
    for (int i = 0; i < polyhedron; i++)
    {
        std::cin >> s[i];
    }
    for (int i = 0; i < polyhedron; i++)
    {
        if (s[i] == "Tetrahedron")
            totalFaces += 4;
        if (s[i] == "Cube")
            totalFaces += 6;
        if (s[i] == "Octahedron")
            totalFaces += 8;
        if (s[i] == "Dodecahedron")
            totalFaces += 12;
        if (s[i] == "Icosahedron")
            totalFaces += 20;
    }
    std::cout << totalFaces << std::endl;
    return 0;
}

/*
switch (s[i])
        {
        case "Tetrahedron":
            totalFaces += 4;
            break;
        case "Cube":
            totalFaces += 6;
            break;
        case "Octahedron":
            totalFaces += 8;
            break;
        case "Dodecahedron":
            totalFaces += 12;
        case "Icosahedron":
            totalFaces += 20;
            break;
        default:
            break;
        }
*/