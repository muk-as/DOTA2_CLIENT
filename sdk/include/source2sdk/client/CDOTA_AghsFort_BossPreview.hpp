#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x580
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_AghsFort_BossPreview : public client::C_BaseEntity
    {
    public:
        CUtlSymbolLarge m_strBossUnit; // 0x560        
        CUtlSymbolLarge m_strModelName; // 0x568        
        float m_flBossModelScale; // 0x570        
        float m_flExtraModelScale; // 0x574        
        int32_t m_nEncounterType; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x57c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_AghsFort_BossPreview because it is not a standard-layout class
    static_assert(sizeof(CDOTA_AghsFort_BossPreview) == 0x580);
};
