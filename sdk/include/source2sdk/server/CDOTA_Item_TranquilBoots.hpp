#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x668
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_TranquilBoots : public server::CDOTA_Item
    {
    public:
        int32_t break_count; // 0x648        
        [[maybe_unused]] std::uint8_t pad_0x64c[0x4]; // 0x64c
        // m_DamageList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t> m_DamageList;
        char m_DamageList[0x18]; // 0x650        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_TranquilBoots because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_TranquilBoots) == 0x668);
};
