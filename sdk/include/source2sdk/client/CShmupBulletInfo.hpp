#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EShmupBulletPattern.hpp"

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
        class CShmupBulletInfo
        {
        public:
            source2sdk::client::EShmupBulletPattern m_pattern; // 0x_            
            std::int32_t m_nCount; // 0x_            
            float m_flSpeed; // 0x_            
            float m_flRadius; // 0x_            
            float m_flRandomTargetingOffsetMin; // 0x_            
            float m_flRandomTargetingOffsetMax; // 0x_            
            std::int32_t m_nBulletsPerWave; // 0x_            
            float m_flAngleWidth; // 0x_            
            float m_flAngleOffset; // 0x_            
            float m_flSpeedPerBullet; // 0x_            
            float m_flRadiusPerBullet; // 0x_            
            float m_flAngleOffsetPerBullet; // 0x_            
            float m_flAngleOffsetPerWave; // 0x_            
            float m_flAngleStaggerPerWave; // 0x_            
            float m_flAngleSinWaveOffset; // 0x_            
            bool m_bSwapColorPerBullet; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flInterval; // 0x_            
            Vector2D m_vFixedDirection; // 0x_            
            bool m_bUseStoredPlayerLocation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_pattern) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_nCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flRandomTargetingOffsetMin) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flRandomTargetingOffsetMax) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_nBulletsPerWave) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flSpeedPerBullet) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flRadiusPerBullet) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleOffsetPerBullet) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleOffsetPerWave) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleStaggerPerWave) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleSinWaveOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_bSwapColorPerBullet) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flInterval) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_vFixedDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_bUseStoredPlayerLocation) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupBulletInfo) == 0x_);
    };
};
