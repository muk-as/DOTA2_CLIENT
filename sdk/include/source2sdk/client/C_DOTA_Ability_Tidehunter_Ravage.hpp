#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Tidehunter_Ravage : public client::C_DOTABaseAbility
    {
    public:
        // m_hEntsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hEntsHit;
        char m_hEntsHit[0x18]; // 0x5d8        
        bool m_bAwardedKillEater; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f1[0x3]; // 0x5f1
        float duration; // 0x5f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Tidehunter_Ravage because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Tidehunter_Ravage) == 0x5f8);
};
