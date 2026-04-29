#pragma once
#include "Utils.hpp"

#include "sead/Vector3.hpp"
#include "Cmn/KDUtl.hpp"
#include "Cmn/WeaponData.hpp"
#include "Game/Player.hpp"

namespace Game
{
    class PlayerInkAction
    {
    public:
        BIND_METHOD(0x0E6895C0, Cmn::WeaponData *, getShotData, PlayerInkAction)
        CONNECT_METHOD(getShotData, PlayerInkAction)

        BIND_METHOD(0x0E68E15C, void, calcShotPosVelBase, PlayerInkAction,
            float pitchDownScale, float pitchOffset, float pitchUpScale,
            sead::Vector3<float> * outPosition, sead::Vector3<float> * outVelocity, Cmn::KDUtl::AttT * outBasis, sead::Vector3<float> const * baseDirection,
            bool disableInterpolation, int unk1,int unk2
        )
        CONNECT_METHOD(calcShotPosVelBase, PlayerInkAction,
            pitchDownScale, pitchOffset, pitchUpScale,
            outPosition, outVelocity, outBasis, baseDirection,
            disableInterpolation, unk1, unk2
        )

        BIND_METHOD(0x0E690288, int, FUN_02690288, PlayerInkAction)
        CONNECT_METHOD(FUN_02690288, PlayerInkAction)

        BIND_METHOD(0x0E6902AC, int, FUN_026902ac, PlayerInkAction)
        CONNECT_METHOD(FUN_026902ac, PlayerInkAction)

        BIND_METHOD(0x0E696630, void, forceMoveBulletPosCenterIfLeft, PlayerInkAction, sead::Vector3<float>* position, sead::Vector3<float>* velocity)
        CONNECT_METHOD(forceMoveBulletPosCenterIfLeft, PlayerInkAction, position, velocity)

        BIND_METHOD(0x0E699818, int, getShot_C_PatternCount, PlayerInkAction)
        CONNECT_METHOD(getShot_C_PatternCount, PlayerInkAction)

        BIND_METHOD(0x0E69983C, float, getShot_C_VelocityFullCharge, PlayerInkAction)
        CONNECT_METHOD(getShot_C_VelocityFullCharge, PlayerInkAction)

        BIND_METHOD(0x0E699860, float, getShot_C_VelocityMin, PlayerInkAction)
        CONNECT_METHOD(getShot_C_VelocityMin, PlayerInkAction)

        BIND_METHOD(0x0E699884, float, getShot_C_VelocityMax, PlayerInkAction)
        CONNECT_METHOD(getShot_C_VelocityMax, PlayerInkAction)

        BIND_METHOD(0x0E6998A8, void, shotBullet_C, PlayerInkAction, float charge)
        CONNECT_METHOD(shotBullet_C, PlayerInkAction, charge)

        Game::Player* player;
        uint8_t u0[0x6C];
        uint16_t charge; // 0x70
        uint8_t phase; // 0x72
        uint8_t u1[0x3];
        uint8_t chargeDecayLevel; // 0x76
        uint8_t u2[0x1];
        uint32_t gameFrame;

    };
}