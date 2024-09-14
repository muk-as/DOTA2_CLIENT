#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x258
    // Has VTable
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "uint32 m_iWindSeed"
    // static metadata: MNetworkVarNames "uint16 m_iMinWind"
    // static metadata: MNetworkVarNames "uint16 m_iMaxWind"
    // static metadata: MNetworkVarNames "int32 m_windRadius"
    // static metadata: MNetworkVarNames "uint16 m_iMinGust"
    // static metadata: MNetworkVarNames "uint16 m_iMaxGust"
    // static metadata: MNetworkVarNames "float32 m_flMinGustDelay"
    // static metadata: MNetworkVarNames "float32 m_flMaxGustDelay"
    // static metadata: MNetworkVarNames "float32 m_flGustDuration"
    // static metadata: MNetworkVarNames "uint16 m_iGustDirChange"
    // static metadata: MNetworkVarNames "Vector m_location"
    // static metadata: MNetworkVarNames "uint16 m_iInitialWindDir"
    // static metadata: MNetworkVarNames "float32 m_flInitialWindSpeed"
    #pragma pack(push, 1)
    class CEnvWindShared
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x8        
        // metadata: MNetworkEnable
        uint32_t m_iWindSeed; // 0xc        
        // metadata: MNetworkEnable
        uint16_t m_iMinWind; // 0x10        
        // metadata: MNetworkEnable
        uint16_t m_iMaxWind; // 0x12        
        // metadata: MNetworkEnable
        int32_t m_windRadius; // 0x14        
        // metadata: MNetworkEnable
        uint16_t m_iMinGust; // 0x18        
        // metadata: MNetworkEnable
        uint16_t m_iMaxGust; // 0x1a        
        // metadata: MNetworkEnable
        float m_flMinGustDelay; // 0x1c        
        // metadata: MNetworkEnable
        float m_flMaxGustDelay; // 0x20        
        // metadata: MNetworkEnable
        float m_flGustDuration; // 0x24        
        // metadata: MNetworkEnable
        uint16_t m_iGustDirChange; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2a[0x2]; // 0x2a
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_location; // 0x2c        
        int32_t m_iszGustSound; // 0x38        
        int32_t m_iWindDir; // 0x3c        
        float m_flWindSpeed; // 0x40        
        Vector m_currentWindVector; // 0x44        
        Vector m_CurrentSwayVector; // 0x50        
        Vector m_PrevSwayVector; // 0x5c        
        // metadata: MNetworkEnable
        uint16_t m_iInitialWindDir; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6a[0x2]; // 0x6a
        // metadata: MNetworkEnable
        float m_flInitialWindSpeed; // 0x6c        
        entity2::CEntityIOOutput m_OnGustStart; // 0x70        
        entity2::CEntityIOOutput m_OnGustEnd; // 0x98        
        entity2::GameTime_t m_flVariationTime; // 0xc0        
        entity2::GameTime_t m_flSwayTime; // 0xc4        
        entity2::GameTime_t m_flSimTime; // 0xc8        
        entity2::GameTime_t m_flSwitchTime; // 0xcc        
        float m_flAveWindSpeed; // 0xd0        
        bool m_bGusting; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd5[0x3]; // 0xd5
        float m_flWindAngleVariation; // 0xd8        
        float m_flWindSpeedVariation; // 0xdc        
        // m_hEntOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntOwner;
        char m_hEntOwner[0x4]; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x174];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CEnvWindShared, m_flStartTime) == 0x8);
    static_assert(offsetof(CEnvWindShared, m_iWindSeed) == 0xc);
    static_assert(offsetof(CEnvWindShared, m_iMinWind) == 0x10);
    static_assert(offsetof(CEnvWindShared, m_iMaxWind) == 0x12);
    static_assert(offsetof(CEnvWindShared, m_windRadius) == 0x14);
    static_assert(offsetof(CEnvWindShared, m_iMinGust) == 0x18);
    static_assert(offsetof(CEnvWindShared, m_iMaxGust) == 0x1a);
    static_assert(offsetof(CEnvWindShared, m_flMinGustDelay) == 0x1c);
    static_assert(offsetof(CEnvWindShared, m_flMaxGustDelay) == 0x20);
    static_assert(offsetof(CEnvWindShared, m_flGustDuration) == 0x24);
    static_assert(offsetof(CEnvWindShared, m_iGustDirChange) == 0x28);
    static_assert(offsetof(CEnvWindShared, m_location) == 0x2c);
    static_assert(offsetof(CEnvWindShared, m_iszGustSound) == 0x38);
    static_assert(offsetof(CEnvWindShared, m_iWindDir) == 0x3c);
    static_assert(offsetof(CEnvWindShared, m_flWindSpeed) == 0x40);
    static_assert(offsetof(CEnvWindShared, m_currentWindVector) == 0x44);
    static_assert(offsetof(CEnvWindShared, m_CurrentSwayVector) == 0x50);
    static_assert(offsetof(CEnvWindShared, m_PrevSwayVector) == 0x5c);
    static_assert(offsetof(CEnvWindShared, m_iInitialWindDir) == 0x68);
    static_assert(offsetof(CEnvWindShared, m_flInitialWindSpeed) == 0x6c);
    static_assert(offsetof(CEnvWindShared, m_OnGustStart) == 0x70);
    static_assert(offsetof(CEnvWindShared, m_OnGustEnd) == 0x98);
    static_assert(offsetof(CEnvWindShared, m_flVariationTime) == 0xc0);
    static_assert(offsetof(CEnvWindShared, m_flSwayTime) == 0xc4);
    static_assert(offsetof(CEnvWindShared, m_flSimTime) == 0xc8);
    static_assert(offsetof(CEnvWindShared, m_flSwitchTime) == 0xcc);
    static_assert(offsetof(CEnvWindShared, m_flAveWindSpeed) == 0xd0);
    static_assert(offsetof(CEnvWindShared, m_bGusting) == 0xd4);
    static_assert(offsetof(CEnvWindShared, m_flWindAngleVariation) == 0xd8);
    static_assert(offsetof(CEnvWindShared, m_flWindSpeedVariation) == 0xdc);
    static_assert(offsetof(CEnvWindShared, m_hEntOwner) == 0xe0);
    
    static_assert(sizeof(CEnvWindShared) == 0x258);
};
