/* register_types.cpp */

#include "register_types.h"

#include "core/class_db.h"

#include "bt_action.h"
#include "bt_always_fail.h"
#include "bt_always_succeed.h"
#include "bt_composite.h"
#include "bt_condition.h"
#include "bt_cooldown.h"
#include "bt_decorator.h"
#include "bt_delay.h"
#include "bt_invert.h"
#include "bt_parallel.h"
#include "bt_repeat.h"
#include "bt_repeat_until_failure.h"
#include "bt_repeat_until_success.h"
#include "bt_run_limit.h"
#include "bt_selector.h"
#include "bt_sequence.h"
#include "bt_task.h"
#include "bt_time_limit.h"
#include "limbo_string_names.h"
#include "limbo_utility.h"

void register_limboai_types() {
	ClassDB::register_class<BTTask>();

	ClassDB::register_class<BTComposite>();
	ClassDB::register_class<BTDecorator>();
	ClassDB::register_class<BTAction>();
	ClassDB::register_class<BTCondition>();

	ClassDB::register_class<BTSequence>();
	ClassDB::register_class<BTSelector>();
	ClassDB::register_class<BTParallel>();
	ClassDB::register_class<BTInvert>();
	ClassDB::register_class<BTAlwaysFail>();
	ClassDB::register_class<BTAlwaysSucceed>();
	ClassDB::register_class<BTDelay>();
	ClassDB::register_class<BTRepeat>();
	ClassDB::register_class<BTRepeatUntilFailure>();
	ClassDB::register_class<BTRepeatUntilSuccess>();
	ClassDB::register_class<BTRunLimit>();
	ClassDB::register_class<BTTimeLimit>();
	ClassDB::register_class<BTCooldown>();
	LimboStringNames::create();
}

void unregister_limboai_types() {
	LimboStringNames::free();
}
