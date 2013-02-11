#include <systemc.h>

SC_MODULE(person)
{
	sc_in<sc_bit> move;
	sc_out<sc_int<32> > location;
};