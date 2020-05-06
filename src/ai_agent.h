#pragma once
#include "agent.h"
#include "tensorflow/cc/client/client_session.h"
#include "tensorflow/cc/ops/standard_ops.h"
#include "tensorflow/cc/framework/gradients.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/public/session.h"
#include "tensorflow/core/lib/io/path.h"
#include "tensorflow/core/summary/summary_file_writer.h"
#include "tensorflow/cc/tools/freeze_saved_model.h"
using namespace std;
using namespace tensorflow;
using namespace tensorflow::ops;

class AIAgent : public Agent {
public:
	AIAgent();
	~AIAgent();
	Game::INPUT getInput();
	void update();
	void keyPress(int key);
	void keyRelease(int key);

private:
	uint32_t count = 0;
	//Scope root = Scope::NewRootScope();
};