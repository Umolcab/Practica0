class BrazoRobotico{
	private:
		double x, y, z;
		bool objeto;
	public:
		BrazoRobotico(double x, double y, double z, bool objeto);
		double getX();
		double getY();
		double getZ();
		bool getObjeto();
		void coger();
		void soltar();
		void mover(double newX, double newY, double newZ);
};
