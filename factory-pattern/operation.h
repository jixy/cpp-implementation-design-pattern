#ifndef _OPERATION_HEAD
#define _OPERATION_HEAD
class Operation
{
		public:
				void SetNumberA (double number);
				double	GetNumberA () const;
				void SetNumberB (double number);
				double	 GetNumberB () const;
				virtual	double	GetResult () const;
				virtual	~Operation(){}
		private:
				double	numberA;
				double	numberB;

};
#endif
