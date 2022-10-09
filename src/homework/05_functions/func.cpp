#include <string>
#include <iostream>
#include "func.h"

double get_gc_content(const std::string& dna){

    double gcPercentage;

    for (int i = 0; i < dna.length(); i++){

        if (dna[i] == 'C' || dna[i] == 'G'){

            gcPercentage++;
        }
    }

    double gcReturn = gcPercentage / dna.length();

    return gcReturn;
}

std::string get_dna_complement(std::string dna){

    std::string complementDNA = reverse_string(dna);

    for (int i = 0; i < complementDNA.length(); i++){

        switch (complementDNA[i]){

            case 'A':
                complementDNA[i] += 'T';
                break;

            case 'T':
                complementDNA[i] += 'A';
                break;

            case 'C':
                complementDNA[i] += 'G';
                break;

            case 'G':
                complementDNA[i] += 'C';
                break;

        }
        
    }

    return complementDNA;
}

std::string reverse_string(std::string dna){

    std::string rna;

    for (int i = dna.length() - 1; i >= 0; i--){

        rna += dna[i];
    }

    return rna;
}
