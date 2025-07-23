#include "test_motor.h"
#include "motor_many.h"




void test_motor_control(const uint8_t id)
{
    const uint8_t mode = 9;
    const data_type_t type = TFLOAT;

    switch (mode)
    {
    case 0:
        motor_set_dq_vlot(PORT1, type, id, 1.5);
        break;
    case 1:
        motor_set_dq_current(PORT1, type, id, 0.2);
        break;
    case 2:
        motor_set_pos(PORT1, type, id, 0.1);
        break;
    case 3:
        motor_set_vel(PORT1, type, id, 0.1f);
        break;
    case 4:
        motor_set_tqe(PORT1, type, id, 0.5f);
        break;
    case 5:
        motor_set_pos_vel(PORT1, type, id, 0.1, 0.1);
        break;
    case 6:
        motor_set_pos_vel_MAXtqe(PORT1, type, id, 0.2, 0.1, NAN);
        break;
    case 7:
        motor_set_pos_velmax_acc(PORT1, type, id, 0.1, 0.5, 0.1);
        break;
    case 8:
        motor_set_pos_vel_tqe_kp_kd(PORT1, type, id, 2, 0.1, 1, 1, 1);
        break;
    case 9:
        motor_set_pos_vel_tqe_kp_kd_2(PORT1, type, id, 2, 0.1, 1, 1, 1);
        break;
    default:
        break;
    }
}

