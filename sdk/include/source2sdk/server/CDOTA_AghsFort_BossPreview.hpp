#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_AghsFort_BossPreview : public server::CBaseEntity
    {
    public:
        CUtlSymbolLarge m_strBossUnit; // 0x4b8        
        CUtlSymbolLarge m_strModelName; // 0x4c0        
        float m_flBossModelScale; // 0x4c8        
        float m_flExtraModelScale; // 0x4cc        
        int32_t m_nEncounterType; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_AghsFort_BossPreview because it is not a standard-layout class
    static_assert(sizeof(CDOTA_AghsFort_BossPreview) == 0x4d8);
};
