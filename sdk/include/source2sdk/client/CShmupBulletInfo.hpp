#pragma once
#include "source2sdk/client/EShmupBulletPattern.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
        client::EShmupBulletPattern m_pattern; // 0x0        
        int32_t m_nCount; // 0x4        
        float m_flSpeed; // 0x8        
        float m_flRadius; // 0xc        
        float m_flRandomTargetingOffsetMin; // 0x10        
        float m_flRandomTargetingOffsetMax; // 0x14        
        int32_t m_nBulletsPerWave; // 0x18        
        float m_flAngleWidth; // 0x1c        
        float m_flAngleOffset; // 0x20        
        float m_flSpeedPerBullet; // 0x24        
        float m_flRadiusPerBullet; // 0x28        
        float m_flAngleOffsetPerBullet; // 0x2c        
        float m_flAngleOffsetPerWave; // 0x30        
        float m_flAngleStaggerPerWave; // 0x34        
        float m_flAngleSinWaveOffset; // 0x38        
        bool m_bSwapColorPerBullet; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x3d[0x3]; // 0x3d
        float m_flInterval; // 0x40        
        Vector2D m_vFixedDirection; // 0x44        
        bool m_bUseStoredPlayerLocation; // 0x4c        
        [[maybe_unused]] std::uint8_t pad_0x4d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupBulletInfo, m_pattern) == 0x0);
    static_assert(offsetof(CShmupBulletInfo, m_nCount) == 0x4);
    static_assert(offsetof(CShmupBulletInfo, m_flSpeed) == 0x8);
    static_assert(offsetof(CShmupBulletInfo, m_flRadius) == 0xc);
    static_assert(offsetof(CShmupBulletInfo, m_flRandomTargetingOffsetMin) == 0x10);
    static_assert(offsetof(CShmupBulletInfo, m_flRandomTargetingOffsetMax) == 0x14);
    static_assert(offsetof(CShmupBulletInfo, m_nBulletsPerWave) == 0x18);
    static_assert(offsetof(CShmupBulletInfo, m_flAngleWidth) == 0x1c);
    static_assert(offsetof(CShmupBulletInfo, m_flAngleOffset) == 0x20);
    static_assert(offsetof(CShmupBulletInfo, m_flSpeedPerBullet) == 0x24);
    static_assert(offsetof(CShmupBulletInfo, m_flRadiusPerBullet) == 0x28);
    static_assert(offsetof(CShmupBulletInfo, m_flAngleOffsetPerBullet) == 0x2c);
    static_assert(offsetof(CShmupBulletInfo, m_flAngleOffsetPerWave) == 0x30);
    static_assert(offsetof(CShmupBulletInfo, m_flAngleStaggerPerWave) == 0x34);
    static_assert(offsetof(CShmupBulletInfo, m_flAngleSinWaveOffset) == 0x38);
    static_assert(offsetof(CShmupBulletInfo, m_bSwapColorPerBullet) == 0x3c);
    static_assert(offsetof(CShmupBulletInfo, m_flInterval) == 0x40);
    static_assert(offsetof(CShmupBulletInfo, m_vFixedDirection) == 0x44);
    static_assert(offsetof(CShmupBulletInfo, m_bUseStoredPlayerLocation) == 0x4c);
    
    static_assert(sizeof(CShmupBulletInfo) == 0x50);
};
