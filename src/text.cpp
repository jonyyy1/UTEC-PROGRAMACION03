//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "text.h"
using namespace std;


Text::Text(const char *_text) {

}

Text::Text(const Text &other) {

}

Text::Text(Text &&other) {

}


Text Text::operator*(const Text &other) {
    return Text();
}

Text Text::operator*=(const Text &other) {
    return Text();
}
