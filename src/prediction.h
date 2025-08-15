
#pragma once

#include <cstdint>

#include "angle.h"
#include "gamemovement.h"
 
class CUserCmd;
class Prediction {
public:
	Prediction();
	~Prediction() = default;

	float GetServerTime(CUserCmd* cmd = nullptr) const;
	
	void Start(CUserCmd* cmd);
	void Finish();

private:
	CMoveData _moveData;

	float _oldCurTime;
	float _oldFrameTime;

	int* _predictionRandomSeed;
};

extern Prediction g_prediction;
