#ifndef Template_H
#define Template_H

class Template
{

public:
    Template();
    ~Template();
    bool valid() const;

private:
    Template(const Template &) = delete;
    Template &operator=(const Template &) = delete;
    Template(Template &&) = delete;
    Template &operator=(Template &&) = delete;

}; // class Template

#endif // Template_H
