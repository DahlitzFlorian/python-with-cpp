#include <boost/python.hpp>

int addition(int a, int b)
{
   return a + b;
}

BOOST_PYTHON_MODULE(addition)
{
    using namespace boost::python;
    def("addition", addition);
}