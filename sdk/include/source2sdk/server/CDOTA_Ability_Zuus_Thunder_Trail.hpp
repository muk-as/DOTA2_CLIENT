#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Zuus_Thunder_Trail : public server::CDOTABaseAbility
    {
    public:
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hAlreadyHitList;
        char hAlreadyHitList[0x18]; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5e0[0x8]; // 0x5e0
        int32_t damage; // 0x5e8        
        int32_t debuff_spell_amp_min; // 0x5ec        
        int32_t debuff_spell_amp_max; // 0x5f0        
        Vector m_vStartPos; // 0x5f4        
        int32_t m_nMaxRange; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Zuus_Thunder_Trail because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Zuus_Thunder_Trail) == 0x608);
};
