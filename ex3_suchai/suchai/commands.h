#pragma once

class Suchai;

class Commands {
public:
    virtual void doExecute(Suchai *suchai) = 0;
};