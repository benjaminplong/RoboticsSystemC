#include <systemc.h>


SC_MODULE(US_DIST_SENSOR)
{
	sc_in<sc_bit> trigger;
	sc_out<sc_int<8> > distance;

	void get_dist()
	{
		distance.write(0);
	}

	SC_CTOR(US_DIST_SENSOR)
	{
			SC_METHOD(get_dist)
				sensitive << trigger;
	}
};