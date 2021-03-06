#ifndef MecanumSaucerDrive_H
#define MecanumSaucerDrive_H

#include "../CommandBase.h"
#include "OI.h"

#define SCALE_TWIST 1.0 // Adjust these to suit drivers' preference
#define SCALE_YAXIS 1.0
#define SCALE_XAXIS 1.0
#define DEADBAND_XAXIS .1 // Adjust these to prevent unwanted movement when input at rest
#define DEADBAND_YAXIS .1
#define DEADBAND_TWIST .3

class MecanumSaucerDrive : public CommandBase {
public:
	MecanumSaucerDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	double GetX();
	double GetY();
	double GetTwist();
};

#endif  // MecanumSaucerDrive_H
