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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyConstants_t
        {
        public:
            float m_flWindAccel; // 0x_            
            float m_flG0; // 0x_            
            float m_flDragCoeff; // 0x_            
            bool m_bPuzzle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinVelocityForFallDamage; // 0x_            
            float m_flFallDamageMult; // 0x_            
            float m_flMinAirTimeForDamage; // 0x_            
            bool m_bRefillAmmoEachLevel; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMaxClimbHeight; // 0x_            
            bool m_bShowPathProjection; // 0x_            
            bool m_bShowTrails; // 0x_            
            bool m_bClearOldTrailsOnFire; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTrailLingerSeconds; // 0x_            
            float m_flVelocityPerChargeSecond; // 0x_            
            float m_flMinimumGameObjectY; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flWindAccel) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flG0) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flDragCoeff) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bPuzzle) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flMinVelocityForFallDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flFallDamageMult) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flMinAirTimeForDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bRefillAmmoEachLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flMaxClimbHeight) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bShowPathProjection) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bShowTrails) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_bClearOldTrailsOnFire) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flTrailLingerSeconds) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flVelocityPerChargeSecond) == 0x_);
        static_assert(offsetof(source2sdk::client::ArtyConstants_t, m_flMinimumGameObjectY) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ArtyConstants_t) == 0x_);
    };
};
