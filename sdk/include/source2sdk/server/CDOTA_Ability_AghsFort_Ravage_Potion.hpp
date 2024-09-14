#pragma once
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x670
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_Ravage_Potion : public server::CDOTA_Item
    {
    public:
        // m_hEntsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hEntsHit;
        char m_hEntsHit[0x18]; // 0x648        
        int32_t damage; // 0x660        
        float duration; // 0x664        
        float spend_charge_delay; // 0x668        
        [[maybe_unused]] std::uint8_t pad_0x66c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Ravage_Potion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_Ravage_Potion) == 0x670);
};
