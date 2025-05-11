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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x50
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupBulletInfo
        {
        public:
            source2sdk::client::EShmupBulletPattern m_pattern; // 0x0            
            std::int32_t m_nCount; // 0x4            
            float m_flSpeed; // 0x8            
            float m_flRadius; // 0xc            
            float m_flRandomTargetingOffsetMin; // 0x10            
            float m_flRandomTargetingOffsetMax; // 0x14            
            std::int32_t m_nBulletsPerWave; // 0x18            
            float m_flAngleWidth; // 0x1c            
            float m_flAngleOffset; // 0x20            
            float m_flSpeedPerBullet; // 0x24            
            float m_flRadiusPerBullet; // 0x28            
            float m_flAngleOffsetPerBullet; // 0x2c            
            float m_flAngleOffsetPerWave; // 0x30            
            float m_flAngleStaggerPerWave; // 0x34            
            float m_flAngleSinWaveOffset; // 0x38            
            bool m_bSwapColorPerBullet; // 0x3c            
            uint8_t _pad003d[0x3]; // 0x3d
            float m_flInterval; // 0x40            
            Vector2D m_vFixedDirection; // 0x44            
            bool m_bUseStoredPlayerLocation; // 0x4c            
            uint8_t _pad004d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_pattern) == 0x0);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_nCount) == 0x4);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flSpeed) == 0x8);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flRadius) == 0xc);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flRandomTargetingOffsetMin) == 0x10);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flRandomTargetingOffsetMax) == 0x14);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_nBulletsPerWave) == 0x18);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleWidth) == 0x1c);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleOffset) == 0x20);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flSpeedPerBullet) == 0x24);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flRadiusPerBullet) == 0x28);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleOffsetPerBullet) == 0x2c);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleOffsetPerWave) == 0x30);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleStaggerPerWave) == 0x34);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flAngleSinWaveOffset) == 0x38);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_bSwapColorPerBullet) == 0x3c);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_flInterval) == 0x40);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_vFixedDirection) == 0x44);
        static_assert(offsetof(source2sdk::client::CShmupBulletInfo, m_bUseStoredPlayerLocation) == 0x4c);
        
        static_assert(sizeof(source2sdk::client::CShmupBulletInfo) == 0x50);
    };
};
