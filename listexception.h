#ifndef LISTEXCEPTION_H
#define LISTEXCEPTION_H

#include <exception>
#include <string>


class listException : public std::exception {
    public:
        listException();
        virtual ~listException() throw(){}

        explicit listException(const char* message) : msg(message){}
        explicit listException(const std::string& message) : msg(message){}

        virtual const char* what() const throw(){
            return msg.c_str();
        }

    protected:

    private:
        std::string msg;
};

#endif // LISTEXCEPTION_H
