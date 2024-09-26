#pragma once

#include <string>

struct Quiz
{
    virtual std::string GetQuestion() = 0;
    virtual bool CheckAnswer(const std::string& answer) = 0;
};