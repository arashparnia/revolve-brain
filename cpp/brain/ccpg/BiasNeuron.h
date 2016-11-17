#ifndef REVOLVE_GAZEBO_BRAIN_BIASNEURON_H_
#define REVOLVE_GAZEBO_BRAIN_BIASNEURON_H_

#include "Neuron.h"
#include "NeuralConnection.h"

namespace revolve {
namespace brain {

class BiasNeuron : public Neuron
{
public:
	/**
	* Constructor for a bias neuron
	* @param id: string to identify the neuron
	* @param params: parameters that specify the behavior of the neuron
	* @return pointer to the bias neuron
	*/
	BiasNeuron(const std::string &id,
		   const std::map<std::string, double> &params);
	/**
	* Method to calculate the output of the neuron
	* @param t: current time
	* @return the output of the neuron at time t
	*/
	virtual double CalculateOutput(double t);


protected:
	double gain_;
	double bias_;
};

}
}

#endif // REVOLVE_GAZEBO_BRAIN_BIASNEURON_H_