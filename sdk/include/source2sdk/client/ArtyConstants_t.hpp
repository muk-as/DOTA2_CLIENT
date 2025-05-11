#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x34
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyConstants_t
        {
        public:
            float m_flWindAccel; // 0x0            
            float m_flG0; // 0x4            
            float m_flDragCoeff; // 0x8            
            bool m_bPuzzle; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            float m_flMinVelocityForFallDamage; // 0x10            
            float m_flFallDamageMult; // 0x14            
            float m_flMinAirTimeForDamage; // 0x18            
            bool m_bRefillAmmoEachLevel; // 0x1c            
            uint8_t _pad001d[0x3]; // 0x1d
            float m_flMaxClimbHeight; // 0x20            
            bool m_bShowPathProjection; // 0x24            
            bool m_bShowTrails; // 0x25            
            bool m_bClearOldTrailsOnFire; // 0x26            
            uint8_t _pad0027[0x1]; // 0x27
            float m_flTrailLingerSeconds; // 0x28            
            float m_flVelocityPerChargeSecond; // 0x2c            
            float m_flMinimumGameObjectY; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flWindAccel) == 0x0);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flG0) == 0x4);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flDragCoeff) == 0x8);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bPuzzle) == 0xc);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flMinVelocityForFallDamage) == 0x10);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flFallDamageMult) == 0x14);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flMinAirTimeForDamage) == 0x18);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bRefillAmmoEachLevel) == 0x1c);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flMaxClimbHeight) == 0x20);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bShowPathProjection) == 0x24);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bShowTrails) == 0x25);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bClearOldTrailsOnFire) == 0x26);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flTrailLingerSeconds) == 0x28);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flVelocityPerChargeSecond) == 0x2c);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flMinimumGameObjectY) == 0x30);
        
        static_assert(sizeof(source2sdk::client::ArtyConstants_t) == 0x34);
    };
};
