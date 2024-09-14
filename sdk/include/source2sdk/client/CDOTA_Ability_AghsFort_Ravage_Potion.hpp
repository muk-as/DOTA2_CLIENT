#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
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
    // Size: 0x6a0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_Ravage_Potion : public client::C_DOTA_Item
    {
    public:
        // m_hEntsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hEntsHit;
        char m_hEntsHit[0x18]; // 0x678        
        int32_t damage; // 0x690        
        float duration; // 0x694        
        float spend_charge_delay; // 0x698        
        [[maybe_unused]] std::uint8_t pad_0x69c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Ravage_Potion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_Ravage_Potion) == 0x6a0);
};
