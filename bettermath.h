#pragma once
#include <vector>

namespace BetterMath {
	int VectorMax(std::vector<int> Vector) {
		if (Vector.empty()) {
			throw new std::invalid_argument("Vector is empty!");
			return EXIT_FAILURE;
		}

        int ValMax = Vector[0];

        for (int i = 0; i < Vector.size(); i++) {
            if (ValMax < Vector[i]) {
                ValMax = Vector[i];
            }
        }

        return ValMax;
	}

    int VectorMin(std::vector<int> Vector) {
        if (Vector.empty()) {
            throw new std::invalid_argument("Vector is empty!");
            return EXIT_FAILURE;
        }

        int ValMin = Vector[0];

        for (int i = 0; i < Vector.size(); i++) {
            if (ValMin > Vector[i]) {
                ValMin = Vector[i];
            }
        }

        return ValMin;
    }

    int ArrayMax(int Array[]) {
        int ArraySize = *(&Array + 1) - Array;

        if (ArraySize == 0) {
            throw new std::invalid_argument("Array is empty!");
            return EXIT_FAILURE;
        }

        int ValMax = Array[0];

        for (int i = 0; i < ArraySize; i++) {
            if (ValMax < Array[i]) {
                ValMax = Array[i];
            }
        }

        return ValMax;
    }

    int ArrayMin(int Array[]) {
        int ArraySize = *(&Array + 1) - Array;

        if (ArraySize == 0) {
            throw new std::invalid_argument("Array is empty!");
            return EXIT_FAILURE;
        }

        int ValMin = Array[0];

        for (int i = 0; i < ArraySize; i++) {
            if (ValMin > Array[i]) {
                ValMin = Array[i];
            }
        }

        return ValMin;
    }

    float SquareRoot(float Input) {
        if (Input < 0) {
            throw new std::invalid_argument("Input is negative!");
            return EXIT_FAILURE;
        }

        if (Input == 0) {
            return 0;
        }

        float InputHi = Input;
        float InputLo = 0;
        float Val = Input / 2;

        while (Val * Val != Input) {
            if (Val * Val > Input) {
                InputHi = Val;
            }

            else {
                InputLo = Val;
            }
                
            double NewVal = (InputHi + InputLo) / 2;

            if (NewVal == Val) {
                break;
            }
                
            Val = NewVal;
        }

        return Val;
    }

    int Logarithm(int Input) {
        if (Input == 0) {
            throw new std::exception("Input is equal zero!");
        }

        int Val = -1;

        while (Input) {
            Val++;
            Input >>= 1;
        }

        return Val;
    }


}
