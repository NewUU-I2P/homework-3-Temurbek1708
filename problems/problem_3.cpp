#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    if (height < 1.7 && S == 'M'){
        return "Short";
    }
    else if (height >= 1.70 && height < 1.85 and S == 'M') {
        return "Normal";
    }
    else if (height >= 1.85 && S == 'M') {
        return "Tall";
    }
    else if (height < 1.6 && S == 'F') {
        return "Short";
    }
    else if (height >= 1.6 && height < 1.75 and S == 'F'){
        return "Normal";
    }
    else if (height >= 1.75 && S == 'F'){
        return "Tall";
    }

    // use return to return your result
    // make use of control flow statements
}