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
    // Size: 0x5c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Tidehunter_Ravage : public server::CDOTABaseAbility
    {
    public:
        // m_hEntsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hEntsHit;
        char m_hEntsHit[0x18]; // 0x5a0        
        bool m_bAwardedKillEater; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5b9[0x3]; // 0x5b9
        float duration; // 0x5bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Tidehunter_Ravage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Tidehunter_Ravage) == 0x5c0);
};
