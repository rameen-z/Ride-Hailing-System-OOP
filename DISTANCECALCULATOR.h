#ifndef DISTANCECALCULATOR_H
#define DISTANCECALCULATOR_H

template <class T>
	class DistanceCalculator
	{
		public: 
			T calculateDistance(T x,T y){
			return y-x;
	}
};
#endif
