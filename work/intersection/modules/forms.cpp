#include "../include/pretty_math.hpp"
#include <iostream>


Forms::Forms() {
}

int Forms::countForms() {
    return forms.size();
}

int Forms::addForm(Form f) {
    forms.push_back(std::make_unique<Form>(f));
    return forms.size();
}

std::shared_ptr<Form> Forms::getForm(int i) {
    return forms[i];
}
