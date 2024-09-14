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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_WitchDoctor_ParalyzingCask : public server::CDOTABaseAbility
    {
    public:
        int32_t m_iBounces; // 0x5a0        
        int32_t bounces; // 0x5a4        
        int32_t bounce_bonus_damage; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4]; // 0x5ac
        // m_vecHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitHeroes;
        char m_vecHitHeroes[0x18]; // 0x5b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_WitchDoctor_ParalyzingCask because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_WitchDoctor_ParalyzingCask) == 0x5c8);
};
