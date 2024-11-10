#pragma once
#include "source2sdk/client/ArtyLevelID_t.hpp"
#include "source2sdk/client/ArtyLevelObjectInstance_t.hpp"
#include "source2sdk/client/ArtyLevelWeaponInstance_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x138
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    struct ArtyLevelInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::ArtyLevelID_t m_unID; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        CUtlString m_sLocLevelName; // 0x10        
        client::ArtyLevelObjectInstance_t m_playerInfo; // 0x18        
        // m_vecGameObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ArtyLevelObjectInstance_t> m_vecGameObjects;
        char m_vecGameObjects[0x18]; // 0xa0        
        // m_vecWeapons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ArtyLevelWeaponInstance_t> m_vecWeapons;
        char m_vecWeapons[0x18]; // 0xb8        
        int32_t m_nLevelCompletePoints; // 0xd0        
        int32_t m_nTimeBonusBasePoints; // 0xd4        
        int32_t m_nTimeBonusMaxPoints; // 0xd8        
        int32_t m_nTimeBonusFastTime; // 0xdc        
        int32_t m_nTimeBonusMaxTime; // 0xe0        
        float m_flBackgroundOffsetX; // 0xe4        
        int32_t m_aryStarPointThresholds[3]; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xf4[0x4]; // 0xf4
        CPanoramaImageName m_sBackgroundImage; // 0xf8        
        CPanoramaImageName m_sTerrainBackgroundImage; // 0x108        
        CPanoramaImageName m_sTerrainImage; // 0x118        
        CPanoramaImageName m_sTerrainForegroundImage; // 0x128        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in ArtyLevelInfo_t because it is not a standard-layout class
    static_assert(sizeof(ArtyLevelInfo_t) == 0x138);
};
